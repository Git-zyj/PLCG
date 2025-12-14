/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_13 = ((-(arr_3 [i_0] [i_1] [i_2])));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_14 = (arr_7 [i_0] [i_3]);
                        arr_10 [i_0] [i_0] [i_2] [i_0] = ((max((min(-11002, var_9)), (arr_7 [i_0] [i_0]))) <= (min((255 < -9132872706663421989), (arr_8 [i_0] [i_1] [i_2] [5] [i_3] [i_3]))));

                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            arr_13 [i_0] = var_4;
                            var_15 = (max(1986359928, var_12));
                            var_16 -= (30738 <= ((min((arr_9 [i_0] [i_1 + 1] [i_1 + 1] [i_1] [i_4 - 1]), (arr_3 [i_0] [i_0] [i_0])))));
                            var_17 ^= (max(((((((var_10 ? var_10 : (arr_0 [i_0])))) != (arr_11 [i_3])))), 116));
                        }
                    }
                    var_18 -= 5871420124043895061;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            {
                arr_20 [1] [1] [i_6] = var_0;
                var_19 |= var_6;
            }
        }
    }
    var_20 = var_7;
    #pragma endscop
}
