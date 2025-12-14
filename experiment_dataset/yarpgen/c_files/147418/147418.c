/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = 0;
        var_16 = var_9;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_1] [i_1] = var_13;

                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        arr_15 [i_1] [i_2] [i_2] = ((var_15 ? (((var_8 ^ ((5981511670476059407 ? 20007 : var_1))))) : ((~(~var_2)))));
                        var_17 = (max(var_17, (((+((min((arr_10 [1] [15] [1]), var_10))))))));
                    }
                }
            }
        }
        var_18 = var_14;
    }
    for (int i_5 = 1; i_5 < 10;i_5 += 1)
    {
        var_19 ^= ((var_5 ? (((1 ? (((arr_9 [14] [i_5]) ? (arr_6 [1] [1]) : var_9)) : var_12))) : var_2));

        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            arr_23 [2] = var_6;
            var_20 = (max(var_20, -5981511670476059387));
            var_21 = (max(var_21, (((-((((((-1 + 2147483647) >> (95 - 87)))) + (max(15, (arr_8 [i_5] [i_5] [i_5]))))))))));
        }
        for (int i_7 = 1; i_7 < 8;i_7 += 1)
        {
            arr_26 [i_5] [i_7] = ((+((4 ? (arr_16 [i_5 + 1]) : var_6))));
            arr_27 [i_5 + 1] [i_5 + 1] = ((var_2 - (arr_24 [i_5] [i_7])));
        }
        for (int i_8 = 3; i_8 < 9;i_8 += 1)
        {
            var_22 *= (((((~1) + 2147483647)) << ((((2251799811588096 << (5981511670476059410 - 5981511670476059406)))))));
            arr_32 [i_5 + 1] [i_8] = ((~((~(arr_21 [i_8 - 3] [i_8 - 1])))));
            /* LoopNest 2 */
            for (int i_9 = 4; i_9 < 9;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    {
                        arr_40 [i_5] [i_5] [i_9 - 2] [i_10] = ((var_9 - (min((-5981511670476059411 <= 128), (30 % 1)))));
                        arr_41 [i_5] [5] [i_10] = ((~((((arr_25 [i_5]) <= 1239006426)))));
                    }
                }
            }
        }
    }
    var_23 = (-32767 - 1);
    var_24 = ((((~(0 <= var_9)))) ? var_15 : (var_2 - var_6));
    var_25 = 24576;
    var_26 = (max(var_26, var_11));
    #pragma endscop
}
