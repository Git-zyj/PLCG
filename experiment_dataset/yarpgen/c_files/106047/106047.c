/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((~(((var_18 >= (max(var_10, 15782959205521085621))))))))));
    var_21 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_22 *= ((!(((15525 ? (arr_3 [i_1] [i_1] [13]) : 2663784868188465994)))));
                var_23 += (((max(((((arr_4 [i_1] [i_0]) ? (arr_4 [11] [11]) : (arr_3 [i_0] [i_1] [i_0])))), 9193307638054648806)) ^ (arr_4 [i_1] [i_1])));
                var_24 = 51158;
                var_25 = min((arr_0 [i_0]), (arr_0 [i_0]));
                var_26 += (((arr_0 [i_1]) * 82));
            }
        }
    }
    #pragma endscop
}
