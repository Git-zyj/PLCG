/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = ((min((!4981773988882064091), 255)));
        arr_4 [i_0] = (arr_0 [i_0 - 1] [5]);
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_11 = (((var_7 | 18414438413612424890) ? (arr_2 [i_1]) : -6990483611607599767));
        var_12 = (min(var_12, ((((((((max(var_1, (arr_8 [9])))) ^ (((!(arr_2 [i_1]))))))) ? ((max((arr_6 [10] [i_1]), (arr_2 [i_1])))) : (arr_8 [6]))))));
        var_13 *= (!8779184804222666468);
        var_14 = (max(var_14, (((+((((max((arr_1 [i_1]), var_1))) ? var_3 : (((arr_5 [i_1] [i_1]) ? (arr_7 [i_1] [i_1]) : -11180)))))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    var_15 = ((((((arr_14 [i_2] [i_2] [i_4]) << (((((arr_14 [i_2] [i_2] [i_2]) ? (arr_13 [19] [i_3] [i_2]) : (arr_14 [i_2] [i_3] [i_4]))) - 22877))))) ? 1332250273 : ((6891 ? 11180 : -5311832810264796150))));
                    arr_15 [i_3] [i_3] [i_3] = (max(112, 11180));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_16 = (max(var_16, (arr_19 [i_5] [i_5] [i_4] [i_5] [14] [0])));
                                var_17 = (((arr_14 [i_2] [i_3] [i_5]) ? (arr_10 [i_5] [i_4]) : (((max(var_10, 4074117346))))));
                                arr_21 [i_2] [i_3] [i_4] [i_3] [i_6] = (min(var_3, ((max((arr_17 [i_3] [i_5] [i_4]), -846918150)))));
                            }
                        }
                    }
                    var_18 = (((!((max(var_10, -9154685012223670031))))));
                }
                var_19 = (max(var_19, -8367));
                var_20 = (min(var_20, (((((((min(170, 30057))) != (arr_11 [i_2] [1]))) ? (arr_14 [i_2] [20] [i_3]) : ((((((var_0 >> (((arr_16 [i_2] [i_3] [6] [i_3] [i_2]) - 43787))))) && var_4))))))));
                var_21 = ((~(arr_17 [i_3] [i_3] [i_3])));
            }
        }
    }
    var_22 = -2048;
    var_23 = var_8;
    #pragma endscop
}
