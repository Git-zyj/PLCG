/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_10 = ((-((-(1 <= 120)))));
        arr_3 [i_0] [i_0] = var_7;
        var_11 -= ((((arr_2 [i_0]) ^ (arr_1 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_12 = 1165778060046787945;
        var_13 = var_0;
        arr_6 [i_1] [i_1] = (((arr_4 [i_1 - 1]) ? (arr_1 [i_1 - 1] [i_1 - 1]) : (arr_4 [i_1 - 1])));
        arr_7 [i_1] [i_1] = ((((var_7 ? (arr_5 [i_1]) : var_1)) <= (1 <= var_7)));
    }
    for (int i_2 = 3; i_2 < 23;i_2 += 1)
    {
        arr_10 [i_2] = (!562949953421311);
        var_14 -= (max((arr_8 [i_2 - 1]), (562949953421307 < 3603354374874483554)));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_15 = var_0;
                    var_16 ^= (max(((~(((arr_12 [i_2] [i_2] [20]) ? (arr_14 [i_2] [22]) : var_7)))), (min(var_5, (arr_9 [i_3])))));
                }
            }
        }
        arr_15 [i_2] = 3603354374874483554;
    }

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_17 = (((arr_9 [i_5]) && ((((arr_9 [0]) << (((arr_9 [i_5]) - 183)))))));
        var_18 = (((-(arr_2 [i_5]))));
        var_19 ^= ((((max(65535, (min(24106, 3603354374874483536))))) ? 221 : 29478));
        arr_19 [i_5] = (arr_17 [i_5]);
        arr_20 [i_5] = ((((var_1 ? (-9223372036854775807 - 1) : (arr_11 [i_5] [i_5] [i_5]))) == ((min((((var_4 || (arr_11 [i_5] [i_5] [i_5])))), (((arr_17 [i_5]) ? var_4 : (arr_1 [i_5] [i_5]))))))));
    }
    var_20 ^= (min(var_3, var_9));
    #pragma endscop
}
