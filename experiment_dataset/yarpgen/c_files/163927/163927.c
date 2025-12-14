/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;
    var_17 = ((-((~(!-2003820192)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_18 = 55;
                            arr_11 [i_0] [i_0] = (max((((((2003820191 ? 2003820192 : 1)) >= 2003820192))), (min(((2003820191 ? 55 : 2003820199)), (!1)))));
                            var_19 = -55;
                        }
                    }
                }
                var_20 |= (((~((max(-50, 31214))))) / (~-2003820192));
            }
        }
    }
    var_21 = ((~(((241 ? -56 : -56)))));
    var_22 = 1;
    #pragma endscop
}
