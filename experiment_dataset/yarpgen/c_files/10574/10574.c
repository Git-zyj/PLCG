/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= max(var_12, (((!1792) ? var_10 : ((var_1 ? 140737488355312 : 1)))));
    var_19 = ((-((~((-523 ? var_0 : 58))))));
    var_20 = ((2334271126 ? (((var_17 <= (min(511, var_11))))) : ((-(var_16 < -1496716929224019380)))));
    var_21 = (((min((var_9 % 1496716929224019388), ((var_9 ? var_6 : 1496716929224019379))))) || (((((min(0, 1))) ? 72057594037927934 : (-1496716929224019384 * 18446744073709551615)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] = (!1974348132097295004);
                arr_6 [i_0] = (min((max(-var_4, (((var_10 || (arr_0 [i_0])))))), (arr_2 [i_1])));
            }
        }
    }
    #pragma endscop
}
