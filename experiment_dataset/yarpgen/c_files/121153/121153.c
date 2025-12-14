/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((max(var_4, (8341250858908651524 << 6))) / ((max(8358, 2013051577)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((min(12230, -4033574193207053332)))) - ((min(6, 11682))));
        arr_4 [i_0] = (min((max((2013051574 & 8341250858908651524), -14466)), (((((max(5558491730311359364, 5922))) ? (((57065 << (((-14466 + 14495) - 21))))) : 1341764572)))));
        var_19 = (max(var_19, ((min(((((max(17634, 8487))) ? (6 && 2013051577) : (min(-1524670825110671267, 887744341)))), 250)))));
        arr_5 [12] = ((min((3400940789 == 10105493214800900092), (8341250858908651531 ^ 57057))));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        arr_10 [5] = (max((((30 && (919541617 || 20030)))), -15));
        arr_11 [i_1 + 1] [i_1] = (((((min(2281915719, 80)))) && ((min(40203, 5553019531844630688)))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_20 ^= min(200, (min(((min(1032486158, 16))), (max(8511489973159259038, -32752)))));
                        var_21 = (!2953202731);
                        var_22 = (min(((56 ? -19931 : 243)), ((218 ? 2526 : -26150))));
                    }
                }
            }
        }
    }
    var_23 = var_11;
    #pragma endscop
}
