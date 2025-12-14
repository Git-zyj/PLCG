/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_8 [i_3] [10] [1] [i_3] = (arr_5 [i_2]);
                            var_16 = (min(var_16, (arr_7 [10] [i_0 + 1] [i_2 + 1] [6])));
                        }
                    }
                }
                var_17 = ((((((arr_2 [i_0 - 1]) ? (arr_2 [i_0 + 3]) : (arr_2 [i_0 + 2])))) ? var_12 : ((max((arr_2 [i_0 + 3]), 1808526961)))));
            }
        }
    }
    var_18 &= 2062963161;
    #pragma endscop
}
