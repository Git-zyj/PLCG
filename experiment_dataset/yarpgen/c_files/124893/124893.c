/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        var_16 -= ((~(((arr_0 [i_3 + 1]) ? var_11 : (arr_2 [8] [8])))));
                        var_17 *= (((((arr_5 [i_0] [i_3 - 1] [i_3] [i_3 - 2]) ^ -3883407503351099267)) % var_4));
                        arr_9 [i_2] [i_2] [i_2] [i_2] [i_1] [i_1] = 18;

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            arr_12 [i_1] [i_2] = (((arr_7 [0] [i_4 + 1] [i_3 - 2] [i_3 - 2]) ? 1 : (arr_7 [i_0] [i_4 + 1] [i_3 - 2] [i_0])));
                            var_18 ^= (((arr_5 [i_4] [i_4 + 1] [i_3 + 1] [i_3 - 1]) ? (arr_5 [i_4 - 1] [i_4 - 1] [i_3 - 2] [i_3 + 1]) : (arr_7 [i_4] [i_4 - 1] [i_3 - 2] [i_3 - 1])));
                            arr_13 [i_0] = ((9807 == ((~(arr_6 [i_0] [i_0])))));
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            arr_17 [i_0] [i_0] [6] [i_0] [i_0] [i_0] [i_0] &= (min((arr_5 [i_0] [i_1] [1] [6]), (((3658601406 || (-9821 && -97))))));
                            arr_18 [i_5] [8] [i_2] [10] [i_0] [i_0] = (((arr_11 [i_0] [10] [i_0] [5] [i_0] [i_0]) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (arr_8 [i_5] [i_3 - 1] [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_0])));
                            var_19 = (max(var_19, (102 || -9826)));
                            var_20 = (((~745559423) ? ((((18 % var_8) ? (((arr_2 [i_0] [i_1]) >> (((arr_11 [i_0] [i_1] [i_2] [i_3] [0] [6]) - 47823)))) : -10))) : ((~(arr_8 [i_0] [i_5] [i_0] [8] [i_0] [i_3])))));
                        }
                        var_21 = (max(var_21, (((-((((var_13 * (arr_6 [i_0] [i_0]))) / (arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [10] [1]))))))));
                    }
                    var_22 = (min(var_22, ((!((max((arr_0 [i_0]), 3064641811375998106)))))));
                }
            }
        }
    }
    var_23 *= (((((45792 ? (((var_4 ? var_12 : 0))) : 4063889347))) ? var_3 : 231077948));
    var_24 = 1775;
    #pragma endscop
}
