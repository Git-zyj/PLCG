/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((max(-var_6, ((var_1 ? 1 : (min(-1016853224502116459, var_10)))))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] = ((((~(arr_3 [i_0 + 1] [i_2 - 2])))) ? (var_12 ^ 1016853224502116481) : (max(var_12, (arr_1 [i_0 + 2]))));
                    var_15 = ((1016853224502116459 ? (min((!1016853224502116459), ((508 ? 1016853224502116481 : -32595)))) : var_13));
                    var_16 = 8807916887256289614;
                    var_17 = var_7;
                }
            }
        }
    }
    var_18 = var_3;

    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            arr_14 [i_3] [16] [i_3] = (((((268435456 ? 1016853224502116506 : 147))) ? (((arr_8 [i_3] [i_4]) / var_7)) : ((((var_9 >= (arr_8 [i_3] [i_4])))))));

            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                var_19 = (var_6 * var_12);
                var_20 &= 70;
            }
            for (int i_6 = 1; i_6 < 16;i_6 += 1)
            {
                var_21 = var_13;
                var_22 = 11;

                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    arr_24 [i_3] = var_1;
                    arr_25 [1] &= 244;
                    var_23 = (arr_2 [i_3] [i_3]);
                    arr_26 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = (!77);
                    var_24 = var_10;
                }
                for (int i_8 = 2; i_8 < 15;i_8 += 1)
                {
                    var_25 = ((((2265445916 << (var_7 - 190692073))) >> (2252251234 <= 244)));
                    var_26 = (((65535 ? var_7 : var_8)));
                    var_27 = -var_1;
                    arr_29 [i_3] [3] [i_3] = -2044279821;
                }
            }
            arr_30 [i_3] [i_3] [i_3] = (((arr_9 [i_3]) < var_2));
        }
        arr_31 [i_3] = (((((var_7 ^ (!18446744073709551615)))) ? ((-1016853224502116474 ? (arr_20 [i_3] [14] [i_3] [14]) : (min(-1016853224502116507, 1016853224502116463)))) : ((var_5 ? (((-2147483647 - 1) / 1016853224502116463)) : (arr_10 [i_3] [i_3] [i_3])))));
        arr_32 [i_3] [i_3] = (-2147483647 - 1);
        var_28 = (min((~4611686018427387904), (arr_19 [i_3] [i_3] [i_3] [16])));
        arr_33 [i_3] = (((var_10 * 18446744073709551615) == ((((!(arr_7 [i_3] [i_3])))))));
    }
    var_29 = (562949953419264 > 18446744073709551606);
    #pragma endscop
}
