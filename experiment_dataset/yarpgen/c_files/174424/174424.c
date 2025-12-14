/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((min(93, var_1)) > var_13));
    var_17 = (~1);
    var_18 = (max(-81, ((((min(var_2, var_8))) ? (min(var_15, 229814751)) : var_13))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] = (min(var_3, ((((var_13 ? var_14 : (arr_3 [i_0 - 1]))) << var_13))));
                            var_19 = (max(11703, -5970025996024351733));
                            arr_11 [i_0] [i_1] [i_0] [8] &= (min((min((arr_8 [i_0] [i_0 + 1] [i_0 + 2] [i_1]), ((20875 ? var_15 : var_11)))), (((!(!var_14))))));
                        }
                    }
                }
                var_20 = (max(((var_14 ? (arr_0 [i_0 + 1]) : ((6285 ? (arr_4 [i_0] [i_0]) : -32766)))), ((min(var_14, ((((arr_4 [1] [i_1]) >= var_8))))))));
            }
        }
    }
    #pragma endscop
}
