/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_8 [6] [6] [0] [i_3] [10] [10] = (arr_1 [i_2 - 1]);
                        var_19 = (((((((min(7, 28))) ? (min(-127, 7)) : (((126 ? (arr_7 [13] [i_1] [i_2 + 1] [i_3]) : 105)))))) ? 200 : (arr_3 [i_0] [i_2])));
                    }
                }
            }
        }
        var_20 = (max(var_20, ((((((((arr_6 [i_0] [i_0 - 1] [12] [i_0 - 1] [i_0] [12]) ? (arr_6 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [3] [i_0]) : 131071))) ? ((673981212 ? (arr_0 [i_0 - 1] [i_0]) : 18269814231937073220)) : ((0 ? (-2147483647 - 1) : 14390969297130607864))))))));
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 13;i_4 += 1) /* same iter space */
    {
        var_21 = -2041923199;
        var_22 |= (((arr_6 [i_4 - 2] [8] [i_4] [i_4 - 1] [i_4 + 1] [8]) ? (arr_6 [i_4 - 1] [i_4 - 1] [i_4 - 2] [i_4 + 1] [i_4] [i_4]) : (arr_5 [i_4 - 2] [2] [i_4 - 1])));
        arr_11 [10] [i_4 + 1] = ((20 ? (arr_4 [i_4 + 1] [i_4] [i_4 + 1]) : (arr_4 [i_4 + 1] [9] [i_4])));
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                {
                    var_23 = (max(var_23, ((((((114 ? (arr_6 [3] [i_4 - 1] [4] [i_5 - 4] [3] [i_6]) : (arr_5 [i_6] [2] [i_6])))) ? (((arr_6 [i_4] [9] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 - 2]) ? -127 : (arr_15 [i_5 + 2]))) : ((63999 ? (arr_5 [i_4] [i_4 + 1] [i_4]) : (arr_7 [i_4 - 2] [i_4] [i_4] [i_4]))))))));
                    var_24 = (min(var_24, 127));
                }
            }
        }
    }
    var_25 = (max(45719, 18269814231937073215));
    #pragma endscop
}
