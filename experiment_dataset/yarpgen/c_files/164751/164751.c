/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_13 ? (((-6478158655373154989 ? 1 : 1073741823))) : (((3221225484 ^ 22695) ? ((14070288769649032033 ? 11258552082092036662 : -7764102252185733967)) : (((22695 ? var_3 : 15)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_17 *= (min(((0 + (min((arr_0 [i_1]), var_14)))), (max((arr_0 [i_0 + 2]), ((min(1073741823, var_14)))))));
                var_18 -= max((~2393647651), (((arr_0 [i_1 + 1]) ? (arr_0 [i_1 + 1]) : var_12)));
                arr_4 [i_0] [i_0] = (min(((min((arr_3 [i_0 + 2] [i_0 + 1]), (arr_3 [i_0 + 1] [i_0 + 1])))), (min(((min(var_3, 2664962979160060692))), ((-1 ? var_15 : 5365303147444489185))))));
                var_19 = (min((arr_2 [i_0] [4]), (max((arr_2 [i_0 - 1] [i_0 + 1]), (max(var_3, (arr_3 [i_0 - 1] [i_0 - 1])))))));
                var_20 = ((((min((max((arr_2 [i_0] [i_1]), var_3)), var_2))) ? (max((((var_0 ? 27684 : (arr_2 [i_0] [i_0])))), (max(var_3, var_15)))) : (max(((4376455304060519582 << (22851 - 22808))), ((min(var_4, (arr_2 [i_0] [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
