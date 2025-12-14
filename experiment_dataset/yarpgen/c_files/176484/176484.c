/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_1] = (var_7 ? (((arr_2 [i_0]) ? (((arr_3 [15] [i_1]) ? var_0 : var_3)) : (~18446744073709551615))) : (((var_9 ? var_2 : (var_7 <= 18446744073709551615)))));
                var_17 = (min(var_17, ((((((-(1 && 1)))) ? (((1416216819 ? 15 : (6 < 6)))) : ((18446744073709551591 | ((0 << (((arr_3 [i_0] [i_1]) + 59)))))))))));
                var_18 -= ((6 ? ((((max(6, (arr_3 [i_0] [i_0])))) ? 6 : 18446744073709551615)) : (-127 - 1)));
                var_19 = (max(var_19, (((((((arr_0 [i_1] [i_1]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_1])))) ? ((((arr_1 [i_0] [i_0]) <= var_11))) : (arr_0 [i_1] [i_0]))))));
            }
        }
    }
    var_20 = (max(var_20, ((min((((56 != 8) >> var_12)), (((32 != ((var_3 ? var_6 : var_16))))))))));
    var_21 = (((((3 < (var_5 * 18446744073709551615))))) > (min(((var_4 ? 13 : var_3)), ((1 ? 1 : 131070)))));
    #pragma endscop
}
