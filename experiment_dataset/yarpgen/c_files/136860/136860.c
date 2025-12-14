/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((max(((var_2 ? var_1 : var_2)), (min(var_0, var_2))))) ? var_9 : var_10));
    var_12 = var_5;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = (max((arr_0 [i_0]), -78));
        arr_5 [i_0] [i_0] = (max((arr_2 [i_0]), 1285016201676013393));
        arr_6 [i_0] = ((51695 ? ((4398046511103 ? (arr_1 [i_0]) : (max(18446739675663040512, 2618525980532422874)))) : (arr_3 [i_0])));
        var_13 = (max(var_13, (((((-324868002 == var_5) ? (arr_2 [i_0]) : (!-324868009)))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    arr_15 [i_1] = ((((((arr_7 [i_1]) == 82))) + var_1));
                    arr_16 [i_1] [19] [19] = (((((-324868001 ? -2149084999376054443 : 324868009))) ? ((((max(181266442, -3795))) ? ((0 ? var_7 : 4398046511103)) : -1846402587)) : (((((min(9480, -2149084999376054443))) ? 2618525980532422867 : (((-3795 - (arr_9 [i_1])))))))));
                    var_14 = (((arr_12 [i_2] [i_1]) ? ((~(max(2618525980532422845, 62669)))) : (((max((arr_7 [i_2]), (189 > -1)))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 20;i_5 += 1)
            {
                {
                    arr_24 [i_1] &= (max(-100, (arr_11 [i_1])));
                    arr_25 [i_4] [i_4] = ((!(arr_12 [i_1] [i_1])));
                    arr_26 [i_1] [i_4] [i_4] = ((max((((arr_14 [i_4] [i_4] [i_5 - 2] [i_4]) ? 0 : 1)), ((max(12004, 0))))));
                }
            }
        }
        var_15 = ((-324868009 ? 6536021959178195025 : 16078));
        arr_27 [i_1] = -30;
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        arr_30 [i_6] = ((((-1 ? -8334410870557328773 : (arr_28 [i_6] [i_6]))) > ((max((arr_28 [i_6] [i_6]), (arr_29 [i_6]))))));
        arr_31 [i_6] = (((((arr_29 [i_6]) - ((8870279360601190968 ? -32755 : 73))))) ? ((max((!127), ((22 <= (arr_28 [19] [i_6])))))) : (arr_28 [i_6] [i_6]));
        var_16 += 4080;
    }
    #pragma endscop
}
