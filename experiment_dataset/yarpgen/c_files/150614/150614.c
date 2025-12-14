/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((1524651358 == (((((var_11 ? var_3 : 0))) ? var_5 : var_8))));
    var_20 ^= ((-31 & ((12 ? 108 : 255))));
    var_21 = var_3;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_22 = (max((((arr_0 [i_0 + 1]) ? (arr_0 [i_0 + 1]) : var_15)), (((!(~32704))))));
        arr_2 [i_0] = ((((max((max(36, 32704)), (arr_1 [1])))) << ((((-(arr_0 [i_0]))) - 12302))));
        arr_3 [i_0 - 1] = ((!(arr_0 [i_0])));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_23 = (~((max(var_7, ((((arr_4 [i_1 + 2] [i_1]) == var_0)))))));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 21;i_4 += 1)
                {
                    {
                        var_24 = (min(var_24, (((-(((((var_8 ? (arr_6 [i_1 + 2] [i_3 + 2] [i_1 + 2]) : (arr_13 [i_1] [i_3] [i_4 - 1] [i_4 - 2])))) ? (arr_13 [i_1] [i_1] [i_1] [i_1]) : (17494559189086508248 ^ var_10))))))));
                        var_25 = (arr_4 [i_4] [i_4 - 1]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
