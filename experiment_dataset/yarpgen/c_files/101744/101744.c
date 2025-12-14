/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 += (((arr_0 [i_0]) << ((((((min(var_6, (arr_1 [i_0] [i_0])))) ? (arr_1 [i_0] [i_0]) : var_7)) - 1558309207))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_1] [i_1] = (arr_1 [i_0] [i_1]);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 8;i_4 += 1)
                    {
                        {
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = ((((max(((-(arr_7 [i_0] [i_0] [i_0] [i_3]))), (arr_7 [i_0] [i_1] [i_1] [i_0])))) ? ((~(arr_14 [i_4] [i_4] [i_4 + 2] [i_4] [i_4 + 2] [i_3] [i_3]))) : (((var_5 == (arr_11 [i_0] [i_0] [i_4 - 2] [5] [i_4]))))));
                            var_19 = ((((((-(arr_10 [i_0] [8] [8] [i_2] [i_3] [i_4 - 3]))) + 2147483647)) >> (((!((min(-7499409571940325954, -1301894225))))))));
                            var_20 = ((1 ? -59 : 31));
                            var_21 = var_11;
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_22 = ((((((arr_18 [i_5]) % (max(var_7, (arr_18 [i_5])))))) ? (((-(arr_17 [i_5])))) : (arr_19 [i_5] [i_5])));
        var_23 = ((~(((arr_17 [i_5]) >> (arr_17 [i_5])))));
        var_24 = (min(var_24, var_7));
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        var_25 = (min(((-var_1 ? (arr_21 [i_6]) : (-9223372036854775807 - 1))), (((-(arr_20 [i_6]))))));
        arr_22 [i_6] = var_0;
    }
    var_26 = ((-(var_4 <= var_1)));
    var_27 = (max((var_2 && var_16), var_12));
    #pragma endscop
}
