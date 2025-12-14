/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = (i_1 % 2 == 0) ? (((((arr_8 [i_0] [i_0] [i_0] [i_1]) << (((arr_3 [13] [13] [i_1]) - 218)))))) : (((((arr_8 [i_0] [i_0] [i_0] [i_1]) << (((((arr_3 [13] [13] [i_1]) - 218)) + 144))))));
                    var_19 = (arr_7 [i_0] [i_1] [i_1] [i_2]);
                }
            }
        }
    }
    var_20 = (max(var_20, (((-(((!var_14) + var_5)))))));
    var_21 |= (~255);
    #pragma endscop
}
