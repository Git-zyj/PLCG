/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174749
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
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((_Bool) 0U)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (_Bool)1))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) var_13);
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned int i_4 = 4; i_4 < 21; i_4 += 4) 
                            {
                                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)8129)))))));
                                var_19 &= ((/* implicit */int) ((long long int) arr_16 [i_4 - 2] [i_4 - 4] [i_4 - 4] [i_4] [i_4] [i_4]));
                                arr_17 [i_4] [(unsigned char)20] [i_4 - 1] [i_4 + 1] [i_4 - 4] [i_4 - 2] = arr_1 [i_0] [i_0];
                            }
                            /* vectorizable */
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                arr_21 [i_5] = ((/* implicit */unsigned long long int) (short)8129);
                                arr_22 [i_5] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) % (((((/* implicit */_Bool) 4294967279U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))) : (4070478743U)))));
                            }
                            var_20 = ((/* implicit */unsigned char) ((_Bool) 31U));
                            var_21 = ((/* implicit */int) max((var_21), (((((/* implicit */int) ((min((var_15), (4294967295U))) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) << ((-(((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_6 [i_0]))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
