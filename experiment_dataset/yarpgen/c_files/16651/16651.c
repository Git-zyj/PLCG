/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = (max(((((((arr_3 [i_0 - 3] [i_1] [1]) ? var_3 : var_1))) ? var_4 : ((var_11 ? 2 : (arr_0 [i_1]))))), ((-5 ? (min(1887625018, (arr_3 [i_0] [i_0] [i_0 - 1]))) : var_7))));
                arr_5 [i_1] [i_1] [i_0 - 2] = ((1 ? (((((arr_2 [i_1] [i_1]) && var_11)))) : var_2));

                for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_3] [i_1] [i_1] [i_0 + 1] [i_0] = -71;
                                arr_14 [10] [10] = ((!((min(2407342262, (((26782488752224774 ? (arr_3 [i_0] [5] [i_3]) : var_8))))))));
                                arr_15 [i_0] [11] [i_1] [i_3] [11] [i_1 + 1] = (((((min(-26593, 6949602101409411775))) ? ((29246 ? var_2 : var_9)) : var_2)));
                                arr_16 [i_0] [i_1] [10] [i_0] [i_4] = ((((min(((var_9 ? var_7 : var_2)), 1))) ? (((((var_0 ? (arr_0 [i_0]) : var_7)) >> ((min((arr_12 [i_0 - 2] [16] [16] [i_3] [i_4]), -71)))))) : ((((max(var_2, var_4))) ? (((var_0 ? (arr_0 [i_3]) : var_6))) : ((46670 ? var_5 : (arr_12 [i_0] [i_0] [i_2] [i_3] [i_4])))))));
                                arr_17 [i_0] [i_1 + 2] [i_2] [i_1] [i_3] [i_4] = (max(((max(((3633730053 ? var_10 : -1663699536)), 5))), (((min(4262760482814058622, var_11)) << (((((arr_7 [i_2] [i_2] [i_1] [i_2]) ? (arr_6 [i_0 - 1] [i_1 + 4] [i_1 + 4] [i_4]) : var_7)) - 7730031690185417360))))));
                            }
                        }
                    }
                    arr_18 [i_1] [i_0 - 3] [0] [i_2] = (((var_9 ? 2470792430102654764 : (var_8 || var_1))));
                }
                for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                {
                    arr_21 [i_1] = ((((((((-126 ? var_6 : var_0))) ? (min(4348041088967299148, 8600501799512552310)) : (((min(var_11, (arr_9 [i_0 - 1] [i_1] [i_1] [i_1 + 3] [i_5] [i_5])))))))) ? (min(((var_9 ^ (arr_6 [i_0] [i_0] [i_1] [i_5]))), ((((arr_11 [i_5] [i_1] [i_0] [i_0]) ? var_7 : var_6))))) : ((var_0 ? -482215117812845103 : (!3915032373223033183)))));
                    arr_22 [i_1] [9] [i_1 + 3] [i_5] = ((((max(((233 ? 18287 : var_4)), (((arr_20 [i_0] [i_0 - 3] [i_0]) ? 1 : -884629154))))) ? var_5 : (((-(var_11 ^ var_1))))));
                    arr_23 [i_5] [i_1] [i_0] = (~var_6);
                }
                for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                {
                    arr_27 [i_1] [i_1] [i_1] [i_1] = ((((((var_3 << 1) * (max(var_10, 2801857539))))) ? (!var_4) : (((!((((arr_11 [5] [2] [2] [i_6]) ? (arr_3 [i_6] [i_1] [i_0 - 3]) : var_4))))))));
                    arr_28 [i_1] [i_1] [i_1] = var_7;
                    arr_29 [i_1] = 17686513839688353260;
                }
            }
        }
    }
    var_13 &= (!47248);
    #pragma endscop
}
