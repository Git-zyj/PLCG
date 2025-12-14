/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -16384;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [7] [i_0] [i_2] [5] = ((((((var_8 ? var_2 : (arr_2 [i_2])))) ? (!255) : 16639484478395409927)));

                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] = min(-36, ((((((-93 + 2147483647) << (1807259595314141689 - 1807259595314141689)))) ? 177 : (((arr_0 [i_0]) ? (arr_10 [i_0] [i_0]) : -93)))));
                        arr_12 [i_1] [9] [i_0] [i_0] = ((~((2147483647 ? (arr_4 [i_0]) : (arr_4 [i_0])))));
                    }
                    var_18 -= ((-((~(~1807259595314141689)))));
                }
            }
        }
    }
    #pragma endscop
}
