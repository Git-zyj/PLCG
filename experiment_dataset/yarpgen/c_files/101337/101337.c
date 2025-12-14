/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_16 = (min(((26 ? var_5 : (arr_6 [i_1 + 1]))), var_7));
                                var_17 = 1;
                                var_18 = (((max((max(var_4, var_6)), (1 <= var_1))) << (31448 & var_10)));
                                var_19 = (min((34097 | 144106391982833664), ((max(1, 1)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_20 = ((((((arr_3 [i_1 + 1] [i_1]) ? var_6 : (arr_13 [i_1] [i_1] [i_1 + 1] [i_5] [i_6] [i_1 + 1] [8])))) ? (max((arr_8 [i_1 + 1] [i_1] [i_6 + 2]), var_8)) : ((((var_0 <= (arr_15 [i_5] [i_1])))))));
                                var_21 = (max(var_21, (((~((((max(var_11, 1257376149))) ? var_10 : ((var_14 ? var_8 : -65536)))))))));
                            }
                        }
                    }
                    var_22 = 202;
                    var_23 = ((+((((~var_5) < ((max((arr_5 [i_1]), var_8))))))));
                    var_24 = 10;
                }
            }
        }
    }
    var_25 = var_7;
    var_26 = var_15;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        {
                            var_27 = (((max(((var_7 ? 70 : 65532)), var_6)) < var_1));
                            var_28 = (min(var_28, ((((((max(var_9, 50)))) ? var_5 : (((((max(var_7, 1033880864))) | ((var_4 ? var_3 : var_4))))))))));
                            var_29 = (min((((var_13 + (arr_24 [i_8])))), ((var_7 ? var_9 : (arr_20 [i_8] [i_10])))));
                            var_30 = ((!((!((max(var_0, 188)))))));
                        }
                    }
                }
                var_31 = ((+((-((var_5 ? (arr_3 [i_7] [i_7]) : var_10))))));
                var_32 = (((-10925 ? -var_12 : -var_6)));
            }
        }
    }
    #pragma endscop
}
