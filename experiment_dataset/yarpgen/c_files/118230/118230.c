/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_6 / var_5);
    var_19 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    arr_8 [i_1] [i_1] = ((64587 ? var_12 : 1637311774));
                    arr_9 [i_0] [1] [i_0] |= ((!(~743919116)));
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    var_20 = (max(-var_9, ((((arr_12 [i_0] [i_0] [i_0] [3]) & var_3)))));
                    var_21 = (min(var_21, (((var_16 / (max((arr_3 [i_0] [i_0 + 1] [i_0]), -1637311797)))))));
                    var_22 &= ((~(~370304613)));
                    var_23 = ((~((~(arr_4 [13])))));
                    var_24 = (max(var_24, (((((min(var_9, var_4))) + var_8)))));
                }
                /* vectorizable */
                for (int i_4 = 1; i_4 < 10;i_4 += 1)
                {
                    var_25 = 1637311775;
                    var_26 = -var_8;
                    var_27 = (arr_0 [i_0 - 3]);
                }
                var_28 = (((((-(((arr_7 [0] [6]) + (arr_13 [0] [1] [i_0] [i_0])))))) || ((min((arr_5 [i_0 + 1]), 429357473)))));
                var_29 = (max(var_29, ((min((max(var_7, (arr_15 [i_0 + 2] [i_0 - 1]))), ((((arr_17 [i_0] [i_0] [11]) < (max(1, 3865609822))))))))));
                var_30 = (min(var_30, ((((((-(!var_9)))) ? (arr_4 [i_1]) : -1555527261734421996)))));
                var_31 = ((!((((min(1, (arr_4 [i_0])))) || var_3))));
            }
        }
    }
    var_32 = (min(-1555527261734422001, (!var_13)));
    var_33 ^= (min(((((min(1, var_9))))), (((~var_9) & (min(504681598, var_3))))));
    #pragma endscop
}
