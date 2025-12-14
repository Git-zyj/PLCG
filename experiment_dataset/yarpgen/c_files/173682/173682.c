/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_14 = (max(var_14, 52506));
        var_15 ^= 13025;
    }

    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_16 = 127;
        var_17 = (min(var_17, (max((max(1, (~var_11))), (((!(arr_3 [i_1]))))))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        var_18 = (~32760);
        var_19 = ((((((((var_1 ? var_9 : var_10))) ? (116 + -1507635271) : (max(1969555522, 13066))))) || ((min((min(var_4, 1)), (((var_7 ? (arr_9 [i_2] [i_2]) : 21))))))));
        var_20 = (max(var_20, ((min((max((arr_2 [i_2]), var_8)), (119 || 12))))));
        var_21 = -6132179743402223871;
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
    {
        var_22 = (max(var_22, ((29941 ? 1536 : 0))));
        arr_13 [i_3] [i_3] = ((((min(14241905121931375742, (arr_2 [i_3])))) ? (max(var_11, ((var_10 ? 13033 : var_5)))) : (arr_8 [i_3])));
    }
    #pragma endscop
}
