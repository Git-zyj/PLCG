/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    var_13 = (var_5 % var_4);
    var_14 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_15 *= (((((121 ? (arr_6 [i_1]) : var_4))) ? (((arr_6 [i_2]) ? (arr_6 [i_0]) : var_11)) : ((23661 ? 23661 : 0))));
                            arr_10 [i_0] [i_3] [i_2] [i_3] = ((65535 ? 14878699122636240762 : 2));
                            var_16 += ((-23661 ? 1848058762 : 222));
                            var_17 = ((((((min(var_10, var_11)) - (((min(-1, (arr_0 [1])))))))) ? (((((-(arr_0 [i_2])))))) : (((((arr_2 [i_3]) > var_8)) ? (-23649 ^ 6063155025963476825) : (((max((arr_0 [i_0]), var_4))))))));
                        }
                    }
                }
                var_18 = var_11;
            }
        }
    }
    #pragma endscop
}
