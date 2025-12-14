/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122337
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
    var_19 += ((/* implicit */unsigned short) 2303703246U);
    var_20 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) (~(683725774U)));
                var_21 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(1991264081U)))) ? ((-(1991264081U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1])))))), (((((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_1])) ? (24ULL) : (var_13))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_3 - 1] [12U] [i_3 + 2] &= ((/* implicit */unsigned short) arr_7 [i_0 - 1] [i_1] [(_Bool)1]);
                            arr_13 [(unsigned char)0] [i_2] [i_2] [(unsigned char)0] = ((/* implicit */long long int) arr_9 [i_0] [i_1] [i_2] [i_1] [i_3]);
                            arr_14 [i_0 + 1] [i_2] = ((/* implicit */signed char) (((((~(((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 1] [i_3 - 1])))) + (2147483647))) << (((((((/* implicit */_Bool) arr_1 [i_3 + 2] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (1991264073U))))) - (143U)))));
                        }
                    } 
                } 
                arr_15 [i_0 + 1] [i_0] = ((/* implicit */signed char) arr_6 [i_0] [i_0] [i_0]);
            }
        } 
    } 
}
