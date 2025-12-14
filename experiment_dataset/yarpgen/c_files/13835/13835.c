/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_17 = (((((((var_14 ? var_15 : (arr_4 [4] [i_1] [i_2])))) >= 1)) ? (arr_6 [1] [i_1] [i_1]) : ((((1 >= (arr_4 [13] [i_1] [i_2]))) ? 1 : 1))));
                    var_18 += (max(1, 1));
                    var_19 = (min(var_19, ((((1 ? (max(-914209795, 4294967294)) : (((1 ? 1 : 248)))))))));
                }
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [i_1] [i_3] [i_1] [i_4 - 1] [i_5] = 0;
                                var_20 = 1;
                                arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] = ((max(-6596559932497765124, (arr_4 [i_0 - 1] [i_1] [i_4 - 1]))));
                                arr_20 [i_0] [i_1] [i_1] [i_4] [1] [i_5] = ((!((max(((((arr_13 [i_4 + 1] [i_4 - 1] [i_1] [i_4 + 1] [i_4]) | var_7))), 9223372036854775807)))));
                                var_21 = (max(var_21, ((((((1 ? (((arr_9 [16] [i_1] [6] [i_1]) ? 1 : (arr_13 [i_0] [i_1] [4] [4] [16]))) : (((22528 ? 1 : (arr_6 [i_0] [i_1] [4]))))))) ? (((arr_17 [i_1 - 1] [16] [i_4 + 1] [i_4] [i_5] [0]) ? (~1936563659) : ((32296 ? -17 : 6)))) : (min(var_12, -8)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (((((var_12 >> ((((var_4 ? var_10 : 255)) - 251))))) ? var_2 : var_2));
    var_23 -= (max((((((1 ? var_16 : var_4))) ? (max(-47, 4854624758368237037)) : (((-8483 ? 255 : 1))))), (((~var_5) ^ ((0 ? 1 : 2305843009146585088))))));
    var_24 = var_6;
    var_25 = (max(var_25, (~var_6)));
    #pragma endscop
}
