/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= 9946;
    var_18 = (((--9946) ? 1 : 1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_19 &= (((((((0 ? (arr_4 [i_0]) : (arr_0 [i_1]))) | ((min((arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0]), var_15)))))) ? (min(((1 ? var_5 : (arr_1 [i_0] [i_1]))), (((var_11 != (arr_4 [i_0])))))) : var_6));
                                var_20 = (((var_16 * 1) ? 0 : (arr_4 [i_1])));
                                var_21 &= (((((18446744073709551608 > (arr_4 [i_2]))) ? ((var_1 >> (-1006 + 1030))) : (arr_5 [i_1] [i_3 + 1] [i_4]))));
                                var_22 -= var_6;
                            }
                        }
                    }
                    arr_12 [i_0] [i_1] &= (((((((max(13776848105150743792, (arr_11 [i_0] [i_1] [i_2] [i_0] [i_1] [i_1])))) ? (((min(56, -4302)))) : ((-1 % (arr_6 [i_0] [i_0] [i_0] [i_0])))))) ? (min((((arr_5 [i_0] [i_0] [i_0]) ? var_6 : var_7)), ((25 - (arr_8 [i_1] [i_1]))))) : (max((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0]) ? var_7 : var_14)), ((((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) > (arr_3 [i_0]))))))));
                }
            }
        }
    }
    #pragma endscop
}
