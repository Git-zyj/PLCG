/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = ((~(((arr_1 [i_0] [i_0]) - -1))));
                arr_5 [i_0] [i_0] [i_0] = ((((min((arr_4 [i_0] [i_1] [9]), 0))) ? var_5 : (max((arr_4 [i_0] [i_1] [i_1]), (arr_4 [10] [i_0] [7])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_14 = (((((18446744073709551615 ? 3 : 3810894922))) ? 3837007466108512976 : 3837007466108512991));
                            var_15 = (min(var_15, (((3837007466108512976 ? ((((!var_7) && 14609736607601038639))) : (((!(((254562013 ? 6 : (arr_10 [i_0] [i_0] [i_2] [i_1]))))))))))));
                            arr_13 [i_0] [i_1] [i_0] [i_3] = (~3837007466108512997);
                        }
                    }
                }
                arr_14 [i_0] [i_1] = ((!(arr_1 [i_0] [i_0])));
            }
        }
    }
    var_16 ^= 14609736607601038654;
    #pragma endscop
}
