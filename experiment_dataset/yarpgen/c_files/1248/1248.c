/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = ((min((min(var_11, 6427111322086688280)), ((min(4, -1904641106))))));
                var_18 = 6082986456190028378;
                var_19 = (max(var_8, (((!((12474 < (arr_2 [i_1] [i_1] [8]))))))));
            }
        }
    }
    var_20 = (((!7) && (((0 ? var_9 : -1416207641)))));
    var_21 -= var_2;

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_6 [i_2] = ((((min((min((arr_2 [6] [i_2] [12]), (arr_2 [1] [1] [i_2]))), -var_10))) ? ((~(var_5 % var_10))) : ((~((var_2 ? var_9 : var_11))))));
        arr_7 [i_2] = var_8;
    }
    for (int i_3 = 2; i_3 < 10;i_3 += 1)
    {
        arr_10 [i_3] &= var_12;

        for (int i_4 = 1; i_4 < 9;i_4 += 1) /* same iter space */
        {
            var_22 -= (min(0, 6984617974999632023));
            arr_14 [i_3] = ((((-(max(-1, (-2147483647 - 1))))) << (!var_4)));
        }
        for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                var_23 = (var_5 < var_6);
                arr_20 [i_5] [i_5 + 2] [i_5] = var_12;
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                var_24 -= ((63 | (arr_17 [i_5] [i_5 + 2] [i_3 + 1])));
                arr_23 [i_3 + 1] [i_5] = ((-(var_2 - 4294967295)));
            }
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 9;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 10;i_10 += 1)
                    {
                        {
                            arr_31 [i_3] [i_5] [i_5] [i_5] = (((((4294967271 && 2147483647) ? var_16 : (((1152921504606814208 | (arr_30 [i_10] [i_9] [i_8] [i_5 + 1] [i_3])))))) < ((((!(((arr_19 [i_3] [i_5] [i_8]) == -6659))))))));
                            arr_32 [i_5] [3] [i_8] [2] = (min((~1), ((var_12 & (arr_3 [i_5] [i_10 - 1])))));
                            arr_33 [i_3] [i_5] [3] [i_8] [i_9] [i_10] [i_9] = ((-((var_6 & (max((arr_27 [i_3] [i_3] [i_9 + 1] [i_3]), (arr_1 [i_9] [i_9])))))));
                        }
                    }
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 12;i_11 += 1)
    {
        var_25 = (((min(var_15, ((1 ? 2122510096 : 4294967295)))) >> (!2650490593)));
        var_26 -= ((var_13 && ((max(-6, 84)))));
        arr_36 [i_11] [i_11] = ((((((arr_1 [i_11] [i_11]) >= 3119226086306941571))) != (arr_5 [i_11])));
    }
    #pragma endscop
}
