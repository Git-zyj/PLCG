/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 = (min(var_13, (((((1 + (arr_1 [i_0])))) ? var_1 : ((((max((arr_2 [i_0]), var_5))) ? (min(67108863, 4227858438)) : (((min(62706, 6609))))))))));
        var_14 = ((var_12 ? (!var_10) : (arr_2 [i_0])));
        var_15 *= (!985411343);
    }
    var_16 = (max(var_16, (13374432087201863302 | var_7)));

    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1 - 1] = (!43);
        arr_7 [i_1] = ((((((arr_4 [i_1 - 2] [i_1 - 2]) ? var_3 : 268435456))) ? (((arr_4 [i_1] [i_1 - 2]) ? (min(var_10, 985411343)) : ((max(var_2, (arr_5 [i_1] [i_1])))))) : ((min((-2147483647 - 1), var_6)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    var_17 = (((min((max(var_2, var_0)), var_7)) * (arr_9 [i_2])));
                    var_18 -= (max(29344, ((var_0 ? ((var_2 ? -19068 : var_1)) : (arr_4 [i_1] [i_1])))));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_19 = (((!var_0) ? (((arr_16 [i_4] [i_4]) ? -19068 : 36)) : 1));
        var_20 = (max(0, (1 + -43409337)));
        arr_19 [i_4] = (arr_14 [i_4] [i_4] [i_4]);
    }
    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {
        var_21 *= (((((var_10 ? (arr_21 [i_5 - 2] [i_5 + 1]) : (arr_21 [i_5 - 2] [i_5 + 1])))) ? (((!(arr_22 [i_5 + 1])))) : (((!((max(1, 48))))))));
        arr_24 [i_5] [i_5] |= (-32767 - 1);
    }
    #pragma endscop
}
