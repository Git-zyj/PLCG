/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = -7606603136609227447;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_10 [i_2] = 566955739;
                            var_16 = (max(var_16, (arr_7 [i_0] [i_3])));
                        }
                    }
                }
            }
        }
    }
    var_17 |= ((!(~var_12)));

    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_18 = ((!((max((((arr_12 [i_4] [i_4]) ? var_14 : 1)), ((((arr_11 [i_4]) ? 224 : 232))))))));
        var_19 = (209 || 22464);
        var_20 = (max(var_20, var_6));
        var_21 *= ((((((((var_4 ? 47 : 127))) ? var_10 : ((-125 ? var_12 : (arr_11 [8])))))) ? ((max(((min(var_12, 124))), var_6))) : (!0)));
    }
    var_22 |= var_5;
    var_23 |= ((!((max(((max(var_10, 1))), ((var_1 ? var_6 : var_11)))))));
    #pragma endscop
}
