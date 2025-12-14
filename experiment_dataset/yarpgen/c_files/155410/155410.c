/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((max((((~196) ? (8139 >= 0) : (min(1, 15591977359172958269)))), ((((var_10 >= var_13) ? (1 * var_6) : 56))))))));
    var_18 = (max(11734571533498804506, (max(-var_10, var_16))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] [i_2] &= ((~(((arr_4 [i_0 + 3] [i_2] [i_0 + 2]) & (arr_4 [i_0 - 1] [i_2] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, 1));
                                var_20 += 8139;
                                var_21 = (min(var_21, (((-(((arr_0 [i_0]) ? (((arr_2 [i_0]) ? (arr_7 [i_0]) : 0)) : 0)))))));
                                var_22 += 100;
                            }
                        }
                    }
                    var_23 = (min(var_23, ((min((min(((-(arr_3 [9]))), 0)), ((max((arr_0 [i_0 + 1]), ((max(7584, 1)))))))))));
                    var_24 -= ((((1 ? 177 : 4294967290)) >= (~8139)));
                }
            }
        }
    }
    #pragma endscop
}
