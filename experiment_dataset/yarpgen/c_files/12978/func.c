/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12978
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_11), (arr_0 [15ULL])))) ? (((/* implicit */int) (((_Bool)1) && ((_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2])))))))) != (min((4821971976251804880ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-32767))))))));
                    var_19 = arr_7 [i_2] [18] [i_0] [i_0];
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_1);
}
