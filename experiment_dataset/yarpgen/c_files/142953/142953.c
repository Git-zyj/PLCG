/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((var_16 ? var_10 : var_5)), (((1552127310 || (((var_4 ? 2742840010 : var_8))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = var_0;
                arr_4 [i_0] = (var_1 ? ((var_13 ? var_9 : (min(var_3, 120)))) : -4294967288);
                var_19 = ((((max(1610660573, 0))) ? ((var_7 - (-183664903 + 11))) : (((((1552127310 ? 2742839999 : 58))) ? ((393216 ? 1598556492 : 91)) : (arr_0 [i_0] [i_0])))));
            }
        }
    }
    var_20 = (var_11 > (min(var_0, ((max(4294574079, var_7))))));
    var_21 = (((((((min(var_9, var_12))) ? 255 : (var_5 & 0)))) ? -var_2 : 1552127293));
    var_22 = (min(var_22, var_13));
    #pragma endscop
}
