/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    var_17 = (!4294967295);
                    var_18 &= ((-(arr_3 [i_0] [16])));
                    var_19 &= var_3;
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_20 = (arr_2 [i_1]);
                                var_21 = (min(var_21, ((((((min(48, (arr_1 [5] [11])))) ? (arr_8 [i_0] [i_0] [i_1 + 2] [i_1 + 2]) : (((arr_6 [i_0] [i_0] [i_0 + 4]) + var_1))))))));
                                var_22 = ((((120 >> (((arr_5 [i_0]) + 132)))) < (((arr_14 [i_1 + 1] [i_4]) ? var_12 : (arr_0 [i_0] [i_0])))));
                                arr_15 [i_5] [i_4] [i_1] [i_1] [i_0] [i_0] = ((((arr_12 [i_0] [i_0] [i_0 + 4] [i_0]) ^ (arr_12 [i_0] [i_0] [i_0 - 1] [i_0 + 4]))));
                            }
                        }
                    }
                    var_23 ^= -20006;
                    arr_16 [i_1] = ((var_11 ? 104 : (arr_10 [i_1] [i_1 + 2])));
                }
                for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                {
                    var_24 ^= (arr_14 [i_0] [i_0]);
                    arr_19 [i_1] = (min(((var_8 ? 0 : (arr_14 [i_0 + 3] [i_0 - 3]))), (arr_12 [i_0] [i_0 - 3] [i_6] [i_6])));
                }
                arr_20 [i_1] = ((((min((arr_3 [i_0 + 3] [i_1]), 120))) / 127));
            }
        }
    }

    for (int i_7 = 2; i_7 < 20;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 18;i_9 += 1)
            {
                {
                    var_25 = (max(var_25, ((min((arr_27 [i_7 - 2] [i_8 + 3]), var_16)))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 20;i_11 += 1)
                        {
                            {
                                arr_32 [i_7] [11] [i_8] [i_7 + 1] = (i_8 % 2 == zero) ? (((-125 ? (((((var_8 >> (((arr_28 [i_7] [i_7] [17] [i_8] [i_11 + 1]) - 574852564)))) == (arr_23 [i_7 - 1])))) : (arr_26 [17] [i_8])))) : (((-125 ? (((((var_8 >> (((((arr_28 [i_7] [i_7] [17] [i_8] [i_11 + 1]) - 574852564)) - 694776219)))) == (arr_23 [i_7 - 1])))) : (arr_26 [17] [i_8]))));
                                arr_33 [i_8] [i_8] [i_9] [i_8] [i_7] = (min((arr_27 [i_8 - 1] [i_8 + 3]), (arr_29 [i_8 + 2] [i_8 + 3] [i_8] [2] [i_8] [i_8])));
                                arr_34 [i_7] [i_8 - 1] [i_8] = var_3;
                            }
                        }
                    }
                    var_26 = ((~(arr_28 [i_7] [i_7 - 1] [17] [i_8] [i_8])));
                    var_27 = ((((var_15 == (arr_23 [i_9 + 3]))) ? ((-(arr_22 [i_9 - 3]))) : (arr_27 [i_7 + 1] [i_9 - 2])));
                }
            }
        }
        var_28 = (min(var_28, (min((arr_25 [18]), ((min(135, (arr_29 [i_7 + 1] [i_7] [16] [i_7 - 2] [i_7] [i_7]))))))));
    }
    var_29 = var_2;
    var_30 = ((!((((14152804093806337365 + var_6) ^ 5563763313324370880)))));
    #pragma endscop
}
