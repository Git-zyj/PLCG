/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] = (arr_1 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_18 = ((((min((((arr_8 [i_0]) % 1)), -94))) ? 8972368118456943957 : ((min((max((arr_0 [i_0]), (arr_5 [i_0] [9]))), ((((arr_8 [i_0]) ? 0 : -29))))))));
                            var_19 = 1;
                            var_20 = ((+((((((arr_0 [i_1]) ? var_8 : var_15)) > var_14)))));
                            arr_12 [i_0] [i_0] [i_2] [i_3] = ((+(max((arr_0 [i_0 - 1]), 1254))));
                            arr_13 [i_0] [i_0] [i_2] [i_3] = (arr_8 [i_0]);
                        }
                    }
                }
            }
        }
    }
    var_21 = ((var_16 || ((!(!var_8)))));
    #pragma endscop
}
