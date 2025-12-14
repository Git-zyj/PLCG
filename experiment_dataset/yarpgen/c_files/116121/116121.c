/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_1] [6] [i_1] = (!34110);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] [i_1 - 2] [i_1] = (min(((((arr_6 [i_3 - 4] [i_3 - 4] [i_2] [i_3 + 1]) ? 1 : (arr_6 [i_3] [i_3] [i_3 - 3] [i_3 - 3])))), var_12));
                            var_17 = ((((((((1 ? 1 : 183))) - var_7))) ? (max(var_11, (~75))) : var_1));
                            var_18 = 187;
                            arr_11 [i_0 - 2] [i_0 - 2] [i_1] [i_3] [i_2] [i_3 - 2] = ((((((((arr_8 [i_0] [i_0 - 3] [i_0] [i_0] [i_0]) ? var_2 : var_3)) - (((0 + (arr_3 [i_1] [i_1]))))))) && (((var_7 ? ((((arr_8 [i_0 - 1] [i_0 - 1] [i_1] [i_2] [i_3 - 3]) < var_16))) : (((var_10 && (arr_9 [i_2] [i_1] [i_0])))))))));
                            var_19 = (~var_3);
                        }
                    }
                }
                var_20 = ((((var_0 ? (arr_4 [i_0] [i_1]) : var_13)) > (((~(!var_8))))));
                arr_12 [i_1] [i_1] [i_0 + 1] = ((((((!1) * ((min((arr_6 [i_0] [i_0] [i_0] [i_1]), (arr_6 [i_0] [i_1] [i_0] [i_0]))))))) ? (!4294967295) : ((max((arr_2 [i_0 - 3] [i_1 + 1]), (arr_3 [i_1] [i_0 - 3]))))));
            }
        }
    }
    var_21 = ((~(max(var_4, 9223372036854775802))));
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 4; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    var_22 = ((!(arr_18 [i_4] [i_5] [i_5 - 4] [i_4])));
                    arr_21 [i_6] [i_4] [i_4] [i_4] = (max(4294967295, 62));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                var_23 = ((((((arr_20 [i_4]) ? 2904770596 : (arr_18 [i_4] [i_4 - 1] [i_4 - 1] [i_4])))) ? (!var_5) : (arr_22 [i_4] [i_4])));
                                arr_28 [i_4] [i_5] [i_5] [i_6] [i_6] [i_4] = ((((((~(arr_19 [i_8] [i_8] [23] [i_4]))))) ? (arr_27 [i_4] [i_4 + 1] [i_5 - 2] [i_5] [i_4 + 1] [i_7] [i_8]) : ((-9192862003379039046 ? (arr_27 [4] [i_7] [i_7] [i_6] [i_4] [4] [i_4]) : (arr_20 [i_4])))));
                                var_24 = (arr_20 [i_4]);
                            }
                        }
                    }
                    arr_29 [i_4] = ((~(((((~(arr_23 [17] [i_5])))) ? ((15 ? var_16 : 18446744073709551615)) : var_12))));
                    var_25 = (max(var_25, ((((arr_13 [i_4 + 1]) ? (min((arr_14 [i_6]), (arr_13 [i_4 - 1]))) : ((((arr_14 [i_4]) / (arr_14 [i_4 - 1])))))))));
                }
            }
        }
    }
    #pragma endscop
}
