/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((((var_17 ? var_17 : var_17))) ? ((13617 ? var_0 : 18774)) : var_14))) ? (((((10175 ? var_0 : var_15))) ? ((var_15 ? 0 : var_13)) : var_17)) : var_14));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_20 = (((((127 ? 12393 : 37297))) ? ((var_18 ? ((38932 ? 24494 : 26604)) : (((arr_2 [i_4] [i_3]) ? var_11 : var_11)))) : (((arr_1 [i_0 - 1] [i_0 - 1]) ? 15556 : 12335))));
                                var_21 = (min(var_21, (((((((arr_3 [i_0 - 1] [i_0 - 1]) ? var_1 : (arr_3 [i_0 - 2] [i_3 - 2])))) ? (((arr_3 [i_4] [2]) ? var_4 : var_11)) : ((var_7 ? (arr_3 [i_3 + 1] [i_0 - 4]) : 22308)))))));
                                var_22 = (((((var_8 ? var_18 : (arr_9 [i_3] [i_3 - 2] [i_3 - 2] [15] [i_3 - 2] [i_1])))) ? ((26353 ? (arr_9 [i_4] [i_4] [i_3] [i_3 + 1] [i_3 - 2] [i_1]) : (arr_9 [i_4] [i_4] [i_4] [i_4] [i_3 - 2] [i_1]))) : (((arr_9 [i_4] [i_4] [4] [i_4] [i_3 + 1] [i_1]) ? var_1 : (arr_9 [i_4] [i_4] [i_4] [i_4] [i_3 + 1] [i_3])))));
                                var_23 = (((((var_2 ? ((63094 ? 32766 : 4479)) : (((arr_10 [i_2] [i_2] [i_0 + 1] [i_2] [i_0 + 1]) ? var_7 : 12335))))) ? ((var_17 ? ((38932 ? 22305 : 26604)) : (arr_1 [i_3 - 2] [i_3 - 1]))) : (((arr_8 [i_0] [i_0 - 3] [i_1] [i_0]) ? 37732 : var_9))));
                            }
                        }
                    }
                    var_24 = (((((49007 ? var_14 : (arr_1 [i_2] [i_2])))) ? ((58485 ? 38959 : (arr_2 [i_2] [i_0 + 1]))) : (((((43934 ? 0 : 38932))) ? 32098 : 42509))));
                }
            }
        }
    }
    var_25 = var_1;
    #pragma endscop
}
