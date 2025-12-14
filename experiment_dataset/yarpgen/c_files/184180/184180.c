/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -32753;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_19 = ((+(((arr_4 [i_0] [i_1] [i_2]) - (arr_0 [i_1] [i_2])))));
                    var_20 = (min(var_20, ((min((arr_4 [i_0] [i_1] [i_2]), (arr_5 [i_0] [11] [i_0] [i_1]))))));
                }
            }
        }
        arr_6 [2] = (((((arr_5 [i_0] [1] [7] [i_0]) * 18)) / (((37 + (arr_2 [i_0] [1] [i_0]))))));
        var_21 *= ((((-44 - (var_0 - 17))) & ((((var_17 != (arr_4 [i_0] [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {
                {
                    var_22 = -2980;
                    arr_12 [i_0] [i_3] [i_3] [i_3] = ((~(((arr_11 [i_3 - 4] [i_3 - 3] [i_4 - 1]) ? (((((arr_5 [i_0] [i_3 - 1] [i_3] [i_4]) && (arr_3 [i_0] [i_4 + 2]))))) : (((arr_1 [i_0]) ? (arr_3 [i_0] [i_3]) : (arr_0 [i_0] [i_3 + 1])))))));
                }
            }
        }
    }
    #pragma endscop
}
