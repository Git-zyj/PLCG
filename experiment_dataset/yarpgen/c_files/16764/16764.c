/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_10 = (max(-var_7, (((-(arr_1 [i_0]))))));
                            var_11 -= (!1490724493262301777);
                            var_12 = ((((((arr_9 [i_0 + 1] [i_2 - 1] [i_1 - 1] [i_0] [i_3 - 2]) & (arr_9 [i_0 + 3] [i_2 + 1] [i_1 + 3] [i_2 + 1] [i_3 + 1])))) ? -1635911222213726787 : 14352550240214511074));
                            var_13 = (max(var_13, (((54660 ? 216 : -91)))));
                            arr_10 [i_0] [i_2] [i_2] = (min(((var_8 ? (min(12, 8575601213164781948)) : 17651)), 10875));
                        }
                    }
                }

                for (int i_4 = 2; i_4 < 15;i_4 += 1)
                {
                    var_14 = arr_12 [i_0 - 1] [i_1 + 1] [i_1] [i_4];
                    var_15 = (max(var_15, (((((max((arr_3 [i_0] [i_1]), ((1032910104 ? 10875 : 6))))) ? (((((arr_12 [i_0 + 2] [i_0] [i_0] [i_0]) ? 9223372036854775807 : (arr_11 [i_0] [i_1 + 1] [i_1 + 1]))) & (((~(arr_13 [i_0])))))) : ((((var_6 ? -1781784718 : 4154157478044715319)))))))));
                    var_16 = (((((arr_2 [i_0 - 1]) ? (arr_11 [i_1 + 2] [i_1] [i_4 + 3]) : (arr_2 [i_0 + 2]))) & var_7));
                    arr_14 [i_0] [i_0] [i_0] = ((-var_5 ? var_9 : (((var_5 ? (arr_2 [i_1]) : (((arr_0 [i_1]) ? (arr_8 [i_1] [i_4] [i_4] [i_4] [i_1]) : (arr_8 [i_4] [i_4 + 1] [i_4] [2] [2]))))))));
                }
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    arr_17 [i_5] [i_5] = min(((~((~(arr_0 [i_1]))))), 7);
                    arr_18 [i_0] [i_5] [i_0] = ((((((arr_15 [i_5] [i_0 + 1]) ? 2807 : (arr_15 [i_5] [i_0 + 1])))) ? (((((min(var_4, var_6))) ? (arr_1 [i_0 + 2]) : (arr_1 [i_5])))) : (arr_8 [i_0] [i_1] [i_5] [i_1] [i_5])));
                    var_17 = ((((min((arr_11 [i_0] [i_0] [i_5]), ((100 ? -9211673604459975687 : 1476941941))))) ? ((((((arr_16 [i_0 + 2] [i_1 + 2] [8] [i_5]) ? (arr_6 [i_0] [5]) : -71)) - (min(10874, var_7))))) : (max(((min(137, 3901977507))), -16883356393511129033))));
                }
                arr_19 [i_0 + 1] [i_0 + 1] [i_0 + 1] = 6559219622491070857;
                var_18 = (((-2048 + 2147483647) >> (((arr_2 [i_1]) - 56))));
                arr_20 [i_0] [i_0 + 1] = (min((min((var_4 / var_0), var_0)), (((arr_9 [i_0] [i_0] [i_0] [i_1 - 3] [i_1]) / (-5699033288127382651 / var_4)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            {
                arr_26 [i_6] [i_7] [i_7] = (max(118, (((((arr_13 [i_6]) > var_1)) ? var_2 : ((min(10441, 4294967295)))))));
                arr_27 [i_6] [i_7] = ((~(~var_1)));
            }
        }
    }
    #pragma endscop
}
