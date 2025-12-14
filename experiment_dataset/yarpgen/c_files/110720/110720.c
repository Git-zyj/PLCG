/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 ^= (max((((((max(1, (-32767 - 1)))) >= ((var_7 ? 44437 : 1817374100))))), (min(((((arr_5 [1] [i_0] [i_0]) >= -1983552534806413482))), (arr_0 [i_1] [i_0])))));
                var_19 = (min(var_19, ((((!(arr_5 [i_0] [i_0] [i_0])))))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    var_20 = (((((~(~1)))) ? (!79) : var_4));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_21 = (min(var_21, ((((-9223372036854775807 - 1) < (arr_8 [i_2] [i_2]))))));
                                var_22 = ((((min(113, (arr_2 [i_2] [i_2])))) ? var_4 : 1));
                                var_23 = min((arr_8 [i_2] [i_2]), (max(-2117359425, (arr_1 [i_2] [i_2 + 2]))));
                                var_24 = (min(var_24, ((((!var_3) ? 1 : (((((var_2 ? -79 : var_12)) <= (9382 == 1)))))))));
                                var_25 = ((-(max((arr_9 [i_2 + 2]), (arr_9 [i_2 + 3])))));
                            }
                        }
                    }
                }
            }
        }
        arr_20 [i_2] = (min(5620, -1));
    }
    var_26 *= var_14;
    #pragma endscop
}
