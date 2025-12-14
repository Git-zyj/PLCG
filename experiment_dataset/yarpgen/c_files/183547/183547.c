/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((231 ? 9619 : 244));
    var_21 = ((var_17 ? (((((9161728612740781556 ? var_2 : 533278886))) ? (min(var_1, (-2147483647 - 1))) : var_9)) : ((max(11, var_17)))));
    var_22 = (min(var_22, -var_4));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_23 *= ((~((((9285015460968770035 ? 9161728612740781580 : (arr_1 [5]))) | (201 | 249)))));
            arr_7 [19] |= ((((((arr_1 [i_0]) ? ((max(79430398, -15901))) : (min(var_1, (-9223372036854775807 - 1)))))) ? (var_12 / var_9) : ((((arr_2 [14]) ? -201 : -1807897716)))));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_24 = -9223372036854775796;
            var_25 = (max(var_25, (((((((max((arr_8 [i_0]), (-32767 - 1)))) ? 9285015460968770035 : (((~(arr_9 [i_2] [i_0])))))) - (((127 ? (((arr_4 [i_0] [i_2]) ? -1 : (arr_1 [i_2]))) : (arr_8 [i_0])))))))));
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 22;i_4 += 1)
                {
                    {
                        var_26 = 4294967295;
                        arr_18 [15] [i_2] [i_2] [i_2] [i_4] = var_9;
                    }
                }
            }
        }
        var_27 = ((5 - ((249 - (arr_4 [i_0] [i_0])))));
    }
    #pragma endscop
}
