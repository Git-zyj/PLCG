/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (-127 - 1);
    var_18 = ((var_8 / ((var_5 | (((-7716217811555798243 + 9223372036854775807) << (var_5 - 118)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_19 ^= (arr_3 [i_0] [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 6;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_20 ^= ((+(((arr_11 [i_0] [i_1] [i_0] [i_3]) - 18446744073709551612))));
                            var_21 = (((((~(((((arr_9 [i_2]) + 2147483647)) << (7716217811555798253 - 7716217811555798253)))))) ? 4158624627 : (~-9208085572711297510)));
                            var_22 = -15476;
                        }
                    }
                }
            }
        }
    }
    var_23 -= var_12;
    #pragma endscop
}
