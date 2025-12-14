/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134232
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
                arr_6 [i_0] [i_1] = (((max((arr_4 [12] [i_1]), var_1)) << (((max((arr_1 [i_0]), (arr_5 [i_0] [i_1]))) - 1661136034))));
                arr_7 [i_0] [i_0] [i_0] = ((!(arr_4 [i_0] [i_1])));
                arr_8 [i_0] [i_1] = 1194654705467429334;
                arr_9 [i_0] [6] |= ((!((min(2099825610214738443, (((var_7 ? (arr_3 [17]) : var_7))))))));
            }
        }
    }
    var_10 &= (max(var_3, (min(((var_0 ? var_5 : -75)), ((max(153, var_1)))))));
    var_11 = -2099825610214738413;
    var_12 = (min(var_8, var_4));
    #pragma endscop
}
