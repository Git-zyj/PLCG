/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(((((((0 ? var_16 : var_15))) >= ((var_8 ? var_15 : 9))))), ((((min(25, 3954882556))) ? ((var_14 ? (-2147483647 - 1) : -6)) : ((var_16 ? var_1 : var_15))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (((~((~(arr_5 [i_0 - 1]))))))));
                arr_6 [i_0] = ((((max(24, (arr_2 [i_0])))) ? (arr_2 [i_0]) : (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
            }
        }
    }
    var_21 = (!var_12);
    #pragma endscop
}
