/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((((!var_7) * (var_11 - var_0))), (~var_2)));
    var_18 = (max(((38520 ? (var_14 & 20305) : (min(var_1, var_0)))), ((max(var_16, (101 ^ var_7))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (i_0 % 2 == 0) ? ((max(((((((arr_0 [i_0] [i_0]) >> (((arr_2 [i_0] [i_0]) - 1180801646))))) ? (((var_0 ? -32118 : var_2))) : var_9)), (~11073966814735771522)))) : ((max(((((((arr_0 [i_0] [i_0]) >> (((((arr_2 [i_0] [i_0]) - 1180801646)) - 367601969))))) ? (((var_0 ? -32118 : var_2))) : var_9)), (~11073966814735771522))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 = (((min((arr_0 [i_0] [i_2]), (-16094 ^ var_14))) / (max((arr_4 [i_1]), ((~(arr_6 [15] [i_0] [i_2])))))));
                    arr_9 [i_0] [i_1] [i_1] = (((var_11 < 100) > (max((arr_8 [i_2] [i_0] [i_0]), 9959775573498437155))));
                }
            }
        }
        arr_10 [i_0] = (((max((((!(arr_8 [i_0] [i_0] [11])))), (~8796093022207))) - ((((arr_4 [i_0]) / (arr_4 [i_0]))))));
    }
    #pragma endscop
}
