/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185265
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
    var_15 = var_11;
    var_16 = ((/* implicit */short) var_9);
    var_17 = ((/* implicit */unsigned long long int) (+((-((~(((/* implicit */int) var_6))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */long long int) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
                arr_4 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    var_19 = ((/* implicit */_Bool) var_3);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_20 = var_10;
                                arr_13 [i_3] [(unsigned short)6] [i_2] [i_3] [i_4] [i_4] [i_3] = ((/* implicit */short) (-((-((-(var_3)))))));
                                arr_14 [i_0] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) var_0))))));
                                var_21 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) var_0))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
                    arr_15 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_13);
                }
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_0);
}
