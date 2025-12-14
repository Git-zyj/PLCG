/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((max(((min(var_2, 29))), (1102529489 - 63)))), (((var_0 - var_8) ? (var_6 + -15449) : (4276573326 + 1102529489)))));
    var_17 = (((((((var_9 ? var_5 : 31)) * var_15))) ? var_15 : -var_13));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = (min(var_18, 0));
                var_19 = (min(var_19, (((((((((var_7 ? (arr_2 [i_0]) : (arr_3 [i_0])))) && (((var_8 ? 31 : 31)))))) * ((min((224 == var_15), (0 > var_2)))))))));
            }
        }
    }
    #pragma endscop
}
