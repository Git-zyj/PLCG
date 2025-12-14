/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (65535 != var_3);
    var_20 += (max((((((max(var_12, var_15))) != 527348222))), (max(var_10, (var_11 | var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_21 = (max(var_21, ((max(0, 15504140535865871209)))));
                            arr_11 [i_3] [i_1] [14] [i_3] = ((((((var_10 ? var_15 : (arr_10 [i_3])))) * var_18)) != ((max((max(var_10, var_2)), 228))));
                        }
                    }
                }
                var_22 -= ((((!(((var_2 ? var_4 : (arr_10 [6])))))) ? var_9 : (((max(-48, (arr_5 [i_0] [i_1 + 1] [i_1])))))));
                arr_12 [i_0] [i_0] [i_0] |= var_16;
                var_23 = (((arr_9 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]) / (max(var_18, (arr_3 [i_1 + 1] [i_1 + 1])))));
                var_24 += (((~var_17) <= ((max((arr_4 [i_0] [21] [i_1 + 1]), (arr_4 [i_0] [i_1] [i_1 + 1]))))));
            }
        }
    }
    #pragma endscop
}
