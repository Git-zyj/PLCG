/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 ^= (arr_5 [i_0] [i_1]);
                    var_20 = (min(var_20, ((min((arr_0 [i_0 + 2]), (max((arr_1 [i_0 + 2]), (arr_3 [i_0] [i_0] [i_0]))))))));
                    var_21 += (+-1);
                    var_22 = (arr_1 [i_0 - 1]);
                    arr_8 [i_0] [i_1] [i_1] [i_2] = 16;
                }
            }
        }
    }
    var_23 = var_3;
    #pragma endscop
}
