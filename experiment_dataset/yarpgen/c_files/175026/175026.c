/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = ((((var_3 & (arr_1 [i_0 + 1] [i_0 - 1]))) % (((var_9 ? (arr_2 [i_0 - 2] [i_0 - 1]) : 1)))));
        var_19 ^= (min(1, -2067041075));
        var_20 = (((((((((arr_2 [i_0] [i_0]) / (arr_1 [i_0] [i_0])))) ? var_5 : 0))) ? var_5 : ((((arr_0 [i_0 - 3]) > 8)))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_21 = (arr_4 [i_1]);
        var_22 = ((((((var_9 ? 8798602946578234615 : var_17)))) >> (((((((arr_4 [i_1]) && var_11))) >= ((max(0, var_11))))))));
        var_23 = (var_17 > (((((-1 ? (arr_5 [i_1]) : (arr_5 [i_1])))) ? (arr_5 [i_1]) : (arr_5 [i_1]))));
        var_24 *= ((((-((max((arr_5 [i_1]), 65535))))) >= ((((var_18 || (arr_5 [i_1]))) ? (((arr_5 [i_1]) / (arr_5 [i_1]))) : (arr_4 [i_1])))));
        arr_6 [i_1] [i_1] = (((arr_5 [i_1]) ? (max(3540283793, -9179441961273376039)) : (((max(-104, 66))))));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_25 *= ((var_8 >= (127 < 2147483647)));
        arr_10 [i_2] [i_2] = ((((arr_0 [i_2]) ? (((-2147483647 - 1) | 4063807301)) : (((arr_9 [i_2]) & var_6)))));
        var_26 *= (((arr_0 [i_2]) & ((((arr_0 [i_2]) > (arr_7 [i_2]))))));
    }
    var_27 = (((((-var_2 * ((max(var_10, 2098846924)))))) && ((max(((var_8 ? var_2 : var_3)), var_13)))));
    #pragma endscop
}
