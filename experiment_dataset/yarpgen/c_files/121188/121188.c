/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((!var_10) ? (((-1 ? 255 : 243))) : ((0 ? 75 : 2251892507583265759))))) ? (((-(arr_0 [i_0])))) : (((((15837890650982570246 ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? 9892621074322530050 : (arr_0 [i_0])))));
        var_14 = (~var_6);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (arr_1 [i_1]);
        var_15 = 1;
        arr_6 [i_1] = (((arr_1 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1])));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_16 = (arr_10 [i_2]);
        var_17 += (min((((((-2147483626 ? 1 : (arr_9 [i_2])))) ? ((8785340877836571361 ? 992 : 9661403195872980265)) : (((30594 ? 12 : var_11))))), 0));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 10;i_3 += 1)
    {
        var_18 = (arr_12 [i_3]);
        arr_14 [i_3] = (((arr_4 [i_3]) ? (~0) : ((243 ? 1479657193202350982 : 1))));
        arr_15 [i_3] = ((arr_0 [i_3]) ? 2979 : var_4);
    }
    var_19 = (min(9000906847566685593, 23932));
    #pragma endscop
}
