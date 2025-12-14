/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_12));
    var_20 = 2147483647;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] = ((-1497241241 ? var_16 : (((arr_1 [i_0]) % var_13))));
        var_21 = (1 <= -1);

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_22 -= (((((-53 ? var_1 : 10902))) ? (arr_2 [i_0]) : (!var_6)));
            var_23 *= ((0 > (arr_4 [i_0 - 1] [i_0 - 1])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 9;i_3 += 1)
                {
                    {
                        var_24 -= (~18446744073709551615);
                        var_25 = ((145 >> ((18446744073709551615 ? var_12 : (arr_11 [i_2] [i_2] [i_2])))));
                        var_26 = 76;
                        var_27 -= (((arr_11 [0] [i_2] [i_2]) * 95));
                        var_28 = (min(var_28, (arr_10 [1] [7] [i_2] [i_2] [i_3] [i_2])));
                    }
                }
            }
        }
        for (int i_4 = 1; i_4 < 6;i_4 += 1)
        {
            arr_14 [i_4] = (arr_6 [i_0 - 1]);
            var_29 = (((-26685 | (arr_5 [i_4 + 1]))));
            arr_15 [i_0 - 1] [i_4] = ((((165 >> (((arr_7 [i_0 + 1] [i_4] [i_4 + 3]) - 4722482075550300717)))) >> (((125 - var_9) + 119))));
            var_30 ^= ((!(arr_7 [i_4 - 1] [i_4] [i_4])));
        }
    }
    #pragma endscop
}
