/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102101
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
    var_15 = ((/* implicit */unsigned char) (_Bool)1);
    var_16 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */int) var_0))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (unsigned char)126);
                    var_17 = ((/* implicit */long long int) arr_7 [i_0] [i_1] [i_1]);
                    arr_9 [i_0] [i_0] = ((/* implicit */long long int) ((((unsigned long long int) 3198151564205433886ULL)) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)))))));
                }
            } 
        } 
    } 
}
