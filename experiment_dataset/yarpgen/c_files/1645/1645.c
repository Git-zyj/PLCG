/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((((var_1 == var_6) <= var_0)))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [7] = (~-var_1);
        var_19 = 1400043110;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_5 [i_1] [i_1] &= ((-(arr_3 [i_1])));
        var_20 = (~1843280200);

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_21 = (~var_5);

            for (int i_3 = 2; i_3 < 12;i_3 += 1)
            {
                var_22 = (min(var_22, (~var_2)));
                arr_12 [i_1] [i_2] [i_2] = (!var_9);

                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    arr_15 [i_1] [i_1] [i_1] [i_1] = (~415148650);
                    var_23 += ((((arr_14 [i_1] [i_2] [i_2] [i_3 + 3] [i_4]) / var_13)));
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                {
                    arr_19 [i_1] [i_2] [i_3] [i_3] [i_5] [i_5] = ((!(!1235754948786143378)));
                    arr_20 [i_5] [i_5] [i_1] [i_2] [i_2] [i_1] = 71;
                    var_24 ^= (((82 ? 1 : 1)));
                    var_25 = 5233300264937609767;
                    arr_21 [15] [i_3] [14] = 173;
                }
                for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                {
                    arr_26 [i_1] [i_2] [i_3] [i_6] = (((~var_3) ? (((-(var_4 << 14)))) : (~var_7)));
                    arr_27 [i_1] [i_1] = (((~var_12) / (((((((var_4 ? var_5 : (arr_4 [i_1])))) || var_6))))));
                }
                var_26 = -1703149312;
                var_27 = (!var_7);
            }
            arr_28 [i_1] [i_2] = ((!((25066 != ((-1843280200 ? 17300151166561545158 : var_0))))));
            var_28 = (arr_17 [i_1] [i_2]);
        }
        /* vectorizable */
        for (int i_7 = 4; i_7 < 14;i_7 += 1)
        {
            var_29 = -1843280202;
            var_30 |= (var_4 <= 1);
            var_31 = ((!(((~(arr_10 [i_1] [i_1] [i_1] [i_7]))))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            var_32 ^= (145 ^ 32154);
            var_33 = 1;
            arr_36 [i_8] = (var_5 ? var_16 : var_17);
            var_34 = (arr_23 [i_1] [i_1] [i_1] [i_8]);
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 15;i_10 += 1)
            {
                {
                    var_35 = (((arr_11 [i_10 - 2]) + ((((arr_39 [i_10 + 1] [i_10 - 2] [i_10 - 2]) <= 1071742674)))));
                    var_36 = ((+(((~var_1) ? (!var_6) : ((var_4 ? -331598775 : var_3))))));
                }
            }
        }
    }
    #pragma endscop
}
