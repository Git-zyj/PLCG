/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163030
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
    for (signed char i_0 = 4; i_0 < 8; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 ^= ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) 4070773613U)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_0 + 3] [(unsigned char)6] [(signed char)1])))), ((~(((/* implicit */int) arr_2 [i_1] [i_0])))))), (((((/* implicit */int) arr_3 [i_0 + 1])) & (((/* implicit */int) arr_5 [i_0] [i_0 - 1]))))));
                var_17 = ((/* implicit */_Bool) max((var_17), (arr_6 [i_0 + 3] [i_0 + 3] [(unsigned short)5])));
                arr_7 [i_0] [i_0] |= ((/* implicit */unsigned char) ((signed char) (+(((/* implicit */int) arr_6 [i_0] [i_0 - 4] [i_0])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (unsigned short i_4 = 2; i_4 < 22; i_4 += 3) 
            {
                {
                    var_18 = ((/* implicit */_Bool) arr_11 [i_3 - 1] [i_3 - 1] [i_3 - 1]);
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 2; i_5 < 22; i_5 += 3) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_18 [i_6 - 1] [i_4] = ((/* implicit */_Bool) max(((-(((/* implicit */int) arr_13 [i_2] [i_4] [i_5 - 1])))), ((-(((/* implicit */int) arr_11 [i_2] [i_2] [i_4 + 1]))))));
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((_Bool) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))) + (((/* implicit */int) arr_17 [i_2] [i_3] [i_4] [1U] [(_Bool)1] [i_3]))))))));
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_11 [i_4 + 1] [i_6] [i_6 - 1])) > (((/* implicit */int) arr_11 [i_4 + 1] [i_6 - 1] [i_6 - 1]))))) != (((/* implicit */int) (_Bool)1))));
                                var_21 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_12 [i_4])) - (((/* implicit */int) arr_13 [i_2] [i_4] [i_6])))) + (((((/* implicit */int) (_Bool)1)) + (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_13 [i_2] [i_4] [i_4]))))))));
                                var_22 = ((/* implicit */_Bool) (unsigned char)64);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) min(((-(((/* implicit */int) arr_14 [(unsigned short)20] [i_2] [i_3 - 1])))), (((/* implicit */int) arr_8 [i_2] [(unsigned char)15])))))));
                }
            } 
        } 
    } 
}
