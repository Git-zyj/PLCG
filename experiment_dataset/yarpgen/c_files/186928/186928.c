/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    var_11 = ((+((((((-1444430443 + 2147483647) >> (4294967289 - 4294967274)))) ? (!28120) : ((var_4 ? var_2 : 8262))))));
    var_12 = var_0;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (((min((arr_0 [i_0] [i_0]), ((var_0 ? var_4 : var_0))))) || (((((-(arr_0 [i_0] [i_0]))) + var_9))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
        {
            var_13 -= (max(var_6, (((65535 != 1309089047) * (-26917 * var_5)))));
            var_14 = ((((-28121 ? ((26917 ? var_2 : var_1)) : (-1309089073 | var_1))) != (~1920)));
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    {
                        var_15 ^= var_9;
                        var_16 ^= var_7;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {

                        for (int i_7 = 3; i_7 < 13;i_7 += 1)
                        {
                            var_17 = (min(var_17, (((8262 | ((1 ? 26917 : -1309089073)))))));
                            arr_20 [i_5] [i_6] [i_2] [i_2] [i_2] [i_0] = var_7;
                        }
                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 13;i_8 += 1)
                        {
                            var_18 = (min(var_18, -1309089039));
                            arr_23 [i_2] [i_2] [i_5] [i_6] = var_3;
                            arr_24 [i_0] [i_2] [i_5] [i_2] [i_8] = (!449400315);
                            arr_25 [i_2] [i_8 - 1] = 35046933135360;
                        }
                        var_19 += ((((max(0, 63616))) ? (~-28120) : (arr_4 [i_0])));
                    }
                }
            }

            for (int i_9 = 0; i_9 < 0;i_9 += 1)
            {
                var_20 = ((!((((var_0 - 1) >> (((arr_11 [i_0] [i_0] [i_0]) - 132)))))));

                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    arr_33 [i_0] [i_2] = var_4;
                    var_21 &= ((((((((var_1 ? 32 : var_9))) ? (arr_21 [i_9 + 1] [11] [i_9] [i_9 + 1]) : (28105 ^ var_5)))) ? (((16401 | 132) * var_3)) : (!var_3)));
                }
            }
        }
        for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
        {
            var_22 |= 402653184;
            arr_37 [i_0] [i_0] = (max(-937241155, (arr_21 [2] [2] [i_0] [i_0])));
            var_23 -= (((((-((var_8 ? var_3 : var_7))))) ? var_3 : ((~(min(1290538580, -429447207))))));
        }
        for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
        {
            var_24 &= ((((var_8 ? 15900058402054333159 : var_2)) & (var_6 == var_0)));
            var_25 = 20;
        }
        var_26 = (min(var_8, -16402));
    }
    for (int i_13 = 0; i_13 < 10;i_13 += 1)
    {
        var_27 = ((min(1, (12584866530885469007 % var_3))));
        /* LoopNest 2 */
        for (int i_14 = 1; i_14 < 9;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 10;i_15 += 1)
            {
                {
                    var_28 = (max(var_28, (((+(min(((3394161180 ? (arr_3 [i_15] [i_15]) : var_9)), (arr_22 [i_15]))))))));

                    for (int i_16 = 0; i_16 < 10;i_16 += 1)
                    {
                        var_29 |= (var_4 * (((arr_18 [i_14 - 1] [i_14 + 1] [i_14 - 1] [i_14 + 1]) | (arr_18 [i_14 - 1] [i_14 + 1] [i_14 - 1] [i_14 + 1]))));
                        var_30 = min((arr_22 [i_14 - 1]), (arr_22 [i_14 + 1]));
                        var_31 *= var_2;
                        var_32 = (max(var_32, ((min(119, 65535)))));
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 1; i_17 < 6;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 10;i_18 += 1)
                        {
                            {
                                var_33 = 28105;
                                var_34 = (arr_39 [i_14]);
                            }
                        }
                    }
                }
            }
        }
        var_35 = (((((arr_7 [i_13] [i_13]) & 0)) * (((1309089039 >= (arr_41 [i_13]))))));
        var_36 *= ((~(max((arr_5 [i_13] [i_13]), var_6))));
    }
    #pragma endscop
}
