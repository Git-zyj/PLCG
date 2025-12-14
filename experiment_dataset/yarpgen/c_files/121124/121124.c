/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((max(((var_7 ? var_4 : -7568296324566233686)), var_10))) ? var_4 : (min(4294967284, (max(64, var_4))))));
    var_15 = (var_4 * var_7);
    var_16 |= (var_3 || var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (((!(arr_0 [i_0] [i_0]))))));
                var_18 = (min(var_18, ((((((~(arr_0 [i_0] [i_0])))) ? (((arr_0 [i_0] [i_1]) ^ (arr_5 [i_0]))) : ((((arr_0 [i_0] [i_1]) ^ (arr_0 [i_0] [i_0])))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [5] [1] [i_0] [4] [i_0] = (((min(69, -7568296324566233655)) == (!var_12)));

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_19 += 186;
                                var_20 = (arr_10 [i_0] [i_1] [i_2] [8]);
                                var_21 *= (((((199 ^ (arr_0 [i_0] [i_4])))) / (arr_5 [i_0])));
                                var_22 = (min(131, 9146510180048250697));
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                var_23 = (max(var_23, (((((((arr_7 [i_0] [5]) ? (arr_7 [i_0] [i_0]) : (arr_7 [i_0] [i_0])))) <= ((-7568296324566233660 ? (max(4221329275, -4061908285890406929)) : ((min(var_13, 1))))))))));
                                arr_19 [i_0] [i_1] [i_1] [i_0] [i_2] [i_1] [i_5] = min((min((arr_18 [i_0]), -7568296324566233682)), var_10);
                                arr_20 [1] [1] [i_2] [2] [i_3] [0] = (((~(arr_5 [i_1]))));
                                var_24 = (max(var_24, (((var_8 ? (((arr_4 [i_0]) % (arr_4 [i_0]))) : (((arr_14 [i_0] [i_1] [0] [1] [i_0]) + (arr_14 [6] [i_3] [1] [6] [i_0]))))))));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 11;i_6 += 1)
                            {
                                var_25 = (min(var_25, ((((arr_2 [i_2]) ? (arr_2 [i_0]) : (arr_2 [i_2]))))));
                                var_26 = (((arr_7 [i_2] [i_2]) ? (arr_7 [i_3] [i_3]) : (arr_7 [i_3] [7])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
