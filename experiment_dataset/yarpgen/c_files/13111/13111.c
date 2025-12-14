/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (9223372036854775799 ? 3355362456 : (max(-var_6, (var_7 >= 939604839))));
    var_11 = (max(((max(939604845, 2814605656)), var_0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_12 = (min(var_12, var_7));
                var_13 ^= var_7;
                arr_7 [i_0] [i_0] = ((((min((arr_3 [i_0]), (arr_3 [i_0])))) ? var_8 : ((((((-6377310360863978403 ? var_4 : 939604840))) ? var_4 : (((var_0 ? -41 : var_9))))))));
                var_14 = ((((max((!var_8), 1480361668))) ? (--1073741823) : ((min(var_7, (~939604840))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_2] [i_4 - 2] = (arr_4 [i_3] [i_0]);
                                var_15 = arr_9 [i_3] [i_3] [i_1] [i_1];
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (((((-((var_0 ? 127 : var_7))))) ? (var_7 & 3397541621) : (!var_5)));
    #pragma endscop
}
