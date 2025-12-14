/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (58800 + var_4);
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_0] [6] [i_0] = min(((2714165083 ? var_10 : (2714165089 + var_17))), var_13);
                    var_20 = (4596398671721994436 >= (arr_0 [8] [i_2]));
                }
            }
        }
    }
    var_21 ^= -var_17;

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_22 = (min((min((((arr_2 [i_3]) ? (arr_8 [i_3] [i_3] [i_3] [i_3]) : 8387384334779444110)), -var_6)), var_13));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    var_23 = (min(var_23, (arr_4 [i_5])));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_24 = (arr_18 [i_7] [i_5] [i_5] [1]);
                                var_25 = max((((arr_19 [i_4] [i_5]) % -4413653213254973973)), (max((arr_22 [i_6] [i_6] [i_6]), (arr_19 [i_3] [i_4]))));
                                arr_24 [i_4] [i_4] [2] [i_6] [i_3] [i_4] [i_4] = ((((min(var_18, -8387384334779444110))) ? (((((arr_8 [i_3] [i_4] [i_3] [i_3]) < var_11)))) : ((0 ? 4159184816141202212 : 9223372036854775795))));
                                var_26 -= var_12;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 20;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 21;i_9 += 1)
        {
            {
                var_27 = (max(((((-(arr_27 [i_8] [8]))) >= ((var_14 ? var_3 : (arr_25 [i_8] [i_8]))))), (((var_10 | var_16) < var_3))));
                var_28 |= var_7;
                var_29 = (((arr_27 [i_8] [i_9 - 1]) ? (((!(arr_25 [i_8] [i_9 - 1])))) : (arr_25 [i_8] [i_8])));
            }
        }
    }
    #pragma endscop
}
