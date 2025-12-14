/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            var_11 = 17;
            var_12 = 2047;
        }
        var_13 = (max((((((max(var_7, var_3)))) / -2063)), (arr_4 [i_0])));
        var_14 = (arr_3 [i_0]);
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 8;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    var_15 = ((((min(-2030, -2040))) == ((~(((arr_10 [i_2] [i_2] [i_4]) | (arr_8 [i_2 + 2])))))));
                    var_16 = (((((max(-2044, (arr_12 [i_2 + 3] [i_2]))))) || (arr_2 [i_2] [i_2])));
                    var_17 = var_1;
                }
            }
        }
    }
    #pragma endscop
}
