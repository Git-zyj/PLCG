/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, -var_3));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = (max(var_12, ((min((-918063459 == var_9), 1)))));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        arr_12 [i_1] [i_1] [i_2] [i_3] = (222 / 407194687);
                        arr_13 [i_0] [i_1] [i_2] [i_3] = (arr_8 [i_0 - 2] [i_3 - 1] [i_1]);
                        var_13 = (max(var_13, ((((arr_0 [i_0 + 1]) != (arr_0 [i_0 - 2]))))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_14 += ((!((!(!var_6)))));
                        var_15 = (237 | 3397380231122674497);
                        var_16 ^= ((-(min((arr_14 [i_0] [i_1] [i_2] [i_4]), (arr_14 [i_0] [i_0] [i_2] [i_0])))));
                        arr_17 [i_0] [i_0] [i_1] = 2078693572;
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_17 = (min((min(12189067430156493835, -3495542036099997356)), 32749));
                        arr_22 [i_1] [i_1] [i_2] [i_5] = (arr_10 [i_0 - 1]);
                        var_18 &= var_6;
                    }
                    arr_23 [i_1] = ((max(237, 151)));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                arr_32 [i_1] [i_1] [i_1] [i_2] [i_2] [i_6] [i_7] = (min(((-(arr_6 [i_1] [i_1]))), (max(182, (arr_5 [i_0 + 2] [i_0 + 2])))));
                                var_19 = (min(var_19, (arr_11 [i_7] [i_7] [i_2] [i_2])));
                            }
                        }
                    }
                    var_20 = (min(var_20, (max((min((arr_3 [i_2]), 2409551019416367333)), ((max((arr_21 [i_2]), 18544)))))));
                    var_21 -= (min(((63 ? 1 : (arr_4 [i_0] [i_0] [i_0 + 1]))), -32750));
                }
            }
        }
    }
    var_22 = (min(var_22, (~var_2)));
    var_23 = var_4;
    #pragma endscop
}
