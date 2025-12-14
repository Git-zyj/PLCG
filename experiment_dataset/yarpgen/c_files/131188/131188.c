/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (min(127, (max((arr_0 [i_0]), (arr_0 [i_0])))));
        arr_3 [i_0] = var_1;
        var_15 = (max(var_15, ((((((~(arr_0 [4])))) ? var_5 : ((108174686277533039 << (((arr_0 [8]) - 21212)))))))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
        {
            var_16 = (max(var_16, 1428517702));
            var_17 *= ((!(arr_4 [2])));
            arr_6 [i_0] [i_0] = (max(1, ((((!(arr_0 [i_0])))))));
            arr_7 [4] &= ((~(0 * -113)));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            arr_12 [i_0] [i_0] [i_0] = (arr_10 [i_0] [i_0] [i_2]);
            var_18 = (((arr_9 [i_0] [i_0] [i_0]) <= var_0));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
        {
            arr_17 [i_0] [i_0] = 255;

            for (int i_4 = 3; i_4 < 11;i_4 += 1)
            {
                arr_21 [i_0] [i_0] [i_0] [i_0] = 0;
                var_19 = (max(var_19, (arr_16 [i_0] [i_0])));
            }
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                var_20 = (max(var_20, (~var_7)));
                var_21 = (max(var_21, (((~(arr_13 [6]))))));
                arr_24 [i_0] = (((arr_23 [i_5] [i_0]) / (arr_23 [i_0] [12])));
            }
        }
        arr_25 [6] |= (~var_5);
    }
    var_22 = var_5;
    #pragma endscop
}
