/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 ^= (min(((87 + (((arr_4 [i_0] [i_1] [i_0]) ? 117469150 : 104)))), ((((((50850531 + (arr_0 [i_0] [i_1])))) ? (242 / -72) : (((var_15 || (arr_2 [i_1])))))))));
                    var_17 = ((+((min((arr_0 [i_1] [11]), (arr_0 [i_2] [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_18 = (max(6467629943322126451, 110));
                                var_19 = (((((117 + (-2147483647 - 1)))) ? (min(var_4, (arr_2 [i_3 + 2]))) : ((((min(-37, (arr_11 [i_0] [i_1] [i_2] [i_3] [8])))) ? (((min(1, 15)))) : (max(var_3, 979685930))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (~8978127219755753302);
    var_21 ^= var_3;
    var_22 += (min(((min(207, -1))), (((((max(var_6, var_6)))) + (min(var_9, 13738633467460881100))))));
    var_23 = ((~((((max(7459842354397945510, 49))) ? var_7 : ((var_13 ? var_11 : var_9))))));
    #pragma endscop
}
