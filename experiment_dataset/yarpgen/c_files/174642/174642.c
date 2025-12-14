/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= (max((19278 < 150), ((!(((var_3 ? var_3 : var_13)))))));
    var_20 = ((((var_14 ? var_13 : var_11))));

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            var_21 = (arr_0 [14]);
            arr_5 [i_0] [i_0] = (-9223372036854775807 - 1);
            arr_6 [i_0] [12] = 15;
            arr_7 [i_0] [i_0] [12] = ((58 ? 4 : 136));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_11 [i_0] [7] [i_0] = (~13);
            arr_12 [i_0] = ((((((((((arr_9 [i_0]) + 2147483647)) << (((arr_1 [i_2]) - 2550532397))))) ? (arr_1 [i_0]) : -365074242)) * (!37169)));
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
        {
            arr_15 [i_0] = (arr_9 [i_0]);
            arr_16 [i_0] [i_0] = (arr_2 [i_0]);
            var_22 = (((((+(min((arr_2 [i_0]), (arr_8 [i_0] [i_0] [i_0])))))) ? (((1301998039 ? 7 : (arr_4 [i_0] [2])))) : ((~(var_3 != -9223372036854775783)))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
        {
            var_23 = ((((0 - (arr_2 [i_0])))) ? 64 : (arr_13 [i_0]));
            var_24 = (arr_10 [i_0] [i_0] [i_0]);
        }
        var_25 = (arr_3 [i_0] [i_0] [i_0]);
    }
    #pragma endscop
}
