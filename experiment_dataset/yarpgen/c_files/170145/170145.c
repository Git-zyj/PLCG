/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((var_8 ? var_7 : (((var_3 ? var_2 : var_10))))), var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_2] = (arr_4 [10] [i_1] [11] [i_1]);
                    var_12 = ((((2019293859 ? 2 : 41545))));
                }
            }
        }
    }
    var_13 += ((((11590001340191950716 ? 18446744073709551600 : 0)) - (max(var_2, var_7))));
    #pragma endscop
}
