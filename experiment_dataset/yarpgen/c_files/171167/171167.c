/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((max(-3, var_8))) ? var_12 : (((-4 | ((min(var_2, var_4))))))));
    var_14 += (max(((min(var_6, var_4))), (((1835433447275646313 + 11349868175688074175) ? ((16380 ? var_9 : -1835433447275646305)) : (min(var_9, 4051))))));

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_2 [12] = (((11349868175688074175 << 0) ^ (((-((-(arr_1 [i_0] [i_0]))))))));
        var_15 = (11349868175688074175 + 61440);
        var_16 = (((((-(((arr_0 [12]) ? var_3 : (arr_0 [i_0])))))) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_17 = (1064466640 >= -4294967290);
        arr_6 [i_1] = (((8192 ? (arr_1 [i_1] [i_1]) : (((((arr_3 [i_1]) > 1)))))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = 2453;
        var_18 = ((((0 ? 75 : -1984989158))) ? ((min(var_1, ((2147483647 ? (arr_7 [i_2]) : 56))))) : (min(var_6, var_10)));

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {

            /* vectorizable */
            for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] = (-24265 / -2453);
                            arr_22 [i_4] [i_4] [i_4] = (((((-(arr_15 [4] [i_3] [i_4] [i_5] [13] [i_3])))) || (((-(arr_15 [i_2] [i_3] [i_3] [i_4] [i_5] [i_6]))))));
                            var_19 = (((arr_15 [i_2] [i_3] [i_4] [7] [i_6] [i_5]) ? var_3 : (arr_13 [i_4])));
                            arr_23 [i_2] [i_3] [i_3] [i_4] [i_4] [i_6] [10] = -64;
                            var_20 = (arr_4 [i_6]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_21 -= (arr_15 [11] [i_3] [i_4] [i_7] [i_7] [i_8]);
                            var_22 ^= -3;
                            var_23 = (min(var_23, (((-(arr_3 [i_4]))))));
                        }
                    }
                }
                var_24 = (11349868175688074191 - (((arr_13 [i_2]) / 14258395530356960016)));
            }
            for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
            {
                var_25 = (min(var_25, -4));
                var_26 = (max(var_26, -3901749102927518562));
            }
            var_27 -= (((min((((arr_19 [i_2] [i_3] [i_3]) | 2147483647)), -2440))) ? (arr_9 [i_2]) : 10);
            var_28 |= ((((((165 ? (arr_1 [i_2] [i_3]) : (arr_4 [i_2]))))) ? ((-(min((arr_16 [i_3]), (arr_15 [i_2] [i_3] [i_3] [i_2] [i_2] [i_3]))))) : (max((~26), -var_11))));
        }
    }
    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {
        arr_33 [i_10] = ((-((-(arr_31 [i_10] [i_10])))));
        var_29 = (max(var_29, ((min(((var_4 | (arr_5 [i_10]))), (((((((arr_1 [i_10] [i_10]) ? 0 : (arr_0 [i_10])))) ? -1279172363 : (arr_3 [i_10])))))))));

        for (int i_11 = 1; i_11 < 19;i_11 += 1) /* same iter space */
        {
            var_30 = var_8;
            var_31 = ((-(((arr_34 [i_11 - 1] [i_11 + 1] [i_11 - 1]) ? 18446744073709551615 : (((4194272 - (arr_35 [i_10]))))))));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 20;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 19;i_13 += 1)
                {
                    {
                        var_32 |= (((-((var_7 ? (arr_1 [i_12] [i_13]) : var_10)))) <= -65510);
                        var_33 = (max(var_33, 31744));
                    }
                }
            }
            arr_40 [i_10] [i_11] = (((arr_31 [i_10] [i_10]) << (((1397349180 <= (arr_31 [i_10] [i_11 - 1]))))));
            /* LoopNest 2 */
            for (int i_14 = 3; i_14 < 18;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 20;i_15 += 1)
                {
                    {
                        arr_48 [i_14 + 2] [i_11] [i_10] [i_15] [16] = var_1;
                        var_34 = (min((min(1279172369, (arr_47 [i_11] [i_11] [3] [i_11] [i_14 - 2] [i_14 - 2]))), (arr_31 [i_10] [i_10])));
                    }
                }
            }
        }
        for (int i_16 = 1; i_16 < 19;i_16 += 1) /* same iter space */
        {
            var_35 = (max(var_35, (arr_49 [i_10] [i_10])));
            var_36 = ((127 ? ((min(((min(var_0, 253))), -93))) : ((0 ? (((64 ? -22 : var_12))) : ((41249 ? 14 : 1279172369))))));
        }
        for (int i_17 = 1; i_17 < 19;i_17 += 1) /* same iter space */
        {
            var_37 -= (((((-(arr_37 [i_10])))) ? (((~var_6) << (((((~41271) + 41323)) - 51)))) : var_3));
            var_38 = (min(7072270764508998973, (((-(arr_50 [i_17 + 1] [i_10]))))));
        }
    }
    var_39 = (min(var_39, var_0));
    var_40 = ((var_8 || 131071) ? ((max(var_5, -103))) : var_8);
    #pragma endscop
}
