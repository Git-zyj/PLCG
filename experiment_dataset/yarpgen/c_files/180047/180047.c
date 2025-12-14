/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (((((-var_4 ? (((min(var_3, var_5)))) : var_2))) ? var_5 : (max((max(var_8, var_15)), var_16))));
    var_19 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = (((min((((arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1]) && (arr_2 [i_0] [i_0]))), ((var_17 && (arr_6 [i_0] [i_0]))))) ? (arr_4 [i_0 + 2]) : (!4095)));
                var_21 = (arr_6 [i_1] [i_1]);
            }
        }
    }

    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_22 = ((((((((!(arr_4 [i_2]))))) + (13563394831405654451 / 3667611583691725474))) >> (((arr_6 [i_2] [i_2]) - 18267039452109162128))));
        var_23 *= (-127 - 1);

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_24 -= ((((((arr_4 [i_2]) ? (max((arr_6 [i_2] [i_3]), (arr_7 [1]))) : (arr_6 [i_2] [i_3])))) ? ((((arr_5 [i_2]) == var_8))) : (((!(arr_3 [i_3] [i_3] [i_2]))))));
            var_25 ^= (arr_5 [i_3]);
            arr_12 [1] = ((((max((~1), (((arr_2 [i_2] [i_2]) ? var_1 : var_13))))) && ((((((8 ? var_6 : (arr_11 [i_2] [i_2] [i_3])))) + (arr_8 [i_3]))))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    {
                        var_26 *= var_16;
                        var_27 = var_9;
                        var_28 = (max(var_28, var_4));
                    }
                }
            }
        }
        var_29 = ((!((24 && ((76 || (arr_10 [i_2] [i_2])))))));
    }
    var_30 = var_15;
    #pragma endscop
}
