/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = ((~(((!(min((arr_1 [i_0] [i_0]), (arr_1 [8] [i_0]))))))));

        for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
        {
            var_19 ^= (max((max((min(var_2, 9122296635665968496)), (min(var_8, (arr_5 [i_1]))))), (max(var_3, (((-(arr_3 [i_0] [i_0]))))))));
            arr_7 [i_0] [i_1] [i_1] = ((!(arr_1 [i_1 + 3] [i_0])));
            var_20 = var_8;
            var_21 = (max(((-(min((arr_0 [i_0] [i_0]), 9324447438043583120)))), 16577814887899165116));
            var_22 = var_3;
        }
        for (int i_2 = 2; i_2 < 22;i_2 += 1) /* same iter space */
        {
            var_23 = (arr_9 [i_0] [i_0]);
            var_24 = var_16;
            arr_11 [i_0] [i_2 - 1] = (arr_4 [i_0] [i_0]);
            var_25 = var_1;
            var_26 = ((((((((var_16 >> (((arr_9 [i_0] [i_2]) - 2690))))) ? (arr_8 [i_2 + 2] [i_2 + 2]) : 1))) ? var_4 : (~9122296635665968477)));
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] &= 9324447438043583119;
        var_27 *= ((9122296635665968494 ? 2571294964816949866 : 9324447438043583117));
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] [5] = var_13;
        arr_19 [i_4] [i_4] = var_14;
        var_28 = (min((((!530025135) ? 3 : -9324447438043583112)), -9324447438043583132));
    }
    var_29 = var_4;
    #pragma endscop
}
