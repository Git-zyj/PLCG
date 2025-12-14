/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_1 > var_3);
    var_17 = (min(var_17, ((((-116 ? ((1514918476 ? var_3 : 108) : ((-635650496 ? 635650505 : var_5)))))))));
    var_18 = (~var_3);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = (((arr_1 [i_0] [i_0]) | (arr_1 [i_0] [i_0])));
        arr_2 [i_0] = ((((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : var_10))) ? (arr_1 [i_0] [i_0]) : ((((arr_0 [i_0]) > (arr_1 [i_0] [i_0]))))));
        var_20 = ((var_14 ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0])));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            {
                var_21 = (((arr_6 [i_2] [i_2] [i_1]) ^ (((((((arr_7 [i_1] [1]) == var_4)) && (((-(arr_4 [i_1]))))))))));
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_22 = ((arr_7 [i_1] [5]) | var_4);
                            arr_14 [5] [i_2] [i_3 + 1] [i_4] = (arr_3 [1]);
                            var_23 = ((((((-635650496 == (~635650501))))) == (((arr_9 [i_3] [i_3 + 4] [i_3 + 1] [i_3]) ? (arr_6 [i_3 + 4] [i_3 + 1] [i_3]) : (arr_13 [i_4] [i_4] [i_4] [i_3])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
