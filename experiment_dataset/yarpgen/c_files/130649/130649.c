/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_19 = (max(var_19, ((min(((126 ? (-127 - 1) : (arr_1 [i_1 + 1]))), -127)))));
                            arr_10 [i_0] [i_1] [i_2] [i_2] [i_3] [i_2] = (((-127 - 1) > -116));
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] [0] = min((arr_0 [i_3]), (((((-416098571 ? (arr_3 [i_3]) : -104))) ? (arr_2 [4]) : ((var_6 ? 293341794 : (arr_2 [i_2]))))));
                        }
                    }
                }
                var_20 = (max(var_20, (arr_1 [i_1])));
                var_21 |= ((~(~1)));
                var_22 = (min(((min(1, ((max(46, 204)))))), (((((-127 - 1) ? 758022876 : (arr_8 [i_0] [i_1] [i_1] [i_1] [i_1]))) / 204))));
            }
        }
    }
    var_23 &= (max(-var_14, 293341794));
    #pragma endscop
}
