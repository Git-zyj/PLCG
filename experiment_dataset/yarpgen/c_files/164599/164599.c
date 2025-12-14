/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [1] = (arr_1 [i_0]);
        var_18 = (8191 | -1871772280);
    }
    for (int i_1 = 4; i_1 < 11;i_1 += 1)
    {
        var_19 *= ((((max(var_6, var_15))) ? (((arr_4 [i_1 + 1] [i_1 + 2]) ? var_4 : (arr_6 [i_1 - 2] [i_1 - 1]))) : (((((1 ? (arr_6 [2] [2]) : 32799)) < (min(0, (arr_6 [i_1] [i_1 - 1]))))))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                {
                    arr_11 [i_1] [i_1] [i_1] [i_1] = (min((min((max(0, var_16)), (((arr_10 [i_1] [i_1] [1] [1]) ? var_16 : (arr_7 [i_1]))))), (((!(~var_10))))));
                    arr_12 [12] [i_2] [12] = 16185720263603978673;
                }
            }
        }
    }
    var_20 = var_1;
    var_21 = (1 < 16752495277314220707);
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 4; i_5 < 9;i_5 += 1)
        {
            {
                arr_20 [i_4] [i_4] = ((((((arr_5 [i_4] [i_5 - 1]) - (arr_4 [i_4] [i_4])))) < (((!var_0) ? var_8 : (var_7 % var_1)))));

                for (int i_6 = 3; i_6 < 9;i_6 += 1)
                {
                    var_22 = (min(var_22, ((((var_16 ? var_2 : -1))))));
                    var_23 = (((((!(arr_10 [1] [4] [4] [i_6 - 1])))) << (((!(arr_1 [i_4]))))));
                    arr_23 [i_6] = ((~(((arr_0 [i_5 - 4]) ? (~32767) : (arr_21 [4] [i_6] [i_6 - 1])))));
                }
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    arr_26 [i_4] [8] [i_7] [i_7] = (min(var_2, ((((max(32767, var_7)))))));
                    var_24 = ((~((((arr_22 [i_5 - 2] [2] [i_7 - 1]) < (2147483647 < 1))))));
                    arr_27 [i_4] [i_4] = 4294967295;
                }
            }
        }
    }
    #pragma endscop
}
