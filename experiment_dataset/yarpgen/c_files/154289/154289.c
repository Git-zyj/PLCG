/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= ((70394028 <= (((((1 - 1372396742911630737) >= (-199776320 - 1)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] = 0;
                                var_16 = 70394028;
                            }
                        }
                    }
                    var_17 += (70394028 - 1);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [i_2] = 1;
                                arr_19 [i_0] [i_1] [15] [i_5] [i_2] [i_0] [i_0] = 26394;
                                var_18 = ((((108 && (0 && 543348574043837788))) || (1 && -1995079934)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (min(var_19, 168197140));
    var_20 = (((8294179217069900832 / 1979517949197310137) * (((1 / -173805016) / 8294179217069900832))));
    #pragma endscop
}
