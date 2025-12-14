/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(((((-44 < var_5) % ((-46 ? var_15 : 67))))), ((var_10 ? var_17 : -1329881470))));
    var_20 = 15838;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0] = ((var_9 ? (max((arr_3 [i_0]), ((min(7509, 67))))) : ((min(-46, (arr_1 [i_0] [i_1]))))));
                arr_8 [i_0] [i_1] [i_1] = ((-293556210 == var_4) >> ((((arr_6 [i_1]) == (arr_6 [i_0])))));
                var_21 = ((var_5 ? ((((max(46, (arr_3 [i_1])))) ? ((max(15832, (arr_0 [5] [i_1])))) : ((-15838 ? 63 : -46)))) : 113));
                arr_9 [i_0] [i_1] = ((((min(15824, -15825)))) - 2359852736);
                arr_10 [i_0] = (((((arr_4 [i_0] [i_0] [i_1]) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_0] [i_1]))) ^ ((255 ? (arr_4 [i_0] [i_0] [i_0]) : 1089))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_22 *= 0;
        var_23 = (((var_7 * (arr_4 [i_2] [i_2] [i_2]))) ^ (47798 > 8460852282566992148));
    }
    #pragma endscop
}
