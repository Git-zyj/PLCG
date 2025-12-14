/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 3; i_1 < 17;i_1 += 1) /* same iter space */
        {
            var_20 = ((24182 && (arr_5 [i_1 + 1])));
            var_21 = ((var_16 ? -32753 : 16300829506431951163));
        }
        for (int i_2 = 3; i_2 < 17;i_2 += 1) /* same iter space */
        {
            var_22 = ((~((((((!(arr_6 [i_0]))))) * (min(781849582205069253, -8))))));
            var_23 += ((~(max((((arr_5 [13]) * var_4)), var_7))));
        }

        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {

            for (int i_4 = 2; i_4 < 20;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_24 = ((-(var_8 == 5528286360857857465)));
                            var_25 = (min((max(var_2, (arr_13 [i_5] [i_3 + 3] [i_0]))), (((6029441624039246110 ? -27 : 3329564860)))));
                            var_26 = (min(var_26, (((((max(((var_12 << (19611 - 19592))), (min(20, (arr_1 [i_6])))))) ? (((arr_2 [i_3 + 1]) << (((arr_2 [i_3 + 3]) - 63)))) : ((var_19 ? ((-(arr_9 [1] [i_6] [i_4]))) : (!var_16))))))));
                            var_27 = (+(((arr_17 [i_6 - 1] [i_6 - 2] [i_4 - 2] [i_3 + 1]) ? var_2 : (arr_17 [i_6 - 2] [i_6 - 1] [i_4 + 1] [i_3 + 2]))));
                        }
                    }
                }
                var_28 = (min(var_28, (((((min(((var_0 ? var_18 : var_13)), ((6236732564003391505 % (arr_14 [i_4] [i_3])))))) ? 27 : (max((arr_13 [i_4] [i_4 - 2] [i_3 + 1]), var_10)))))));
                arr_20 [i_4] [i_4] [i_3 + 1] [i_0] = (((((arr_15 [i_4] [i_3] [i_3] [i_3 + 1]) ? (arr_15 [i_0] [i_0] [i_0] [i_3 + 2]) : (arr_15 [i_3] [i_3] [i_4] [i_3 - 1]))) >> (((((max((arr_15 [i_0] [i_0] [i_3 + 2] [14]), var_3)) + ((min(var_17, var_4))))) - 5957714506737350871))));
            }
            var_29 = (~((~(max(var_9, (arr_11 [i_0]))))));
        }
        /* vectorizable */
        for (int i_7 = 3; i_7 < 19;i_7 += 1)
        {
            arr_25 [i_7] [i_0] = 5432526439600124733;
            var_30 = ((0 ? var_11 : (arr_8 [i_0] [20])));
        }
    }
    var_31 = (min(var_31, (((-6 ? 1023 : 3611)))));
    var_32 = max(((var_4 ? var_11 : var_13)), (((-(-37 == var_4)))));
    var_33 ^= var_6;
    #pragma endscop
}
