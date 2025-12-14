/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, (arr_3 [i_0] [9])));
                    arr_7 [i_2] [i_2] [i_2] = (((((min(955257905, -604665455920327566)) ^ (max((arr_3 [i_2] [i_1]), 604665455920327576)))) | (arr_6 [i_2] [i_2] [7] [i_2])));
                    var_20 = (((((((-32767 - 1) || 21445)) && (arr_4 [i_0 + 1]))) ? ((((max(-808405170, (arr_0 [i_0])))) ? (arr_0 [i_1]) : (((var_5 ? var_18 : (arr_1 [i_1 - 2])))))) : ((((arr_3 [9] [i_1 + 1]) ? ((min((arr_3 [i_0] [i_0]), -21445))) : (arr_1 [0]))))));
                    var_21 = (((-9884 - 604665455920327565) * (((((max(-604665455920327568, 92)) == 1712259710299654822))))));
                }
            }
        }
    }
    var_22 |= ((var_10 > (~5236587793676981742)));
    #pragma endscop
}
