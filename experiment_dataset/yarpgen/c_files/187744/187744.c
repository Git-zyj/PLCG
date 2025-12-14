/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(((104 ? 0 : var_8)), var_13));
    var_17 = (((4294967295 | 4) ? (~var_6) : (!11342)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_1] = 164;
                var_18 -= (arr_2 [i_0]);
                arr_6 [i_1] [22] [22] = var_13;
                var_19 |= var_8;
                arr_7 [i_0] = (arr_4 [i_1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 10;i_3 += 1)
        {
            {
                var_20 -= ((((1 ? -32 : 39))) >= 3676910629352006366);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_21 ^= ((-(((!(((285419193 ? 16 : (arr_14 [i_2] [i_2] [i_2])))))))));
                            arr_18 [7] [i_3 - 3] [i_2] = (((((-122 ? 877 : 144))) ? ((91 ? (arr_15 [i_3 + 1]) : (((min(73, 1)))))) : (((((min(-2400714263701924321, var_13))) ? ((~(arr_3 [i_2] [i_2] [i_2]))) : (arr_16 [6] [6] [i_4] [i_4] [i_5] [i_5 + 1]))))));
                            var_22 = (arr_9 [i_4] [i_3 - 3]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
