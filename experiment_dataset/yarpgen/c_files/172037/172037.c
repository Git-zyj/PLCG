/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 14835194147538172986;
    var_16 = (9201952752795958588 ? 8048242886620791788 : 14835194147538173000);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_8 [i_0] = ((((18446744073709551610 ? 9244791320913593028 : var_4))) ? (~9244791320913593028) : -var_1);
                    var_17 = (((arr_7 [i_0] [i_1] [i_2]) ? (arr_7 [i_0] [i_1] [i_2]) : 14835194147538172967));
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    var_18 |= ((!((min((arr_3 [i_3]), var_5)))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                arr_16 [i_5] [3] [i_0] [i_5] [i_0] [i_0] [i_0] = arr_3 [i_4];
                                arr_17 [i_1] [i_1] [i_3] [i_5] [i_5] [i_1] = (((((var_10 - (arr_14 [i_5] [i_5] [i_3] [i_5] [i_0])))) && ((((arr_14 [i_0] [i_1] [i_1] [i_5] [i_5]) ? (arr_10 [i_4] [i_5]) : 17560372891811372011)))));
                            }
                        }
                    }
                }
                arr_18 [i_0] [i_1] &= (((((arr_2 [i_0] [i_1] [i_1]) ^ var_3)) << (((arr_2 [i_0] [i_0] [i_0]) ^ (arr_2 [i_0] [i_0] [i_0])))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        {
                            arr_23 [i_6] [i_0] = (max(var_3, var_11));
                            var_19 += var_3;
                            arr_24 [i_0] [i_1] [i_7] = ((-((var_2 ? 1 : (arr_4 [i_6] [i_1])))));
                            var_20 = var_14;
                            var_21 = 9201952752795958588;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            {
                                var_22 *= 3611549926171378622;
                                arr_35 [i_8] = ((-(((((1 << (3611549926171378616 - 3611549926171378589)))) ^ (~var_14)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
