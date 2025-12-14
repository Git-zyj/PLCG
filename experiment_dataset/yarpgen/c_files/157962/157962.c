/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= ((((!(~var_2))) ? ((var_15 ? ((max(var_12, var_17))) : var_15)) : 10));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_21 -= max((max((arr_1 [i_0 + 1]), (var_10 != var_4))), (!-103));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_22 = (max((((((31 ? var_7 : 88))) ? (arr_0 [i_1] [i_1 + 2]) : (arr_1 [i_0]))), ((-85 ? -99 : 31))));
                    arr_8 [i_1] [i_1] = ((94 / ((min((arr_6 [i_0 + 1] [i_1 + 1] [i_1 + 3] [i_2]), -119)))));
                }
                /* vectorizable */
                for (int i_3 = 4; i_3 < 12;i_3 += 1)
                {
                    var_23 -= (((arr_6 [i_0 + 1] [i_1] [i_1 + 1] [i_3 - 1]) ? ((var_12 ? -89 : var_5)) : ((var_12 ? -95 : 97))));
                    var_24 = (min(var_24, (((-(!var_6))))));
                    var_25 = 44;
                    var_26 = (!123);
                }
                var_27 = (min(var_27, ((min(((((min(102, var_6))) ? (((!(arr_3 [i_0 + 2] [i_1 + 3])))) : (arr_10 [12]))), (arr_5 [11] [i_1] [i_1]))))));
                var_28 &= ((((min(-94, (min(var_19, -116))))) - (~var_19)));
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            arr_17 [i_4] [5] [i_1] = ((((max((max(var_12, (arr_1 [i_0]))), (arr_0 [i_0 + 2] [i_1])))) ? (21 || var_0) : -119));
                            var_29 = ((((((max(87, -95))) ? (((67 || (arr_12 [i_0 - 1] [i_1 + 1] [i_4 - 3])))) : 39)) | -46));
                            var_30 -= (max(((var_9 | ((max(-88, 65))))), -73));
                        }
                    }
                }
            }
        }
    }
    var_31 = (~-85);
    var_32 = var_3;
    #pragma endscop
}
