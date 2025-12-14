/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_8;

    for (int i_0 = 3; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_17 = var_5;
        var_18 &= var_12;
        arr_3 [i_0] = ((((((arr_1 [i_0 - 3]) - (arr_2 [i_0] [3])))) ? (var_8 >= -2147483635) : -107));
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_19 = var_9;
                            arr_19 [i_1 - 3] [3] [i_3] [4] [i_5] [i_5] [i_4] = (((((arr_9 [i_1] [i_1]) ? ((var_9 ^ (arr_10 [i_1] [i_1] [7] [i_1]))) : ((((arr_8 [i_1] [i_1] [6]) ? 235 : (arr_12 [i_1] [9] [i_1] [9] [i_5] [1])))))) << 2));
                            var_20 *= 84;
                        }
                        arr_20 [1] [i_2 + 1] [i_4] [i_4] [8] [i_4] = ((~(arr_1 [i_1 + 2])));
                        var_21 *= (((((arr_10 [i_1] [i_1] [i_1] [i_1]) ? (arr_13 [i_4] [i_4] [6] [6] [i_2] [i_1]) : (min(2, 65535)))) % var_7));
                    }
                }
            }
        }
        var_22 = (arr_10 [i_1] [i_1] [i_1] [i_1]);
        var_23 = (((arr_9 [i_1] [i_1]) ? (arr_4 [i_1]) : ((((((arr_5 [i_1 - 2] [i_1]) % 133))) ? (((((arr_10 [0] [i_1 - 3] [i_1] [0]) || var_5)))) : (arr_11 [i_1] [i_1] [i_1] [i_1])))));
    }
    #pragma endscop
}
