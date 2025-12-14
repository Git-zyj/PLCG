/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_10 = (min(var_1, (((arr_8 [i_3]) ? (4294967293 + 1422260267) : 3281891889))));
                                var_11 = (!632);
                                var_12 = (3221225472 % -65);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 8;i_6 += 1)
                        {
                            {
                                var_13 = (min((((96 >> (6861570056210118685 - 6861570056210118683)))), (((((min(-5647985391446178079, (arr_15 [i_0 + 3] [1] [i_0 + 3] [7]))) + 9223372036854775807)) >> (-65 + 95)))));
                                arr_20 [i_5] = (11657424971358341240 + 7383520922604811082);
                                arr_21 [i_5] [i_5] [i_2] [8] = (((arr_17 [i_5]) ? 6861570056210118685 : (((((var_2 != var_2) != (arr_1 [i_5 - 1])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = 29185;
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 18;i_9 += 1)
            {
                {
                    var_15 = (2147483647 == -6861570056210118685);
                    var_16 = ((((!(arr_25 [i_8]))) ? 11645 : -4509169090764901763));
                }
            }
        }
    }
    var_17 = ((!(((var_6 ? var_4 : -6861570056210118685)))));
    #pragma endscop
}
