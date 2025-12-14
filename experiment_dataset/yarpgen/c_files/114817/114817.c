/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= var_5;
    var_14 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] [i_0] = -10;
                var_15 = (min(154, (arr_4 [i_0] [i_0])));

                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_14 [i_0] [i_0] [i_0] [8] |= 1;

                        for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                        {
                            var_16 = ((((((((arr_5 [i_0] [i_1]) ? 160 : 96))) | (max(116, (arr_6 [i_3]))))) >> (((((arr_9 [i_0] [i_0] [i_0]) ? (~104) : (max((arr_7 [i_3]), var_6)))) + 137))));
                            arr_18 [i_0] = ((!(((~((118 ? 8529593002516660936 : 65535)))))));
                            var_17 = (((arr_1 [i_0] [i_0]) >> (((!(arr_5 [i_2 - 1] [i_2 + 1]))))));
                        }
                        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            var_18 = (1 % (((arr_11 [i_2 + 2] [i_0] [i_5]) ? -105 : 116)));
                            var_19 = ((((max((arr_15 [i_0] [i_0] [i_2] [i_2 + 2] [i_2] [i_3] [i_5]), (536870910 - 25)))) ? (((!(arr_1 [i_5] [3])))) : (((2199023251456 <= (arr_13 [i_0] [i_2] [i_2 + 1] [i_0]))))));
                            var_20 = ((-2199023251457 ? ((((5961125505950386858 | (arr_2 [i_0] [i_1]))) >> (((~var_3) - 2513213601)))) : (arr_0 [i_0] [i_0])));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            var_21 = (var_5 * 8128);
                            arr_23 [i_0] [i_2] [i_6] = (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                        arr_24 [i_1] [i_0] = ((5 != (arr_17 [i_3] [i_2 + 1] [i_2] [i_1] [i_0] [i_0])));
                    }

                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        var_22 = (min(var_22, ((min((arr_11 [i_0] [8] [8]), (((((1 ? 1 : (arr_10 [1] [i_1] [i_0] [i_7])))) ? 104 : (arr_22 [i_1] [i_2] [i_1] [i_1] [i_0]))))))));
                        var_23 *= (arr_20 [i_1] [19]);
                    }
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        var_24 = (min(var_24, ((min((arr_7 [20]), (arr_22 [i_0] [i_1] [i_2] [i_8] [i_2]))))));
                        var_25 = ((-115 ? (((arr_21 [12] [i_0] [i_2 - 1] [i_0] [i_2 - 1]) | (arr_15 [i_8] [i_8] [i_2 - 2] [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1]))) : (-2199023251457 && 0)));
                        var_26 = var_8;
                    }
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        arr_34 [i_2 - 2] [i_2 - 2] [0] [2] [i_0] [i_1] &= var_2;
                        var_27 = ((((max((arr_29 [i_2 + 2] [i_2 + 2] [1] [i_2] [i_2 + 1] [13]), (arr_32 [i_2 + 1] [i_2 + 1] [i_2 - 2] [i_2 - 2])))) ? ((var_9 ? (arr_33 [i_2 + 1] [i_2] [i_2] [i_2 + 1]) : 6785)) : (((arr_29 [i_2 + 1] [i_2] [i_2] [i_2 + 1] [i_2 - 1] [i_2]) ? (arr_32 [i_2 + 2] [i_2 + 2] [i_2] [12]) : var_6))));
                        var_28 = (max(var_28, var_6));
                        var_29 = ((((min((arr_7 [i_2]), 147))) ? ((((((18446744073709551610 ? (arr_13 [i_0] [i_0] [20] [i_0]) : -498967114))) && (((57412 >> (125 - 119))))))) : -var_8));
                    }
                }
                var_30 = (min(var_30, 118));
                var_31 = 58751;
            }
        }
    }
    #pragma endscop
}
