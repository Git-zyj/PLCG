/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((max((!var_4), var_8))) ? (((var_0 && var_5) ? (-1649081056587175029 / -6622584471553705711) : var_3)) : (((((var_6 ? var_7 : var_4))) ? (~var_3) : ((((-1649081056587175036 + 9223372036854775807) << (255 - 255))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_11 = (min(var_11, ((((((-((1 ? 7985736825562879308 : 60963))))) / (var_4 | var_9))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_12 [i_2] [i_3] [3] [i_2] = (arr_3 [i_0] [i_4]);
                                var_12 -= (!1649081056587175045);
                                arr_13 [i_3] [i_1] [i_2] [i_3] [i_4] = 9844456992975724898;
                                arr_14 [i_0] [i_4] [i_0] [i_0] [i_0] |= (max(((((((arr_9 [i_0] [i_1] [i_2] [i_3] [i_2] [i_4]) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (arr_4 [i_0] [7] [i_2])))) ? (((~(arr_1 [i_1])))) : (18446744073709551613 ^ -1))), ((var_8 | ((52 ? 3107562359463937108 : 16016))))));
                            }
                        }
                    }
                }
                arr_15 [i_0] = (max((((min((arr_11 [i_0]), var_5)) & ((max((arr_8 [i_0] [i_0] [i_0] [i_1]), (arr_8 [i_0] [i_0] [i_1] [i_1])))))), (((((max((arr_10 [1] [i_0] [i_0] [i_1]), var_1))) ? (var_5 == var_2) : (max(var_0, (arr_11 [i_0]))))))));
                var_13 *= (max((arr_4 [i_0] [i_0] [i_0]), ((((((((arr_0 [i_0]) && var_0)))) == (((arr_11 [i_0]) | (arr_1 [i_1]))))))));
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_5] [i_1] = ((((max((arr_21 [i_7] [i_1] [i_5] [i_5] [i_0] [i_0]), (max(var_5, var_1))))) ? ((((max((arr_18 [i_7] [i_6] [i_5] [i_0] [i_0] [i_0]), var_8))) ? ((var_1 ? (arr_20 [i_1] [i_1] [i_1] [i_6] [i_7]) : (arr_11 [i_0]))) : (arr_18 [i_0] [i_5] [11] [11] [i_7] [i_1]))) : -var_9));
                                var_14 = (arr_4 [6] [i_1] [3]);
                                arr_23 [i_7] [i_7] [i_5] [i_5] [i_1] [i_0] = var_7;
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = 1;
    var_16 = ((-((max((!-67), (!var_6))))));
    #pragma endscop
}
