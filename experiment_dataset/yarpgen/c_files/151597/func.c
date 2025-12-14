/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151597
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) | (((((/* implicit */int) (!(((/* implicit */_Bool) 1383724642U))))) | (((/* implicit */int) var_11))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_17 ^= ((/* implicit */short) ((((-1488645863) + (2147483647))) >> (((((((arr_4 [2U] [i_2]) | (((/* implicit */unsigned int) 2147483634)))) % (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_3 [i_2] [i_1] [i_2])), (var_6))))))) - (2147483607U)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((arr_7 [i_1 - 3] [i_1 + 1] [i_2] [(signed char)0]) | (((/* implicit */int) var_3)))) - (min(((-(((/* implicit */int) var_13)))), (((/* implicit */int) arr_3 [i_0] [i_1 - 3] [i_2])))))))));
                                var_19 = ((/* implicit */short) arr_12 [(short)11] [(short)11] [i_2] [(short)0] [i_2]);
                                arr_13 [0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned short) (-(((max((-2147483634), (((/* implicit */int) arr_11 [(unsigned short)6] [i_1] [i_1] [i_1] [i_1] [(unsigned short)6] [(unsigned short)6])))) - (((/* implicit */int) (unsigned char)218))))));
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) (((+(((/* implicit */int) (unsigned char)37)))) % (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_12 [i_0] [(_Bool)1] [i_2] [i_2] [i_4])))))))) : (min((var_15), (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_11);
}
