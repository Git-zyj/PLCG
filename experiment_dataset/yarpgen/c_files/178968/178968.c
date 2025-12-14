/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-var_15 ? var_2 : var_9));
    var_18 = (((var_7 ? var_16 : var_2)));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0 + 2] [8] [i_0] = (((((((min(var_9, (arr_5 [i_1 - 3])))) ? (((((arr_2 [i_0 + 1]) && 178)))) : (((arr_2 [i_1]) ? -5421080858879542572 : 15512))))) ? (arr_1 [i_1 - 2]) : (min((arr_5 [i_0 - 1]), (((182 ? (arr_4 [17] [i_0 + 1] [i_0]) : (arr_4 [i_0] [i_0 - 4] [i_0]))))))));
                var_19 = ((-(((arr_0 [i_0 - 3]) ? (min(4141497490614756891, var_6)) : (arr_5 [i_1 - 1])))));
            }
        }
    }
    #pragma endscop
}
