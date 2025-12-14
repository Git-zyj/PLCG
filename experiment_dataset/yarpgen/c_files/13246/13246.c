/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 += ((-(1 - var_6)));
                                var_13 = (((((4 ? (((arr_1 [i_0]) ^ 84)) : -29168))) ? 1 : 1));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_14 = (min(var_14, 1));
                                var_15 = (!var_4);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {

                            for (int i_10 = 3; i_10 < 21;i_10 += 1)
                            {
                                arr_26 [i_1] [i_1] [i_1] [i_1] = var_1;
                                var_16 = (((((1 ? -39 : 246))) ? (~165) : (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1])));
                                arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] = (((((((1 >= (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (((arr_24 [i_1] [i_1] [i_1] [i_1] [i_1]) ? 1 : 1)) : 1))) ? -var_0 : ((1 ? (arr_24 [i_10 - 1] [i_10 + 2] [i_1] [i_10] [i_1]) : 6))));
                                arr_28 [i_10] [i_10] [i_10] [i_10] [i_1] = var_6;
                                var_17 = (min(var_17, ((((((arr_9 [i_0] [i_0] [i_0] [i_0]) ? (((arr_21 [i_8] [i_0] [i_0]) - 116)) : (-32274 - var_4))) * (((!(arr_6 [i_0] [i_0] [i_8] [i_8] [2])))))))));
                            }
                            arr_29 [i_1] [i_9] [i_9] [i_9] [i_9] = ((((1 ? 1 : 32744)) / (arr_15 [i_8 - 1] [i_8 + 1] [1] [i_8 + 1] [i_8 - 1])));
                            arr_30 [i_0] [i_0] [i_0] [i_0] [14] |= (((((-32755 ? (1 - -32274) : -27582))) ? 0 : -21728));
                        }
                    }
                }
            }
        }
    }

    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        var_18 += 1;
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 1;i_13 += 1)
            {
                {
                    var_19 = ((((-((var_0 ? -29069 : 23215)))) ^ 94));
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 23;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            {
                                var_20 = ((1 ? 17468 : -21));
                                var_21 = (1 || -26);
                                var_22 = ((66 ? -32283 : 172));
                                var_23 = ((+(((arr_34 [i_14 + 1]) ? (145 + 1) : (((var_8 + 2147483647) >> (var_11 - 103)))))));
                            }
                        }
                    }
                    var_24 = ((((((arr_37 [i_13] [i_13 - 1] [i_13 - 1] [i_13]) * 32756))) ? (arr_40 [i_13] [i_13] [18] [i_13] [i_13 - 1] [i_12] [i_13 - 1]) : 1));
                    arr_43 [i_12] [i_12] [i_12] = (arr_35 [i_13] [i_13] [i_13]);
                    arr_44 [i_11] [i_11] = 1;
                }
            }
        }
        var_25 = (((((~(var_5 ^ var_2)))) ? 43 : ((((-23375 ? 24305 : 62))))));

        for (int i_16 = 2; i_16 < 23;i_16 += 1)
        {
            var_26 = (min(var_26, (((~((var_11 >> (((arr_42 [i_16 + 1] [i_16]) - 25)))))))));
            var_27 = ((var_3 >= ((((arr_34 [i_16 - 1]) >= 32744)))));
            var_28 = ((((arr_39 [i_11] [i_11] [18] [i_11]) || (var_5 / -25393))));
        }
        for (int i_17 = 1; i_17 < 1;i_17 += 1)
        {
            var_29 *= 25776;
            var_30 = ((-24305 ? -90 : (1 / 47)));
        }
        /* vectorizable */
        for (int i_18 = 0; i_18 < 24;i_18 += 1)
        {
            arr_53 [i_18] = var_6;
            var_31 = (max(var_31, (((199 ? (arr_36 [i_11]) : (arr_36 [1]))))));
        }
        for (int i_19 = 0; i_19 < 0;i_19 += 1)
        {
            var_32 = (max(var_32, var_5));
            var_33 = 239;
            arr_58 [i_11] [i_11] = ((11 / (-24306 - -27943)));
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 1;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 24;i_21 += 1)
                {
                    {
                        arr_63 [i_11] [i_11] [i_11] [i_20] = ((!(!-26)));
                        var_34 = 91;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_22 = 0; i_22 < 13;i_22 += 1)
    {

        for (int i_23 = 0; i_23 < 1;i_23 += 1)
        {
            var_35 = ((!(arr_17 [i_22] [i_23] [i_23] [i_23] [i_23])));
            var_36 = (min(var_36, 24410));
            var_37 = 24423;
            arr_69 [i_22] = (((arr_67 [i_23] [i_23] [i_23]) ? var_3 : 127));
        }
        var_38 -= ((var_2 ? -24411 : 1));
        /* LoopNest 2 */
        for (int i_24 = 3; i_24 < 11;i_24 += 1)
        {
            for (int i_25 = 0; i_25 < 1;i_25 += 1)
            {
                {
                    var_39 = var_5;
                    var_40 = (max(var_40, ((((239 < 17) ? ((32744 ? 46 : 32756)) : -24409)))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_26 = 0; i_26 < 1;i_26 += 1)
    {
        arr_78 [i_26] [i_26] = ((var_11 || (arr_32 [i_26])));
        /* LoopNest 2 */
        for (int i_27 = 0; i_27 < 1;i_27 += 1)
        {
            for (int i_28 = 0; i_28 < 22;i_28 += 1)
            {
                {
                    arr_85 [i_26] [i_26] [i_26] [i_26] = var_11;
                    var_41 = (arr_21 [i_26] [i_26] [i_26]);
                }
            }
        }
        arr_86 [i_26] [i_26] = (arr_11 [i_26] [i_26] [i_26] [i_26] [i_26]);
    }
    var_42 = var_10;
    #pragma endscop
}
