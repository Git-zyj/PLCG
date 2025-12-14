/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_11;
    var_15 = 0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = ((((((var_12 ^ var_2) >= (!var_4)))) & 1));
                arr_6 [i_1] = var_1;
                arr_7 [i_0] [i_0] |= (!(arr_2 [i_0] [i_0]));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_17 = ((6559848562460256258 >= ((max(0, 0)))));
                                var_18 = (max(var_18, ((min((max(18446744073709551615, 1)), ((min(1, 72))))))));
                            }
                        }
                    }
                    var_19 = max(2146435072, ((~(min(-536100083, 1)))));
                }
            }
        }
    }
    var_20 = var_13;
    #pragma endscop
}
