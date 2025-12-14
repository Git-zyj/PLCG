/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_12 -= (((arr_8 [i_2 - 1] [i_2] [i_2 - 1]) << (!976263864)));
                                arr_14 [i_4] [i_4] [i_4] [i_4] [15] [i_1] [i_4] = (737639450 / var_5);
                            }
                            arr_15 [i_0] [i_1] [i_1] = ((-(min(737639444, (-5156842158003089394 - var_7)))));
                            var_13 = (max(var_13, (((~(min(4688048424998381068, ((-5156842158003089387 ^ (arr_8 [i_0] [i_1] [i_2]))))))))));
                            var_14 = 255;
                        }
                    }
                }
                var_15 = 1820636124;
                var_16 -= (((((4140199538390371111 ? (arr_4 [i_0] [i_0 - 2] [1]) : (arr_6 [i_0 + 1] [i_1])))) + (min((var_3 - var_11), 14306544535319180493))));
            }
        }
    }
    var_17 = (~var_3);
    var_18 ^= (((var_9 / ((var_0 ? var_0 : var_6)))));
    var_19 = var_7;
    #pragma endscop
}
