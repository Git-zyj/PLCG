/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= (((((var_11 ? -var_11 : ((min(var_6, var_6)))))) || (var_11 || -46)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (((!(((min(2147483646, var_0)) == ((var_9 ? -2147483647 : var_2)))))))));
                arr_5 [12] [i_1] &= (((((~var_5) + 2147483647)) << (((((var_3 >= ((var_7 ? var_3 : 28827))))) - 1))));
                var_14 += (((arr_1 [i_1 + 1] [i_1 - 1]) ? ((min(36709, (arr_1 [i_1 + 1] [i_1 - 1])))) : ((max((arr_1 [i_1 + 1] [i_1 + 1]), var_6)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_15 = min(((min(var_0, (~var_7)))), var_1);
                            arr_14 [i_0] [i_1] [i_2] [i_3] = ((((-(arr_12 [10] [i_3] [i_1 - 1] [i_3]))) > (~-var_9)));
                            arr_15 [i_0] = (min((min(var_7, (arr_3 [i_1] [i_0] [i_1 - 1]))), (((var_3 ? (arr_3 [i_1] [i_0] [3]) : (arr_1 [i_1] [i_1]))))));
                            arr_16 [i_0] [i_2] [i_1] [i_0] = ((-(arr_3 [i_1 + 1] [i_0] [i_3])));
                        }
                    }
                }
            }
        }
    }
    var_16 = (min((var_6 > var_0), (min(((var_5 ? var_0 : var_7)), (((12471 ? var_3 : var_11)))))));
    var_17 = (min(var_17, var_1));
    #pragma endscop
}
