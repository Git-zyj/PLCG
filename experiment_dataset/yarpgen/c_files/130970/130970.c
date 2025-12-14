/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((-2147483647 - 1) == ((37 ? var_6 : var_10))))) >= (((var_18 != var_14) ? -var_8 : 55021)));
    var_21 = (max(((var_8 ? ((max(var_19, 512))) : (max(var_13, 10)))), 490));
    var_22 = 64997;
    var_23 += var_19;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_24 &= ((var_12 && var_15) && ((((arr_2 [i_0]) ? 55021 : (arr_2 [i_0])))));
        var_25 &= var_6;
    }
    for (int i_1 = 4; i_1 < 16;i_1 += 1)
    {
        var_26 = ((((max(-8, var_1))) ? (max((((var_15 ? var_5 : 65526))), var_16)) : (arr_1 [i_1 - 1])));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        var_27 -= ((min((!55011), (arr_3 [10]))));

                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_28 = (((-105 ? 65535 : (arr_2 [i_1 + 3]))));
                            var_29 = (max(var_29, (!16711680)));
                            var_30 ^= (-(((-9 && (((var_17 ? var_14 : var_9)))))));
                        }
                        for (int i_6 = 3; i_6 < 16;i_6 += 1)
                        {
                            var_31 += (max(var_15, (min((4278255606 << var_15), var_12))));
                            var_32 = ((((+((((arr_6 [i_2] [i_3]) || var_6)))))) ? (max((8 ^ var_13), 79)) : ((~(((arr_4 [i_3]) - (arr_18 [i_3 - 3] [i_1]))))));
                            var_33 = (max(var_9, var_10));
                            var_34 -= (arr_7 [14] [i_1]);
                        }
                    }
                }
            }
        }
        var_35 = ((var_9 ? (((max((!-8), (arr_17 [i_1] [i_1] [i_1 + 3] [i_1]))))) : ((var_5 ? (arr_8 [10] [10] [i_1 - 1]) : (arr_5 [i_1] [i_1])))));
    }
    #pragma endscop
}
