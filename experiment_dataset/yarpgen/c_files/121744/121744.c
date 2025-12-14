/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_21 = (!var_6);
                arr_6 [i_0] = (((~-1135893298) >> ((((-32751 ^ (arr_0 [i_1]))) - 1161563723))));
                var_22 = (min(var_22, (((((-8935 % (~20833))) <= (((arr_3 [i_0]) ^ (arr_3 [i_0]))))))));
                var_23 = ((((((!((((arr_4 [1] [1] [1]) ^ 1))))))) != (arr_4 [i_0] [i_0] [i_1])));
            }
        }
    }
    var_24 = (((var_5 + var_10) << (((var_1 - var_14) + 4402704091271635168))));
    var_25 = var_12;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                var_26 = (arr_8 [i_2]);
                var_27 = ((-(var_10 / 234915358)));
                var_28 = (i_3 % 2 == 0) ? ((((((((arr_10 [i_2] [i_3] [i_3]) + 2147483647)) >> (((arr_10 [i_2] [i_2] [i_3]) + 459282021)))) + 13695))) : ((((((((((arr_10 [i_2] [i_3] [i_3]) - 2147483647)) + 2147483647)) >> (((((arr_10 [i_2] [i_2] [i_3]) + 459282021)) - 1192724633)))) + 13695)));
            }
        }
    }
    #pragma endscop
}
