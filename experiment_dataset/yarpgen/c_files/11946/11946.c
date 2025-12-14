/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_11 *= ((((((!(arr_3 [i_0]))) && (((65535 ? (arr_0 [i_1]) : var_9))))) || (arr_6 [i_2])));
                    arr_8 [i_1] = ((0 % ((((~(arr_1 [i_1]))) >> (((arr_4 [i_0]) + 66))))));
                    var_12 = ((((arr_7 [14] [14]) < var_6)) ? ((-(((arr_2 [i_0] [i_0]) * (arr_2 [i_2] [9]))))) : (arr_7 [1] [i_0]));
                    arr_9 [i_0] [i_1] = var_2;
                    var_13 = ((23598 ? 1879048192 : (arr_3 [i_1])));
                }
            }
        }
    }
    var_14 = ((0 ? var_7 : ((7316875578654438616 ? var_7 : 0))));
    var_15 = (853442567 >= 23571);
    var_16 -= var_8;
    var_17 = ((((!(((1356584931 ? var_5 : 8993403245574248833))))) ? var_6 : -5940099876498940031));
    #pragma endscop
}
