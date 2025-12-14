/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_2] [i_0] [i_3] = var_12;
                            var_18 += (max((((arr_7 [i_1] [i_2] [i_1]) & 89)), (arr_3 [i_1] [i_2])));
                            arr_13 [19] [i_1] [i_0] [19] = (-1955324433 || 43);
                            var_19 = (-22408 * 4294967295);
                        }
                    }
                }
                arr_14 [i_0] [i_0] = ((((min(var_4, var_14))) ? (((926463599474651121 / 160) - (((~(arr_6 [i_0])))))) : (((var_9 ? (min(var_2, var_10)) : (arr_6 [i_0]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            {
                arr_21 [i_4] [2] [i_4] = ((+((((4012826076900025140 || 13195) || var_16)))));
                arr_22 [i_5] = ((((((min(14433917996809526472, (arr_18 [i_4])))) ? ((43 << (1889982105 - 1889982097))) : (arr_5 [14]))) >> (((arr_7 [14] [14] [i_4]) + 28095))));
                arr_23 [i_5] [i_5] = (((((((max((arr_4 [i_4] [i_5] [i_4]), (arr_18 [i_4])))) ? (max(var_7, 4012826076900025143)) : (var_8 & var_5)))) ? (min(var_10, var_6)) : var_11));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        {
                            arr_29 [i_7] = ((var_0 ? ((min(88, var_1))) : (((max(var_7, var_10))))));
                            arr_30 [i_7] [8] [8] [8] [i_7] [i_7] = 18446744073709551606;
                            var_20 = var_1;
                            arr_31 [i_7] = (((((0 >> (243 - 232)))) >= (~14433917996809526444)));
                        }
                    }
                }
            }
        }
    }
    var_21 = ((var_6 | ((min((var_10 | var_8), ((var_15 ? var_4 : var_7)))))));
    #pragma endscop
}
