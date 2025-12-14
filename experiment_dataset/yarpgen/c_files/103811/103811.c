/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    var_17 ^= var_6;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = (arr_0 [i_0]);
        var_18 += min(4095, (min((((arr_3 [i_0] [i_0]) ? 17393426777363108391 : (arr_2 [i_0] [i_0]))), var_2)));
        arr_5 [i_0] [6] = (min(((((arr_3 [i_0] [i_0]) == (arr_3 [i_0] [i_0])))), (max((arr_3 [9] [i_0]), -6670963940784531327))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_19 *= min(4095, 8388606);

        for (int i_2 = 3; i_2 < 12;i_2 += 1) /* same iter space */
        {
            arr_12 [8] [3] [i_1] = (arr_8 [i_1]);
            arr_13 [i_1] [i_1] [i_2 + 2] = ((((((((arr_8 [i_1]) ? (arr_8 [i_1]) : var_13))) ? ((max(var_9, 95))) : (-9223372036854775807 - 1))) / (((((arr_10 [i_2 - 3]) >= (arr_10 [i_2 - 3])))))));
            var_20 = 61441;
        }
        for (int i_3 = 3; i_3 < 12;i_3 += 1) /* same iter space */
        {
            arr_17 [i_1] [i_1] [i_1] = (arr_9 [i_3]);
            var_21 = var_7;
            arr_18 [11] = ((arr_6 [i_3 + 3]) * (((arr_6 [i_3 + 2]) % (arr_6 [i_3 + 4]))));
            var_22 = (min(4112, 0));
        }
        for (int i_4 = 3; i_4 < 12;i_4 += 1) /* same iter space */
        {
            var_23 = (max(1704252641162802219, ((var_2 / (arr_8 [i_1])))));
            var_24 = (min(var_24, ((((~var_5) / (((var_4 ? 9223372036854775784 : 6670963940784531322))))))));
            arr_21 [i_4] = (((-1373188800 ? (arr_6 [i_1]) : ((3353987225742384298 ? var_1 : (arr_7 [i_1]))))));
            arr_22 [i_4] = ((((((!(arr_10 [i_4 + 4]))))) <= (arr_16 [i_4 - 3] [i_4])));
            var_25 = ((!((min((arr_11 [0] [i_4 + 3]), 0)))));
        }
        for (int i_5 = 3; i_5 < 12;i_5 += 1) /* same iter space */
        {
            arr_26 [5] [14] [i_1] = -10635;
            arr_27 [i_1] [i_1] [i_5] = ((~(max(((0 ? (arr_10 [i_5]) : 1)), (min((arr_23 [i_1] [i_5]), (arr_10 [i_1])))))));
        }
        arr_28 [i_1] [i_1] = -51324;
    }
    var_26 = var_8;
    #pragma endscop
}
