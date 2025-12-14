/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_2 << (!var_14));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (arr_0 [i_0] [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 12;i_4 += 1)
                            {
                                var_18 = ((((max(var_3, (arr_2 [i_0 + 1] [i_0 + 1])))) ? ((min((arr_3 [i_4] [i_0] [i_0]), var_1))) : ((28001 / (max(224, 8416209106001427434))))));
                                arr_14 [i_0] [i_2] [10] [i_2] [i_2 + 2] [i_1] [i_4] &= ((((((!var_15) ? (var_14 || var_6) : (((arr_6 [i_0] [i_3] [i_4]) ? (arr_10 [i_0] [i_1] [i_2] [i_0] [i_4]) : (arr_3 [i_2 + 1] [i_2 + 1] [i_2 + 1])))))) || (arr_4 [i_0] [i_0] [7])));
                            }
                            for (int i_5 = 0; i_5 < 12;i_5 += 1)
                            {
                                var_19 = ((((max(var_10, (((61747 == (arr_16 [6] [8] [i_3] [8]))))))) ? (!var_0) : var_13));
                                var_20 = ((64 * (((arr_12 [i_0] [i_0 - 1] [i_0 - 1] [i_1] [11] [i_2 + 1] [i_2 - 1]) ? (arr_12 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0] [3] [i_2 + 1] [i_2 + 2]) : (arr_12 [i_0] [i_0 - 1] [i_0 - 2] [i_1] [1] [i_2 + 1] [i_2 + 2])))));
                                var_21 = (max(var_21, (((-29 ? (((((arr_0 [i_5] [i_3]) * (arr_2 [i_0] [i_2]))))) : ((max((arr_4 [i_1] [6] [i_0 - 1]), var_6))))))));
                                var_22 = (1 ? ((min((arr_8 [1] [i_1] [i_2] [i_1]), (!16)))) : (((((max(var_15, 127))) && var_5))));
                                var_23 &= (-32761 ? (arr_11 [i_3] [i_2] [i_2] [1] [i_5] [i_0 - 2] [i_0 - 2]) : ((max((arr_11 [1] [i_1] [i_2] [i_3] [i_5] [i_0 - 2] [11]), (arr_11 [i_0 + 1] [i_1] [i_2] [i_3] [i_5] [i_0 - 2] [i_1])))));
                            }
                            for (int i_6 = 0; i_6 < 12;i_6 += 1)
                            {
                                var_24 = (((((-(arr_8 [i_2 - 1] [0] [i_0 - 2] [i_3])))) ? (arr_7 [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2 + 2]) : (min((arr_12 [i_0 - 2] [3] [i_2 + 1] [i_0] [i_6] [i_6] [i_2 + 1]), (arr_12 [i_0 - 2] [i_1] [i_2 - 1] [i_3] [3] [i_0] [i_2])))));
                                var_25 = ((arr_2 [i_1] [i_3]) ? (arr_6 [i_0] [i_1] [i_2]) : ((~(arr_8 [i_6] [i_2 + 2] [i_1] [i_0 + 1]))));
                                var_26 ^= ((((max((arr_4 [i_0 - 1] [i_0 - 2] [i_0 + 1]), var_14))) ? var_13 : (min((((arr_1 [i_1]) ? 0 : var_0)), var_4))));
                            }
                            var_27 = ((var_7 ? ((((255 ? var_8 : (arr_4 [i_1] [i_2 - 1] [i_3]))) / 2147483647)) : var_6));
                            var_28 = ((((((57397748 * (arr_15 [i_0 - 1] [i_1] [1] [1] [i_2] [i_3]))))) ? (((3933308883633882265 + var_9) & ((max((arr_10 [i_0] [i_0] [i_1] [i_2] [i_3]), (arr_5 [i_0])))))) : var_12));
                        }
                    }
                }
                arr_20 [i_0] [i_1] [i_1] = (--108);
            }
        }
    }
    #pragma endscop
}
