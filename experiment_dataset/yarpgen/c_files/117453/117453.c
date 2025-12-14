/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_10 >> (var_0 - 4891)));
    var_17 = max((((var_4 & var_0) ? (var_12 | var_13) : (var_11 % var_3))), ((((var_15 ^ var_15) <= var_2))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 |= (max(((max((arr_0 [i_0]), (arr_0 [i_2])))), (max(((((arr_2 [i_2] [i_1] [i_0]) | var_4))), (max((arr_4 [i_2] [i_1]), var_8))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_19 = var_2;
                                var_20 ^= (((arr_4 [i_1] [i_1]) ? (max((~var_14), var_1)) : ((((((max((arr_5 [i_1] [i_0]), (arr_10 [i_4 + 1] [i_3] [i_2] [i_1] [i_0])))) && ((max(1945822713155796881, (-32767 - 1))))))))));
                                var_21 = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_6;
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            {

                for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                {
                    var_23 = ((-var_0 != (((arr_19 [i_5 + 1] [i_5 + 1] [i_5 + 1]) ? (arr_19 [i_5 - 1] [i_5 - 1] [i_5 - 2]) : (arr_19 [i_5 + 1] [i_5 + 1] [i_5 - 2])))));
                    var_24 = ((1945822713155796881 ? 254 : ((((arr_20 [i_6]) && (var_1 && 0))))));
                }
                for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                {
                    var_25 = (max((max(2994695525, -80)), ((((((!(arr_24 [i_8] [i_6] [i_5])))) >= (var_14 >= var_9))))));
                    var_26 ^= ((~((-7931279028564734878 * (var_10 / var_8)))));
                }
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    var_27 ^= (var_14 >> (((!((((arr_22 [i_5] [i_5]) + (arr_25 [i_9] [i_5 - 1] [i_5 - 1]))))))));
                    var_28 += ((!((max(((max((-127 - 1), 35184372088831))), (max(var_15, var_13)))))));
                }
                var_29 = (min(var_29, (((max((arr_17 [i_5 + 1] [i_5 + 1] [i_5 - 2]), var_15))))));
                var_30 = ((var_11 >= ((max((!var_4), var_1)))));
            }
        }
    }
    #pragma endscop
}
