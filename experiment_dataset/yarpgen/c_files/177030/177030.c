/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_19 += 74942861;
                    var_20 = (!74942861);
                }
                var_21 = (!var_12);
                arr_7 [i_1] = (((((var_10 ? (max(2147479552, (arr_3 [7] [i_1] [i_0]))) : ((-(arr_2 [i_0] [i_1 - 1])))))) && ((((arr_2 [i_1 - 1] [i_1 - 1]) ? (arr_2 [i_1 - 1] [i_1 + 1]) : 28014)))));
            }
        }
    }
    var_22 = (-2147483647 - 1);
    var_23 &= ((!(((var_13 ^ ((max((-2147483647 - 1), var_5))))))));
    #pragma endscop
}
