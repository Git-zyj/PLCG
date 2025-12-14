/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                var_15 = (min(var_15, (((1 ? (!var_4) : (((arr_3 [i_1]) ? var_11 : (arr_2 [i_0] [i_0]))))))));
                var_16 = (~var_3);

                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    var_17 -= ((((((var_2 % (arr_8 [i_2] [i_2] [i_2]))) + 2147483647)) >> (var_5 + 3597)));
                    arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = var_3;
                }
            }
            arr_14 [i_0] [i_0] = ((-(((arr_11 [i_0] [i_0]) ? ((var_5 ? 39798 : var_0)) : (~var_7)))));
            var_18 = ((!(arr_9 [i_0])));
            var_19 = max(((var_0 ? var_13 : var_10)), -122);
        }
        var_20 = (min(var_20, ((((((arr_4 [i_0] [i_0]) ? (arr_3 [i_0]) : var_10)))))));
    }
    for (int i_4 = 1; i_4 < 22;i_4 += 1)
    {
        var_21 ^= (((((var_6 ? (arr_15 [i_4]) : (max(var_2, var_6))))) ? (((((var_6 ? 6149686031648030143 : var_1))) ? var_13 : ((var_14 >> (var_6 - 1082352447))))) : (((((min(12297058042061521470, var_3))) ? var_4 : (arr_16 [i_4 - 1]))))));
        var_22 = (max(var_22, var_12));
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 4; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_23 = (max(var_23, (((var_11 ? (arr_19 [i_5] [i_5] [i_5]) : (min((min(6149686031648030146, var_4)), (arr_23 [i_5] [i_5] [i_6 + 1] [i_6 + 1]))))))));
                    var_24 &= (((~((12297058042061521470 ? 6149686031648030143 : var_0)))));
                }
            }
        }
        var_25 = var_10;
    }
    var_26 = (max(var_26, (((-(max(((var_1 ? var_13 : 12297058042061521469)), var_4)))))));
    #pragma endscop
}
