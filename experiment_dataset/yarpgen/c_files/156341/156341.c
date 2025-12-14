/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((max(2398415389762462873, (403545547932689645 * 357800435254851711)))) ? var_3 : -403545547932689653));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_13 = var_11;
                            arr_11 [5] [i_1] [5] [i_2] [i_3] = ((((max((((arr_9 [i_1] [i_1 - 1] [i_1 - 1] [i_3]) ^ -2992355452660648022)), 58033))) | (max(2398415389762462849, -2992355452660648039))));
                        }
                    }
                }
                var_14 = (((arr_2 [i_1 - 1] [i_1 - 1] [i_1]) ^ var_3));
            }
        }
    }
    var_15 = var_0;
    var_16 = var_3;
    #pragma endscop
}
