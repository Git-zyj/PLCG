/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (((arr_0 [i_1]) >> ((((max(((((arr_1 [i_0] [i_1]) >= (arr_4 [i_0] [i_1] [2])))), (arr_4 [i_0] [1] [1])))) - 62315))))));
                arr_5 [i_0] [i_1 + 2] [i_1 + 2] = ((((((arr_3 [i_1 + 1] [i_1 - 1]) / var_5))) ? (((arr_1 [9] [4]) ? -76 : ((var_9 ? -1655538931 : (arr_1 [i_1] [i_0 - 2]))))) : (arr_0 [i_0])));
                var_18 = ((((~(((arr_0 [i_0]) ^ 1655538931)))) ^ (((arr_3 [i_0] [i_0 - 2]) & (arr_3 [i_0] [i_0 - 1])))));
                var_19 = ((+((min((arr_3 [5] [i_1 + 2]), 222)))));
                var_20 = (min(var_20, ((((((((arr_1 [i_0] [i_1 - 1]) - (arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1])))) ? ((min(2147483647, 3904328147))) : ((1655538931 / (arr_2 [i_1] [6])))))))));
            }
        }
    }
    var_21 = (min(var_21, (((var_16 << (((max(2497395257, -1655538931)) - 2639428340)))))));
    var_22 = var_12;
    var_23 = 3318024209;
    #pragma endscop
}
