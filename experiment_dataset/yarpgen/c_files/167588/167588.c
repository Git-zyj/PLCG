/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = (((((var_13 << (((((arr_5 [i_0 + 3]) ? var_2 : var_13)) - 13137667476871962061))))) ? ((min(28267, (arr_0 [i_2])))) : ((~((~(arr_4 [i_0] [i_0])))))));
                    var_15 *= (var_4 ^ 524287);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_16 = (var_8 != var_1);
                                var_17 *= min(2588741416437777551, (arr_10 [i_0] [i_0] [i_0 + 3] [i_1] [i_2 - 1] [i_3]));
                            }
                        }
                    }
                    var_18 = ((((524273 ? -524281 : var_5))) | 3683399558834640662);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 12;i_7 += 1)
            {
                {
                    var_19 = ((((((var_10 * (arr_13 [i_5] [i_6] [i_7] [i_7] [i_5 + 3]))))) ? (((2588741416437777564 == (arr_21 [i_5])))) : ((((arr_8 [i_5] [i_6] [i_7 + 1] [i_7 + 1]) && (arr_8 [i_5] [i_5] [i_7 + 1] [i_5]))))));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_20 = ((min((arr_4 [i_5] [i_5]), 18446744073709551615)));
                                var_21 = (((arr_17 [i_5] [i_5]) ? 6358 : (min(2588741416437777551, -32746))));
                                var_22 = ((var_6 ? (((arr_13 [i_5] [i_5] [i_7] [i_5] [i_9 - 2]) * (arr_13 [i_5 + 2] [i_6] [i_5 + 2] [i_8] [i_9]))) : ((min(var_10, 65535)))));
                                var_23 = (min((min(15858002657271774028, 65535)), 2047));
                            }
                        }
                    }
                    var_24 = ((var_4 || (arr_8 [i_5] [i_6] [i_5] [i_5])));
                }
            }
        }
    }
    var_25 = var_13;
    #pragma endscop
}
