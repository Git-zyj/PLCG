/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185872
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
    var_20 = ((/* implicit */unsigned short) ((var_3) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */long long int) (~(((/* implicit */int) var_9))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_9 [i_0] [i_2] [i_3] [i_4]))));
                                var_22 ^= ((/* implicit */short) (-((~(((/* implicit */int) arr_7 [i_0 - 1] [i_1] [(short)11] [i_3] [i_4] [i_2]))))));
                                var_23 = ((/* implicit */signed char) arr_11 [i_0] [i_1] [i_1] [i_2] [i_3] [i_1] [i_4]);
                            }
                        } 
                    } 
                } 
                arr_13 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (short)-1)))), (((((/* implicit */long long int) ((/* implicit */int) (short)11071))) % ((-9223372036854775807LL - 1LL)))))))));
            }
        } 
    } 
}
