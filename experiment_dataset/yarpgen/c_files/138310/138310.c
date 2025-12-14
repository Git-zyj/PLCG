/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0 - 2] = ((((((arr_2 [7]) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 + 3])))) % ((((((arr_1 [i_0]) ^ 1))) ? (max(18425134120894017679, 24)) : (arr_1 [i_0 + 3])))));
        arr_4 [i_0] [i_0] = (arr_1 [i_0 + 1]);
        arr_5 [1] = (arr_0 [i_0 - 2]);
        arr_6 [i_0] = max((((arr_0 [i_0 + 2]) && (arr_0 [i_0 + 2]))), (((arr_0 [i_0 + 2]) || (arr_0 [i_0 - 1]))));
        arr_7 [i_0] [7] = (max((arr_0 [i_0 - 1]), 1045748908));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    arr_16 [i_2] = (min((var_7 + 21609952815533937), ((((max((arr_14 [21] [i_2] [i_2]), (arr_8 [i_3])))) - (min(18425134120894017676, (arr_15 [i_2] [i_2] [i_3] [i_3])))))));
                    arr_17 [i_2] [i_2] = ((((max((arr_12 [i_1]), (arr_9 [i_1] [i_2])))) && ((min(18425134120894017685, 23)))));
                }
            }
        }
    }
    var_17 = var_1;
    #pragma endscop
}
