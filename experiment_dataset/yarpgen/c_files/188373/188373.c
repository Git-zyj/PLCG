/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((((arr_3 [i_0 + 1]) ^ (arr_3 [i_0 + 2])))) ^ ((~(arr_0 [i_0 + 1] [i_0 + 1])))));
                arr_5 [2] = arr_1 [i_0 + 1];
                var_21 = (max(var_16, var_16));
            }
        }
    }
    var_22 = 2216885090750093976;

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_23 = ((~(min(var_7, (arr_6 [i_2] [i_2])))));
        var_24 = (min((arr_6 [i_2] [i_2]), (arr_6 [i_2] [i_2])));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_11 [0] [i_3] = ((!((max((arr_8 [i_3] [9]), (arr_6 [i_3] [i_3]))))));
        var_25 = var_10;
        var_26 += (((min((arr_8 [9] [4]), (arr_7 [i_3]))) <= (arr_7 [i_3])));
    }
    #pragma endscop
}
