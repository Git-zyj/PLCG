/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_17 |= ((-40 ? 565561538795399272 : (((var_1 ? 3406066033 : var_4)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 = ((var_14 * (arr_5 [i_0 + 1] [i_0] [i_1] [i_1])));
                    arr_7 [i_0] = (((2147483647 ^ -2147483647) == 1441128981));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    {
                        arr_16 [i_0] [i_0] [i_3] [8] [i_5] = var_1;
                        var_19 += ((var_5 ? -2147483647 : (((arr_8 [0] [i_5]) ? var_12 : var_12))));
                    }
                }
            }
        }
    }
    for (int i_6 = 1; i_6 < 10;i_6 += 1) /* same iter space */
    {
        var_20 = (arr_14 [i_6] [i_6] [i_6] [2] [i_6] [i_6 + 1]);
        var_21 = ((3221225472 ? var_1 : ((-(arr_10 [2] [i_6] [i_6 + 1] [i_6])))));
        arr_21 [i_6] = (((((-(arr_6 [i_6 + 1] [i_6] [10])))) ? (arr_6 [i_6 + 1] [i_6 + 1] [10]) : ((((-2147483647 || (arr_6 [i_6 + 1] [i_6 - 1] [8])))))));
        var_22 = 31267;
    }
    var_23 = (min(-499740601, var_12));
    var_24 &= ((-(((-2147483647 - 1) & 1389640755))));
    #pragma endscop
}
