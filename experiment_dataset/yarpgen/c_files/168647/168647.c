/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((((82 ? var_19 : 361669610804202992))) ? (((var_1 << (361669610804202992 - 361669610804202976)))) : ((var_14 ? var_15 : var_14)))) * var_19));
    var_21 = ((max(((59 ? var_12 : var_10), var_3))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_22 = (max(var_22, ((min(((((((var_19 ? 1 : var_10))) || (((1 ? var_3 : 361669610804202980)))))), (min(((var_9 ? -31783 : var_17)), (1 != var_18))))))));
                    var_23 = (((((var_19 | 1) || var_5)) ? (max((((arr_6 [i_0] [1] [i_2] [i_2]) ? (arr_6 [i_0] [i_0] [i_1] [i_2]) : (arr_1 [i_0]))), ((102 ? var_1 : (arr_0 [i_0]))))) : ((-((max(var_2, -120)))))));
                }
            }
        }
    }
    var_24 = (max(var_24, ((min((!1), (((((var_9 ? -793813766 : 1148187529))) ? ((var_4 ? 4092132922 : var_16)) : (((var_0 ? var_17 : var_5))))))))));
    #pragma endscop
}
