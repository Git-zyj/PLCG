/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_10 = -25124;
                        var_11 -= ((~(((((-9223372036854775796 / (-2147483647 - 1)))) ? 188 : var_8))));
                        var_12 = (arr_7 [i_3] [i_2] [i_1] [i_0]);

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_13 ^= -4543451472084809666;
                            var_14 = (max(var_14, (((((!(~1))))))));
                        }
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            arr_14 [1] [i_1] [i_5] [9] [i_3] [3] = ((min((max(8594358286432894602, (arr_9 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]))), var_2)) & ((((~var_5) ? 2147483647 : var_7))));
                            var_15 = (min(var_15, (((((((arr_11 [i_0 + 3] [2] [2] [i_3] [i_3] [i_5] [2]) ? ((var_9 ? -916680491 : (arr_10 [i_0 - 2] [1] [i_2 + 1] [i_3] [i_5]))) : (arr_8 [i_0 - 1])))) ? (((~((max(82, 63164)))))) : ((((((arr_1 [i_3]) ? (arr_3 [i_0 + 3]) : (arr_3 [7])))) ? (min(181, (arr_0 [i_5]))) : var_1)))))));
                        }
                    }
                }
            }
        }
        arr_15 [i_0] = ((var_2 <= (max(82, (arr_7 [9] [i_0] [i_0] [i_0])))));
        arr_16 [i_0] |= (((arr_5 [i_0] [i_0] [i_0]) << ((((((arr_5 [i_0] [i_0] [i_0]) == 2578426353049555754))) & 1349544161))));
        arr_17 [2] [3] = (((-100 && 96) / 32760));
    }
    var_16 = var_6;
    var_17 = (((max((var_5 * var_3), (((var_2 ? 2147483647 : 1718305145))))) << (((!(((var_0 ? -56777503 : var_0))))))));
    #pragma endscop
}
