/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 10086804383929463224;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_17 += ((!((max(311530285176724475, ((16777215 / (arr_6 [i_0] [i_0] [12] [i_0]))))))));
                            var_18 ^= (((((((max(var_8, var_4))) ? (((arr_6 [i_0] [i_1] [0] [0]) << (((arr_7 [i_0] [i_2]) - 7610985927863767183)))) : (((~(arr_4 [i_0] [i_0] [23]))))))) ? (arr_2 [i_3] [i_1]) : (((arr_3 [i_3 + 2]) ? (arr_3 [i_3 + 3]) : 311530285176724476))));
                        }
                    }
                }
                arr_9 [11] [i_1] = (((((var_5 | (arr_1 [i_0])))) ? (((((18446744073709551614 == (arr_0 [i_1]))) ? (((-1 + 2147483647) << (arr_1 [i_1]))) : var_2))) : (((max((arr_7 [i_0] [0]), (arr_3 [i_0]))) + 5916162257701177152))));
            }
        }
    }
    #pragma endscop
}
