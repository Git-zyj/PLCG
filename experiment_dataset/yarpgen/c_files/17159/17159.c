/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 21;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_7 [i_0 + 1] = (var_6 != var_6);
            arr_8 [i_0] = ((!(arr_2 [i_1])));
        }
        var_16 ^= (((arr_0 [i_0 + 1] [i_0 - 1]) ? (arr_5 [i_0 - 3] [i_0 + 3] [i_0 + 1]) : 401));
        arr_9 [i_0] = ((~(arr_2 [i_0 + 4])));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    arr_16 [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0 - 2] = 41;
                    arr_17 [i_0] [i_0] = (arr_6 [i_0 - 3] [i_0 - 3] [i_0 + 1]);
                    var_17 = ((~((var_9 ? var_4 : -42))));
                }
            }
        }
    }
    for (int i_4 = 3; i_4 < 21;i_4 += 1) /* same iter space */
    {
        var_18 = (arr_3 [i_4 - 2] [i_4 + 4] [i_4 - 3]);
        var_19 = var_14;
    }
    for (int i_5 = 3; i_5 < 21;i_5 += 1) /* same iter space */
    {
        var_20 = (((((((min(var_15, (arr_15 [i_5 + 4] [i_5 + 4] [i_5 + 1])))) ? var_2 : (arr_24 [i_5])))) ? var_9 : var_9));
        /* LoopNest 2 */
        for (int i_6 = 4; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 24;i_7 += 1)
            {
                {
                    var_21 = (((((var_3 ? 3939935143973129650 : -53)) != (arr_20 [i_5] [i_5]))));
                    arr_30 [i_5] [11] [i_6 - 3] [i_5] = (max(var_11, (((-100 + 2147483647) >> (var_0 - 26098)))));
                    var_22 -= ((59 ? var_4 : ((~(min(var_10, -60))))));
                }
            }
        }
        var_23 = (max(var_23, (arr_23 [14])));
    }
    var_24 = var_10;
    var_25 -= 12;
    #pragma endscop
}
