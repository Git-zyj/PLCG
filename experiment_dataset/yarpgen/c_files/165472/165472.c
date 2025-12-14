/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, 205));
    var_14 = 67;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        var_15 = var_0;

        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            var_16 = ((87 <= (arr_1 [i_0 - 3] [i_1 - 1])));
            arr_4 [i_1] [i_1] = ((89 * ((((arr_2 [i_0] [i_0 - 1] [i_1 - 1]) > 18)))));
            var_17 = (arr_3 [i_1]);
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_18 = ((!(arr_3 [i_2])));
        var_19 = ((var_3 ? 78 : 0));
        arr_7 [i_2] = ((87 >> (-100 + 109)));
        arr_8 [i_2] = ((+((((arr_1 [i_2] [12]) && 101)))));
        arr_9 [i_2] [i_2] = 0;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = (arr_10 [i_3] [1]);
        var_20 = ((-6 ? (~1) : (((arr_12 [i_3]) ? 0 : var_12))));
        var_21 = var_0;
        arr_14 [i_3] [i_3] = ((var_9 ? -90 : (arr_12 [i_3])));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    {
                        arr_28 [i_4] = (~var_0);
                        var_22 = ((((-79 ? (arr_15 [i_6] [i_7]) : var_3)) << (var_10 - 6202337811640966432)));
                        arr_29 [i_7 - 1] [i_4] [i_5] = 9223372036854775807;
                    }
                }
            }
        }
        var_23 = 78;
    }
    var_24 = (((var_8 > 1) << (var_7 - 6397713333415342579)));
    #pragma endscop
}
