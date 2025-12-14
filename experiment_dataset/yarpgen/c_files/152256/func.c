/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152256
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
    for (short i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 8; i_2 += 3) 
            {
                {
                    var_13 ^= ((/* implicit */int) ((unsigned short) ((unsigned long long int) arr_6 [10LL] [i_0 - 1] [i_2 + 2])));
                    arr_7 [i_0] [i_1] [i_1] = var_7;
                    var_14 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)41906)) / (var_11)))) != (((unsigned long long int) -1558136382)))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_6 [i_0] [i_1 + 1] [i_2 - 2])));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) 1558136382))))) + (((/* implicit */int) var_9))))))))));
    var_16 = ((/* implicit */unsigned char) (((!((_Bool)1))) && (((/* implicit */_Bool) (unsigned short)54551))));
}
