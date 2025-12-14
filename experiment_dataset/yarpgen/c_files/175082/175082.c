/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((!var_10) >= (!var_10)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_11 [17] = (~231);
                            var_12 = (((-((((arr_5 [i_3] [i_1 - 2] [i_2] [i_0]) != 4))))));
                        }
                    }
                }
                arr_12 [4] [i_1 + 2] = ((((((!(arr_3 [i_0] [i_0] [i_1])) && var_0)))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_13 = (((((((-(arr_7 [i_0] [i_1] [i_4] [i_5 - 1])))) ? ((var_7 ? 154 : -117)) : (!0))) | (((!(arr_10 [i_5 + 1] [5] [i_4] [5] [i_1 + 1]))))));
                            var_14 *= var_9;
                        }
                    }
                }
            }
        }
    }
    var_15 = (var_2 ? -231 : (((7 & var_9) - (!var_9))));
    var_16 = 11558598174611041859;
    var_17 = (~var_0);
    #pragma endscop
}
