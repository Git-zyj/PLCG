/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_0] = (((((-(arr_7 [i_1] [i_0])))) ? var_4 : 13));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_11 = (min(var_11, ((((((((-(arr_1 [i_2])))) > 1)) ? (((((min(1, var_4))) ? (((1 == (arr_4 [16] [i_2])))) : (!1)))) : ((min(0, (arr_7 [i_0] [i_2])))))))));
                                var_12 = (min(65535, (arr_2 [i_3])));
                                var_13 = (min(var_13, (((-(((arr_14 [i_2]) << 1)))))));
                                var_14 = ((!((((arr_13 [i_2]) ? ((-(arr_6 [i_0] [i_0] [i_0] [i_0]))) : 272)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = var_8;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 2; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                arr_29 [i_5] [i_5] [i_5] [i_7] [i_5] = ((min((((arr_28 [i_5] [i_6] [i_7] [i_7] [i_8] [i_8] [i_6]) ? var_9 : 57344)), ((-26 ? 5359927225956076509 : 0)))));
                                var_16 *= ((~(-1 > 128)));
                                arr_30 [i_5] [i_7] [i_7] [i_8] [i_7] = (((((1 == (arr_21 [i_7 + 1] [i_9])))) << (!var_1)));
                                arr_31 [i_5] [i_7] = (!var_5);
                            }
                        }
                    }
                }
                arr_32 [i_6] = ((((((((arr_26 [i_6] [i_6] [i_6]) ? var_4 : (arr_3 [i_5])))) || (((var_3 ? 47 : (arr_12 [i_5] [i_5] [i_6] [i_5] [i_5])))))) && (((31 ? (((arr_16 [i_5]) ? (arr_0 [i_5]) : var_6)) : (arr_19 [i_5] [i_6]))))));
                arr_33 [i_5] [i_5] [i_5] = var_10;
            }
        }
    }
    #pragma endscop
}
