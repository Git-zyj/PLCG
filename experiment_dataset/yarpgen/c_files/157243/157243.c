/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((!(((var_11 ? var_9 : 25684)))))));
    var_14 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((~(((!(arr_5 [1] [12]))))))) ? (((((39852 ? 25683 : 39863))) ? ((25673 ? (arr_3 [i_1] [i_0]) : 25659)) : ((39845 ? 39881 : 39865)))) : (~-39878)));
                var_15 = ((~(((-(arr_0 [i_0]))))));
            }
        }
    }
    var_16 -= ((((((((39856 ? 25684 : 39851))) ? 39878 : (~25665)))) ? (((~((var_7 ? 25667 : 39891))))) : ((var_1 ? (((var_4 ? 39871 : var_2))) : var_4))));
    #pragma endscop
}
