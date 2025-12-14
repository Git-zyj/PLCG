/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((max(var_1, var_0))) ? (min(((var_3 ? 2647090971 : var_8)), (424178739 & var_5))) : (var_2 | var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_11 = (((((2648253990 ^ var_4) ? (~-1620449137) : (arr_6 [i_1 + 1] [i_1 + 1]))) >> ((((-490816315 ? 15941 : 1)) - 15928))));
                    arr_10 [i_0] [i_0] [i_0] = (((!3554437117) ? (((((63 ? -114 : (arr_1 [i_0] [i_0]))) != 1))) : 8950042594523696493));
                    arr_11 [i_0] [i_1] [i_0] = (((((arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1]) >> (-65 + 90))) << ((((((max((arr_5 [i_2] [21] [i_0]), -28934))) ? var_3 : (arr_8 [i_1] [i_1 - 1] [16] [i_1]))) - 3261074147))));
                    var_12 = (((((arr_7 [i_1] [i_1]) ? (((arr_8 [i_0] [i_1 - 1] [10] [i_2]) >> (((arr_5 [i_0] [i_1 + 1] [i_2]) - 10)))) : ((-(arr_4 [i_0]))))) >> (((3412444303 | var_3) - 52960))));
                    var_13 = (max((((var_8 ? (arr_1 [i_0] [i_0]) : 39))), ((var_6 ? 2147483647 : (arr_7 [i_0] [i_1 - 1])))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_14 = 1143634495;
                    arr_14 [i_3] [i_0] [i_3] = ((-(arr_13 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])));
                }

                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    var_15 ^= (-((((max(-29823, var_7))) ? var_2 : ((1516802205 << (arr_7 [i_1] [i_4 + 1]))))));
                    var_16 = var_9;
                    var_17 = (((max(62055, 4294967291)) / (arr_2 [i_1 - 1])));
                    var_18 = (i_0 % 2 == 0) ? (((8 >> (((max(0, (arr_1 [i_1 - 1] [i_0]))) - 15157))))) : (((8 >> (((((max(0, (arr_1 [i_1 - 1] [i_0]))) - 15157)) - 3147)))));
                }
                var_19 ^= ((max(var_6, 31)));
            }
        }
    }
    #pragma endscop
}
