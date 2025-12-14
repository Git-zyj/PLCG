/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-(min((min(0, var_6)), var_6))));
    var_16 = (min(2124247078, (max((max(148840121034799822, 0)), 2170720217))));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_17 = (max(2170720227, 231));
        var_18 = (arr_0 [i_0]);
        var_19 = ((min((arr_0 [i_0]), 53416)));
        var_20 -= (((max((arr_0 [4]), -4735085020997203356))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_21 = ((((var_2 ? 24576 : ((8935421374796359148 ? 2170720218 : 5)))) ^ 65533));
        var_22 ^= 65535;
        arr_4 [i_1] [i_1] |= (min(var_6, -12064));
        var_23 = (!4194288);
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_24 = (min(var_24, (((!(arr_1 [i_2] [i_2]))))));

        /* vectorizable */
        for (int i_3 = 1; i_3 < 7;i_3 += 1)
        {
            arr_9 [i_3] = var_11;
            var_25 = (max(var_25, (((!(32752 >= 1452312793))))));
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            arr_12 [8] [i_2] [i_2] = 6212328794209213153;
            arr_13 [i_2] [i_2] [i_4] = (min(var_4, ((var_10 * (min(2170720232, (arr_10 [i_2] [i_4])))))));
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        {
                            var_26 = (~((~(min(-1778092174, var_2)))));
                            arr_23 [i_6] [i_6] [i_5] [i_6] [i_7] [i_2] [3] = ((~(~var_12)));
                        }
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            arr_26 [i_2] [2] = (((max(4294967285, 134217216)) < (arr_21 [i_2] [i_2] [i_8])));
            var_27 = (min((((~((-(arr_10 [i_2] [i_2])))))), (arr_11 [i_2] [i_8] [10])));
            arr_27 [i_8] = ((!((!(arr_1 [i_2] [i_2])))));
            arr_28 [i_2] |= (min(((var_9 | (((arr_2 [i_2]) ? 4194308 : 6862766248914624319)))), (804549293137915560 / var_8)));
        }
    }
    var_28 = (~-var_14);
    #pragma endscop
}
