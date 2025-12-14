/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;
    var_17 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = ((((max(((max((arr_4 [i_0]), (arr_4 [i_0])))), (arr_2 [i_0 + 1] [i_0 + 1] [i_0 - 1])))) ? ((1 ? -255 : 16944843947322423938)) : ((((((-9308 / (arr_3 [i_1] [i_0])))) ? ((max(var_2, (arr_4 [i_0])))) : var_3)))));
                arr_5 [3] [i_0] = ((!(((var_14 ? (~16944843947322423938) : (arr_0 [i_0 + 1]))))));
                var_19 = (max((max((max((arr_1 [i_0]), (arr_2 [i_0] [i_0] [1]))), (arr_3 [i_0 - 1] [i_0 + 1]))), (((-(max(var_10, 5573157140576254770)))))));
            }
        }
    }
    #pragma endscop
}
