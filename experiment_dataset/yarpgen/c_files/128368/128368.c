/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_21 = (((((((((arr_1 [i_0]) | (arr_0 [1] [13])))) ? ((max(7525, 1))) : (arr_2 [i_0])))) ? ((((min(31688, (arr_2 [i_0])))) ? 106 : (arr_2 [i_0]))) : (((arr_0 [i_0] [i_0]) ? (!164) : (((-127 - 1) * var_7))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = (((((arr_6 [i_1] [i_2 - 1] [i_1 - 1]) ? (arr_6 [i_0] [i_2 + 1] [i_1 - 1]) : 164)) == (min((arr_6 [i_0] [i_2 + 1] [i_1 - 1]), (arr_6 [i_0] [i_2 - 3] [i_1 - 1])))));
                    arr_9 [9] = (((((((min(1483083126, (arr_6 [i_0] [i_0] [i_0])))) ? (arr_4 [i_1 - 1] [i_0]) : (arr_6 [i_0] [i_1] [i_1])))) ? (max(91, (arr_6 [i_2 - 3] [i_2 - 3] [i_0]))) : ((((((min((arr_5 [i_0]), 0))) && -9001))))));
                    var_22 = (max(var_22, (((((-(arr_4 [i_0] [15]))) & ((~(arr_4 [i_0] [i_0]))))))));
                }
            }
        }
        var_23 = (arr_7 [i_0] [0]);
        var_24 = ((((max(0, (arr_0 [i_0] [i_0])))) ? ((min(((min(17493, 114))), ((18446744073709551615 ? 65535 : 32767))))) : ((-(arr_0 [i_0] [2])))));
    }
    var_25 -= -46;
    #pragma endscop
}
