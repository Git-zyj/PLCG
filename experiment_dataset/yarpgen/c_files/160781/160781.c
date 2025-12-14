/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {

                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            var_16 ^= (arr_8 [i_4 + 2] [i_4] [i_4 - 1] [i_4 + 1] [i_4] [i_4 + 1]);
                            var_17 = (max(((max((arr_5 [i_4 - 1] [i_4 + 1]), 0))), (max((arr_5 [i_4 + 2] [i_4 + 2]), 2147483647))));
                            var_18 = (~3433604696);
                        }
                        var_19 = (max(((-((0 * (arr_2 [i_0] [i_1] [i_2]))))), (~var_2)));
                        var_20 = (min(((-var_2 ? 5779882554961117917 : (-2147483647 - 1))), (((!(((8242606391579145607 ? (arr_4 [i_0]) : 861362598))))))));
                    }
                }
            }
        }

        for (int i_5 = 2; i_5 < 23;i_5 += 1) /* same iter space */
        {
            arr_17 [21] [i_5] = (~1278937648);
            var_21 = (1 * 0);
        }
        for (int i_6 = 2; i_6 < 23;i_6 += 1) /* same iter space */
        {
            var_22 = 1;
            var_23 = (min(var_23, (((arr_12 [i_0] [i_6] [i_6 - 2] [i_6 + 2]) ? 18446744073709551613 : (((-(min(var_10, var_5)))))))));
            var_24 = -914172876672512300;
        }
        var_25 = (min(var_25, (~0)));
        var_26 = var_7;
    }
    var_27 = (min(var_27, 18446744073709551613));
    #pragma endscop
}
