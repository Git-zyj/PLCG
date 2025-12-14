/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(((-var_8 ? ((max(70, 3))) : ((22 ? 1 : 22)))), 2110188674));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_21 = ((~((10637 ? (((max((arr_5 [i_0 - 2] [6] [16] [i_2 + 1]), (arr_1 [i_0]))))) : ((-65 ? 38 : 6237704113960778398))))));
                    arr_8 [i_1] [2] [i_2] = ((-33 ? 3104663631 : 14017));
                    arr_9 [i_1] = ((((1 ? (arr_2 [i_1 + 1]) : (((arr_2 [i_0]) / (arr_3 [i_0] [i_2 - 1])))))) ? (min(((127 ? 13064 : (arr_1 [i_0]))), ((57 * (arr_1 [i_0 - 1]))))) : ((((((arr_2 [i_1]) ? (arr_2 [i_2]) : (arr_0 [i_0] [i_0]))) < (arr_0 [i_1] [i_1])))));
                }
            }
        }
    }
    #pragma endscop
}
