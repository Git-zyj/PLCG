/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((0 ? ((713940988 ? -700627809 : 6692)) : ((103 ? 103 : 1))))) ? var_7 : var_7));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                    {
                        var_12 = (min(var_12, 42668));
                        var_13 = 58844;
                        arr_9 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1] &= 3;
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_0 + 1] [i_1] [i_0] [i_1] = (((((115 ? 3581 : -115))) ? ((0 ? 1832149128349765938 : 1)) : 16358009459766809717));
                        var_14 = -103;
                    }

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        arr_17 [i_0] [i_0] [i_0] [i_5] = 0;
                        var_15 |= 2130648445;
                        arr_18 [i_5] [i_2] [i_0] [i_1] [i_0] = -1379737731869730092;

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_16 -= 10079483431675107698;
                            var_17 = 103;
                            arr_21 [i_6] [i_0] [4] [i_0] [i_0 + 2] = ((22859 ? 22605 : 1875));
                            var_18 = (-9223372036854775807 - 1);
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            var_19 = 1167554470;
                            var_20 -= (((((-1 ? 0 : 1379737731869730087))) ? ((915 ? 2088734613942741899 : 73217702)) : 58823));
                            var_21 = (((((1 ? 1 : (-9223372036854775807 - 1)))) ? 31 : ((1 ? -1 : 17690483539777603660))));
                        }
                    }
                    arr_25 [5] [i_0] [5] [i_1] = ((((((((22868 ? 0 : 0))) ? 16358009459766809717 : 1))) ? 12620572956817653600 : 0));
                    var_22 = ((1 ? 33044 : 1));
                }
            }
        }
    }
    var_23 = 47237;
    var_24 *= ((var_3 ? 1 : ((var_2 ? var_10 : ((0 ? 6691 : 55278))))));
    var_25 = 1141980906;
    #pragma endscop
}
