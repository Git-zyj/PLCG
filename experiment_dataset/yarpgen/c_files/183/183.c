/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    var_16 = (max(var_16, (((((((var_1 ? var_11 : var_2)))) ? var_1 : (((min(var_10, var_12)))))))));
    var_17 = ((min(256759622, 27853)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_2] [i_0] [i_0] = (--5531879188960799610);
                            var_18 = (max((((arr_9 [i_2] [i_1] [i_2] [i_3] [i_1]) ? -18 : (arr_8 [i_2 - 2] [i_3] [i_3] [i_3]))), ((max(var_14, (arr_7 [i_0] [i_0]))))));
                            var_19 = (((-14 + 2147483647) >> (-27853 + 27879)));
                            var_20 = ((35 ? (max((max((arr_8 [i_0] [i_0] [i_0] [i_1]), 2714245198387544846)), var_3)) : (arr_5 [i_0] [i_0] [i_2 + 1])));
                        }
                    }
                }
                var_21 = ((-((var_10 * (arr_10 [i_0] [i_0] [i_1] [i_1])))));
                var_22 = (((((arr_7 [i_0] [i_0]) ? 255 : -2714245198387544842))));
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_23 = ((+(((((arr_12 [i_1] [i_4] [i_5]) <= var_0)) ? (arr_1 [i_5] [i_5]) : var_9))));
                            var_24 = ((-26 ? (arr_2 [i_0] [i_0]) : var_5));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
