/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_17 &= 1595224602;
                            var_18 = (~-16);
                            var_19 = (arr_8 [i_0] [i_0]);
                            var_20 = (var_11 == var_2);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_21 = (max((arr_11 [i_0]), (((var_12 != var_3) % var_10))));
                            var_22 += (!var_7);
                            var_23 -= (arr_1 [i_1] [i_1]);
                            var_24 = (((((~((((arr_2 [i_5]) != var_7)))))) ? (((~((var_0 ? (arr_0 [i_1] [i_5]) : (arr_2 [i_1])))))) : 0));
                        }
                    }
                }
            }
        }
    }
    var_25 = ((((((min(1, var_10))) << (var_2 != 16))) != (((var_7 < ((var_11 ? var_16 : var_13)))))));
    #pragma endscop
}
