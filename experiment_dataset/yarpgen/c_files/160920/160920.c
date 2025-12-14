/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (-1762237757 / var_8);
    var_11 = (var_6 ? (max(-924019986, 32640)) : ((min(var_8, (!var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = ((((var_1 + 2147483647) << (((arr_5 [i_1] [i_1]) - 1)))) >> ((((19514 << (142447465 - 142447455))) - 19982309)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_13 = (min(var_13, var_5));
                            arr_12 [i_0] [i_1] [i_2] [i_3] = (var_5 ? (((arr_6 [i_3] [i_2] [i_1] [i_0]) * (var_4 <= var_5))) : (arr_5 [i_0] [i_1]));

                            for (int i_4 = 0; i_4 < 16;i_4 += 1)
                            {
                                var_14 *= var_2;
                                var_15 = (((((max(var_4, 32640)) ? (((156 == (arr_11 [i_4] [i_4] [i_3] [i_0] [i_1] [i_0])))) : (arr_4 [i_0])))));
                                var_16 += (+(((arr_7 [i_0] [i_1] [12]) ? (arr_7 [i_0] [i_0] [i_4]) : (arr_7 [i_4] [i_1] [i_1]))));
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                arr_17 [i_5] = ((((((arr_5 [i_0] [i_3]) < (arr_2 [i_3])))) < ((var_3 ? 60938 : var_6))));
                                arr_18 [i_5] [i_1] [i_2] [6] [i_5] = (arr_5 [i_0] [i_0]);
                                var_17 = ((~((var_1 + (((arr_11 [i_5] [i_3] [i_2] [6] [i_1] [i_0]) ? var_3 : -142447465))))));
                                var_18 = min(((var_3 ? var_1 : (arr_10 [i_0] [i_1] [i_2] [i_3] [i_1]))), (max((((arr_10 [i_5] [i_3] [i_2] [i_1] [i_0]) ? (arr_13 [i_5] [i_5] [i_3] [i_1] [i_1] [i_1] [14]) : var_4)), (max(-142447466, (arr_0 [i_0] [i_2]))))));
                            }
                            var_19 = (max(((((((-1465873670 + 2147483647) << (6 - 5)))) || ((max(var_2, (arr_11 [i_3] [i_2] [10] [i_1] [i_0] [i_0])))))), ((((627278404 ? (arr_4 [i_0]) : 920210432)) <= (max(var_2, (arr_8 [i_2] [i_2])))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
