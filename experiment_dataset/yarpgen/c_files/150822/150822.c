/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_16 = ((-((min((arr_2 [i_0 + 1]), (arr_2 [i_0 + 3]))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_17 ^= ((((-122 % (arr_1 [i_0] [i_1])))) ? (((14333057987640016994 ? (arr_4 [i_1] [i_0] [i_0]) : 200))) : var_6);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_2] [i_2] [2] [i_2] [i_3] = ((arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 2]) ? (arr_8 [i_3 - 1] [i_2] [i_2] [5] [16] [i_0]) : ((-(arr_8 [i_0] [i_1] [16] [i_2] [9] [14]))));
                        arr_10 [i_0] [i_0] [i_0] [i_2] [i_2] [i_0] = ((((((-32 + 2147483647) << (((arr_8 [i_0] [i_1] [i_0] [i_3] [i_0 + 1] [i_1]) - 1083081085))))) ? (((22 >> (((arr_2 [i_0 - 2]) - 37))))) : ((var_12 ? (arr_4 [i_1] [2] [i_3]) : (arr_7 [i_2])))));
                    }
                }
            }
            var_18 = ((~(((!(arr_0 [i_1]))))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_19 = (max(var_19, (arr_5 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1])));
            arr_13 [6] [6] = ((7 ? 0 : (arr_0 [i_0 - 1])));
        }

        /* vectorizable */
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            var_20 += (29 / (arr_0 [i_5 + 1]));
            var_21 = ((-20 ? 251 : 123));
        }
    }
    var_22 = (-123 ? 0 : -40);
    var_23 = (min(var_23, (((((var_6 ? (!var_14) : ((var_3 ? 10 : 2647850409))))) ? (!var_5) : var_15))));
    #pragma endscop
}
