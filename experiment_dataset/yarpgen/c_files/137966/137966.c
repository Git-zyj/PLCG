/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((((min(((var_0 ? var_10 : var_0)), var_2))) ? (!var_8) : (var_4 ^ var_8))))));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] = ((~(!-4)));
                    var_12 = (min((max((-127 - 1), var_6)), ((((arr_0 [i_2 + 1] [i_1 - 1]) || var_5)))));
                }
            }
        }
        var_13 = (((var_8 | var_10) >> (((((15 && 112) - ((var_3 ? var_10 : 790601161)))) - 3504366135))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_0] [9] [i_4] [3] [i_6] [i_6] = var_5;
                                var_14 = (min(var_14, ((((~(var_10 | var_9)))))));
                            }
                        }
                    }
                    arr_22 [i_4] [14] = var_10;
                    var_15 = (!var_3);
                    arr_23 [i_0] [i_3] [14] = ((max((var_4 ^ var_5), (4294967280 + 3504366134))));
                    var_16 = (((!var_8) | (var_0 != var_2)));
                }
            }
        }
        arr_24 [i_0 + 1] = (max((!var_0), var_5));
        arr_25 [19] = -15;
    }
    for (int i_7 = 2; i_7 < 9;i_7 += 1)
    {
        arr_28 [i_7] = var_6;
        arr_29 [i_7] = (min(-8864975990410341848, var_0));
        arr_30 [i_7] [i_7] = ((-(min(var_6, 13661270343832044747))));
    }
    for (int i_8 = 3; i_8 < 16;i_8 += 1)
    {
        arr_35 [i_8] = var_0;
        var_17 ^= (min((!0), ((var_3 ? var_0 : (arr_10 [i_8 - 3])))));
    }
    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        var_18 = (min(var_18, (~var_2)));
        var_19 ^= (((arr_9 [i_9]) ? (((var_9 ? var_10 : -1))) : var_2));
        var_20 = ((!((!(!var_7)))));
    }
    var_21 = (min(var_21, ((max(var_3, ((((max(101, var_3))) == (!var_5))))))));
    /* LoopNest 2 */
    for (int i_10 = 1; i_10 < 17;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 0;i_11 += 1)
        {
            {
                var_22 = var_1;
                arr_42 [9] [7] [i_10] = (~var_10);
                arr_43 [8] [i_10] = ((!(!var_10)));
            }
        }
    }
    #pragma endscop
}
