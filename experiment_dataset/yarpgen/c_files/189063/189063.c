/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_12 = (((~1024) ^ (max(var_3, (arr_2 [3])))));
                    var_13 += ((6 ? ((min((~127), ((0 ? var_5 : (arr_5 [i_0])))))) : (arr_0 [i_1] [19])));
                    var_14 -= var_6;
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {
        arr_10 [i_3] |= ((-127 % (var_9 || var_7)));
        arr_11 [i_3] = ((((-(min((arr_2 [i_3]), var_3))))) ? (arr_5 [i_3]) : 0);
    }
    #pragma endscop
}
