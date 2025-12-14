/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = max(14326, 14326);
                arr_7 [i_1] [8] [8] |= (max(var_3, ((-((-101714185 ? -101714175 : 43514))))));
            }
        }
    }
    var_21 ^= ((((((1303 ? 6186 : var_6)))) >> (((min((((var_7 + 2147483647) << (65535 - 65535))), var_16)) - 7868))));

    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        var_22 = (arr_8 [i_2]);
        arr_12 [i_2 - 2] [i_2] = ((~(arr_0 [i_2 + 2] [4])));
    }
    for (int i_3 = 1; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_23 = ((-((1 ? 65535 : 63675))));
        var_24 = min(49993, 3689052075);
        var_25 = (max((((arr_14 [i_3 + 1] [i_3]) ? (13786 | var_5) : var_11)), (min(((12642 ? 1867 : (arr_14 [i_3] [i_3]))), (arr_14 [i_3 - 1] [i_3])))));
        var_26 = ((var_16 ? (arr_13 [i_3]) : (arr_13 [i_3])));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 17;i_4 += 1) /* same iter space */
    {
        var_27 &= (((-8136952925675950130 * 0) ? ((var_1 ? (arr_15 [i_4]) : (arr_14 [i_4 + 1] [0]))) : ((var_12 ? 11364 : (arr_14 [i_4 + 2] [1])))));
        arr_18 [i_4] = ((((var_5 ? 65525 : -1725790486)) - var_6));
        var_28 = ((var_7 / (arr_17 [i_4 + 2])));
    }
    #pragma endscop
}
