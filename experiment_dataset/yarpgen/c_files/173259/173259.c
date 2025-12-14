/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = (((((122 ? (-1187594177 & 2650866725) : (arr_5 [i_0] [i_0] [i_0])))) ? (((max((arr_0 [9]), 1912067280)) / var_5)) : 510));

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_12 = (min((((var_8 - (arr_3 [i_1] [i_2])))), var_1));
                    var_13 = (((arr_2 [i_0]) <= -1471411232));
                    var_14 = ((((max((min(var_9, (arr_0 [i_2]))), (((17264532100546017465 <= (arr_0 [i_1]))))))) ? (min(((max(55462, (arr_3 [i_1] [i_0])))), 8876798761603388055)) : (((max(var_3, (arr_2 [i_0])))))));
                    var_15 = (min(var_15, (((((min((arr_1 [i_1]), (arr_1 [i_1])))) ? ((max((arr_1 [i_1]), (arr_1 [i_1])))) : -32752)))));
                    arr_9 [i_0] [i_0] = (arr_6 [7] [i_1] [13]);
                }
            }
        }
    }
    var_16 ^= ((var_1 > (((((var_8 ? var_3 : var_8))) ? (1790894263 & 14482656557719566258) : (!var_9)))));
    var_17 = min((((~1) ? (min(var_2, var_9)) : (~var_0))), (max(var_1, var_4)));
    #pragma endscop
}
