/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_4 + 2147483647) << (-17 - 1)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = (arr_2 [i_0]);
        var_17 += (arr_1 [i_0]);
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        var_18 = ((!(((~(arr_7 [i_1] [i_1 + 1]))))));
        arr_8 [10] |= (((arr_2 [i_1]) % (((-(arr_6 [i_1]))))));
        var_19 *= (arr_2 [i_1]);

        /* vectorizable */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_20 += (!32767);
            arr_11 [i_1] [i_1] = ((-((-(arr_1 [i_2])))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_21 = (arr_9 [i_1] [2]);
            var_22 = ((!(((17530364724719597292 ? 1 : 0)))));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            arr_18 [i_1] [i_1 - 1] [i_1] = arr_15 [12] [11] [i_1];
            var_23 = ((~(arr_2 [i_1])));
            /* LoopNest 2 */
            for (int i_5 = 3; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    {
                        arr_23 [i_1] [i_5] [i_1] [i_1] = (arr_1 [7]);
                        var_24 = (min(var_24, ((((((~var_12) >> (((arr_21 [i_1] [i_4] [i_5] [i_6]) + 19477)))) >> ((((~(arr_3 [i_4]))) + 52)))))));
                    }
                }
            }
            var_25 = (((arr_12 [i_4] [i_1] [i_1]) ^ ((((max(916379348989954323, 0))) ? (min(24, 916379348989954304)) : (arr_19 [i_1] [2])))));
            arr_24 [i_1] [i_1] = (arr_22 [i_1] [14] [i_4]);
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                {
                    var_26 = 56455;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            {
                                var_27 = (arr_6 [3]);
                                arr_37 [1] [1] [5] [i_8] [1] [i_1] [2] = arr_7 [i_1] [i_7];
                            }
                        }
                    }
                    arr_38 [i_8] [i_1] = ((((((arr_1 [i_7]) ? (arr_12 [1] [i_7] [4]) : ((-(arr_13 [i_7] [i_1])))))) ? 1 : ((+(((arr_35 [i_1] [i_1] [10] [1] [i_8] [i_8]) / (arr_7 [i_1] [i_7])))))));
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 18;i_11 += 1)
    {
        var_28 = (arr_19 [i_11] [i_11]);
        arr_41 [i_11] [11] = (min(104, ((15556080305510623734 ? 5888745325152463662 : 0))));
    }
    var_29 = (max(var_29, ((min(var_9, 1942)))));
    #pragma endscop
}
