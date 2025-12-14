/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 15788398065028384580;
    var_20 = (max(((((-127 - 1) ? 14336 : var_3))), (((0 & 14336) ? 12569119670544059730 : 51184))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_21 = (min(var_21, ((((((max(var_3, (arr_5 [2] [4]))) <= (arr_0 [i_1]))) ? (-2147483647 - 1) : var_11)))));
                arr_7 [i_1] [i_1] [15] = (max((arr_6 [i_0] [i_1] [i_0]), (((arr_3 [i_0]) == var_4))));
                var_22 &= (((((arr_1 [i_1]) ? ((var_6 / (arr_0 [12]))) : (arr_5 [i_0] [i_1]))) < ((51210 ? 18949 : 51200))));
            }
        }
    }
    #pragma endscop
}
