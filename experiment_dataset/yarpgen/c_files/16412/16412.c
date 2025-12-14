/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((1 ? (arr_0 [i_0] [i_0]) : (((arr_0 [i_0] [i_0]) ? 97 : (arr_0 [1] [13])))));
        var_16 = (arr_1 [1] [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_17 = ((((((((14030473717408780245 ? var_14 : 14030473717408780245))) && (arr_5 [i_1] [i_1])))) / ((min((1 && 1), (arr_4 [21]))))));
        var_18 = ((28 && ((!((!(arr_0 [i_1] [i_1])))))));
        var_19 = var_5;
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 4; i_3 < 10;i_3 += 1) /* same iter space */
        {
            var_20 = (((((1 ? -1 : 1))) ? (((arr_3 [20]) & (arr_3 [0]))) : ((-(arr_3 [2])))));
            var_21 = ((((2088644833 ? 59062 : 1)) << (90 - 79)));
        }
        /* vectorizable */
        for (int i_4 = 4; i_4 < 10;i_4 += 1) /* same iter space */
        {
            arr_18 [i_4] = 1;
            var_22 = ((var_3 ? ((((arr_7 [i_2 - 1] [i_2 - 1]) >= (arr_11 [11] [i_4 - 4])))) : (!1848447523)));
        }
        arr_19 [i_2] [i_2] = 4416270356300771371;
    }
    var_23 = (((((var_11 ? var_14 : ((5 ? var_1 : var_4))))) > ((18446744073709551614 >> (4416270356300771387 - 4416270356300771331)))));
    #pragma endscop
}
