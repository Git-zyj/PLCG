/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_8 [i_2] [i_2] = ((!(arr_1 [i_0] [i_1])));
                    arr_9 [i_2] = ((((min((!var_9), (min(939049888, var_9))))) ? (arr_0 [i_0] [i_1]) : ((((((var_6 <= (arr_0 [i_2] [i_2])))) == (((arr_6 [i_0] [i_1] [i_2]) ? var_6 : (arr_6 [8] [i_1] [i_0]))))))));
                }
                var_10 -= (((((-33 ? (((0 ? (arr_5 [i_0]) : var_4))) : (min(3711364160, (arr_7 [16])))))) ? (min(6, (~97422629929921414))) : ((((!((max(var_2, var_7)))))))));
            }
        }
    }
    var_11 = var_7;
    var_12 &= ((!((min(var_4, ((min(-1, var_3))))))));
    #pragma endscop
}
