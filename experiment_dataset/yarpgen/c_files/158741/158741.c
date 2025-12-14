/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((~-610662462) ? (var_3 & var_6) : var_9)) | var_7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, (max((((((var_10 ? (arr_1 [i_1] [i_2]) : var_1))) ? (arr_2 [i_0] [i_0]) : (arr_1 [i_1] [i_2]))), (((~(arr_5 [i_0] [i_0]))))))));
                    var_13 = ((((min((max(913637224, var_8)), (38359 || 3144308059)))) ? ((((24572 ? 25906 : 39630)))) : ((var_2 ? 2772565571 : (((((arr_5 [i_2] [0]) || 0))))))));
                    arr_8 [12] [i_1] = (min(((((((1 ^ (arr_3 [i_0] [i_0] [i_0])))) ? ((9223372036854775807 ? var_8 : var_2)) : (~var_5)))), 1901426381558511371));
                    var_14 = ((((!((min(-478056516, var_0))))) ? -8096037932757616624 : 25894));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = var_0;
                                var_16 *= (!(((var_5 & var_8) || ((((arr_15 [i_3]) ? var_7 : 1))))));
                                var_17 = (((min((max(39630, var_10)), -227)) ^ ((((((var_0 ? (arr_10 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) : -3003294964773823695))) ? var_8 : (~478056516))))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] = (max(((+(((arr_10 [i_0] [i_1] [i_0] [i_3] [i_3] [3]) ? (arr_2 [i_1] [i_2]) : (arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] [i_2]))))), 1699542302));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((((var_8 == var_3) ? (3116133836 && 0) : ((1017334279 >> (-1814232692 + 1814232707))))));
    #pragma endscop
}
