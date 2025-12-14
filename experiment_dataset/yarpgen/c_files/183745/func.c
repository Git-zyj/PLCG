/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183745
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
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_20 = max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)220));
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) ((int) (~(((/* implicit */int) arr_1 [i_0])))));
                                arr_15 [i_1] [i_1] [(short)6] [(short)6] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)21056))));
                                arr_16 [i_1] [i_1] = ((/* implicit */signed char) ((((int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2] [(unsigned char)2])) ? (var_13) : (arr_0 [(unsigned char)11])))) - (((((/* implicit */int) (unsigned char)112)) << (((/* implicit */int) arr_12 [i_4] [i_3] [i_1] [i_0]))))));
                                var_22 &= ((/* implicit */short) (~(((/* implicit */int) max((arr_10 [i_0] [i_2] [i_2 + 2] [i_2 - 1] [i_4] [i_4]), (var_0))))));
                                arr_17 [i_4] [i_1] [i_2] [i_1] [i_0] = (-(arr_3 [2U]));
                            }
                        } 
                    } 
                } 
                arr_18 [i_1] = ((/* implicit */unsigned char) max((max((((long long int) (short)-20732)), (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) (unsigned short)0))));
            }
        } 
    } 
    var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) & ((~(((((/* implicit */_Bool) (short)5453)) ? (((/* implicit */int) (short)5453)) : (((/* implicit */int) (short)29005))))))));
    var_24 = ((/* implicit */unsigned int) var_19);
    var_25 = var_15;
}
