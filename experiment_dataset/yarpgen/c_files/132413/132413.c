/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((!(arr_0 [i_0 + 1])));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_14 ^= (arr_4 [i_1] [i_0 - 1]);
            var_15 = (arr_0 [i_0 + 2]);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 8;i_3 += 1)
            {
                var_16 = (min(var_16, ((((((arr_5 [i_3] [i_2]) + var_4)) | (arr_3 [i_3]))))));
                var_17 = ((+((var_12 ? (arr_4 [i_3] [i_2]) : 127))));
                var_18 = (((arr_0 [i_0 + 1]) ? (arr_0 [i_0 + 1]) : var_2));
                arr_9 [i_3] = (arr_3 [i_3 + 2]);
                var_19 -= 93;
            }
            var_20 = ((-((253 ? 63599 : 19))));
            var_21 ^= 4294967295;
        }
        var_22 = ((!(((~(0 || var_0))))));
        arr_10 [i_0] = ((((var_3 > (arr_6 [i_0 + 2])))) > ((((arr_1 [i_0 + 1]) > (arr_1 [i_0 - 1])))));
        arr_11 [i_0 + 1] = (max((((-(82 >= 83)))), (arr_7 [0] [i_0] [0])));
    }
    for (int i_4 = 1; i_4 < 13;i_4 += 1)
    {
        arr_14 [6] [i_4] = ((((max((arr_12 [i_4 + 1]), (arr_12 [i_4 + 1])))) || (((arr_12 [i_4 + 1]) && (arr_12 [i_4 + 1])))));
        arr_15 [i_4] = (arr_12 [7]);
    }
    var_23 = (!var_13);
    var_24 = -7297327982569386332;
    #pragma endscop
}
