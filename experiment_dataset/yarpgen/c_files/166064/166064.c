/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= (((((!(var_12 % var_6)))) % ((0 ? ((max(-25443, (-32767 - 1)))) : -22))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_18 = ((((min((arr_7 [13] [13] [i_2] [i_0]), (max((arr_6 [13] [i_2]), (arr_7 [i_0] [i_0 - 4] [i_1] [1])))))) ? ((73 ? 32755 : ((((arr_4 [i_2] [i_1]) <= (arr_7 [i_0] [i_0] [i_0] [i_2 - 1])))))) : ((~((max(var_10, var_4)))))));
                    var_19 = ((((((arr_4 [i_1 - 2] [i_0 - 2]) <= var_2))) >> ((((~(((arr_7 [i_0 - 3] [i_1 - 2] [i_2 + 1] [i_2 - 1]) + var_14)))) - 5498))));

                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        var_20 = (arr_6 [i_2] [11]);
                        var_21 = (((((-var_9 <= (var_12 >= var_0)))) != ((((((arr_6 [i_0] [i_1]) >> (((arr_8 [i_0 + 2] [i_0 + 2] [i_1] [i_1 + 1] [i_2] [2]) - 1108341405)))) <= ((var_12 ? (arr_1 [i_0]) : 183)))))));
                        var_22 = ((max((arr_8 [i_0 - 4] [i_0] [i_1 + 2] [i_2 + 1] [0] [i_3]), (arr_9 [i_0 + 2] [i_0 + 2] [i_1] [i_3]))));
                        var_23 = (arr_4 [i_0] [i_1]);
                        arr_10 [i_1] [i_1] [i_1] [i_3] = (~11608949844799604667);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        arr_14 [i_4] [i_1] [i_1] [i_0] = ((arr_0 [i_2 - 1] [i_0 + 1]) % (arr_0 [i_2 - 1] [i_0 + 1]));
                        var_24 = (-9223372036854775807 - 1);
                        var_25 = (((((var_13 <= (arr_0 [i_0] [i_1 + 2])))) / (arr_9 [i_0] [i_1] [i_1] [i_4])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
