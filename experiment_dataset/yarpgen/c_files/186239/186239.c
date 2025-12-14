/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = ((((max((arr_0 [i_1]), (arr_1 [i_0] [i_0 + 1])))) < (arr_5 [i_0])));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_21 = (min(var_19, ((var_17 * (((var_15 <= (arr_2 [i_1] [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_22 = min((((min(var_13, var_1)))), (~2519418082));
                                var_23 = (((0 | 2519418096) * (arr_8 [i_0 + 1] [i_0] [i_0 - 2] [i_0 - 2])));
                                var_24 = ((((min((min(1741, 357870744)), (903046512287274027 >= var_4)))) ? ((max((((arr_9 [i_3]) ? var_8 : (arr_4 [i_3 + 1]))), ((~(arr_1 [i_3 + 1] [i_4])))))) : (max((max((arr_6 [i_0]), 1)), (arr_8 [i_0] [i_0] [i_4 - 1] [i_4])))));
                            }
                        }
                    }
                }
                for (int i_5 = 2; i_5 < 12;i_5 += 1)
                {
                    arr_15 [i_0] [i_1] [i_5] [i_1] = ((((min(-116, (~var_1)))) * (min(var_7, -117))));
                    var_25 = ((!((min((arr_2 [i_0 - 1] [i_1]), (((arr_5 [i_0]) ? var_3 : var_13)))))));
                    var_26 &= (((((((min(-32097, (arr_2 [11] [i_5])))) < (((!(arr_9 [i_0])))))))) ^ (~8019653721222637134));
                }
            }
        }
    }
    var_27 = ((max(var_4, (max(-903046512287274017, var_10)))));
    #pragma endscop
}
