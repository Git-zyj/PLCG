/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!((max(var_3, (var_3 / var_10))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_0] = (((((-(arr_6 [i_0] [i_2] [i_2 - 4] [i_0]))) + 2147483647)) << (1278228103 - 1278228103));
                    var_13 = ((!((!((!(arr_2 [i_0])))))));
                    arr_9 [i_2 - 3] [2] [i_0] |= (((((arr_6 [0] [4] [i_2 - 2] [0]) != (arr_6 [10] [i_2] [i_2 + 2] [10]))) || ((((arr_6 [8] [i_2] [i_2 + 2] [8]) ? (arr_6 [1] [i_2 - 2] [i_2 - 4] [1]) : (arr_6 [10] [i_2 + 2] [i_2 - 1] [10]))))));
                }
            }
        }
    }
    #pragma endscop
}
