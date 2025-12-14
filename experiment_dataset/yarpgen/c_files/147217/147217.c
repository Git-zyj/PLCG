/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_18 = (arr_3 [i_2] [i_2] [i_2]);
                    arr_7 [i_0] [i_0 - 1] [i_0] [i_0] = (arr_1 [i_0]);
                }
            }
        }

        /* vectorizable */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_19 = -317544477;
            var_20 = var_17;
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                var_21 ^= (min(-675119049872296180, (arr_12 [i_5] [i_4] [i_0])));
                arr_15 [i_0] [i_0] [i_4] [i_5] = (min(((min(((-8255027071420490658 ? (arr_6 [i_0] [i_0] [i_4] [i_0]) : (arr_1 [i_0]))), ((8255027071420490658 ? (arr_1 [i_0]) : var_15))))), (arr_2 [i_0 + 1])));
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                var_22 = (arr_3 [i_6] [i_4] [i_0]);
                var_23 -= (arr_17 [0] [i_0] [i_0 - 1] [i_0 + 1]);
                var_24 ^= (((arr_8 [i_0 - 1] [i_0 + 2]) ? 0 : -112));
                var_25 = 8255027071420490657;
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                arr_21 [i_0 + 2] [10] [i_7] [i_0] = ((((max((arr_9 [i_0 + 2] [i_0] [i_7]), (arr_17 [i_0] [i_0] [i_0 - 1] [i_0])))) ? 8255027071420490658 : (max(8255027071420490658, (arr_17 [i_0] [i_4] [i_4] [i_4])))));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        {
                            var_26 = (((min((arr_5 [i_0] [i_0] [i_8]), (arr_2 [i_8]))) % ((((arr_13 [i_0 + 2] [i_0 - 1]) ? (arr_13 [i_0 + 2] [i_0 + 2]) : (arr_13 [i_0 + 1] [i_0 + 1]))))));
                            var_27 = var_0;
                        }
                    }
                }
                var_28 = var_17;
                var_29 *= (arr_4 [i_0 - 1] [i_4]);
            }
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                var_30 = (!var_10);
                var_31 += (arr_29 [i_0] [i_10]);
            }
            var_32 &= (((((max(49935, 45))) ? ((var_14 ? -8255027071420490658 : (arr_14 [i_0 + 1] [i_4] [i_0] [5]))) : (((min((arr_26 [i_0] [2]), var_2)))))));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 11;i_12 += 1)
                {
                    {
                        arr_37 [10] [i_4] [i_11] [i_12 - 2] [i_0] = (((arr_6 [i_0] [i_11] [i_4] [i_0]) == (max((max(-8255027071420490663, (arr_8 [i_4] [i_4]))), ((max((arr_23 [i_0] [i_0]), (arr_0 [i_0]))))))));
                        arr_38 [i_0] = (min(-108, (max((var_6 <= -8255027071420490686), (max((arr_22 [i_0] [i_4] [i_11] [i_11] [i_4] [i_4]), -8255027071420490641))))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_13 = 1; i_13 < 12;i_13 += 1)
        {
            var_33 = ((arr_41 [i_13]) ? (arr_34 [1] [i_0]) : 0);
            var_34 = (max(var_34, -8255027071420490657));
        }
        arr_43 [i_0 + 2] [i_0] = arr_9 [i_0] [i_0] [i_0 - 1];
    }
    for (int i_14 = 0; i_14 < 11;i_14 += 1) /* same iter space */
    {
        var_35 &= (arr_10 [i_14]);
        arr_46 [i_14] = (max((arr_10 [i_14]), ((~(arr_27 [i_14] [i_14])))));
        var_36 = (max((max(var_3, (arr_2 [i_14]))), var_2));
    }
    for (int i_15 = 0; i_15 < 11;i_15 += 1) /* same iter space */
    {
        var_37 = ((((max((arr_20 [i_15] [i_15]), var_6))) ? ((min(11, 1))) : (((arr_9 [i_15] [i_15] [i_15]) ? -6431 : 18446744073709551585))));
        var_38 = (((((-6431 ? var_13 : (arr_4 [i_15] [i_15])))) ? (((((min((arr_4 [i_15] [i_15]), var_17))) == (min(var_11, 6438199384425909100))))) : (((arr_33 [i_15] [i_15] [i_15] [i_15]) ? var_12 : (arr_30 [i_15] [i_15] [i_15] [i_15])))));
    }
    var_39 = ((max(-6431, var_5)));
    #pragma endscop
}
