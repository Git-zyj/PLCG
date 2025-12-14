/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114087
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
    var_17 = ((/* implicit */unsigned char) ((_Bool) max((max((var_9), (var_12))), (var_15))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 23; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])))) - (((/* implicit */int) min((var_2), (arr_0 [i_2])))))), (((/* implicit */int) min((var_14), ((_Bool)0))))));
                                var_19 += ((/* implicit */_Bool) ((unsigned char) 1548769935U));
                                var_20 = ((/* implicit */_Bool) var_11);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */short) ((unsigned char) max((((/* implicit */short) ((((/* implicit */_Bool) 1548769926U)) && (((/* implicit */_Bool) 1548769921U))))), (((short) arr_12 [i_0 - 3] [i_1 + 2] [i_1] [i_2 + 3] [i_1 + 2])))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_5 = 1; i_5 < 15; i_5 += 2) 
    {
        for (unsigned char i_6 = 1; i_6 < 15; i_6 += 2) 
        {
            for (short i_7 = 0; i_7 < 18; i_7 += 3) 
            {
                {
                    arr_21 [i_6] [i_6] [i_5 + 2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) 1548769935U)) ? (((/* implicit */int) arr_0 [i_5])) : (((/* implicit */int) (unsigned char)255)))))))));
                    arr_22 [i_5] [i_6] = ((/* implicit */unsigned char) (-(2746197368U)));
                    arr_23 [(short)15] [i_6] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1548769926U))));
                    var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (((unsigned int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_12)))))));
                }
            } 
        } 
    } 
}
