/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_17 = (((((((arr_0 [i_0]) | var_16)))) ? ((127 ? -736578138737587825 : (arr_0 [i_0]))) : (((-((((arr_4 [i_0]) == var_13))))))));
                var_18 = (max(var_18, ((((5 | 3411842350) || var_10)))));
                var_19 = ((-((var_8 ? (-736578138737587825 - 530480178896791342) : -4429714478585451608))));
                var_20 |= (min((min(((-(arr_5 [i_0] [i_0]))), (~0))), ((max((!var_9), 32766)))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] = ((((-((var_2 ? var_12 : (arr_8 [i_0] [i_1] [i_2 - 1] [i_3]))))) > (arr_8 [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 - 1])));
                            var_21 = ((+((((32766 ? (arr_6 [i_2] [5]) : var_15)) | (arr_8 [i_3] [i_3] [i_3 + 2] [i_3])))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            {
                arr_16 [i_5] [i_5] [i_5] = (((((+((15890 ? (arr_9 [i_4] [i_4] [i_5] [i_5]) : var_10))))) || (((~((((arr_7 [i_4]) == var_14))))))));
                var_22 = (((arr_8 [22] [i_4] [i_5] [i_4]) ? (max(-890155792, var_12)) : (3822260616 - 15919)));
            }
        }
    }
    var_23 = ((var_5 - ((var_6 ? (((min(32764, 12)))) : var_5))));
    var_24 &= (((min((((var_7 ? var_0 : 76))), ((1 ? var_16 : var_1)))) < ((max(8941557840894221538, 21795)))));
    #pragma endscop
}
