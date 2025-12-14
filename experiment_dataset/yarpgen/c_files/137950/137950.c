/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_18 = (min(var_18, (((((-16223 ? 62656 : 16210))) < ((((~(arr_8 [i_3] [i_3]))) / var_13))))));
                            var_19 |= (~-var_9);
                            var_20 = ((var_5 ? (((var_4 ? var_2 : var_5))) : ((((arr_5 [i_0] [i_0]) ? (arr_7 [i_0] [i_1] [i_0] [i_3] [i_3]) : ((((-16223 + 2147483647) << (((((arr_3 [i_0] [i_0] [i_0]) + 25502)) - 15))))))))));
                        }
                    }
                }
                var_21 = (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            {
                var_22 += -18448;
                arr_14 [i_4] [i_4] = ((-(((((var_6 / (arr_0 [i_4])))) ? (((~(arr_7 [i_4] [i_4] [i_5] [i_5] [i_5])))) : (((arr_4 [i_4] [i_4] [i_4]) ? -6669820111310568276 : (arr_13 [i_4])))))));
            }
        }
    }
    var_23 = (min(var_23, (((~(~-16230))))));
    var_24 = ((12851629321307774896 ? 1804918798 : 8067292087141227470));
    #pragma endscop
}
