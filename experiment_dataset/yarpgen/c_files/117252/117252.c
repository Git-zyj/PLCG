/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] = (arr_2 [i_0]);
                    var_16 |= 667188309;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_17 = ((((arr_5 [i_0] [i_0] [i_3]) ? -667188333 : (arr_5 [i_0] [i_0] [i_3]))));
                                var_18 *= (max(((((!-667188323) << ((-83 ? (arr_10 [i_0] [i_0] [i_0] [20]) : 99))))), (((arr_11 [i_1] [i_4 + 1] [i_4 + 2] [i_4] [i_4 + 2]) % (arr_4 [i_0] [i_0] [i_2])))));
                                var_19 *= 65535;
                                arr_13 [i_0] [3] [i_2] [i_0] [i_4] [i_1] = 47089;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_20 = (arr_18 [i_0]);
                                var_21 = (min((arr_5 [i_0] [i_0] [i_0]), ((((arr_5 [i_0] [i_0] [i_0]) <= (arr_5 [i_0] [i_0] [i_0]))))));
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((-(min(82, (max(1982004138, 82))))));
                                var_22 = ((((((arr_12 [i_6 - 1] [i_6] [i_0] [i_0] [i_6 + 1] [i_6]) ? (arr_14 [i_6 + 1] [i_6] [1] [i_6] [i_6 - 1] [i_6 + 1]) : (arr_11 [i_6] [i_6] [i_6] [i_6 + 1] [i_5])))) | ((((arr_16 [i_0] [i_0]) ? (arr_16 [i_2] [i_0]) : (arr_15 [i_0] [i_1] [i_1] [i_6]))))));
                                var_23 = ((65535 == ((7631128640510530971 - ((((arr_19 [i_0]) ? (arr_18 [i_0]) : (arr_19 [i_0]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (min((var_9 <= var_9), (max(-var_15, ((min(var_3, 104)))))));
    var_25 = var_14;
    var_26 = var_12;
    #pragma endscop
}
