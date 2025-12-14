/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-((max(2816276764, 1478690531)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = ((((-((-(arr_1 [i_0]))))) == (1478690532 == 56)));
        var_11 = (max(var_11, (((((-(((-1248245488 < (arr_2 [4])))))) >> ((((-(arr_2 [6]))) - 2022290123)))))));
        var_12 |= (((arr_0 [3]) || ((max(16, (((arr_2 [4]) ? (arr_0 [5]) : (arr_2 [8]))))))));
    }
    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        arr_14 [i_4] [i_1] [i_1] [17] = (((2816276764 ? (arr_6 [i_1] [i_2]) : (arr_6 [i_1] [1]))));
                        var_13 |= var_3;
                    }
                }
            }
        }
        var_14 = ((-((-((((arr_8 [i_1] [i_1] [i_1]) <= (arr_5 [i_1]))))))));
    }
    #pragma endscop
}
