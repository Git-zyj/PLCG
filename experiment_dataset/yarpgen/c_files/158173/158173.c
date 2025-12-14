/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += var_18;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 23;i_1 += 1) /* same iter space */
        {
            var_21 = (((arr_5 [i_1 + 1] [i_1 - 1] [i_0]) ? (arr_2 [i_0] [i_1]) : (((~(((arr_3 [11]) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_0 [i_1]))))))));
            var_22 = ((!(arr_1 [i_1 - 1] [i_0])));
        }
        for (int i_2 = 1; i_2 < 23;i_2 += 1) /* same iter space */
        {
            var_23 = ((arr_8 [i_0] [i_2]) ? ((~(arr_5 [9] [i_2 - 1] [15]))) : (arr_5 [i_0] [i_0] [i_2]));
            var_24 = ((!(((~(arr_4 [i_0]))))));
            var_25 += ((((max(((-(arr_0 [i_2]))), ((var_5 ? (arr_7 [i_0]) : (arr_5 [i_0] [1] [i_2])))))) ? (((((var_4 ? (arr_7 [i_2 - 1]) : (arr_7 [i_0])))) ? (arr_1 [i_0] [2]) : (((arr_5 [i_0] [i_0] [i_2]) ? var_6 : 10485)))) : ((((((((arr_4 [4]) + 9223372036854775807)) >> (var_12 - 13))))))));
            var_26 &= (((arr_8 [16] [i_2]) ? (arr_2 [2] [i_2]) : ((((arr_1 [i_2 + 1] [4]) ? (arr_1 [i_2 + 1] [18]) : (arr_1 [i_2 + 1] [14]))))));
        }
        var_27 = (((((((((arr_4 [i_0]) + 9223372036854775807)) >> (((arr_0 [i_0]) + 17092)))))) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])));
        var_28 |= ((!(((11760070010903094766 ? 10927941867411698380 : -8)))));
        var_29 = 65535;
    }
    #pragma endscop
}
