/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((min(((130 ? 34359738367 : var_5)), ((max(var_11, 1))))) & var_2));
    var_19 = var_6;
    var_20 = ((((min(var_0, var_13))) ? ((((var_12 == 47) > (var_2 | var_0)))) : var_9));
    var_21 = ((((max((var_7 | var_4), ((var_4 ? var_5 : var_17))))) ? (min(((1 ? -34359738379 : -28905)), (((225 ? var_7 : var_11))))) : (var_3 + var_6)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] = -67;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_22 = (((((((var_16 ? (arr_11 [i_0] [i_1] [i_1] [i_3] [i_1]) : (arr_4 [i_1] [i_1] [i_0]))) - 39283))) ? (((min((arr_8 [i_1] [i_2] [i_1] [i_3]), var_8)) | ((var_15 << (var_5 - 3032375888))))) : (arr_8 [i_0] [i_0] [i_0] [i_0])));
                                arr_14 [i_1] [i_0] [i_0] [6] = -12502;
                                arr_15 [i_0] [i_0] [i_0] = ((((!(arr_7 [i_0] [i_1] [13] [i_0]))) || ((min(12509, ((((arr_10 [i_0] [i_0] [i_0] [i_3]) && 48))))))));
                                arr_16 [4] [i_0] [i_2 + 2] [i_2 + 2] [i_4] = 1;
                                var_23 = ((+(((arr_10 [i_0 - 1] [i_1] [i_4] [i_2 + 2]) ? 46858 : ((var_13 ? var_17 : (arr_0 [i_4])))))));
                            }
                        }
                    }
                }
                arr_17 [i_0] [i_0] = var_13;
            }
        }
    }
    #pragma endscop
}
