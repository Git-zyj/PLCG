/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143419
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
    var_19 = ((/* implicit */long long int) var_16);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (unsigned short)50830)))), (((/* implicit */int) (signed char)66)))))));
                    arr_8 [i_1] [(_Bool)1] [i_0] [i_0] = ((/* implicit */signed char) (short)-13828);
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((_Bool) ((arr_4 [i_1] [i_2 + 1] [i_2 + 4]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_2 + 4] [i_2])))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_4] [i_2] [i_2] [i_0] |= ((/* implicit */long long int) var_15);
                                arr_15 [(_Bool)1] [i_3] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)159)) >> (((((/* implicit */int) (_Bool)1)) & (1761893964)))));
                                arr_16 [i_0] [i_3] [i_4] [i_1] [i_2 + 3] = ((/* implicit */_Bool) (unsigned char)8);
                                var_22 = ((/* implicit */unsigned char) (-(((((_Bool) arr_13 [i_4] [i_3] [i_3] [i_1] [i_0])) ? (((/* implicit */int) ((short) -1497215744))) : (((/* implicit */int) (_Bool)0))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_0] [i_2] |= arr_5 [i_0] [i_1] [i_2];
                }
            } 
        } 
    } 
    var_23 &= ((/* implicit */unsigned char) var_1);
    var_24 = ((/* implicit */unsigned long long int) var_16);
}
