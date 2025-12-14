/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = max(var_14, var_6);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                    {
                        var_20 = ((((min(var_8, (arr_1 [i_1] [i_1])))) >= (((arr_1 [i_0] [i_3]) << (var_15 + 3494852110959667562)))));
                        var_21 = ((~((min((arr_6 [i_0] [i_2] [i_3]), (arr_6 [i_0] [i_2] [i_3]))))));

                        for (int i_4 = 2; i_4 < 21;i_4 += 1) /* same iter space */
                        {
                            arr_12 [9] [i_1] [i_2] [i_1] [i_1] = (arr_7 [i_2]);
                            var_22 = (max(var_22, ((min((arr_6 [i_0] [i_3] [i_2]), (((((max(7, 1))) && (((var_3 ? var_0 : var_18)))))))))));
                            var_23 += (min(3652805422559188681, 7));
                            var_24 *= (((((((((6677203218169244799 ? 242 : -6677203218169244795))) || var_4)))) | (max((arr_10 [i_1] [i_1] [i_2] [i_3] [6] [2]), (max((arr_5 [i_1] [i_1]), var_14))))));
                            var_25 ^= ((((max(((max(var_3, var_8))), var_9))) / (min((arr_10 [i_4 - 1] [i_4 + 2] [i_3] [i_3] [i_4 - 1] [i_2]), (max(-6677203218169244802, var_16))))));
                        }
                        for (int i_5 = 2; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_2] [1] [i_5] = (arr_15 [i_2] [14] [16] [18]);
                            var_26 = var_18;
                            arr_18 [i_2] [i_2] = ((((((~67) ? (var_0 * var_14) : ((3584 ? 12486909477212968343 : -3565))))) ? ((min(var_18, var_16))) : var_13));
                        }
                        for (int i_6 = 2; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [17] [i_3] [i_3] [i_2] [15] = var_17;
                            arr_23 [i_0] [i_2] [i_0] [i_0] [i_0] = (max((arr_16 [i_0] [i_1] [i_2] [i_0] [i_0] [13]), var_3));
                            var_27 = (((((arr_3 [i_6 + 3]) & (((46 ? 1 : -3573))))) & (~var_1)));
                        }
                    }
                    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                    {
                        arr_27 [2] [i_7] [i_7] [i_0] &= ((((((arr_10 [i_0] [i_0] [i_1] [i_7] [i_2] [20]) ? ((var_15 ? var_1 : 147)) : var_13))) ? ((((var_0 == ((((arr_9 [i_7] [i_2] [i_7]) ? (arr_14 [i_7] [9] [i_1] [18] [i_0] [i_0] [i_0]) : (arr_9 [i_0] [i_2] [i_7])))))))) : ((-(max(var_2, 6677203218169244795))))));
                        arr_28 [i_2] = (max((max(((var_12 ? var_4 : var_8)), (var_6 | var_4))), 1166880211));
                        var_28 = (min(var_28, var_8));
                    }
                    var_29 -= (max((~6677203218169244796), ((((arr_3 [i_1]) ? (arr_15 [12] [i_1] [i_2] [i_2]) : (arr_15 [16] [i_1] [i_1] [i_1]))))));
                    var_30 = ((max(var_18, var_8)));
                    arr_29 [i_2] = (0 || 6677203218169244821);
                }
            }
        }
    }
    var_31 = (var_2 % var_17);
    var_32 = (((~(var_4 == var_0))));
    #pragma endscop
}
