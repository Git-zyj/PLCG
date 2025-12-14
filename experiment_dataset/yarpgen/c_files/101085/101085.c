/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_19 = ((+((((arr_0 [i_0 + 2] [i_0 + 2]) || var_0)))));
        var_20 = min(((79 - (arr_1 [i_0 + 1]))), (max((arr_1 [i_0 - 2]), (arr_0 [i_0 + 1] [i_0 + 1]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_21 = (arr_3 [i_1]);
        arr_5 [i_1] [i_1] = (((arr_0 [i_1] [i_1]) % (arr_0 [i_1] [i_1])));
    }
    var_22 -= (!var_14);
    var_23 = 5082;
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_24 = ((((min(34, (arr_18 [i_5] [i_5 + 1] [i_5 - 2] [i_5] [i_2] [i_5 - 1] [i_5])))) ? (((((min(var_15, var_0))) ? (((arr_12 [i_2] [i_2]) ? var_0 : (arr_14 [i_2] [i_5]))) : ((~(arr_12 [i_3] [i_3])))))) : (((arr_1 [6]) ? -var_4 : (((1536546964 ? 515343743 : 222)))))));
                                var_25 = var_8;
                            }
                        }
                    }
                    var_26 = ((((max(var_3, 15))) ? var_12 : (((max(177, var_16))))));
                    var_27 = var_4;
                }
            }
        }
    }
    #pragma endscop
}
