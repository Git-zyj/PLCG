/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_19 *= (((18446744073709551615 ? 1108230431463457867 : (arr_4 [i_0]))));
            arr_6 [i_0] [i_1] [i_0] = (max((arr_2 [i_0] [i_1]), ((var_16 << ((((var_11 ? var_3 : (arr_0 [i_0]))) - 4963351187869570007))))));
            arr_7 [i_1] [i_1] |= ((((min((max(var_16, var_0)), (((arr_4 [i_0]) & (arr_1 [i_1])))))) ? (max(var_8, ((max((arr_5 [i_1]), (arr_4 [i_1])))))) : var_5));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_20 *= (arr_8 [i_2] [i_0]);
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_21 = ((((-(arr_2 [i_0] [i_0])))) != (arr_8 [i_0] [i_2]));
                            arr_18 [1] [i_2] [i_2] [i_2] = ((2996499803 ? 1766076684 : 47951));
                            var_22 |= (arr_5 [i_0]);
                        }
                    }
                }
            }
        }
        arr_19 [i_0] = ((((((((arr_12 [i_0] [i_0] [i_0] [11]) ? (arr_8 [i_0] [i_0]) : var_5)) - 47951))) ? (((arr_8 [i_0] [i_0]) ? (((arr_10 [i_0]) + (arr_8 [i_0] [i_0]))) : (arr_3 [i_0]))) : var_17));
    }
    var_23 &= var_1;
    var_24 += var_6;
    #pragma endscop
}
