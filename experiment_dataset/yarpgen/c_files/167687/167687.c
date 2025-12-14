/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_8 [i_0] [i_2] [2] [i_2] [i_3] [i_3 + 2] = (((-(arr_0 [i_0]))));
                        var_19 = (((+-2438018906) ? (~4003914646) : (max((arr_6 [i_0] [i_0] [i_1] [i_1] [i_0] [10]), (arr_0 [i_3 + 1])))));
                        var_20 = (((max((arr_3 [i_1] [i_2] [i_3]), 60323))));
                    }
                }
            }
        }
        arr_9 [i_0] = ((-((((max(-3802763020943794044, 15))) ? (arr_6 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : ((((!(arr_5 [i_0])))))))));
        var_21 = (max(((((((arr_6 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_3 [i_0] [i_0] [i_0])))) ? -4418 : (((arr_0 [i_0]) ? 4003914646 : (arr_6 [0] [14] [i_0] [i_0] [6] [i_0]))))), (((-(120 | 2283))))));
        arr_10 [i_0] = (min((((arr_6 [i_0] [i_0] [i_0] [1] [i_0] [12]) ? (arr_0 [i_0]) : (arr_6 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (((arr_0 [i_0]) ? (arr_6 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_6 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
        arr_11 [i_0] = ((!(arr_3 [i_0] [i_0] [i_0])));
    }
    var_22 &= (min(var_12, ((var_0 ? 1992756967 : var_6))));
    var_23 += ((-((~(min(0, var_17))))));
    var_24 &= var_3;
    #pragma endscop
}
