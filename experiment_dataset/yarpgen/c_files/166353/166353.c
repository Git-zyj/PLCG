/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_4, ((!(13 - 2063255639094729464)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = ((((((!((max(243, (arr_0 [i_0] [i_0])))))))) + (max((arr_0 [i_0] [i_0]), ((((arr_3 [6]) | (arr_3 [i_1]))))))));
                var_21 = (max((max((arr_1 [i_0]), -1)), 1));
                var_22 = ((((~(arr_4 [i_1]))) == (arr_4 [i_0])));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    var_23 = (((243 || (arr_5 [i_2] [i_1] [i_1] [i_0]))));
                    arr_9 [i_2] [i_0] [i_2] [i_2] = ((((235 >= (arr_7 [i_2] [i_2] [i_0]))) ? ((((arr_1 [i_0]) != (arr_2 [i_0])))) : (arr_8 [i_0] [i_0] [i_1] [i_0])));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2] = (((((!(arr_0 [i_0] [i_0])))) - (arr_3 [i_2 - 2])));
                        var_24 *= ((!(arr_8 [i_2 + 1] [i_2 + 2] [i_2] [i_2 - 3])));
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_25 = 887115951;
                        var_26 = (~(arr_1 [i_2 - 2]));
                    }
                }
            }
        }
    }
    var_27 = ((((max((402653184 / 8176), (max(98, 402653166))))) * var_1));
    var_28 += (max((max((!var_14), var_18)), ((((4150342134783512446 <= var_2) >> (var_16 - 204))))));
    #pragma endscop
}
