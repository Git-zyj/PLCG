/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= var_11;

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((((max(((20361 ? -19252 : var_0)), (((arr_1 [i_0]) ? (arr_1 [i_0]) : -120))))) ? (arr_2 [i_0]) : (((min(-125, (arr_0 [i_0])))))));
        arr_4 [i_0] = ((~(arr_2 [i_0])));
        var_13 &= ((((min(126, 103))) ? ((var_3 | (((arr_2 [i_0]) / var_10)))) : ((((((-(arr_1 [i_0])))) ? ((min(65529, (arr_0 [i_0])))) : 2147483647)))));
        arr_5 [i_0] [8] = ((0 * ((max((arr_2 [i_0]), (((arr_0 [11]) - (arr_0 [10]))))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_14 = (max(var_14, ((min((((arr_2 [i_1]) ? (arr_2 [i_1]) : (arr_2 [i_1]))), ((-120 & (arr_7 [i_1]))))))));
        arr_8 [i_1] [i_1] = (((max(var_7, 27)) ^ 64));
    }
    #pragma endscop
}
