/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~var_7);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_11 [7] [i_1] [7] [i_3] [i_3] &= ((-((min(15926, 48)))));
                        arr_12 [i_0] [i_1] [i_1] [i_1] [i_3] = (((arr_10 [i_0] [i_1] [i_2] [i_3] [i_3]) ? (((((111 ? (arr_5 [i_2]) : 121))) ? ((127 ? (arr_10 [i_0] [i_1] [1] [13] [8]) : var_1)) : var_7)) : (arr_10 [5] [i_1] [1] [i_3] [i_3])));
                    }
                    /* vectorizable */
                    for (int i_4 = 4; i_4 < 14;i_4 += 1) /* same iter space */
                    {
                        var_14 += (((arr_4 [i_4 - 1] [i_4 - 3] [i_2] [9]) ? (arr_4 [i_4 + 2] [i_4 - 4] [16] [i_1]) : var_4));
                        var_15 = (min(var_15, (--119)));
                        var_16 |= (arr_5 [i_2]);
                        arr_15 [i_1] [i_4] [i_2] [i_4] [i_0] = 8191;
                    }
                    for (int i_5 = 4; i_5 < 14;i_5 += 1) /* same iter space */
                    {
                        var_17 = (min(var_17, ((min(((-43 ? -81 : 252)), ((min(1, 203))))))));
                        var_18 *= arr_0 [10];
                    }
                    var_19 ^= ((((((arr_13 [i_0] [4] [i_1] [i_2]) - ((-(arr_5 [i_1])))))) ? (-97 + 33031) : -2955830543));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 4; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                {
                    var_20 = (max(var_20, (((+((((((arr_14 [i_7]) ? (arr_23 [i_6] [i_6] [i_8]) : 1))) ? -26570 : ((var_11 ? 100 : var_2)))))))));
                    arr_26 [i_7] = (min(var_9, (min(var_7, (arr_7 [12] [12] [i_7 - 3] [i_7 - 3])))));
                }
            }
        }
    }
    #pragma endscop
}
