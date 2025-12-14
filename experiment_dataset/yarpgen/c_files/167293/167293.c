/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;
    var_19 = 74;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    var_20 = var_13;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_21 &= (max(((((var_14 ? 182 : 63)) != (((arr_0 [i_1]) ? 162 : 78)))), ((!(89 | -1)))));
                                arr_14 [i_0 + 1] [i_1] [i_2] [i_0] [8] = (max(32780, (((~((max(73, -116))))))));
                                var_22 = ((((max(49, 54117))) == 255));
                                var_23 &= ((-((-32767 / ((9793 ? 32768 : 1))))));
                            }
                        }
                    }
                    var_24 = ((max(60, 18446744073709551601)) / (((-9223372036854775806 / (arr_4 [i_0] [i_0] [i_2 + 3])))));
                    var_25 &= 161;
                }
                var_26 ^= 31;

                /* vectorizable */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    arr_19 [i_0] [i_0] [i_0] = (i_0 % 2 == zero) ? (((var_13 >> (((arr_8 [i_0] [i_0] [i_5] [i_0 - 1]) - 59747))))) : (((var_13 >> (((((arr_8 [i_0] [i_0] [i_5] [i_0 - 1]) - 59747)) + 43839)))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                arr_25 [i_0] [i_0] [i_0] [i_6] [i_6] [i_6] [4] = var_6;
                                arr_26 [i_0] [i_0] [5] [i_6] [i_7] = (((((-32767 - 1) ? 0 : 31)) | (-11032 & -197311827030882787)));
                            }
                        }
                    }
                    var_27 ^= ((4294967273 / (arr_5 [i_1] [i_0 - 1] [i_1])));
                    arr_27 [i_0] [i_0] [i_5] = ((24 ? (arr_12 [i_1] [i_5] [0] [i_1] [i_1] [i_1] [i_0]) : (((10829 || (arr_2 [i_5] [i_5]))))));
                }
            }
        }
    }
    #pragma endscop
}
