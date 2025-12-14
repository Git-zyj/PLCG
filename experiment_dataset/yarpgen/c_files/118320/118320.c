/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((3640805317577209740 ? -3640805317577209763 : -3640805317577209752)) - (((-1774308378 ? -4327 : 2110101322))))) + (((-(var_0 >= var_2)))));
    var_19 = (max(124, (((((-2106839899 ? 1068399464 : 2196044497))) ? var_5 : ((max(var_0, var_17)))))));
    var_20 ^= (var_6 % var_15);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((((((max((arr_1 [i_0] [i_0]), (arr_4 [7]))) << (((((arr_6 [i_0] [i_0]) ? (arr_1 [i_1] [i_1]) : (arr_4 [2]))) - 1232590016))))) ? 1 : (((arr_4 [i_0 - 1]) ? (max((arr_2 [13]), (arr_1 [i_0] [i_1]))) : (1326934256 ^ 2196044497)))));
                arr_8 [i_0] = ((((~(arr_0 [i_0 + 2]))) > (((arr_5 [i_0 + 2] [i_0 + 1] [i_0 - 1]) ? (arr_3 [i_0 + 2]) : (arr_0 [i_0 + 2])))));
                var_21 = ((((((((arr_4 [i_1]) ? (arr_0 [i_0]) : (arr_0 [i_1])))) ? (arr_6 [i_0 + 1] [i_0 + 2]) : (arr_6 [i_0 - 1] [i_0 + 2]))) * (((-((((arr_2 [i_0]) >= (arr_4 [i_0])))))))));
                var_22 ^= (40915 / -1616218519);
                arr_9 [15] [i_1] = ((25777 ? 13 : -1380075700));
            }
        }
    }
    #pragma endscop
}
