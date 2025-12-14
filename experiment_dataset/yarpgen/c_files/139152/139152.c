/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_10 = (max(var_10, -3512659537333070401));
                var_11 = (min(var_11, ((((((((-97 ? (arr_4 [i_0 + 2] [i_0 + 2] [i_1]) : var_4))) ^ (min(1, 0)))) != ((((!((min(0, var_2))))))))))));
                var_12 = (min(var_12, var_0));
                arr_6 [i_0] = var_4;
                var_13 = (min(var_13, ((max((!3840), (((~-1) ^ (arr_5 [i_1] [i_0 - 1] [i_0]))))))));
            }
        }
    }
    var_14 = ((var_5 ? ((max(var_7, var_1))) : ((max((0 > var_3), 255)))));
    #pragma endscop
}
