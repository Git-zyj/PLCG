/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_5 == 121) ^ var_8)) % 1));
    var_17 ^= 121;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_18 = (arr_1 [i_0] [i_1]);
            arr_4 [i_0] [i_1] [i_1] = (arr_2 [i_1]);
            var_19 = (max(var_19, ((7265930774232943144 | (arr_3 [i_0] [i_1] [i_1])))));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {
            var_20 = (arr_7 [i_0] [i_0] [i_2]);
            var_21 -= (((((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [i_2]) : (arr_6 [i_0] [i_2] [i_2])))) ? (arr_7 [i_0] [i_0] [12]) : ((-(arr_0 [11] [23]))));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
        {
            arr_12 [1] [22] = ((((arr_10 [i_0] [i_3] [1]) * var_8)));

            for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
            {
                var_22 |= (arr_7 [i_0] [i_3] [2]);
                var_23 = ((119 << (((((arr_2 [i_4]) + (arr_10 [i_0] [i_3] [2]))) + 3989))));
            }
            for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
            {
                var_24 *= 122;
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_25 = (arr_17 [24] [i_7] [i_6 + 1]);
                            var_26 = arr_23 [i_6 + 2] [13] [i_6] [i_6] [i_7];
                        }
                    }
                }
                var_27 = ((((arr_0 [i_0] [i_3]) ? (arr_3 [23] [23] [i_5]) : 1)));
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                var_28 = -115;
                var_29 = (((arr_26 [i_0] [22] [1]) / (arr_26 [i_0] [i_3] [i_8])));
                var_30 = (((arr_18 [i_8] [i_8] [i_8] [23]) && 28539));
            }
        }
        var_31 -= ((~(((arr_11 [11] [11] [11]) | var_7))));
        var_32 = (((arr_9 [13] [i_0] [i_0]) ? 134 : ((133 ? var_3 : (arr_0 [i_0] [i_0])))));
        arr_27 [9] = 4203028449;
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
    {
        var_33 = ((!(arr_1 [i_9] [i_9])));
        var_34 |= var_10;
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
    {
        var_35 = ((!(arr_5 [i_10])));
        var_36 = (min(var_36, (arr_15 [i_10] [i_10])));
    }
    #pragma endscop
}
