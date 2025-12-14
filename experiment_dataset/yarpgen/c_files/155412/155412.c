/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_10 ? -var_5 : (min(((var_17 ? 0 : var_6)), (max(var_1, var_13))))));
    var_19 = (max(var_19, ((((max((~var_1), 227)) >= (((min(22, var_10)) ^ (-22 >= -32))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = (max(var_20, ((((((max(-1861925978, -35)) == (arr_6 [i_0]))) ? (max((min(var_11, (arr_2 [i_0]))), -3094990886629091460)) : 1)))));
                var_21 = (max(var_21, ((((!var_14) ? (8418950017259260693 - var_5) : (max(var_3, ((var_5 ? 8418950017259260693 : (arr_4 [i_1]))))))))));
                arr_7 [i_0] = ((((!(((-67 ? -4334 : 0))))) ? ((min((~17996), (arr_3 [i_1] [i_0])))) : (min((arr_2 [i_0]), ((min((arr_3 [i_0] [i_1]), var_8)))))));
                arr_8 [i_1] = (min(var_2, 31909));
            }
        }
    }
    #pragma endscop
}
