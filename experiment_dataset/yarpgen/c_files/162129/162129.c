/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (((~((var_11 ? 22017 : 0)))));
    var_19 = ((~((~((max(var_10, 30)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((((max((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_1])))) ? (arr_0 [i_0] [i_0]) : (!4294967284)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_20 = (max((23 != var_7), (max(55, var_0))));
                            arr_11 [i_0] [i_0] [i_2] = 31;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
