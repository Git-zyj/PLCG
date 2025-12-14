/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_12;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (((~((min((min(var_0, (arr_5 [7]))), 1))))))));
                arr_6 [i_0] [i_1] [1] = (min(((var_1 ? var_10 : ((var_0 ? var_3 : var_11)))), (((((var_11 ? var_10 : 1529800576)) | 1395969088)))));
                var_16 |= ((-497496263 ? (((arr_2 [i_0 - 1] [i_0 - 2]) ? var_12 : (arr_2 [i_0 - 1] [i_0 - 3]))) : -497496263));
                arr_7 [i_0] [i_0 - 1] [i_0] = var_2;
                var_17 = (((((!(((var_10 ? -719516233 : 5401225)))))) << ((((var_0 ? ((var_11 ? var_0 : var_10)) : (arr_1 [i_0]))) - 20758))));
            }
        }
    }
    #pragma endscop
}
