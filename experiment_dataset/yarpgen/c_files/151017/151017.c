/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (min(var_11, var_4));
    var_19 = (min(var_19, var_12));
    var_20 = 7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_0] [i_0] = (arr_2 [i_0]);
            arr_6 [i_1] = 242;
            var_21 = 65518;
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {
            var_22 = (max(var_22, (((17 << (3733677414 - 3733677392))))));
            var_23 = (561289877 != 18);
            var_24 = 561289870;
            var_25 -= (~30038);
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_26 = var_16;
            var_27 = (min(var_27, -123));
            arr_12 [i_3] = var_17;
        }
        arr_13 [i_0] = ((9 << (var_11 - 4031123258)));
        var_28 += ((10 ? 189 : 35));
        var_29 ^= 15529031904910678282;
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            arr_20 [i_4] = (arr_14 [i_4] [i_5]);
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 7;i_7 += 1)
                {
                    {
                        var_30 *= var_14;

                        for (int i_8 = 1; i_8 < 9;i_8 += 1)
                        {
                            var_31 = ((-26310 ? 1528085525 : 2147483647));
                            var_32 = (max(var_32, 65492));
                            var_33 = (max(var_33, 5290956132988944176));
                        }
                    }
                }
            }
        }
        arr_29 [i_4] = min(5945756884188145935, -6);
    }
    var_34 = (min(26315, 10));
    #pragma endscop
}
