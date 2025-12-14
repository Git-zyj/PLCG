/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= 1519497226;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = (min(var_18, ((~(max(2775470070, 1948473116))))));
                var_19 = (min(var_19, (3256651685 - 1358469163)));
                arr_5 [4] |= ((-2346494180 ? var_0 : 0));
                var_20 = ((-(~var_6)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    var_21 ^= ((-var_16 != ((((max(var_0, var_8))) ? var_11 : (2775470069 - var_0)))));
                    var_22 |= (min(((120 ? 1986349497 : 2775470069)), (0 <= var_7)));

                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_23 = ((~((-((1 ? 7 : 18))))));
                        var_24 = (((max(1, var_4)) & (!1374752266)));
                    }
                    var_25 = (min(var_25, (((!((149 < ((1519497219 ? 2775470069 : var_10)))))))));
                }
            }
        }
    }
    #pragma endscop
}
