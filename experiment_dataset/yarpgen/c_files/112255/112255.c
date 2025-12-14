/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 1505015934;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {

                            for (int i_4 = 4; i_4 < 13;i_4 += 1) /* same iter space */
                            {
                                var_15 ^= (((max((arr_7 [i_1 + 4] [i_1 + 4] [0]), ((251 ? (arr_2 [i_4 - 3]) : 32763)))) << ((((arr_4 [i_4 - 2]) || (54538 == var_3))))));
                                arr_13 [i_0 + 1] [i_1 + 1] [14] [1] [i_4 + 1] = min((max((min(var_0, (arr_10 [i_4 + 2]))), 54535)), (((54553 == ((var_0 ? (arr_5 [i_0] [i_0 - 2]) : (arr_8 [i_4] [10] [i_2 + 2] [2] [i_1 + 4] [i_0])))))));
                            }
                            for (int i_5 = 4; i_5 < 13;i_5 += 1) /* same iter space */
                            {
                                var_16 = (arr_7 [i_5] [i_3] [6]);
                                var_17 = ((!(((((min(var_0, (arr_4 [6])))) ? 1 : var_8)))));
                                var_18 = ((((((((arr_5 [i_1] [i_0]) ? (arr_12 [i_5] [8] [5]) : var_11))) ? (((1 ? (arr_7 [i_0 + 1] [i_5] [i_2]) : (arr_15 [1] [i_1] [i_2] [i_3] [i_5 + 1])))) : (max(3387347863263668669, 3387347863263668669)))) >> (34296 - 34268)));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 15;i_6 += 1)
                            {
                                arr_20 [i_6] [i_3] [i_2 + 2] [4] [2] = (arr_11 [0] [i_1] [i_2] [0] [i_6]);
                                arr_21 [i_0] [4] [4] [i_3 + 2] [4] = ((203 ? var_13 : (arr_3 [i_2] [i_2] [i_2 - 2])));
                            }
                            var_19 = 1;
                        }
                    }
                }
                var_20 ^= ((((((arr_0 [i_0] [i_0 + 1]) ? (((min(-13586, var_13)))) : ((var_1 ? (arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : var_8))))) ? var_5 : (((arr_8 [i_1 + 4] [i_1] [i_1] [i_0 - 1] [7] [7]) - (arr_8 [1] [i_1] [i_1 + 3] [i_0 - 1] [i_0] [i_0])))));
                var_21 ^= ((11015 || (((((min(10983, (arr_7 [i_0] [i_1 + 1] [1])))) ? ((((arr_9 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? (arr_19 [11] [11] [i_0] [i_1] [1]) : (arr_6 [13] [i_0] [13] [i_0])))) : (((arr_3 [i_0] [i_1] [i_1 - 3]) + var_12)))))));
            }
        }
    }
    #pragma endscop
}
