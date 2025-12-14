/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                arr_5 [3] [i_0] = (max(((((-28690 / 6) / ((min((arr_3 [i_0] [i_0]), (arr_3 [i_1 - 1] [i_1 - 1]))))))), (((arr_1 [i_0]) ? -3229258543576978514 : var_11))));
                arr_6 [i_0] = ((var_7 ? (((((1 ? (arr_0 [3]) : -32181))) ? (~84) : (var_14 ^ var_5))) : 214));
            }
        }
    }
    var_16 = var_0;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            {
                var_17 *= (min(var_5, ((2062982984 ? var_9 : 29))));
                var_18 = (i_3 % 2 == zero) ? ((((~((var_11 ? var_15 : var_15)))) >> ((((-28690 ? (arr_11 [i_2] [i_2] [i_3]) : (arr_12 [i_2] [i_3] [i_3 + 1]))) - 16883484767711756214)))) : ((((~((var_11 ? var_15 : var_15)))) >> ((((((-28690 ? (arr_11 [i_2] [i_2] [i_3]) : (arr_12 [i_2] [i_3] [i_3 + 1]))) - 16883484767711756214)) - 9892776328406492414))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_19 = (arr_19 [i_2] [i_3] [i_3] [i_5] [16]);
                                var_20 = ((((-(arr_10 [i_2] [i_3]))) ^ ((var_7 >> (var_13 - 499501634)))));
                            }
                        }
                    }
                }
                var_21 -= (((33 ? var_8 : (arr_17 [i_3 - 1] [i_3 + 2] [5] [i_3 + 1] [i_3 + 2] [i_3 + 2]))) == 1);
            }
        }
    }
    #pragma endscop
}
