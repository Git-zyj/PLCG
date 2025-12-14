/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_6, (min(var_8, (min(var_7, var_10))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 8;i_3 += 1) /* same iter space */
                    {
                        var_12 = ((((max((((arr_7 [i_0] [i_3] [i_2] [4] [i_3]) + var_5)), var_3))) ? (((!(((var_2 ? 1 : var_5)))))) : (((((arr_0 [i_0]) != 9223372036854775807)) ? var_5 : (arr_4 [0])))));
                        var_13 = ((+(min((var_1 <= -94), ((1 & (arr_6 [i_0] [i_0] [i_0])))))));
                    }
                    for (int i_4 = 3; i_4 < 8;i_4 += 1) /* same iter space */
                    {
                        var_14 = var_1;
                        var_15 = 25670;

                        for (int i_5 = 1; i_5 < 11;i_5 += 1)
                        {
                            var_16 = -48;
                            var_17 += var_1;
                            arr_16 [i_0] [i_1] [i_1] [i_1] [i_5 - 1] [11] &= (min((((min((arr_7 [i_0] [i_1] [i_2] [i_4 + 2] [10]), var_1)) ^ var_8)), (max(1, var_6))));
                            var_18 = ((((((var_8 ? var_2 : (arr_0 [1]))) != -var_9)) ? (((((-1992954961 / (arr_12 [i_0] [i_1] [i_1] [i_2] [i_1] [i_5])))) ? (((arr_8 [3] [7] [3] [i_5 + 1]) << 1)) : (arr_13 [i_2]))) : (((3798018685 ? 193200043 : 2947322910)))));
                        }
                    }
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        var_19 = (min(var_19, (((((((min(var_2, (arr_18 [i_0] [i_1] [i_2] [i_6])))) ^ (arr_15 [i_0] [i_0]))) << (((((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_8 : 215)) + 121)) - 27)))))));
                        var_20 = 13981616744604873543;
                    }
                    var_21 = ((((min(122, 1))) >= (((arr_4 [i_0]) ? ((var_9 ? var_9 : (arr_18 [i_0] [i_0] [i_1] [i_0]))) : ((min(var_9, var_8)))))));
                }
            }
        }
    }
    #pragma endscop
}
