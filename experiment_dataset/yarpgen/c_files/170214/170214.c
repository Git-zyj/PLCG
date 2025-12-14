/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 5106975014407612555;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 *= (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_4 [i_1] [i_0] = ((-(arr_3 [i_1] [i_0] [i_0])));
            arr_5 [i_0] [i_1] [10] = ((!((!(arr_0 [i_0])))));
            var_19 = ((!(((-(arr_2 [i_1]))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [1] [1] [11] = ((~((~(arr_2 [i_1])))));
                        var_20 = (min(var_20, (arr_9 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3])));
                    }
                }
            }
            var_21 = (max(var_21, (arr_7 [i_0] [9] [9] [1])));
        }
        var_22 *= (arr_10 [i_0] [i_0] [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 14;i_6 += 1)
                {
                    {
                        var_23 &= (arr_1 [1]);
                        var_24 = (arr_17 [i_6] [i_4] [1] [3]);
                    }
                }
            }
        }
        arr_20 [i_0] [i_0] = ((-(((!(arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        var_25 &= (max((arr_21 [i_7] [i_7]), (arr_22 [i_7] [16])));
        arr_24 [12] = (-((-(((!(arr_21 [i_7] [1])))))));
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            {
                var_26 = min((min((min((arr_27 [i_8]), (arr_8 [i_9] [i_9] [i_8] [i_8]))), (min(5106975014407612546, 5106975014407612546)))), ((((-(arr_16 [i_9]))))));
                var_27 = (min(var_27, (arr_21 [i_8] [i_8])));
                var_28 &= (~1);
                /* LoopNest 2 */
                for (int i_10 = 4; i_10 < 9;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        {
                            var_29 = (max(var_29, (arr_25 [i_9])));
                            var_30 *= -1;
                            arr_37 [i_8] [i_9] [i_10 + 2] [6] [i_9] [i_8] |= (arr_10 [i_8] [i_9] [i_8] [10]);
                            var_31 = (--4529);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
