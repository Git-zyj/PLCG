/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_1 - 3] = (min((min((arr_2 [i_0] [i_0]), ((106 >> (22660 - 22636))))), (((arr_2 [i_1 + 1] [i_1]) ? ((((arr_1 [13]) == (arr_2 [i_0] [i_0])))) : ((~(arr_2 [i_0] [i_1 - 4])))))));
                arr_5 [i_1 - 2] [i_0] = (((min((-1249988802 < 1920), 22661)) % (((max(1905, (arr_2 [15] [3]))) & (1905 - var_0)))));
                arr_6 [i_0] [16] [i_1 - 2] = (((arr_2 [i_0] [i_0]) <= ((((~(arr_0 [2]))) & ((max(125, (arr_1 [i_1 - 2]))))))));
            }
        }
    }
    var_12 = var_3;
    #pragma endscop
}
