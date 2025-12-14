/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [1] [i_3] [i_4] = ((!(-70724289 != 16159)));
                                var_11 |= (~var_0);
                                var_12 = ((var_5 ? (max(16159, (arr_8 [i_3 + 2] [i_0 - 1] [i_3 + 2]))) : (arr_8 [i_3 + 1] [i_0 + 1] [i_3 + 1])));
                            }
                        }
                    }
                    var_13 = (arr_9 [7] [i_0] [i_1] [i_1]);
                    var_14 = ((((min(1, 50))) ? -536870912 : ((((min((arr_8 [i_2] [i_1] [i_0 - 1]), 6125)) >= (arr_8 [i_0] [i_0] [i_2]))))));
                }
            }
        }
    }
    var_15 = (min(((-(!var_10))), ((var_2 ? (!10648245661641897701) : (-1 != var_8)))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            {
                var_16 |= 1;
                var_17 = (var_10 ? var_9 : ((22873 ? -205 : var_2)));

                /* vectorizable */
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        var_18 = (max(var_18, (+-205)));
                        var_19 = (((arr_7 [i_8] [i_6] [i_5]) ? (arr_12 [i_8] [i_8] [i_8] [i_8] [i_8]) : (arr_10 [i_5] [i_5])));
                        var_20 = (max(var_20, (!0)));
                        var_21 -= 205;
                    }
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        var_22 = (-(arr_11 [i_5] [i_6] [i_7] [i_9] [i_5]));
                        var_23 = ((~((-(arr_0 [i_7])))));
                    }
                    var_24 = (((((~(arr_15 [10])))) < 12));
                }
            }
        }
    }
    #pragma endscop
}
