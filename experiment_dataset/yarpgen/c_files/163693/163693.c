/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((max((~109), ((((!76) % var_4))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_13 = (arr_2 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_14 ^= ((-(((!(((8335027463376797687 ? var_7 : var_3))))))));
                                var_15 *= ((~((-45 ? 4294967295 : 1210503525))));
                            }
                        }
                    }
                }
                var_16 ^= var_0;
            }
        }
    }
    #pragma endscop
}
