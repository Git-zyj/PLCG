/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_15 = (min(var_15, ((((((+(min((arr_1 [i_1]), var_9))))) ? (1 * 35) : (min((var_11 >> var_4), ((var_3 ? var_0 : (arr_0 [i_0] [i_1]))))))))));
                        var_16 = (min((((arr_7 [i_0] [i_1] [i_1] [i_1]) % (arr_3 [i_2]))), (((var_13 || (arr_9 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))));
                        var_17 += ((((max((max(-29, 1625096428)), var_1))) ? var_5 : var_8));
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        arr_14 [i_0] [i_0] [i_0] = var_12;
                        var_18 = (((-var_11 < var_5) ? ((var_4 ? var_5 : (arr_6 [i_0] [i_2] [i_4]))) : var_7));
                        var_19 = ((~(min((~var_0), (((arr_7 [i_0] [i_0] [i_0] [i_0]) ? var_10 : var_12))))));
                    }
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        arr_19 [i_0] [i_0] [i_0] = (~var_2);
                        var_20 ^= ((-((max(((max(var_2, var_4))), (max(var_0, (arr_6 [i_0] [i_0] [i_2]))))))));
                    }
                    var_21 -= var_0;
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    var_22 = ((-(arr_21 [i_0] [i_1] [i_1] [i_6])));
                    var_23 &= (((arr_12 [i_1] [i_1] [i_6] [i_0] [i_6]) ? var_12 : (arr_12 [i_6] [i_1] [i_6] [i_0] [i_6])));
                    var_24 = var_12;
                    arr_24 [i_0] [i_0] [i_6] [i_0] = (((var_7 ? var_11 : (arr_13 [i_0] [i_0] [i_0] [i_1]))));
                }
                var_25 -= var_2;
                var_26 += (arr_7 [i_1] [i_1] [i_1] [i_1]);
            }
        }
    }
    var_27 -= var_0;
    #pragma endscop
}
