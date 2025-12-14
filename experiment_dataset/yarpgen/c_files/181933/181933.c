/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_11 || (((((max(8608009025250351608, 20))) ? ((max(var_2, var_4))) : (77 > var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_13 -= (max(((((((-1613868474 ? 33 : 34951))) ? var_2 : 2139001897))), (min(((((arr_0 [i_0 - 2]) / var_3))), (max(18, 127))))));
                            var_14 = (((((var_0 ? var_9 : ((var_2 ? 9064784880389988737 : (arr_3 [i_0] [i_1])))))) ? var_0 : (min(2821944446629110823, ((min(1726631398, var_9)))))));
                            arr_10 [i_0 - 3] [i_3] [i_0] [i_0] &= (min((min(var_8, (arr_9 [i_2] [5] [i_2] [i_1 + 2] [i_1 + 2]))), (((arr_9 [i_3] [i_3] [i_3] [i_3] [i_1 + 3]) ? (arr_9 [i_3] [i_3] [i_1 + 1] [i_1 + 1] [i_1 + 1]) : 0))));

                            for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [5] [1] = (min(((-1598861290 ? ((min(109, 925329588))) : ((72 ? (arr_4 [i_2] [i_3] [i_4]) : 2915770284)))), -var_11));
                                var_15 = (min(var_15, ((min(-7, ((-3412748186909272106 ? -25673 : -8493)))))));
                            }
                            for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                            {
                                var_16 ^= (min(((min((arr_1 [i_5]), (arr_1 [i_5])))), ((var_6 | (arr_6 [i_1] [i_1] [4])))));
                                var_17 = (((!var_11) ? (!var_4) : ((~((((arr_6 [i_2] [i_0] [i_5]) < var_2)))))));
                            }
                            arr_17 [i_0] = (max((min((arr_4 [i_1 - 1] [i_1] [i_1 + 2]), (((!(arr_6 [i_1 - 1] [i_0] [12])))))), ((var_8 ? var_1 : (4950846315155307371 - -491877028)))));
                        }
                    }
                }
                var_18 = ((~454909062) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (max((arr_4 [i_0 - 1] [i_0 - 3] [i_0 - 1]), (arr_15 [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1]))));
                arr_18 [i_0] [i_0 - 3] [i_1] = var_2;
            }
        }
    }
    var_19 = ((((var_8 ? var_11 : (max(var_6, var_7)))) - ((max((max(1, var_0)), (max(1, var_3)))))));
    var_20 = max((((var_7 && (!0)))), (((((1 ? 2000 : var_4))) ? (max(var_10, var_3)) : (!var_11))));
    #pragma endscop
}
