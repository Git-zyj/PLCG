/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_9));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((((var_5 ? (var_6 != var_0) : ((min(0, (arr_1 [i_0]))))))) ? (((max(((max((arr_0 [i_0]), (arr_1 [i_0])))), 33496)))) : (min(((max((arr_0 [i_0]), 177))), 5107285140387601662))));
        var_11 = (min(((var_8 - (arr_0 [i_0])), ((var_6 ? 0 : (arr_1 [14]))))));
        var_12 = (min(var_1, (arr_0 [12])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_13 = (max(var_13, (0 * 177)));
        var_14 -= (((arr_1 [i_1]) ? 78 : (arr_5 [i_1] [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_15 *= (arr_4 [i_2]);
        var_16 = (arr_3 [i_2]);
        var_17 = (((arr_3 [i_2]) <= (arr_3 [i_2])));
        var_18 *= var_3;
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_19 ^= ((((min(-1, (min(177, 62066))))) ? (((166 || (var_4 ^ var_1)))) : (((var_0 == ((var_0 ? (arr_0 [i_3]) : 177)))))));
        var_20 &= 126;
        arr_12 [i_3] = ((var_3 ? (var_9 / 28513) : (arr_10 [i_3])));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    {
                        var_21 += -242799182;
                        var_22 += 1357028483;
                        arr_21 [i_6] = (min(var_6, var_7));
                        arr_22 [i_6] [1] [i_5] [i_6] = (((((var_4 / var_3) ? -29129 : (max(var_2, 631243796)))) / ((((((var_5 ? var_8 : 28513)) <= (arr_7 [i_4])))))));
                    }
                }
            }
        }
        var_23 = ((-((var_8 ? ((((arr_0 [i_3]) < var_7))) : ((min((arr_0 [i_3]), -57)))))));
    }
    #pragma endscop
}
