/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_0 ^ (min(var_8, var_10))))) ? ((min(var_0, ((var_5 ? var_7 : 0))))) : ((((min(var_4, var_5))) ? var_4 : (max(var_8, var_8))))));
    var_13 = var_9;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 -= (((((~(arr_0 [i_0] [i_0])))) ? (min((arr_0 [i_0] [22]), ((min((arr_1 [i_0] [i_0]), var_2))))) : var_10));

        for (int i_1 = 4; i_1 < 22;i_1 += 1) /* same iter space */
        {
            var_15 += (((arr_4 [18] [i_0] [i_0]) ? ((((((0 ? (arr_0 [i_1 - 3] [i_0]) : var_11))) ? var_10 : (((!(arr_1 [8] [i_1]))))))) : (((var_5 | var_1) | (2057074135 + 0)))));
            arr_5 [i_1] [i_1] = ((((((arr_3 [i_1]) - (arr_4 [i_0] [i_1] [i_1]))) << (((((((arr_1 [15] [i_1]) ? var_1 : (arr_3 [i_1]))) + 167327452910113084)) - 18)))));
        }
        for (int i_2 = 4; i_2 < 22;i_2 += 1) /* same iter space */
        {
            var_16 = min(((((arr_7 [i_2 - 4] [i_2 + 2] [i_2 + 2]) || -33))), ((((((arr_6 [i_0]) ? var_3 : var_8))) ? (arr_7 [i_2 + 1] [i_2] [i_2 - 1]) : (5 || 43756))));
            arr_8 [i_2] = (((((0 << (((arr_1 [i_2 - 3] [i_2 - 3]) - 211070716))))) == (min((arr_1 [i_2] [23]), (((var_1 || (arr_0 [i_0] [i_2]))))))));
        }
        /* vectorizable */
        for (int i_3 = 4; i_3 < 23;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 23;i_4 += 1) /* same iter space */
            {
                arr_14 [i_4] [i_4] = (((arr_12 [i_3 + 1] [i_3] [i_4 + 1]) ? (~14460737183181053613) : var_6));
                var_17 = (min(var_17, var_11));
            }
            for (int i_5 = 1; i_5 < 23;i_5 += 1) /* same iter space */
            {
                var_18 = (max(var_18, 2147483647));
                arr_17 [i_5] [i_3] [i_3] = var_3;
            }
            var_19 = (((arr_7 [7] [i_3 + 1] [i_3 - 4]) ? var_6 : var_0));
            arr_18 [i_3] = (arr_6 [i_0]);
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_22 [i_0] [i_6] = var_10;
            arr_23 [i_0] [i_0] [12] |= (((arr_0 [i_0] [i_6]) ? (((var_0 ? (arr_7 [i_0] [i_6] [i_6]) : 8))) : (((arr_1 [i_0] [i_0]) ? var_5 : (arr_2 [i_0])))));
            var_20 = (min(var_20, (804758699068824887 + 0)));
            var_21 = var_11;
        }
        var_22 = (((((0 ? -5772 : 17641985374640726728))) ? ((0 << ((((min(448, var_0))) + 31755)))) : ((((((arr_1 [i_0] [i_0]) ? 8279249336044775003 : var_1)) != var_6)))));
    }
    #pragma endscop
}
