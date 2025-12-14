/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = ((-(27013 || 27013)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_17 [i_2] [i_2] = (min((min((arr_1 [i_0] [8]), 8374726130514532385)), (((!(arr_1 [i_1] [i_3]))))));
                                var_16 = (arr_6 [i_4]);
                                arr_18 [i_0] [i_2] [10] [17] [i_4] = -27003;
                            }
                        }
                    }
                }
                var_17 = (-6372845060702785027 ? (arr_14 [i_1] [20] [i_1] [i_1]) : ((((!((((arr_12 [i_1]) ? (arr_1 [2] [9]) : 65535))))))));
            }
        }
    }
    var_18 = (((((32766 >= 7) <= 6945194202031725489)) ? var_12 : 6739072400311079082));
    var_19 = (var_0 ? var_3 : var_8);
    var_20 += (min(-100, (-1887993623 <= -125)));
    var_21 = ((var_14 ? ((max((((var_9 ? 55853 : -2035444908))), ((var_5 ? var_12 : -2))))) : var_14));
    #pragma endscop
}
