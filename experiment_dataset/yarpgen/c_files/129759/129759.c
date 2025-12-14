/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 ^= (max((((arr_3 [0]) * (arr_3 [i_0]))), ((255 ^ (arr_2 [i_0])))));
        arr_4 [1] = (((((arr_1 [i_0]) != 241)) ? 5133031906688295254 : (((max(202, (arr_3 [i_0])))))));
        arr_5 [0] = (max(-1128816404, (((((arr_3 [i_0]) ? 5133031906688295242 : 5133031906688295254))))));
    }
    var_14 = var_1;
    var_15 = (max(var_15, (((var_7 ^ (~27120))))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                arr_11 [i_2] [1] = ((((~(((arr_7 [i_2] [i_1]) ? 0 : (arr_6 [i_1])))))) ? (arr_7 [i_1] [i_2]) : (arr_10 [i_1] [13] [i_2]));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 14;i_4 += 1)
                    {
                        {
                            arr_19 [i_2] [i_2] [i_2] [i_2] = (((((arr_7 [1] [i_2]) && (((var_11 / (arr_9 [i_1] [i_2])))))) && 13313712167021256361));
                            var_16 *= (min((~var_6), (max(-15, (arr_8 [i_4 + 1] [i_4 + 2])))));
                            var_17 ^= ((((((var_3 != var_3) % ((-2147483642 ? (arr_13 [i_3] [i_3] [i_1]) : (arr_15 [i_1] [i_1] [i_1] [i_1])))))) ? ((((-2147483642 ? 0 : 1391472340)) & (arr_6 [i_3]))) : var_11));
                        }
                    }
                }
                var_18 ^= 5133031906688295241;
            }
        }
    }
    #pragma endscop
}
