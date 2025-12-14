/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0 - 1] = (((((((var_4 * (arr_8 [i_0] [i_0 + 3]))) / (arr_2 [i_1])))) ? -111 : ((((((arr_2 [i_0 - 1]) & (arr_7 [i_0] [i_0] [i_1] [5]))) >= (((min(132, 112)))))))));
                    arr_11 [i_0] [i_0] [i_0] = ((143 >= (((((arr_7 [i_1] [i_0 + 2] [i_1] [i_0 + 2]) <= 313274803))))));
                    var_13 = ((((((((var_12 || (-127 - 1))))) == ((1063387919 ? 1063387919 : (-127 - 1))))) ? ((4290111992 ? (159 + 0) : 143)) : (max((arr_7 [i_0] [i_1] [i_2] [i_0]), ((min((arr_9 [i_1]), 30)))))));
                }
            }
        }
    }
    var_14 = (var_11 - ((127400715 - ((171 ? var_4 : var_6)))));
    var_15 |= 30;
    var_16 |= (max(4078594285, (max(var_0, var_12))));
    #pragma endscop
}
