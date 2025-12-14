/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((!var_15) < (((128 ? var_8 : var_15)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_20 = (min(var_20, ((max((+-8855), ((-(arr_0 [i_1 + 1] [i_1 + 1]))))))));
                var_21 = (min(var_21, (min((arr_2 [i_0] [i_0]), (arr_0 [i_1 + 1] [i_1 + 1])))));
                arr_4 [3] [i_0] [i_1] = ((((((((arr_2 [i_0] [i_1]) ? (arr_1 [6] [i_1]) : -2843424734717416854))))) * (min(50331648, (((arr_0 [i_0] [i_1 + 1]) / -2843424734717416854))))));
            }
        }
    }
    var_22 = (min(var_3, ((min(var_18, 2843424734717416861)))));
    #pragma endscop
}
