/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (~1)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_18 = (!(-815 == -var_10));
                                var_19 = (((((!((!(arr_0 [i_0])))))) != (((!((!(arr_1 [i_2] [i_3]))))))));
                                arr_12 [i_4 + 2] [i_3] [i_2] [i_1] [i_3] [i_0 - 1] = ((((((((arr_2 [i_0] [i_0]) < 255)) || (493089621194600400 >= -2472)))) << (1602623356 < 1)));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] = ((+(((!(((arr_7 [i_1] [i_1] [i_1]) < var_15)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_20 *= (((~-var_2) && ((((56 >= 194) % -var_16)))));
                                var_21 = (min(var_21, (1 && -4096)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
