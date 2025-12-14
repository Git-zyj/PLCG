/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_1] = (((((4553469308352198188 - (arr_4 [i_0] [i_1])))) || ((max((~var_9), 980761160192907348)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_12 [i_1] [8] = ((~(arr_1 [5])));
                            var_12 = ((var_2 ? 1984120281 : (((((((~(arr_9 [i_1] [1] [i_1]))) + 2147483647)) << (((arr_4 [i_3] [i_1]) - 80)))))));
                        }
                    }
                }
                arr_13 [i_0] = ((!(((((!(arr_2 [i_0] [i_0]))))))));
            }
        }
    }
    var_13 = (((((~-4669142708148255234) / (~31352)))) ? (((((var_5 ? var_9 : var_5))))) : (min(((min(var_1, (-32767 - 1)))), var_6)));
    var_14 = ((!((max((2147483647 > 1152921504606846976), -var_2)))));
    #pragma endscop
}
