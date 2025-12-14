/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = max(((var_12 ? (1362410173466467849 == var_15) : var_13)), (min(5746593316765582062, var_4)));
    var_19 = max(5746593316765582071, var_16);

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_20 = 5746593316765582062;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 += (~((~((var_1 ? 18446744073709551603 : (arr_8 [i_2] [i_1] [i_0 - 1] [i_0]))))));
                    var_22 *= min(5112340480394582872, 17396410779669686551);
                    var_23 = ((((18006377768684977257 ? (arr_8 [i_2] [i_2] [i_2 + 1] [i_2 + 1]) : (arr_8 [i_1] [i_1] [i_2 + 2] [i_2]))) < ((((arr_4 [i_0] [i_0]) != var_11)))));
                    var_24 *= -12700150756943969544;
                    arr_9 [i_0] [i_0] = ((arr_3 [i_0]) ? var_1 : ((-2333016373403285195 ? (((arr_2 [i_0]) ? (arr_3 [i_0]) : (arr_8 [i_0] [i_1] [i_0 - 2] [i_1]))) : 8827409039168438131)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 24;i_4 += 1)
            {
                {
                    arr_15 [i_0] = max((arr_1 [i_0]), 18446744073709551615);
                    var_25 &= ((((18446744073709551615 ? 18006377768684977240 : 12700150756943969535)) < ((((!((min(2746409078847084969, var_1)))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_26 -= max((((!(((1020 << (12662469434098231683 - 12662469434098231651))))))), ((12662469434098231713 ? 4 : 18446744073709551615)));
                                arr_22 [i_0] [i_0 + 1] [i_0] = (-((18446744073709551615 ? (arr_21 [i_0] [i_3] [i_4] [i_5] [i_6]) : 440366305024574359)));
                            }
                        }
                    }
                    var_27 = arr_7 [i_0];
                }
            }
        }
    }
    #pragma endscop
}
