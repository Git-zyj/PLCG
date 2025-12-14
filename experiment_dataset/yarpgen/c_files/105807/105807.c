/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_19 = (~var_6);
                            var_20 -= ((min(var_13, 2424114772963040077)));
                            arr_12 [i_0] [i_1] [i_2] [i_2] [i_2] [i_1] = ((max((arr_7 [i_3 + 1] [i_3 + 1] [i_3] [i_3]), (arr_5 [i_0] [i_1] [16] [i_3]))));
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] = (arr_8 [i_3] [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1] [16]);
                            var_21 &= ((((~((min((arr_6 [i_0] [i_1] [i_3]), var_14))))) << (((((((~(arr_7 [i_0] [i_1] [i_2] [i_3])))) ? (arr_4 [i_0] [i_0] [i_0]) : (((arr_8 [i_0] [i_1] [i_2] [i_2] [i_1] [i_1]) & var_9)))) - 217))));
                        }
                    }
                }
                var_22 = (((((~(arr_5 [i_0] [i_0] [i_1] [i_0])))) ? (arr_8 [i_1] [i_1] [i_0] [i_0] [i_0] [i_0]) : ((((max(13226, (arr_11 [i_0] [i_0] [i_1] [i_0])))) << (((var_17 + 2029362770) - 22))))));
                var_23 = (max(var_23, ((((((arr_1 [i_0]) << (((max((arr_4 [i_0] [i_0] [i_0]), var_2)) - 894571426363948955)))) << (((((!((((arr_6 [i_1] [i_1] [i_1]) / 41454)))))) - 1)))))));
                var_24 = (min(var_24, ((((((-var_11 ? ((1186932734 / (arr_2 [i_1] [i_0] [i_0]))) : (arr_2 [i_0] [i_0] [i_1])))) / ((-(var_18 ^ var_14))))))));
            }
        }
    }
    var_25 = (min(var_25, var_16));
    #pragma endscop
}
