/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (var_9 / (((((min(var_1, var_9))) != ((7203959186013545163 >> (-214224975 + 214225020)))))));
    var_15 = (((-(~var_10))) <= (!var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_16 &= (!((((((var_13 ? var_10 : var_3))) ? var_2 : var_8))));
                var_17 = (((var_11 | var_11) - -var_3));
                var_18 = (((((~var_9) ? (!24205) : (var_5 < var_12))) << ((((~((var_5 ? var_6 : var_5)))) + 198))));
            }
        }
    }
    var_19 = -3;
    #pragma endscop
}
