/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_0] [i_0] [i_0] = 14291213963404513516;
                    var_19 = (max(var_19, 17));
                    var_20 = (((min(var_4, var_13)) >> (((max(var_1, -8)) - 1653552392021479092))));
                    var_21 = (arr_0 [i_0]);
                    var_22 = ((min(((((arr_2 [i_0] [10]) ? (arr_0 [i_0]) : 14))), (arr_4 [i_0]))) % (~4122261294476749041));
                }
            }
        }
    }
    var_23 = (max(var_23, (((((-var_10 ? 1754929274 : 32051)) << ((((~(max(var_18, var_17)))) - 29940)))))));
    var_24 -= var_3;
    var_25 = (min(var_15, ((max((var_8 == var_0), (8 <= var_1))))));
    #pragma endscop
}
