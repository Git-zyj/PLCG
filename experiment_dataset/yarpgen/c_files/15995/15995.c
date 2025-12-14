/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    var_16 = (min(var_13, ((16384 ? 1632748854904785530 : 11))));
                    arr_7 [i_0] [i_1] [i_0] = (((((1632748854904785534 ? (min(var_12, var_1)) : ((-1632748854904785529 ? 39243 : -44))))) ^ ((-(max(1632748854904785534, var_2))))));
                }
                var_17 ^= var_1;
                var_18 = (max(var_18, ((min(-67, (((~38272) ? (arr_3 [2]) : -18)))))));
                var_19 = (max((((0 >= ((var_5 ? 238 : (arr_2 [i_0])))))), (~-1608355457)));
                arr_8 [i_0] = -1;
            }
        }
    }
    var_20 += var_11;
    var_21 = (max((var_1 == -865), var_9));
    #pragma endscop
}
