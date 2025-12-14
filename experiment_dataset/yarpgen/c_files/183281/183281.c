/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((!(((var_10 ? var_14 : 0)))))) / ((-((min(var_2, 64)))))));
    var_16 = (min(var_16, var_8));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, (((((-1 ? (889 & 41923040) : 36503)) + 29032)))));
                                arr_13 [i_0 - 1] [i_1] [i_2] [i_3] [i_4] = (((((var_13 == (382075132 / var_13)))) == (((!(-1335364857 || 1023))))));
                                var_18 = 1;
                            }
                        }
                    }
                    var_19 &= var_2;
                }
            }
        }
    }
    #pragma endscop
}
