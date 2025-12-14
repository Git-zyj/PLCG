/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16016
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
    var_18 = (+(min((var_9), (min((4245534245U), (((/* implicit */unsigned int) (signed char)-91)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_19 += ((/* implicit */unsigned short) min(((+(((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_1 - 1])))), (((/* implicit */int) var_16))));
                    var_20 = (-(((((/* implicit */_Bool) arr_5 [i_0 - 1] [(unsigned char)9] [(signed char)9])) ? (min((var_0), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) (-(var_14)))))));
                    var_21 -= ((/* implicit */unsigned int) arr_0 [i_2]);
                    arr_7 [i_0] [i_1] [i_2] [i_0] = (~(((/* implicit */int) (!(((/* implicit */_Bool) 49433051U))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_4] = var_5;
                                var_22 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (_Bool)0)), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(short)8] [i_1] [i_1] [i_4]))) + (0ULL))), (((/* implicit */unsigned long long int) arr_6 [i_0 - 4] [(signed char)11] [i_0 - 4] [i_3]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 &= ((/* implicit */unsigned int) var_5);
}
