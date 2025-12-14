/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, ((min(((min((var_6 << var_10), (min(-1499800594929850992, -1499800594929850990))))), ((((max(2936222627, -5244327628129448485))) ? ((((arr_3 [12] [i_1] [12]) ? 2652839699322408635 : (arr_4 [i_2])))) : var_9)))))));
                    var_15 ^= (((((arr_5 [22]) ? (arr_5 [10]) : (arr_5 [20]))) & (((arr_1 [4]) ? (arr_1 [20]) : (arr_1 [8])))));
                    var_16 = (arr_2 [i_0] [i_1]);
                }
            }
        }
    }
    var_17 -= 1499800594929851003;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            {
                var_18 ^= -1499800594929850992;
                var_19 = ((var_4 ? ((-(((arr_11 [13]) ? var_13 : var_11)))) : ((-(max((arr_0 [19] [i_4]), (arr_9 [i_3])))))));

                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    var_20 = (max(((((-9223372036854775807 - 1) ? var_10 : 0))), (((0 && (arr_4 [i_3]))))));
                    var_21 = (max((min(-8751256625659346167, 3859466425)), var_10));
                    arr_15 [i_5] [5] [i_4] [i_5] = ((((!(arr_5 [i_5]))) ? 2652839699322408643 : 13837184360323101376));
                }
                arr_16 [i_3] [i_3] [i_4] = ((!((min(((max(73, -61))), (((-9223372036854775807 - 1) * 0)))))));
            }
        }
    }
    var_22 = -5;
    #pragma endscop
}
