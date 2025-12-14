/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102731
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 |= ((/* implicit */_Bool) (+((~(arr_7 [i_1] [i_1] [i_0] [i_0])))));
                    arr_8 [i_2] = ((/* implicit */unsigned short) ((arr_3 [i_0]) && (min(((_Bool)1), (arr_3 [i_2])))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 17; i_4 += 3) /* same iter space */
                        {
                            arr_14 [i_3] = ((/* implicit */int) ((unsigned short) arr_3 [i_0 + 2]));
                            var_20 = ((/* implicit */unsigned short) arr_2 [i_0]);
                            arr_15 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_0 - 1] [i_2] [i_0 - 1]);
                            var_21 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])));
                        }
                        for (int i_5 = 0; i_5 < 17; i_5 += 3) /* same iter space */
                        {
                            arr_18 [i_0 + 2] [i_1] [i_1] [i_3] = ((/* implicit */signed char) ((_Bool) arr_10 [i_0 + 1] [i_3] [i_3] [i_0 + 1]));
                            var_22 = ((/* implicit */int) arr_11 [i_0 + 2] [i_1]);
                            var_23 = ((/* implicit */_Bool) var_15);
                            arr_19 [i_3] [i_3] [i_2] [i_3] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_18)) ? (arr_2 [i_0]) : (arr_2 [i_0])));
                            arr_20 [i_3] = (~(arr_4 [i_2] [i_2] [i_0 - 1]));
                        }
                        arr_21 [i_0] [i_1] [i_1] [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) (+(arr_13 [i_3])));
                        arr_22 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((1206597038) == (((/* implicit */int) arr_11 [i_0 + 3] [i_0 + 2]))));
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_2] = (-(arr_4 [i_0 + 3] [i_1] [i_2]));
                    }
                    arr_24 [i_0] [i_0] = ((/* implicit */signed char) arr_5 [i_1] [i_1] [i_2]);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_6 = 2; i_6 < 7; i_6 += 2) 
    {
        arr_27 [i_6] = min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (unsigned short)46101)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-118)))));
        var_24 = (+(((/* implicit */int) max((var_2), (((/* implicit */unsigned short) arr_10 [i_6 + 2] [i_6] [i_6] [i_6]))))));
        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_16 [i_6 + 2] [i_6 + 1] [i_6] [i_6 + 1] [i_6 - 2]), (arr_16 [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1] [i_6 - 2])))) || (((/* implicit */_Bool) ((signed char) arr_16 [i_6] [i_6 + 1] [i_6] [i_6 + 1] [i_6 - 2])))));
        arr_28 [i_6 - 2] = ((/* implicit */int) (unsigned short)2040);
    }
    var_26 = ((/* implicit */int) var_9);
}
