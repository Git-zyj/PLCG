/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((2 + 9874104343618745749) ? var_4 : (-1467240579 | var_8)))) ^ (max(32601, 1022256425987424343))));
    var_16 *= var_1;
    var_17 = (((min((((8572639730090805866 ? 0 : var_12))), var_2)) > var_13));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_18 *= ((((((((((arr_7 [i_3] [i_2] [i_1 + 1]) > 0)))) >= var_6))) | (((arr_4 [i_0] [i_1] [i_2]) ? -365535655 : var_11))));
                        var_19 &= (min((arr_10 [i_3] [i_3]), (arr_2 [i_0])));
                    }
                }
            }
        }
        var_20 *= (((max(((-21 ? (arr_7 [i_0] [i_0] [i_0]) : 1)), (var_8 && 127))) >> (((arr_8 [i_0] [i_0] [i_0] [i_0]) >> (((arr_4 [1] [i_0] [1]) - 83))))));
        var_21 = (((((max(0, 0)) ? (min((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]), 231)) : var_3))));
    }
    for (int i_4 = 2; i_4 < 11;i_4 += 1)
    {
        var_22 += (arr_3 [i_4 + 1]);
        var_23 = (((var_13 != 1) ? (((((var_5 ? 0 : 1778416929))))) : 15565196770131037102));
    }
    var_24 = (min(var_24, ((((22 | -23) ? 6 : (min(var_5, ((var_9 ? var_9 : var_5)))))))));
    #pragma endscop
}
