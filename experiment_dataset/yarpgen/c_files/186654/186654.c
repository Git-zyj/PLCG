/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((((12957277373318025362 ? 5489466700391526252 : (0 > 1))) == var_6)))));

    for (int i_0 = 2; i_0 < 12;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0 + 1] = ((-(var_7 * var_4)));
                    var_12 = (1 + (((32767 || ((max(23218, 1)))))));
                }
            }
        }

        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            var_13 = (((((23229 ? ((var_5 ? 1 : (arr_13 [12]))) : (((23197 == (arr_12 [i_0 - 2] [i_0 - 2] [i_3]))))))) ? ((~((130 ? 5489466700391526254 : (arr_0 [i_0 + 1]))))) : (!-40)));
            var_14 = (max(var_14, ((max((((((min((arr_0 [i_0 - 2]), var_6))) ? (((arr_8 [i_0] [i_0 + 1] [i_3 + 1]) ? 0 : 2147483647)) : 3462))), (max(((38025 ? (arr_11 [i_0] [i_3]) : (arr_6 [1]))), var_9)))))));
            var_15 = (((arr_3 [i_3 + 1]) ? (((1 != -1132039863) - (max(6285643367679199721, (arr_9 [i_3] [11] [i_3] [i_3]))))) : var_9));
            arr_14 [i_0] [i_3] = ((((((((var_9 ? 58 : (arr_6 [1])))) ? ((min(var_4, 1))) : (var_10 - 118)))) <= ((1 ? (arr_6 [i_0 - 2]) : var_2))));
        }
        arr_15 [i_0] = ((~(arr_11 [i_0] [6])));
    }
    for (int i_4 = 2; i_4 < 12;i_4 += 1) /* same iter space */
    {
        var_16 = (((1 && 4194303) ? (((arr_4 [i_4 - 1] [i_4 - 2] [i_4 - 2]) ? 0 : (arr_4 [i_4 - 1] [i_4 + 1] [i_4 + 1]))) : (max(32767, 2983332175))));
        var_17 = arr_18 [i_4];

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_22 [i_5] = ((((min((var_2 > 1), var_10))) ? -5489466700391526254 : -var_6));
            var_18 -= 130;
            var_19 = 0;
        }
        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            arr_26 [i_4] &= (((((1922925256 ? var_1 : (arr_9 [i_4 - 1] [i_4 - 1] [i_4 - 2] [i_6 - 1])))) ? (((-1226286819 ? (arr_9 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_6 + 1]) : (arr_9 [i_4 + 1] [i_4 + 1] [i_4 - 2] [i_6 - 1])))) : var_5));
            var_20 = (((((1 * var_3) ? var_5 : (arr_0 [i_6 + 1]))) == -3279595010387657843));
        }
        arr_27 [9] = (~155);
        arr_28 [0] = var_2;
    }
    var_21 = (((((24 & (1 - var_8)))) == ((-(max(var_6, var_5))))));
    #pragma endscop
}
