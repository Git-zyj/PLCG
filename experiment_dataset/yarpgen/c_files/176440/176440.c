/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_1] = ((((-3 % (arr_1 [i_0] [i_1]))) | (arr_2 [i_1])));
                arr_8 [i_1] = -14382;
                var_17 = ((max((arr_6 [i_0] [i_0]), (arr_0 [5]))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_18 = (max(var_18, (min(var_11, (min(0, -1769262480))))));
                            arr_14 [i_1] [i_1] [i_3] [i_3] = -32767;
                            var_19 = -22;
                        }
                    }
                }
            }
        }
    }
    var_20 ^= (0 / var_10);
    #pragma endscop
}
