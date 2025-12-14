/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_13 = (max((max((arr_2 [i_2 - 2] [i_1 + 1]), (arr_2 [i_2 - 2] [i_1 + 1]))), ((((-2147483647 - 1) ? 27111 : 1)))));
                        var_14 = ((-((((((var_7 ? (arr_7 [i_0 - 1] [i_1] [i_3]) : (arr_8 [i_1] [i_2] [i_3])))) || (((var_9 * (arr_4 [i_1] [i_1] [i_1])))))))));
                        var_15 *= var_4;
                    }
                    for (int i_4 = 3; i_4 < 17;i_4 += 1)
                    {
                        var_16 = 92;
                        var_17 = (((((~((((arr_11 [i_0] [i_1] [i_1]) && (arr_5 [i_0] [i_2] [i_4 - 3]))))))) ? (((var_5 ? 4158002684 : (~var_10)))) : ((7259751263022116101 ? -93 : 11186992810687435525))));
                        var_18 = ((-((-473817800099415475 | (!65513)))));
                    }
                    var_19 |= (max(-473817800099415486, (((1015128350921960694 ? 4064 : var_6)))));
                    var_20 = (max(((((((arr_8 [i_1] [i_1] [i_1]) ? (arr_6 [i_1]) : var_6))) ? ((0 ? var_3 : var_7)) : (((-3602644197006629344 ? var_12 : -792987791))))), ((((((arr_12 [1] [i_1]) / (arr_9 [i_0] [4] [i_2] [7] [i_2] [16])))) ? (arr_12 [i_1] [i_1]) : -var_8))));
                    var_21 = (max((((arr_6 [i_1]) - ((-(arr_1 [17]))))), ((max(var_11, (arr_11 [i_1] [i_1] [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_22 ^= var_7;
                                var_23 = (min(var_23, (((((!((max((arr_9 [i_0 + 1] [9] [i_2] [i_5] [i_6] [i_6 + 2]), -473817800099415475))))) ? ((((var_4 >= (arr_1 [i_1]))))) : ((~(arr_11 [i_0 + 1] [i_5] [i_5]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (~var_0);
    #pragma endscop
}
