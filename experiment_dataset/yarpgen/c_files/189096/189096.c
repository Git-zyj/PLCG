/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_2] [i_2] |= ((((((((arr_0 [i_0] [i_2]) >= (arr_2 [i_0] [i_2]))))) >= var_9)));
                    var_20 = (max(var_20, (arr_3 [i_0] [i_1])));
                    arr_7 [i_0] [i_2] [i_2] [i_2] = (arr_0 [i_0] [i_0]);
                    var_21 ^= (((arr_4 [i_0] [i_1] [i_2]) == ((+((var_11 ? (arr_3 [i_0] [i_1]) : (arr_0 [i_1] [i_1])))))));
                }
            }
        }
    }
    var_22 = (max((var_2 && 40102), ((var_4 ? (63317 - var_0) : var_2))));
    var_23 = (((((!(((var_1 ? var_11 : var_9)))))) >> ((((((min(2146435072, 123145302310912))) ? var_5 : var_4)) - 23831))));
    var_24 = 120;
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {
                    var_25 = var_15;
                    arr_19 [i_3] [i_3] = ((~(((!(((var_12 ? (arr_1 [i_4 + 1]) : -21722))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_26 += ((!(~-84)));
                                arr_24 [i_7] [i_7] [i_7] [i_3] [i_7] = ((!((((((var_1 ? (arr_16 [i_3] [i_3] [i_5] [i_3]) : 65535))) ? (((-(arr_2 [i_5] [i_3])))) : (((arr_0 [i_4 + 1] [i_7]) ? (arr_10 [i_4] [i_6]) : -42)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
