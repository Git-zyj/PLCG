/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= 8588535188597987008;
    var_18 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 = (max(((min(2016987683, (arr_6 [i_0] [i_1] [i_0] [i_2])))), ((max((arr_6 [i_2 + 1] [i_2] [i_0] [1]), (arr_6 [i_2 - 1] [i_2] [i_0] [6]))))));
                    var_20 = (min((arr_6 [i_2 + 1] [i_2] [i_0] [i_2]), ((2016987670 ? 10 : (arr_0 [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
