/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -6668;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((~(arr_0 [i_0 + 2])));
                var_16 = (max(var_16, 18349));
                arr_7 [i_1] [i_1] = (((((arr_2 [i_0 + 2]) && (arr_2 [i_0 + 2]))) ? ((((((arr_2 [i_0]) + var_8))) ? (((arr_2 [i_0]) | var_5)) : ((((arr_0 [i_0]) == 1676147001))))) : (((arr_5 [i_0] [i_0]) ^ ((~(arr_4 [i_1] [i_0] [i_1])))))));
                var_17 |= ((1676147004 ? (arr_2 [i_1]) : ((((var_10 ? (arr_1 [i_0 - 2]) : (arr_0 [i_1]))) * (((((arr_4 [i_0 + 3] [i_1] [16]) <= var_7))))))));
            }
        }
    }
    #pragma endscop
}
