/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = (arr_1 [i_1]);
                var_14 &= ((0 ? 12035 : 53501));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_9 [i_1] [i_2] [i_2] [i_1] [i_1] = var_8;
                            arr_10 [i_1] = ((53493 << (7101512122547411014 - 7101512122547411004)));
                            var_15 = (max(((12035 ? ((94 ? 53493 : 10007979640219174169)) : (arr_3 [14] [8] [i_2]))), 70368744177663));
                            arr_11 [i_1] [i_1] = (max((((!(arr_7 [i_3] [i_3] [i_3 - 1] [i_3 - 1])))), ((-2068783509 ? 0 : 32751))));
                            arr_12 [i_1] [1] [i_2] [i_2] = ((-(!12035)));
                        }
                    }
                }
            }
        }
    }
    var_16 |= (min((((-32 || (-32767 - 1)))), (((((var_4 ? var_4 : var_8))) ? 1 : var_10))));
    var_17 &= 8438764433490377467;
    #pragma endscop
}
