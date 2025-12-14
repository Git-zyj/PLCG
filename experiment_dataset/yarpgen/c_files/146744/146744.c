/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] = (22727 == var_9);

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_16 = -373047688;
                    var_17 = var_9;
                    arr_8 [i_0] [i_1] [i_2] = ((1 ? var_1 : (min((1 - 254), var_1))));
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                {
                    var_18 = (min((3849870835 != 15191), var_13));
                    var_19 = (!254);
                }
                for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                {
                    arr_14 [i_0] [i_0] [i_4] = 254;
                    var_20 = (max(var_20, ((((((-((var_6 ? var_7 : var_6))))) ? 1991786909303790775 : var_14)))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                {
                    var_21 = ((-(arr_12 [i_1 - 3] [i_1 - 1] [i_1 - 1] [i_1 - 1])));
                    var_22 -= ((((((-9223372036854775807 - 1) ? 2044 : 1))) < (arr_7 [13] [i_1 + 3] [1])));
                    arr_17 [i_0] [i_5] [i_0] [i_5] = ((-(1 % 126)));
                    var_23 = (var_10 | 3849870829);
                    arr_18 [i_5] [17] = ((!(arr_7 [i_1 - 2] [i_1 - 1] [i_1 - 3])));
                }
            }
        }
    }
    var_24 = 1;
    #pragma endscop
}
