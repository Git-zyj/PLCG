/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((min(var_2, var_1)))));
    var_19 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] = var_0;
                                var_20 = (((((arr_2 [i_0 - 3]) < (arr_2 [i_0 - 2]))) ? ((((!(arr_2 [i_0 - 3]))))) : (min(var_11, var_12))));
                                var_21 -= (var_4 ? ((min((((var_9 ? var_11 : 54704))), (min(2100027313, var_0))))) : (min(var_8, -var_16)));
                                arr_15 [i_0] [i_0 - 3] [i_3] [i_0] = (((((3986898793 ? -2987415053442668231 : 2112750887))) ? (!var_9) : var_13));
                            }
                        }
                    }
                    var_22 = min(65518, (arr_2 [i_0]));
                    var_23 = (((((!(var_0 * 3428286802)))) >> (((min(1048575, (arr_5 [i_1 - 1]))) - 27706))));
                }
            }
        }
    }
    var_24 = (min(var_0, (min(7276004839293159362, var_5))));
    #pragma endscop
}
