/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = ((((((!(arr_0 [i_0 + 2] [i_1]))))) && (((min(var_12, var_16))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_20 = (min(var_20, 5601113079046803440));
                            arr_12 [i_0] = (min((((-1910736668 < 18) ? (arr_5 [i_0 - 1] [i_0 - 2] [i_0 - 2]) : (((-(arr_10 [i_0 + 1])))))), (((33207 != (12845630994662748189 % 5601113079046803426))))));
                            var_21 = (max(var_21, ((min(((((min(var_15, var_1))))), (arr_7 [i_1 - 1] [i_1 - 1]))))));
                        }
                    }
                }
            }
        }
    }
    var_22 = ((((min((var_10 != 1), (min(29600, -1))))) ? ((-(~var_15))) : var_14));
    var_23 = -37479;
    #pragma endscop
}
