/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_1] = (max((!-112), (arr_1 [i_1 - 1] [i_1 + 1])));
                var_15 = ((((~(arr_4 [i_1 + 1] [i_1 + 1]))) + ((max((arr_4 [i_1 - 1] [i_1 - 1]), (arr_4 [i_1 - 1] [i_1 + 1]))))));
                var_16 = (((((min(10679436278212513603, -103)))) >> ((((((var_7 ? var_11 : 76)))) - 11211))));
                arr_7 [i_1] [i_1] = (arr_4 [i_0] [i_1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                var_17 = (arr_4 [i_2] [i_3]);
                arr_13 [12] [12] [12] = (min(((((~220) ? (var_7 >= 32767) : var_0))), (max(var_13, (((-(arr_9 [i_3]))))))));
            }
        }
    }
    #pragma endscop
}
