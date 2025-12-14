/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_2 ? ((-1375840881 ? 62 : var_8)) : 1375840857))) ? var_3 : (((((3146154350 ? 1 : 60))) ? 1 : (~1302416156)))));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_19 -= ((!(0 || -21561)));
        var_20 = ((var_12 ? (((arr_0 [i_0] [i_0 - 1]) ? (arr_0 [i_0] [i_0 - 1]) : 536870911)) : ((-78 ? 1624229533233138278 : 62))));
        var_21 |= arr_1 [i_0];
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (arr_2 [i_1]);
        arr_6 [8] [i_1] = ((53 << (1375840896 - 1375840890)));
        arr_7 [i_1] = ((var_2 ? (~var_12) : (max(var_3, (~var_4)))));
        var_22 = (min((((27114 == (arr_2 [i_1])))), (arr_3 [i_1])));
    }
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        arr_11 [i_2] = (arr_3 [i_2]);
        var_23 = (min(var_23, (((var_10 * (((arr_10 [i_2 - 1]) << (((arr_10 [i_2 + 1]) - 19871)))))))));
        var_24 = (min(var_6, (((-(arr_10 [i_2 - 1]))))));
        var_25 = (min(var_25, (arr_4 [i_2])));
        var_26 = (max(var_26, (((((((!-98) ? (arr_1 [i_2 + 2]) : (arr_0 [14] [i_2 + 2])))) ? (!1) : (((((var_17 ? (arr_2 [i_2]) : var_1))) ? (arr_1 [i_2 + 1]) : (arr_1 [i_2]))))))));
    }
    for (int i_3 = 2; i_3 < 10;i_3 += 1)
    {
        var_27 = (min(var_27, (((4294967295 ? 27098 : 2538059985)))));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 8;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 9;i_5 += 1)
            {
                {
                    arr_20 [i_3] [i_4] [i_5] [i_5] = (max((~6108239563451400561), (((arr_17 [i_5 + 2] [i_5 + 2] [i_5]) ? (arr_17 [i_5 - 2] [i_4] [i_5 + 1]) : (arr_17 [i_5 - 2] [i_4 + 3] [i_5])))));
                    var_28 = (((-((2434438082 ? 4294967295 : var_7)))));
                }
            }
        }
        var_29 = ((+((var_11 ? (arr_12 [i_3] [i_3 - 1]) : (arr_12 [i_3] [i_3 - 2])))));
        var_30 -= (((~0) ? 8367012829433575289 : 3016926288));
        var_31 = var_14;
    }
    #pragma endscop
}
