/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_0] = ((117 ? 1 : 3929097630820947983));
                    arr_7 [i_2] &= 1;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            {
                var_12 = (max(var_12, ((((((arr_9 [i_3]) < (arr_2 [i_3] [i_4] [i_3]))) ? ((((arr_9 [i_4]) == 3201990018))) : (arr_2 [i_3] [i_3] [i_4]))))));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_13 = ((((((max(var_6, -653)))) ^ ((var_10 ? (arr_16 [i_3] [i_4] [i_5] [i_3]) : -55)))));
                            arr_17 [i_3] [i_5] [i_5] = 8077;

                            for (int i_7 = 0; i_7 < 17;i_7 += 1)
                            {
                                var_14 = (min(var_14, (~54)));
                                var_15 &= -var_11;
                                var_16 = (min(var_16, ((((-55 / (((var_5 ? -54 : var_11)))))))));
                            }
                            for (int i_8 = 0; i_8 < 1;i_8 += 1)
                            {
                                arr_23 [i_4] [i_4] &= var_4;
                                var_17 = (max(var_17, 255));
                                arr_24 [i_3] [i_3] [i_4] [i_3] [i_3] [i_5] = ((~(((((var_7 ? 10852 : var_7))) ? (arr_4 [i_3] [i_3] [i_5 - 1] [i_8]) : (!var_5)))));
                                var_18 = (((((var_10 ? 8095 : (arr_18 [12] [i_4] [i_5] [i_6] [i_5])) / (var_11 >= var_0)))));
                            }
                            for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
                            {
                                var_19 += ((((((arr_20 [i_3] [i_3] [i_3] [i_3] [i_5 + 1]) ? var_2 : (-3929097630820947984 <= 1)))) ? (min(var_9, (arr_13 [i_4]))) : -3929097630820947980));
                                var_20 += (arr_5 [i_9]);
                            }
                            for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
                            {
                                var_21 = (max(var_21, (((((((((-21583 + (arr_3 [i_6])))) ? ((~(arr_22 [i_3] [i_3] [i_3] [i_3] [i_10]))) : ((max(32764, (arr_5 [i_3]))))))) / (((((var_0 ? var_0 : (arr_15 [i_3] [i_4] [i_6] [i_4])))) ? -var_5 : (arr_21 [i_3] [i_3] [i_10] [i_10] [i_5 + 1] [i_3]))))))));
                                var_22 = (min(var_22, (((var_7 ? ((((arr_21 [i_5] [i_5 - 1] [i_4] [i_5] [12] [i_5 + 2]) > var_3))) : (arr_4 [i_4] [i_5 + 2] [i_4] [i_4]))))));
                                arr_29 [i_3] [i_5 + 2] [i_3] &= arr_14 [i_4] [i_4] [i_4] [i_4];
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (~-1084975410);
    #pragma endscop
}
