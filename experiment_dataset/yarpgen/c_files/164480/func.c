/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164480
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) arr_1 [(_Bool)1] [i_1])) ^ (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))));
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 19; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [(unsigned short)2] [i_0] &= ((/* implicit */long long int) arr_0 [i_3]);
                            arr_11 [i_3] [i_0] [i_1] [i_2] [i_3] = var_5;
                            arr_12 [i_3] = min((((((((/* implicit */int) arr_1 [i_0] [i_2])) - (((/* implicit */int) var_8)))) - (((/* implicit */int) arr_2 [i_3] [i_0])))), (min((((/* implicit */int) max((var_4), (((/* implicit */signed char) arr_9 [i_3] [i_2] [i_3]))))), (((((/* implicit */int) (signed char)-1)) - (((/* implicit */int) arr_8 [i_0] [i_1] [i_0])))))));
                            arr_13 [i_0] [8U] [20] [i_1] = ((((((/* implicit */int) arr_8 [i_0] [i_1] [i_2 + 4])) * (((((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_3])) * (((/* implicit */int) (_Bool)0)))))) - (((((/* implicit */_Bool) arr_1 [i_2 - 1] [i_2 + 4])) ? (((/* implicit */int) max((var_8), (((/* implicit */short) (_Bool)0))))) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_2 + 2] [i_3])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) var_1);
    var_14 = ((/* implicit */unsigned short) max((var_5), (min((((((/* implicit */int) var_8)) - (((/* implicit */int) var_11)))), (((/* implicit */int) max((var_1), (var_6))))))));
    var_15 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */int) var_11)) < (var_3)))) : (((/* implicit */int) var_0))))));
    var_16 = ((/* implicit */_Bool) ((((/* implicit */int) max((var_1), (((/* implicit */short) var_4))))) - ((~(((int) var_12))))));
}
