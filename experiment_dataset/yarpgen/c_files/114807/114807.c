/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~(((~-18925) | var_10))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_12 = ((~((~((-4840504605347812647 ? (arr_1 [i_2] [i_1]) : (arr_0 [i_0] [i_1])))))));
                        arr_10 [i_0] [i_1] [i_1] [i_0] = (((((!(arr_9 [i_0] [i_2] [14])) ? ((-1 ? 1 : 22384)) : (arr_7 [i_0])))));
                        var_13 = 4840504605347812644;
                    }
                    arr_11 [i_0] [i_2] = (((((arr_2 [i_0] [i_0 - 3]) ? (arr_2 [i_0] [i_0 + 2]) : -4840504605347812625)) % (arr_8 [i_0] [i_1] [i_2] [i_0] [i_1])));
                    arr_12 [i_1] [i_2] = (((arr_6 [i_0]) == (((-28025 + 2147483647) >> (((((arr_9 [i_0] [i_1] [i_0]) >> var_0)) - 147))))));
                }
            }
        }
    }
    #pragma endscop
}
