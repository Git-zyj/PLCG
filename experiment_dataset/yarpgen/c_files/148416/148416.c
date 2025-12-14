/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 = ((var_1 ? (~var_1) : (0 > 164)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_13 += ((((arr_4 [i_1]) * (arr_4 [i_0]))));
                    arr_8 [i_0] [i_1] [1] [1] = (((arr_6 [i_0] [9] [i_2]) ? (((arr_5 [i_2] [i_1] [i_1] [i_0]) ? (((1 ? 1195928572 : 0))) : (arr_6 [i_2] [1] [i_0]))) : (max((arr_3 [i_0]), ((-(arr_7 [i_0] [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_14 &= ((((min((((arr_12 [i_0] [6] [i_2] [2] [i_3] [i_3] [1]) & (arr_5 [1] [i_3] [i_2] [2]))), ((var_0 >> (((arr_7 [i_0] [i_0]) + 1838382267513084422))))))) && ((((((var_2 ? (arr_7 [i_4 + 2] [i_2]) : var_9))) ? var_6 : var_6)))));
                                var_15 = (((((((min(var_7, var_2)))) + ((0 ? 65535 : 3145728)))) == (min((0 > 4095), (arr_0 [i_1])))));
                                var_16 ^= ((((((48 ? 15 : 4003348725)))) && (((-(240 && 1))))));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    var_17 = ((+((var_8 ? (arr_2 [i_0] [i_0]) : (!var_9)))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_18 = ((((max((arr_17 [i_0]), (((!(arr_1 [i_5] [i_6]))))))) ? ((((max((arr_14 [i_0]), var_6))) ? (((-(arr_15 [i_1] [i_5])))) : (min((arr_0 [i_5]), (arr_14 [i_0]))))) : (((((min((arr_5 [i_6] [6] [i_0] [i_6]), (arr_7 [i_1] [i_6])))) ? ((max((arr_21 [i_0] [i_0] [4] [i_5] [i_5] [i_0] [i_7]), var_10))) : ((max((arr_20 [i_0] [6] [4] [i_5] [i_6] [i_7] [i_7]), (arr_6 [i_0] [1] [i_7])))))))));
                                var_19 ^= ((min((var_6 + var_9), (((arr_2 [i_0] [i_6]) ? (arr_12 [i_7] [i_6] [i_6] [i_1] [i_1] [i_6] [i_0]) : (arr_14 [i_6]))))));
                            }
                        }
                    }
                }
                var_20 &= ((((!(~var_7))) ? ((-((var_10 ? var_7 : (arr_5 [i_0] [i_0] [i_0] [i_0]))))) : (arr_15 [i_0] [i_0])));

                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    var_21 = 0;
                    arr_26 [i_0] [i_0] = var_6;
                }
            }
        }
    }
    #pragma endscop
}
