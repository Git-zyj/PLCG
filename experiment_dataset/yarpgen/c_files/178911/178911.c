/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_10 = var_2;
                            var_11 = (-((-(arr_11 [i_0] [i_0] [i_2 - 2] [i_3 + 1]))));
                        }
                    }
                }
                var_12 = ((((((var_4 + 2147483647) >> (var_5 + 122)))) & 2170632461));
                var_13 ^= (((max((arr_7 [i_1] [i_1] [17] [i_1]), (2170632461 | -1847457210))) != ((min((arr_0 [i_0] [i_1]), (min(var_6, (arr_2 [i_0] [1]))))))));
                var_14 = ((((-2124334829 % (min(2124334831, var_3))))) ? (min((arr_10 [i_0] [i_1]), ((-(arr_0 [i_0] [13]))))) : 2147483647);
            }
        }
    }
    var_15 = (min(var_15, (max((min(-1, ((255 ? -2147483647 : var_5)))), -var_7))));
    #pragma endscop
}
