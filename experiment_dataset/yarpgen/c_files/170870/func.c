/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170870
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
    var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-24347))));
    var_21 = ((/* implicit */unsigned short) var_14);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_22 *= ((/* implicit */unsigned short) (-(arr_6 [i_2 - 1] [i_4 + 1] [i_1 - 1] [(signed char)8])));
                                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) var_12))));
                                arr_12 [i_2] [i_2] [(unsigned char)14] [i_3] [i_4] [i_4] [10U] = ((/* implicit */unsigned char) (short)960);
                                var_24 = ((/* implicit */signed char) var_18);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        var_25 = var_16;
                        arr_17 [i_2] [i_1] [i_0] [i_5] [(signed char)8] = max((arr_6 [i_0] [i_1] [i_2] [i_2]), (((unsigned long long int) (unsigned char)128)));
                        var_26 = ((/* implicit */long long int) (+(min((((/* implicit */int) var_1)), (arr_15 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_2])))));
                    }
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */signed char) ((var_5) / (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_4))))), ((~(var_6)))))));
}
