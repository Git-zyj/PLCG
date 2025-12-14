/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_9 >> var_9);
    var_20 = ((((!(!var_8))) ? 665173652 : (max(((min(-665173642, var_18))), ((var_7 ? var_7 : var_12))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 = 0;
                    arr_7 [i_1] [i_1] [i_0] = var_16;
                    var_22 = var_12;
                }
            }
        }
        var_23 = (+-3313467517806671532);
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_24 = (((((var_4 & var_16) ? (arr_3 [i_4] [i_3] [i_3]) : (max(-1, var_2))))) ? ((((((((arr_4 [i_3]) ? var_15 : (arr_3 [i_4] [i_4] [i_4])))) || (((-(arr_5 [i_4] [i_4] [i_4] [i_4])))))))) : (arr_8 [i_4]));
            var_25 = (var_13 + 3506027466);
        }
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {

            /* vectorizable */
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                arr_18 [i_6] [i_3] [i_3] = (-(arr_14 [i_3] [i_5] [6]));
                arr_19 [i_6] [i_5] [i_5] [i_3] = (((arr_0 [i_3] [i_5]) ? (2116880738 <= var_15) : var_5));
                var_26 = (((arr_15 [i_3] [i_3] [i_3]) ? (~var_16) : (((var_1 ? 2116880738 : var_18)))));
                arr_20 [i_6] [i_3] = var_6;
                var_27 = (var_9 && (((482909180 ? (arr_10 [i_3] [i_5] [i_5]) : 0))));
            }
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                var_28 = (max((arr_1 [i_3] [i_5]), (min((((arr_6 [i_3] [i_3]) ? (arr_8 [i_5]) : (arr_11 [6]))), (arr_8 [i_3])))));
                arr_24 [i_3] [i_3] [i_7] = ((((min(-974493089896914916, -974493089896914916))) ? var_7 : (max((max(var_0, (-9223372036854775807 - 1))), (((~(arr_5 [i_7] [i_7] [i_7] [i_7]))))))));
                var_29 = (((((min(60529631, 2147483647))) ? (arr_17 [i_3] [i_5] [i_3]) : (arr_12 [i_5]))));
            }
            var_30 = ((((((var_2 || (arr_9 [i_3]))) ? (!var_18) : (min((arr_12 [i_3]), var_7))))) ? (arr_23 [i_3] [i_3] [i_3]) : ((((min(var_18, var_18))) ? (max(var_10, 60529627)) : (-665173653 || 482909180))));
        }
        var_31 = (min((max((((!(arr_0 [i_3] [i_3])))), (var_4 - var_2))), ((((60529627 - (arr_5 [i_3] [i_3] [i_3] [i_3])))))));
    }
    #pragma endscop
}
