/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = ((-1 ? 4015046129563009147 : 52794));
                arr_7 [i_0] [i_0] [i_1] = ((((((arr_2 [i_1 - 1] [i_1]) ? 39 : 2147483647))) ? (((arr_2 [i_1 + 2] [i_1 + 2]) | 3018)) : 2147483624));
            }
        }
    }
    var_21 = ((2147483619 ? var_10 : ((var_14 ? ((1 ? 127 : 10743)) : (((!(-2147483647 - 1))))))));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                var_22 = (min(var_22, ((max(((((arr_10 [i_2 + 1] [i_2 + 1] [i_2 + 2]) - (arr_10 [i_2 + 1] [i_2 + 2] [i_2 - 1])))), (14026840919471183683 + 1))))));
                arr_13 [i_2] = ((((min(57, 1))) ? (((-2847554737222098628 + 9223372036854775807) >> (arr_10 [i_2 - 1] [i_2 + 2] [i_2 + 2]))) : ((1268 ? (~1810) : (((arr_11 [i_2]) ? (arr_10 [i_2] [i_2 + 1] [i_2]) : -5661546641504842447))))));
                var_23 = (min(var_23, ((((2147483624 ? -1 : (arr_12 [i_3] [i_3] [i_2 + 1]))) | (((1 ? (arr_10 [i_3] [i_3] [i_2]) : 1617)))))));
            }
        }
    }
    #pragma endscop
}
