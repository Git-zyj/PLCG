/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((max(((3336513642 ? 42428 : 1)), var_3))) ? (((var_1 ? (!var_1) : (!var_14)))) : (((12160709420367507314 ? var_3 : var_2)))));
    var_16 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = ((var_12 ? ((3038209152 ? (arr_0 [i_0] [i_1]) : -8964300607343845911)) : 3336513642));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_18 ^= (max(6291456, 34038));
                            var_19 = ((var_6 ? (min((arr_1 [i_1]), (arr_6 [i_3] [i_2] [i_1 - 1] [i_0]))) : ((((-(arr_0 [i_0] [i_0])))))));
                            var_20 = (max((arr_3 [i_0]), ((((((arr_1 [i_0]) ? var_5 : (arr_1 [i_3])))) ? (((arr_1 [8]) << (var_10 - 2110540125))) : (arr_4 [i_1 + 2] [i_1 + 1])))));
                        }
                    }
                }
                var_21 = (min(var_21, (arr_5 [i_0] [i_0] [8] [i_0])));
            }
        }
    }
    #pragma endscop
}
