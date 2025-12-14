/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_15;
    var_20 = (min(var_11, ((-119 ? 18446744073709551615 : -1))));
    var_21 = ((-(((var_8 ? var_5 : var_14)))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                var_22 = (((arr_5 [i_0] [i_0] [i_0]) > (~var_13)));
                arr_9 [i_0] [i_0 + 1] [0] [i_0] = (281474976710655 && 1);
            }
            var_23 ^= ((17 && ((max((arr_6 [20] [20] [i_0] [i_1]), (arr_6 [12] [12] [i_1] [i_1]))))));
            var_24 ^= ((!(((-(arr_6 [0] [i_0 - 1] [i_0 - 1] [i_0]))))));
            arr_10 [i_0] = (min((--44), ((((0 ? (arr_5 [i_0] [i_0] [i_0]) : var_0))))));
        }
        var_25 = (((((-((var_17 ? var_15 : (arr_2 [i_0] [i_0])))))) && ((var_7 && (arr_4 [i_0] [i_0])))));
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {
                    arr_22 [i_3] = 38;
                    arr_23 [i_3] [0] = (arr_11 [i_5]);
                    var_26 = 1;
                    arr_24 [i_3] [12] [i_5] &= (((var_2 - var_0) - ((-var_0 ? -10747 : var_10))));
                }
            }
        }
        arr_25 [i_3] = (arr_19 [i_3]);
    }
    #pragma endscop
}
