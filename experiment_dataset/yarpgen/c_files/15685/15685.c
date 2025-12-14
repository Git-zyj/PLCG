/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -1563881155;
    var_20 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    var_21 ^= ((min(68, ((188 ? -23400 : 1023)))));
                    var_22 |= (max((arr_2 [12] [i_1]), (min((arr_6 [i_2 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1]), 2133049243461720220))));
                }
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    var_23 = ((((arr_8 [i_3] [i_0 - 1] [i_3] [i_3]) ? -23400 : (arr_8 [i_0] [i_0 + 1] [i_0 + 1] [i_0]))));
                    var_24 = (max(((((((arr_3 [8] [i_0]) * 221)) + 42))), (((arr_10 [i_0 - 1]) ^ (arr_10 [i_0 - 1])))));
                    var_25 |= -32;
                }
                var_26 ^= (((arr_8 [9] [i_0] [i_0 - 1] [i_0 + 1]) ? (~-61) : (min((arr_8 [i_0] [i_0] [i_0 - 1] [i_0 + 1]), (arr_9 [i_0])))));
            }
        }
    }
    var_27 -= (min((((((8070450532247928832 ? var_9 : var_11))) ? (((max(32, 234)))) : (max(var_3, 52194)))), (((min(var_18, 47))))));
    #pragma endscop
}
