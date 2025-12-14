/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((((2908563238 ? 127 : 1))), (max((max(var_1, var_8)), var_5))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_11 = (max(var_11, (((!(((arr_0 [6]) == (arr_0 [0]))))))));
        var_12 = arr_1 [i_0];
        arr_2 [i_0] = ((((max((arr_1 [i_0]), (arr_0 [i_0])))) ? (max((arr_0 [i_0]), (arr_1 [i_0]))) : (((arr_0 [i_0]) - (arr_0 [i_0])))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            {
                var_13 *= (((arr_6 [i_2] [i_1] [i_1]) | (max((arr_3 [i_1]), (arr_4 [i_2] [i_2])))));
                var_14 = ((-(min((((!(arr_4 [i_2] [i_2])))), ((-(arr_5 [i_1])))))));
            }
        }
    }
    #pragma endscop
}
