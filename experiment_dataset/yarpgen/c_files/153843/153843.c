/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((min((~var_4), var_10))) % ((6193 ? (~var_15) : (((var_1 ? var_11 : var_1)))))));
    var_18 = (max(var_11, (((var_1 ? var_3 : var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = (max((((((149 >> (var_10 + 96))) >> (-6188 + 6219)))), (min(((max(-31, (arr_2 [i_0] [i_1])))), (arr_1 [i_0] [i_1])))));
                var_20 = (((((225 + (arr_4 [i_1] [i_0])))) ? (arr_2 [i_0] [i_0]) : 5490134715168921535));
            }
        }
    }
    var_21 -= ((!((!((max(var_1, 0)))))));
    var_22 = ((((!(var_12 * 0))) ? var_14 : var_5));
    #pragma endscop
}
