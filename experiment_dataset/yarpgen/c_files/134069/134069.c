/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;
    var_17 += (max(((24 + ((var_15 ? var_5 : var_7)))), ((min((var_1 == 288221580058689536), ((var_10 ? var_12 : var_8)))))));
    var_18 = (max(var_9, (0 * var_4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (((((max(var_8, 5781041528337324904))) ? (arr_4 [i_1]) : var_9)))));
                var_20 = (max(2805448462, 5781041528337324904));

                for (int i_2 = 1; i_2 < 13;i_2 += 1) /* same iter space */
                {
                    var_21 = ((((max(5781041528337324899, 60))) ? (+-11) : (((arr_6 [i_2] [i_2 - 1] [i_1 + 1]) ? (((var_9 ? (arr_1 [4]) : (arr_7 [i_0])))) : (max(var_10, (arr_2 [i_0])))))));
                    arr_8 [i_2] [i_2] [i_0] = (arr_6 [i_2] [i_1] [i_0]);
                }
                for (int i_3 = 1; i_3 < 13;i_3 += 1) /* same iter space */
                {
                    arr_11 [i_3] [i_1] [i_0] = 61;
                    var_22 = ((var_0 == var_14) ? (max((arr_5 [i_1 + 1] [i_1 + 1] [i_3 - 1]), var_9)) : (((var_9 ? var_6 : -60))));
                    var_23 |= (arr_2 [7]);
                    var_24 = (((9223372036854775798 > 4827356613347867304) ? (((((((arr_5 [i_0] [8] [i_3 + 1]) >= var_15))) != (arr_10 [i_3])))) : (!var_13)));
                    var_25 = 0;
                }
            }
        }
    }
    var_26 = ((max(var_2, (var_12 <= 39))));
    #pragma endscop
}
