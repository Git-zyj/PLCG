/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            var_12 = ((-((max((arr_3 [i_0] [i_1]), (arr_3 [i_0] [i_0]))))));
            var_13 ^= (min(var_2, ((max((arr_4 [i_1 - 1] [0]), var_9)))));
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_10 [i_0] [i_2] [i_2] = (~var_9);
            arr_11 [i_0] = (arr_4 [i_0] [i_0]);
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 14;i_5 += 1)
                {
                    {

                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            var_14 = (max(var_14, (((~(((-1567607885 >= (((((arr_17 [4] [i_5 - 1] [i_4] [i_0]) >= var_5))))))))))));
                            arr_24 [i_6] [i_0] [i_4 - 1] [i_0] [i_0] = (i_0 % 2 == zero) ? (((((((var_2 ? (arr_22 [i_0] [i_3] [i_0] [i_5] [i_6]) : 862583775)))) ? ((var_8 << (((arr_23 [i_0] [i_0] [i_4 + 1] [i_5] [i_6 + 3] [i_6 + 1]) - 11995)))) : ((((((var_8 ? 862583769 : 862583775))) || var_4)))))) : (((((((var_2 ? (arr_22 [i_0] [i_3] [i_0] [i_5] [i_6]) : 862583775)))) ? ((var_8 << (((((arr_23 [i_0] [i_0] [i_4 + 1] [i_5] [i_6 + 3] [i_6 + 1]) - 11995)) - 26599)))) : ((((((var_8 ? 862583769 : 862583775))) || var_4))))));
                        }
                        arr_25 [i_4] [i_0] [i_4] [i_0] [i_0] [i_3] = (min(((((min(var_9, var_6)) * var_2))), ((var_0 ? (arr_15 [i_3] [i_4 - 2] [i_5 - 2] [i_5]) : (((min(var_4, var_3))))))));
                    }
                }
            }

            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                var_15 += var_6;
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        {
                            var_16 = 8733977197777021707;
                            var_17 ^= (min(((var_7 << (((var_5 + 1957574369) - 19)))), (arr_1 [6])));
                        }
                    }
                }
            }
        }
        arr_32 [i_0] = var_9;
    }
    var_18 = ((-((((min(var_3, var_1))) ? ((var_10 ? 862583775 : var_5)) : -102))));
    #pragma endscop
}
