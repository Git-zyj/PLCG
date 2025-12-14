/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_13 = (((arr_0 [i_0] [i_0]) <= (arr_1 [i_0] [i_0])));
        arr_2 [i_0] = (((0 * (arr_1 [i_0] [i_0]))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                arr_8 [i_0] [2] [i_0] = ((25467 ? (arr_3 [i_0] [i_0]) : var_5));
                arr_9 [i_0] [i_1] [7] [i_0] = 7;
                var_14 = (max(var_14, ((((arr_1 [i_1] [i_0 + 2]) ? (arr_1 [i_1] [i_0 + 1]) : (arr_1 [i_1] [i_0 + 1]))))));
                arr_10 [i_0] = ((-(arr_4 [i_0] [i_1])));
            }

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                arr_15 [i_0] [i_0] [i_3] = 2010199625;

                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    var_15 *= (((arr_12 [i_0 - 3] [i_4] [i_0 + 1]) >= (arr_12 [i_0 - 3] [i_1] [i_0 + 1])));
                    var_16 = ((~(~22)));
                }
            }
        }
        arr_20 [i_0] = (arr_1 [i_0] [i_0]);
    }
    var_17 = (((max(var_11, (var_6 + var_1)))) ? var_12 : var_0);
    var_18 &= 4294967277;
    #pragma endscop
}
