/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_10 *= ((0 % 50746) ? (((805306368 - (arr_2 [i_0 - 2])))) : 283709287841473820);
                    arr_8 [i_2] = 38;
                    var_11 *= ((-(arr_2 [i_0 - 2])));
                    var_12 = (max(var_12, (((var_3 ? 643360892 : 1260268259)))));

                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_13 = (max(var_13, ((max((min(var_7, (((arr_3 [i_3 - 2] [i_1]) ? 15557248616543280573 : 18163034785868077795)))), (((max(0, 68)) ^ ((18446744073709551592 ? var_9 : 18163034785868077795)))))))));
                            var_14 = (arr_4 [i_3]);
                            var_15 -= (((63 ? (-7394 / 192) : 50746)));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_17 [i_0] [i_2] [i_2] [i_3] [i_2] [i_5] = 13941;
                            var_16 = ((-((7393 ? 25158 : 94))));
                        }
                        var_17 -= 323443553;
                    }
                }
            }
        }
    }
    var_18 = ((var_2 ? ((var_3 - (var_9 * 23))) : (((((var_5 | 805306374) && var_7))))));
    #pragma endscop
}
