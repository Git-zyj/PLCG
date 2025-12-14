/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] &= (((~(arr_0 [i_0 - 2] [i_0]))));
        arr_3 [9] = var_0;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_19 = (((~var_12) > (arr_9 [i_1] [i_2])));
            var_20 += ((((min((min(var_14, var_5)), var_1))) == ((4294967295 ? (-9223372036854775807 - 1) : -85))));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_21 = (arr_5 [i_1] [i_3]);
            arr_12 [i_1] = ((arr_4 [i_1] [i_3]) << (((((!0) * var_1)) - 2101554489)));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_22 ^= ((((var_16 >> (15598 - 15564))) <= -3346));
                        arr_19 [i_3] [i_4] = (((arr_4 [i_5] [i_4]) << (min(0, 15598))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 23;i_7 += 1)
                {
                    {
                        arr_26 [i_1] [i_3] [i_6] [i_6] = (2177290083 + ((((min(var_0, (arr_6 [i_1] [i_1])))) ? (((-(arr_9 [18] [i_6])))) : ((var_15 - (arr_7 [i_1]))))));
                        var_23 = (15602 << 1);

                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            var_24 ^= ((!((((arr_25 [i_1] [i_7 - 4] [i_1] [i_1] [i_8] [i_1]) ? (49935 ^ 156) : (min(4611686018427387904, (arr_13 [i_3] [i_3] [i_7] [i_6]))))))));
                            var_25 = var_12;
                            arr_29 [12] [i_3] [12] [i_3] [i_3] [i_3] [11] = ((((8198161993052838849 * ((var_4 ? -87 : var_16))))) ? (min((arr_27 [i_1] [i_7 - 1] [i_7 - 1] [i_7] [i_8]), 0)) : ((((var_10 - 65535) ? var_17 : (arr_27 [i_3] [i_7 - 1] [i_3] [i_3] [i_1])))));
                            var_26 = (min(var_26, ((((((-3346 ? (arr_11 [i_7 - 2] [i_3]) : (arr_21 [i_6] [i_3])))) ? ((min(1129293433, var_12))) : (((((((arr_11 [i_1] [i_1]) >> (var_16 - 16255269424719406051)))) ? (arr_18 [i_6] [i_7 + 1] [i_6]) : var_0))))))));
                        }
                        for (int i_9 = 2; i_9 < 24;i_9 += 1)
                        {
                            arr_33 [i_1] [i_3] [i_6] [i_1] [i_9] [i_6] [i_9] = ((var_4 ? 20945 : ((var_15 + (arr_24 [i_7 + 1] [i_7] [i_7] [i_7 - 1] [i_7])))));
                            var_27 = var_16;
                            var_28 = (max(var_28, (13835058055282163700 - 10)));
                        }
                    }
                }
            }
        }
        arr_34 [1] [i_1] = (arr_32 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
        arr_35 [i_1] = 18446744073709551605;
    }
    var_29 = var_4;
    #pragma endscop
}
