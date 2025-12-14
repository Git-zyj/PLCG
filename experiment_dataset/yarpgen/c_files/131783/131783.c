/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_20 = (min(((min((0 << 24), ((15027322 << (((var_8 + 2572) - 27))))))), (((((1 ? (arr_5 [i_0] [i_0] [i_0]) : (arr_1 [i_0])))) ? (arr_8 [i_0 + 2] [i_1] [i_0 + 2] [i_2] [i_3] [i_3 + 1]) : (((arr_0 [i_0]) - 48548))))));
                            arr_10 [i_0] [i_0] [i_0] [i_0] = (min((arr_6 [i_0] [7] [7] [i_0 + 1]), (min(((-(arr_5 [i_0] [i_2] [i_0]))), ((var_2 ? 161 : (arr_5 [i_0] [i_2] [i_3])))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] = var_3;
                                var_21 = (i_0 % 2 == 0) ? ((((min((arr_5 [i_0] [i_5] [i_0]), (arr_5 [i_0] [4] [i_0 - 1])))) << (((max(((((arr_4 [i_0] [i_0]) - (arr_1 [i_0])))), (min((arr_6 [i_0] [i_0] [i_0] [i_0]), (arr_0 [i_0]))))) - 977182951)))) : ((((min((arr_5 [i_0] [i_5] [i_0]), (arr_5 [i_0] [4] [i_0 - 1])))) << (((((max(((((arr_4 [i_0] [i_0]) - (arr_1 [i_0])))), (min((arr_6 [i_0] [i_0] [i_0] [i_0]), (arr_0 [i_0]))))) - 977182951)) - 2256766797))));
                                var_22 = (min(var_22, ((min((arr_14 [i_6] [i_6] [i_6] [i_6] [i_6]), (max((3828046961 - 576697702001001826), ((max(var_6, (arr_16 [i_1] [i_1] [i_1])))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = ((!(((-(min(var_3, -19)))))));
    var_24 += (min((((!var_13) ? 14766063900229607574 : (var_15 - 1))), var_13));
    var_25 = (((((!43135) || (((14552663543132025110 ? var_4 : 187))))) ? (max(-var_4, (min(-4458768886453063145, var_7)))) : ((var_1 ? (1307739814695161001 ^ 1) : var_11))));
    #pragma endscop
}
