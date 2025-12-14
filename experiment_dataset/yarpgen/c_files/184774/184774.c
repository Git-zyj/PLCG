/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (min(var_6, var_2));
    var_20 ^= var_12;
    var_21 = (((2 ? var_15 : 32767)) << ((((234 ? var_16 : (min(1877939005331635464, 1877939005331635464)))) - 43808)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_22 = (max((max((min(var_1, (arr_1 [i_0]))), ((min((arr_5 [11] [i_1]), (arr_0 [i_0])))))), (min((((var_12 && (arr_2 [i_1])))), (1877939005331635464 + 25924)))));
                var_23 += (max((max(var_2, (arr_2 [i_1 - 2]))), ((((arr_5 [i_1 + 2] [16]) ? (max(var_2, var_8)) : ((max(var_7, var_7))))))));
            }
        }
    }
    var_24 = var_15;
    #pragma endscop
}
