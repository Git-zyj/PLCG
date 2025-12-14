/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!((((((var_6 ? var_8 : var_10))) ? ((var_18 ? var_4 : var_13)) : var_16)))));
    var_20 = (min(var_20, (((-(((!var_10) ? (~var_16) : ((max(var_13, var_9))))))))));
    var_21 = ((((((!var_9) ? ((var_4 ? var_17 : var_5)) : (var_1 == var_16)))) ? ((208 >> (1996398773 - 1996398757))) : (((((var_1 ? var_14 : var_16)) == (var_2 * var_11))))));
    var_22 = (-39 < var_4);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_6 [8] [i_1] [i_1] = (((((arr_5 [i_1] [i_0] [i_0]) ? var_0 : (arr_4 [i_1] [i_1] [i_0])))) ? (arr_1 [i_1]) : var_13);

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 9;i_4 += 1)
                    {
                        {
                            arr_14 [8] [i_2] [i_1] [i_2] [i_3] [i_4] = 402653184;
                            var_23 = (min(var_23, ((((var_5 ? (arr_13 [i_3] [i_3] [i_1] [i_3] [i_1] [i_3]) : (arr_12 [i_0] [i_1] [i_2] [i_3] [i_4 - 1]))) - ((-(arr_1 [i_1])))))));
                            var_24 = (arr_4 [i_0] [i_1] [i_2]);
                        }
                    }
                }
                var_25 = (arr_0 [i_0] [i_0]);
            }
            var_26 = ((((((!(arr_8 [i_0] [6] [i_1] [i_1]))))) == ((var_8 ? (arr_1 [i_0]) : 1218579648))));
        }
        arr_15 [i_0] = (var_5 == var_5);
        var_27 ^= (((((arr_11 [i_0] [i_0] [i_0] [i_0]) ? 58 : (arr_13 [2] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (arr_12 [i_0] [i_0] [i_0] [2] [i_0]) : 66);
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_28 = min(var_16, ((((max(var_15, (arr_17 [i_5])))) ? (min((arr_17 [i_5]), var_7)) : -13412)));
        arr_18 [i_5] |= (((max((arr_16 [i_5]), (arr_16 [i_5]))) <= (((((((arr_17 [i_5]) ? (arr_16 [i_5]) : var_11)) < (arr_16 [i_5])))))));
    }
    #pragma endscop
}
