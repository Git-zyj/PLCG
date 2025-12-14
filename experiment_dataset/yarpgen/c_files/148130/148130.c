/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 *= (99 - var_6);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
                {
                    var_13 = (!var_9);
                    var_14 = 4095;
                    arr_9 [i_0] [i_0] [i_0] [i_0] = var_0;
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
                {
                    var_15 ^= (max((arr_12 [i_1] [i_0] [i_3]), (((arr_4 [i_0] [i_0] [i_0]) ? (arr_12 [i_3] [i_1] [i_0]) : var_6))));
                    var_16 ^= (((max(29827, -9180))) ? (((min(2233785415175766016, (arr_1 [i_1]))) + ((((arr_0 [i_0]) ? 99 : var_1))))) : -1028046507062194447);
                    arr_13 [i_0] [i_0] [i_0] [i_0] = ((-((-(arr_0 [i_0])))));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                {

                    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                    {
                        var_17 &= ((2966204719363378850 ? -1028046507062194447 : var_4));
                        var_18 = -2233785415175766016;
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                    {
                        arr_24 [i_0] [i_0] [i_0] [i_4] [i_6] = 127;
                        var_19 *= (31 ^ 0);
                        var_20 -= var_10;
                        arr_25 [i_0] [i_1] [i_4] [i_4] [i_1] = var_2;
                        arr_26 [i_0] [i_0] [i_0] [i_0] = (arr_18 [i_0] [i_1] [i_0] [i_0]);
                    }
                    var_21 = (max(var_21, var_8));
                    arr_27 [i_0] [i_1] [i_1] [i_1] = (((arr_0 [i_4]) ? var_9 : var_9));
                }
                var_22 += ((!((max(99, (arr_12 [i_1] [i_1] [i_1]))))));
                arr_28 [i_0] [i_1] [i_1] = ((((((arr_3 [i_1]) ? var_6 : (arr_3 [i_0])))) ? var_5 : (max((arr_3 [i_0]), (arr_3 [i_0])))));
            }
        }
    }
    var_23 = (((((((max(2233785415175766008, var_11))) ? ((max(var_1, var_2))) : var_3))) ? (((min((var_4 == var_11), var_7)))) : ((var_3 ? var_4 : (2233785415175766008 - var_11)))));
    var_24 -= var_3;
    #pragma endscop
}
