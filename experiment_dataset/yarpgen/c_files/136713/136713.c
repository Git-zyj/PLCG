/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] = (((((arr_4 [i_0]) ? ((min(1, (arr_4 [i_0])))) : (((arr_6 [i_0] [i_0] [i_0 + 1]) ? var_14 : -19)))) >> (((!(((65 ? 133955584 : 121))))))));
                    arr_8 [i_0] [i_0] [i_2] = (!4965623645059988938);
                    var_15 = (min(((!((min(5543, (arr_2 [i_0] [i_0 + 1] [i_0])))))), ((!(arr_3 [i_0] [i_0] [i_0])))));
                    arr_9 [8] [i_0] [i_0] [i_0] = ((((((arr_2 [i_1 - 1] [9] [i_1 - 2]) ? (arr_2 [i_1 + 1] [i_1 - 2] [i_0]) : (arr_2 [i_1 + 1] [i_0] [i_0])))) ? ((~(arr_2 [i_1 - 2] [i_1] [i_1]))) : (arr_2 [i_1 - 1] [i_1] [i_1])));
                }
            }
        }
    }
    var_16 = ((((-1988108864 > ((54 ? var_12 : -323648550)))) ? (((-var_2 | ((min(120, 24)))))) : (max(((min(var_13, var_3))), (-1691659047275754126 - var_0)))));
    var_17 &= var_4;
    #pragma endscop
}
