/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((min(10666090953460788044, var_13)))) ? ((var_5 ? -95 : (min(var_9, 7780653120248763573)))) : (min(10666090953460788052, 10666090953460788044))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] = min(((124 ? (arr_5 [i_2 + 1] [4] [i_2 + 1]) : 7780653120248763571)), ((max((arr_3 [i_2 + 1] [i_2 - 1]), (arr_3 [i_2 - 1] [i_2 - 1])))));
                    var_17 = (max((arr_6 [i_2 + 1] [i_2 + 1] [i_2 - 1]), (arr_6 [i_2 + 1] [i_2 + 1] [i_2 - 1])));
                }
            }
        }
    }
    var_18 = var_12;
    #pragma endscop
}
