/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_19 = (max(var_19, ((((var_15 * (!45152)))))));
                    var_20 = ((arr_4 [i_1]) ? -3675983665 : (arr_4 [i_0]));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_21 = (min(var_21, ((((((arr_4 [i_1]) || (9822227417265444555 && 9822227417265444555))) ? ((((min(1023, var_2))))) : ((((max((arr_1 [i_0]), (arr_8 [i_3] [i_4])))) ? (!var_9) : ((var_10 ? 4716669979080486158 : -1023)))))))));
                                var_22 = ((var_3 ? (8 || -1386841221) : (min(87, 1386841220))));
                                var_23 = 84;
                            }
                        }
                    }
                }
                var_24 -= (min((((max(17676, var_14)))), (max((max(1265115051, 21096)), (~-61)))));
            }
        }
    }
    var_25 = (((0 + 240727811823558891) ? ((max(3675983665, ((min(2028177338, 0)))))) : var_0));
    var_26 = var_3;
    #pragma endscop
}
