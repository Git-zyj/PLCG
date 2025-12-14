/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_15 = (max((max(((max(var_8, var_13))), (arr_1 [i_2] [i_2]))), ((min((~var_12), ((((arr_5 [i_1] [i_2]) || var_13))))))));
                    var_16 = ((((min(((-1 ? 3138501357443229917 : 118)), var_11))) ? (((var_12 ? var_9 : (arr_4 [i_1] [i_1] [i_2])))) : var_6));
                    var_17 = (arr_2 [i_0]);
                    var_18 = (min((max((arr_2 [i_0]), (max(var_7, (arr_6 [i_0] [i_1]))))), (arr_0 [i_0])));
                }
            }
        }
    }
    var_19 = var_1;
    #pragma endscop
}
