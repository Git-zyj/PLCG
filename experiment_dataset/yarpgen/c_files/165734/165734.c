/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (1 * -4693568719793597316);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] &= (((arr_0 [i_0]) <= var_0));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_7 [i_1] [i_0] = ((-(arr_3 [i_0] [i_1])));
            arr_8 [i_0] [i_0] [i_0] = -1;
            var_19 = (((((var_10 ? (arr_6 [i_0]) : -24186))) ? -var_9 : ((((arr_6 [i_0]) <= (arr_5 [i_1]))))));
            arr_9 [i_1] [i_0] [i_0] = ((-1784706479 ? (arr_5 [i_0]) : (arr_5 [i_1])));
            var_20 = (min(var_20, -27956));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                arr_17 [i_0] [i_2] [i_3] |= (((arr_10 [i_2] [i_2]) && (arr_10 [i_3] [i_0])));
                var_21 ^= (((arr_5 [i_2]) ? 37593 : (arr_12 [i_0] [i_2] [i_3])));
            }
            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                arr_21 [i_4] [i_2] [i_0] [i_2] = var_17;
                var_22 = (max(var_22, (((((37578 ? (arr_6 [i_4 + 1]) : 27972)) <= (arr_14 [i_4 + 1] [i_4]))))));
            }
            for (int i_5 = 1; i_5 < 22;i_5 += 1)
            {
                var_23 = (-4100459649 * (((var_6 ? 56 : 37586))));
                arr_24 [i_5] [i_5] [i_0] = ((~(((var_6 + 2147483647) << (188 - 188)))));
                arr_25 [i_0] [i_5] = (((((var_4 ? 0 : var_9))) ? (3 == 37580) : (arr_23 [i_0] [i_2] [i_2])));
            }

            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                arr_29 [i_2] [i_2] = ((788305434 ? 3091675657 : 252));
                arr_30 [i_6] [i_0] [i_2] [i_0] &= ((788305448 ? (arr_2 [i_0] [i_6]) : (arr_2 [i_0] [i_6])));
            }
            for (int i_7 = 2; i_7 < 20;i_7 += 1)
            {
                var_24 = ((-112 * (arr_33 [i_0] [i_2] [i_0])));
                arr_34 [i_7] [i_2] [i_0] = (arr_26 [i_7 + 1] [i_7 + 1] [i_7 + 3] [i_7 - 2]);
                var_25 = (((arr_1 [i_0]) | 4));
                var_26 = ((-(arr_27 [i_7] [i_2] [i_0])));
            }
            arr_35 [i_0] = -37590;
        }
        for (int i_8 = 2; i_8 < 20;i_8 += 1)
        {
            arr_39 [i_8] [i_0] = (!(arr_33 [i_8 + 1] [i_8 + 1] [i_8]));
            var_27 = (max(var_27, ((((arr_32 [i_8 + 1] [i_8 - 1]) ? ((((arr_10 [i_8] [i_0]) || (-32767 - 1)))) : 50)))));
        }
        var_28 = (0 + 0);
        var_29 = (arr_28 [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        var_30 = -4500402287468012993;
        var_31 = (((arr_18 [i_9] [i_9] [i_9] [i_9]) ? (((((arr_19 [i_9] [i_9] [i_9] [i_9]) <= (184 & 1))))) : (arr_23 [i_9] [i_9] [i_9])));
    }
    var_32 &= ((3 ? (min(((135 ? 27978 : var_12)), var_4)) : ((((-13 | 0) > ((var_2 ? var_6 : 4175716412)))))));
    #pragma endscop
}
