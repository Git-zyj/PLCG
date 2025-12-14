/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_0));
    var_19 = (max(var_19, ((((((13996 < var_8) < var_17)) ? var_17 : ((var_15 ? (!var_7) : (min(var_0, 503316480)))))))));
    var_20 = ((!(!1)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((var_11 < (arr_0 [i_0 + 2])));
        var_21 = ((~(arr_1 [i_0 - 1])));
        var_22 *= (((arr_0 [i_0]) ? ((var_14 ? 1 : 41116)) : -var_0));
        var_23 = (max(var_23, ((var_15 < (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_6 [7] [7] = ((((max(4294443008, (arr_4 [i_1])))) ? ((((~235) < (((0 < (arr_5 [i_1] [0]))))))) : (max(((896 ? (arr_4 [i_1]) : var_3)), ((((arr_4 [i_1]) < 1)))))));
        var_24 = (max(var_24, ((((!var_0) < (((((!var_8) < (((var_4 < (arr_4 [i_1])))))))))))));

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_25 = (min(var_25, 33462));
            var_26 = (max((((var_9 < ((((var_5 < (arr_9 [i_1])))))))), 33450));
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_27 = (max(var_27, (((((min((min(62787, 75)), (var_11 < var_16)))) ? 2138940169170203985 : (arr_7 [0] [0] [i_1]))))));
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_28 = (max(var_28, ((min(53688, ((((arr_12 [i_1] [i_5]) < var_8))))))));
                        var_29 = (((((var_7 ? var_15 : (arr_11 [i_1]))) < -77)) ? (min((arr_9 [i_4 - 1]), (max(61, (arr_16 [i_1] [i_3] [i_4]))))) : ((((min(var_10, var_11))))));
                        var_30 = (min(((min(var_0, ((~(arr_18 [i_1] [i_1] [i_1] [i_1] [i_5])))))), 0));
                        arr_19 [i_1] [i_3] [i_4] [i_1] [i_5] = ((-(max(var_11, 2770075337))));
                    }
                }
            }
            var_31 = (min((2705365132 < var_14), (min((arr_12 [i_1] [i_3]), (arr_12 [i_1] [i_3])))));
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        var_32 = (arr_11 [i_6]);
        var_33 += var_14;
        var_34 = (max(var_34, (((-(arr_11 [i_6]))))));
    }
    #pragma endscop
}
