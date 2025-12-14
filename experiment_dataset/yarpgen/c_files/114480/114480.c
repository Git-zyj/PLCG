/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_16));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_1] = (-10545 > 39861900);
                    var_19 = (max(var_19, ((((((((-2127462281 ? 26950 : 48792))) ? (arr_0 [i_0]) : (arr_2 [i_0 - 1] [i_0 + 2])))) + (((((4733408990941711126 ? (arr_7 [i_0] [i_1] [i_2] [i_1]) : var_14))) ? (((((arr_8 [i_0] [10] [i_2] [i_0]) > 39861900)))) : (arr_3 [i_2 + 1])))))));
                    arr_10 [i_0] [i_0] [i_2] [i_1] = 7247094533126326674;
                }
            }
        }
    }
    var_20 = var_2;
    var_21 = 13713335082767840490;
    #pragma endscop
}
