/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = (((max(-1069547520, ((60916 ? var_8 : 686342768218746198)))) & var_4));
                var_14 = var_11;
                arr_4 [i_0] [i_1] [i_1] = (((arr_0 [i_0] [i_1]) ? (((arr_0 [i_0] [i_0]) ? 4619 : 4244334142112658445)) : (arr_0 [i_0] [i_0])));
                var_15 *= (((((arr_0 [i_0] [i_1]) == 18)) ? 4095 : (((0 ? ((max(var_7, var_5))) : ((max((arr_1 [i_0] [i_1]), (arr_3 [i_0] [i_0] [i_1])))))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_16 = var_3;
        var_17 = 2147483648;
        arr_8 [i_2] = (max(18, 8176));
        var_18 *= 4619;
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_19 += (min((!20678), 60916));
        var_20 = (((((-32767 - 1) * (arr_7 [i_3] [i_3]))) == ((1 ? (max(var_8, 833440848)) : ((min(var_10, var_5)))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] = (((var_0 != 3265628851) << 4244334142112658445));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                {
                    var_21 = (min(var_21, (!4620)));
                    var_22 += ((4086504988 && (((var_0 ^ (arr_5 [i_4]))))));
                }
            }
        }
    }
    var_23 = (min(var_23, -1));
    var_24 += var_5;
    #pragma endscop
}
