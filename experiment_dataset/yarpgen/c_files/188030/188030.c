/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += (2000 && 1200579414);
    var_17 = var_0;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            arr_4 [i_0] [i_1] [i_1] = ((((((2238565763 != (((2056401533 > (arr_3 [i_0])))))))) / 2056401525));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_9 [i_1] [i_1 + 2] [i_1] [11] [i_1 + 2] = (((((2238565756 >> (((arr_2 [i_1 - 1] [i_1] [i_1 - 1]) - 7751))))) ? ((+(((arr_6 [i_1] [i_1] [i_2] [i_3]) & (arr_8 [i_3] [i_0] [i_0] [i_0] [i_0]))))) : ((((arr_2 [i_1 - 1] [i_1 - 1] [i_1 - 1]) >> (((arr_8 [i_0] [i_1] [i_0] [i_0] [i_1]) - 14243656899901830867)))))));
                        var_18 = (max(var_18, ((((max(((303644840 >> (303644840 - 303644812))), (arr_5 [i_1 + 2] [2] [i_1 + 1]))) <= 303644841)))));
                        var_19 = var_4;
                    }
                }
            }
        }
        var_20 = (min((((((1 ? (arr_3 [2]) : (arr_6 [i_0] [i_0] [i_0] [i_0])))) ? (min(var_5, var_9)) : (arr_0 [i_0]))), (((~((((arr_0 [i_0]) > 1))))))));
        var_21 = (max((arr_3 [i_0]), ((((((min((arr_0 [i_0]), 7119)))) == (max((arr_8 [i_0] [i_0] [i_0] [1] [i_0]), 2518752981)))))));
    }
    var_22 = var_5;
    #pragma endscop
}
