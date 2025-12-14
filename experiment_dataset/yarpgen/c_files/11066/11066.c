/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = (max(((((arr_1 [i_0 + 1]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 2])))), (max((((arr_4 [i_1]) % (arr_3 [i_0]))), var_0))));
                var_19 = (min((max((((arr_4 [i_1]) >> (((arr_2 [i_0 + 2]) - 3575972395)))), (((33132 % (arr_3 [i_0])))))), (((-(arr_3 [i_0]))))));
            }
        }
    }
    var_20 = (min(var_20, ((max((((~(var_2 - var_17)))), var_3)))));
    var_21 = ((((((var_13 ? var_2 : var_3)) | var_14))) && ((max((var_6 << var_10), var_12))));
    #pragma endscop
}
