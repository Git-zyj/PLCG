/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_12 = (((~((~(arr_6 [i_1]))))));
                var_13 = (((-(arr_4 [i_1 + 2] [i_1]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_14 = (min(var_14, ((((var_10 ? var_0 : -var_8))))));
                            arr_12 [i_1] [i_1] [i_1] [i_1] = (((((1 ? (arr_7 [i_2] [i_2]) : ((min(var_6, (arr_11 [9]))))))) ? (arr_4 [10] [i_2]) : (((arr_0 [i_0]) ? (arr_2 [i_1 - 1]) : (arr_7 [i_1] [8])))));
                        }
                    }
                }
            }
        }
    }
    var_15 = ((min(var_3, var_0)) != var_1);
    #pragma endscop
}
