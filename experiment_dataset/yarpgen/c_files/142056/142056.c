/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = 115;
                    var_17 = ((!(arr_5 [4] [i_1])));
                    var_18 += (max((max((arr_2 [i_0 - 1] [i_2 - 1]), (arr_2 [i_0 + 1] [i_2 - 1]))), ((37057 % (arr_2 [i_0 - 3] [i_2 - 1])))));
                }
            }
        }
    }
    var_19 += ((var_5 ? ((var_11 ? (((min(-123, -1)))) : (18446744073709551615 - 16))) : var_4));
    var_20 = var_7;
    #pragma endscop
}
