/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_20 += ((((((arr_3 [i_0] [i_1] [i_1 - 2]) ? (arr_3 [i_1] [i_0 + 1] [1]) : var_1))) ? (arr_0 [i_1 - 1]) : (max((arr_0 [i_0 - 3]), (arr_0 [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_21 = 399001969898626425;
                            var_22 ^= ((!((((arr_10 [i_3] [i_3]) ? (arr_4 [i_3] [i_1] [i_3]) : (arr_10 [i_3] [i_3]))))));
                            var_23 = (((-29 & (arr_1 [11]))));
                        }
                    }
                }
            }
        }
    }
    var_24 += ((((min(((26 ? var_15 : var_2)), -var_7))) ? var_9 : var_8));
    #pragma endscop
}
