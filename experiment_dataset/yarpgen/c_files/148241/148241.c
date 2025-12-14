/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_10, ((min((var_10 >= var_1), 14616193829642528437)))));
    var_16 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] = ((((min((arr_5 [i_2] [i_2]), (arr_0 [i_0])))) ? ((((-9223372036854775807 - 1) ? (arr_0 [i_0]) : (arr_0 [i_0])))) : (min((arr_5 [i_0] [i_1]), var_9))));
                            var_17 *= 4294967295;
                            var_18 = max((min((((arr_4 [i_0]) ? var_7 : var_5)), (-9223372036854775807 & 5))), (arr_1 [i_0] [0]));
                            var_19 |= ((var_2 ? (max(var_5, ((var_3 ? 7788158607420725212 : (arr_0 [6]))))) : ((((arr_0 [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_0 [i_0]))))));
                        }
                    }
                }
                arr_10 [1] [i_1] = ((-61 ? 6207310033956440340 : 15683));
            }
        }
    }
    var_20 = var_11;
    #pragma endscop
}
