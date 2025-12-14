/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_10 = (((arr_1 [i_0 - 1]) ? 6720328664277634429 : ((((arr_0 [i_0 - 3]) + -75)))));
        var_11 = ((!(arr_0 [i_0 - 2])));
        var_12 = -288004381;
    }
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            {
                arr_7 [i_1] [i_2] = (max((!var_2), ((2048 ^ (arr_2 [i_1 - 2])))));
                arr_8 [i_2] = ((4069791209 >> (249 - 201)));
                var_13 = (min(var_13, (min(var_8, (((!(arr_3 [i_2 + 1]))))))));
                arr_9 [i_2] [i_2] [i_1] = (arr_6 [i_1] [i_2] [i_1]);
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_14 = ((!(((((max(var_1, 12288))) ? -2048 : (arr_15 [i_4] [i_3] [i_1]))))));
                            var_15 = (((((~(arr_3 [i_1]))))));
                            arr_17 [10] [i_2] [i_2 - 1] [10] [i_3] = (~((-((max(1, 20))))));
                            var_16 ^= ((104 ? 1888052122 : 65535));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
