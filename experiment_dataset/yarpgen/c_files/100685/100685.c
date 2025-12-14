/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = ((((((var_1 + 2147483647) << (((var_1 + 25) - 17))))) * 0));
        var_14 -= (((((((arr_1 [4]) > (arr_0 [i_0]))))) < ((-(arr_0 [i_0])))));
        arr_3 [i_0] [i_0] = 24890;
        arr_4 [i_0] [i_0] = 3685491178;
        arr_5 [i_0] = -1932651159;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_15 = (!549755813887);
        var_16 -= 549755813888;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_17 = 154714330279634321;
        var_18 = (max((min(-1, 609476117)), (0 / -49)));
        var_19 ^= (max(var_7, (max((!var_12), (arr_1 [14])))));
        var_20 -= ((~(((((9223372036854775807 ? 25356 : var_5))) ? ((max(1, (arr_8 [i_2])))) : var_8))));
        arr_11 [i_2] [i_2] = (arr_9 [i_2]);
    }
    var_21 = (((((-((var_7 ? var_9 : var_10))))) ? var_7 : (((var_8 - var_2) ? (var_9 - 18446744073709551612) : (var_7 / var_12)))));
    var_22 = ((((((max(4580117000187333720, 18292029743429917297))) ? 18446744073709551597 : 44)) > var_9));
    #pragma endscop
}
