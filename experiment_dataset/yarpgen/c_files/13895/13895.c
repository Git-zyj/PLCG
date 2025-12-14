/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 = (((arr_1 [i_0]) ? ((min(88, -7956))) : ((~(arr_1 [i_0])))));
        var_21 = (((var_4 ? (min(var_5, var_2) : 183))));
        var_22 = (max((max(3322169422, var_10)), var_10));
        var_23 = 167;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                {
                    arr_10 [i_1] [i_1] [i_3] = (((((3322169422 ? var_18 : ((15692593455070644076 ? (arr_6 [i_1] [6] [6]) : var_0))))) ? ((max((arr_7 [i_1] [i_3]), (((!(arr_9 [i_1] [i_2] [i_2] [i_3]))))))) : var_0));
                    arr_11 [i_3] [i_2] [i_2] [2] = (+-17143551098375450694);
                }
            }
        }
        arr_12 [i_1] = (((((var_19 ? var_7 : var_18))) ? (max((arr_1 [i_1]), 1098121294232512466)) : (max(var_11, 15692593455070644089))));
        arr_13 [i_1] = ((~((var_13 ? (~231) : var_14))));
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_24 -= ((var_13 ? 0 : (arr_0 [i_4])));
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                {
                    arr_23 [i_5] [12] [i_6] &= var_17;
                    var_25 = ((((((min(11413028760715369819, var_0))) ? var_1 : var_19)) * ((((arr_16 [i_5 + 2]) / (arr_16 [i_5 + 2]))))));
                }
            }
        }
    }
    for (int i_7 = 3; i_7 < 8;i_7 += 1)
    {
        arr_28 [i_7] = (((((24 ? (arr_25 [i_7]) : 69))) ? (arr_17 [i_7] [i_7]) : ((var_1 ? (min(var_8, var_8)) : 21246))));
        var_26 = (arr_15 [i_7]);
    }
    var_27 = (!0);
    var_28 = ((((min((var_10 ^ var_7), var_16))) ? (~var_0) : var_8));
    var_29 = max(var_11, var_15);
    #pragma endscop
}
