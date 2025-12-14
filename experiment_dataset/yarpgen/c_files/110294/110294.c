/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1 - 1] [i_1] = (max((((min(195, 65535)))), ((-2652477311 ? var_10 : (arr_1 [i_0 - 1] [i_1 + 4])))));
                arr_8 [i_0 + 1] [i_1] = (!173);
                var_16 = (arr_1 [i_1 + 4] [i_0]);
            }
        }
    }
    var_17 = (((var_6 ? -13314636559751653441 : (((var_6 ? var_8 : var_1))))));
    var_18 = ((((min((2148768503539994262 - var_9), var_1))) ? var_15 : var_12));
    #pragma endscop
}
