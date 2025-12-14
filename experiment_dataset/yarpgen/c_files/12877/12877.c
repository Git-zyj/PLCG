/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_7 & -var_9) ? var_10 : 2147483647));
    var_12 = 146611206845356034;
    var_13 = var_3;

    for (int i_0 = 4; i_0 < 19;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_12 [i_2] [i_1] = 1982466650;
                        var_14 = (max(var_14, (((var_4 - ((((arr_1 [i_3 + 1] [i_0 + 1]) ? (arr_1 [i_3 + 3] [i_0 + 1]) : (arr_1 [i_3 + 2] [i_0 - 4])))))))));
                    }
                }
            }
        }
        var_15 = (max(var_15, 16010354298982456694));
        var_16 = (max(var_16, 63));
        var_17 = (((((arr_0 [i_0 - 3]) >= (arr_7 [i_0 - 2]))) ? 6964453565958834489 : 178384223));
    }
    /* vectorizable */
    for (int i_4 = 4; i_4 < 19;i_4 += 1) /* same iter space */
    {
        var_18 = -2037804374;
        arr_15 [5] [i_4] = ((~(arr_9 [i_4 + 1] [i_4 - 3] [i_4 - 4])));
        var_19 = (arr_13 [16]);
    }
    /* vectorizable */
    for (int i_5 = 4; i_5 < 19;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 2; i_6 < 19;i_6 += 1)
        {
            var_20 = (~18446744073709551593);
            arr_20 [i_5] [i_5] [i_5] = 1476607682956456148;
        }
        var_21 = 11;
        var_22 = (((arr_9 [i_5 - 3] [i_5 - 1] [i_5 - 4]) ^ (arr_7 [i_5])));
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 20;i_8 += 1)
        {
            {

                /* vectorizable */
                for (int i_9 = 2; i_9 < 20;i_9 += 1)
                {
                    var_23 = (((arr_26 [i_7] [i_8] [i_9]) ? -15956 : var_8));
                    var_24 = -496794024;
                }
                arr_29 [i_7] [i_8] &= (!(arr_26 [i_8] [i_8 - 2] [i_8 - 1]));
            }
        }
    }
    #pragma endscop
}
