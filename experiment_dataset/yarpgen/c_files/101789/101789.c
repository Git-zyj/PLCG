/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((((((21246 >> (var_14 - 66)))) ? ((min(var_11, var_2))) : var_0)), (((-9223372036854775788 || ((((-9223372036854775807 - 1) ? var_14 : var_3))))))));
    var_19 = (((var_15 / (((var_7 ? var_5 : 1))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = var_4;
        var_20 = (min(var_20, (~1)));
    }
    for (int i_1 = 3; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_21 = (min(var_21, ((((min(7920249395571999560, -322964109526629915)) == (arr_0 [i_1 - 1]))))));
        var_22 = (+(((min((arr_0 [i_1 - 1]), 3)) & ((((arr_5 [8]) | 157))))));
        arr_7 [i_1] [i_1] = ((!(arr_2 [i_1] [i_1])));
    }
    for (int i_2 = 3; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_23 = ((((min((~21630), ((var_2 ? (arr_0 [i_2 - 1]) : var_11))))) ? (5 | 1) : (max(63, (((var_15 < (arr_8 [i_2 + 2]))))))));
        arr_10 [i_2] [i_2] |= var_5;
        arr_11 [i_2 + 2] [i_2 + 2] = ((var_1 ? ((((arr_9 [i_2 - 2]) || (arr_0 [i_2 - 2])))) : ((7239277496540422397 ? 1 : ((-(arr_8 [i_2 + 1])))))));
        arr_12 [i_2] = ((((min((arr_5 [4]), -1345))) ? (((((4294967294 ? -16222 : 1))) ^ -1)) : (min(((5886837916802935232 ? var_8 : (-9223372036854775807 - 1))), (arr_2 [i_2 - 3] [i_2 - 1])))));
    }
    var_24 += ((var_15 >> (((8164532554967343779 + 16384) - 8164532554967360157))));
    var_25 = (min(var_25, (((2 ? var_13 : var_11)))));
    #pragma endscop
}
