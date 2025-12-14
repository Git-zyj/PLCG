/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_10, ((-(min(var_3, 11902516286319382425))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [8] = (arr_0 [i_0]);
        var_19 = ((((min((arr_1 [i_0]), (min(var_9, var_16))))) && ((((((-(arr_1 [i_0])))) ? (arr_0 [i_0]) : (max((arr_0 [i_0]), var_13)))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_6 [i_1] = (((((6544227787390169191 % (arr_4 [i_1]))) | ((((8195 <= (arr_3 [i_1]))))))));
        arr_7 [0] [i_1] = ((+(((arr_4 [i_1]) + (arr_4 [i_1])))));
        var_20 &= var_17;
        arr_8 [i_1] = (((((((((arr_3 [i_1]) << (((arr_3 [i_1]) - 80))))) | (arr_3 [i_1])))) && ((((arr_5 [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : (arr_3 [0]))))));

        for (int i_2 = 3; i_2 < 23;i_2 += 1)
        {
            var_21 = (max(var_21, ((((((arr_5 [i_2 - 1] [i_2]) | (arr_5 [i_2 + 2] [i_2 - 3])))) ? ((((arr_5 [i_2 - 3] [19]) ? (arr_5 [i_2 + 2] [24]) : (arr_5 [i_2 + 2] [i_2])))) : var_9))));
            var_22 = (min((((((((arr_3 [i_1]) > 11902516286319382400))) != (arr_4 [i_1])))), (max((((arr_11 [i_1]) * (arr_9 [i_2]))), -9039274446723492119))));
            var_23 = (arr_9 [4]);
            arr_12 [i_1] [i_2] = ((!((((arr_5 [i_2 - 2] [i_2 - 1]) ? (arr_5 [i_2 - 2] [i_2 - 1]) : (arr_5 [i_2 - 2] [i_2 - 1]))))));
        }
    }
    #pragma endscop
}
