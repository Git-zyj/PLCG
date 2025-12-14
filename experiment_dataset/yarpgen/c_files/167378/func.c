/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167378
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (max((((/* implicit */unsigned long long int) arr_2 [i_2] [i_0])), (var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
                            var_21 = arr_9 [i_0] [i_1] [i_2] [i_2] [i_2] [i_3 - 3];
                            arr_13 [i_0] [i_1] [i_2] [i_3 - 1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_7 [i_3 - 2] [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_7 [i_3 - 1] [i_2] [i_1] [i_0])) : (var_2))), (((/* implicit */int) var_12))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_1] [i_1] [i_1]);
                arr_14 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned short) ((int) var_19)));
                var_23 ^= ((/* implicit */unsigned long long int) var_0);
            }
        } 
    } 
    var_24 = ((/* implicit */int) ((((((/* implicit */int) ((unsigned char) var_11))) == (((/* implicit */int) var_5)))) && ((((+(((/* implicit */int) var_13)))) == (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_13))))))));
}
