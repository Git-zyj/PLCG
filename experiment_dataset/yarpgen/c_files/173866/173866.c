/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 = ((((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0])))) ? (((var_4 ? var_7 : 0))) : (((arr_0 [i_0]) ? var_5 : -2119784522))));
        arr_2 [i_0] = ((((((arr_1 [i_0]) ? (((23 ? (arr_1 [i_0]) : (arr_1 [i_0])))) : ((var_3 ? var_0 : (arr_0 [i_0])))))) ? (((((23 ? 11830 : 1925513508310129986))) ? ((var_5 ? (arr_1 [i_0]) : (arr_0 [i_0]))) : (arr_1 [i_0]))) : ((var_11 ? var_4 : (arr_0 [i_0])))));
        var_13 &= (((((2119784522 ? 2630161551 : (arr_1 [i_0])))) ? ((((arr_1 [i_0]) ? (arr_0 [i_0]) : -65))) : ((var_3 ? var_8 : 15791267647071531845))));
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        arr_5 [i_1 + 2] [22] &= (((((0 ? 2412444557 : 1))) ? ((2655476426638019790 ? (arr_3 [i_1 - 1]) : var_4)) : (((arr_3 [i_1 + 2]) ? ((var_6 ? 4294967271 : 16968668482420417777)) : ((1 ? (arr_4 [0] [22]) : var_0))))));
        var_14 -= (((((var_3 ? (arr_3 [i_1 + 2]) : 288411243))) ? (((1717177999 ? 32767 : 492123842))) : (((arr_4 [10] [10]) ? var_9 : (arr_4 [6] [6])))));
    }
    var_15 = ((((((((var_11 ? var_1 : var_4))) ? ((var_1 ? 9223372036854775807 : var_5)) : var_6))) ? var_3 : var_2));
    #pragma endscop
}
