/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((((arr_3 [i_1] [i_1 + 1]) ? 3765297421 : (arr_0 [i_1 + 1]))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [4] [i_1] [2] [i_1] [i_1] [i_1] [2] = (((((255 ? -2147483636 : (arr_9 [i_1 + 1] [i_2] [8] [i_2] [i_3 + 3] [i_3 + 2])))) == 3765297396));
                                var_10 ^= (((arr_11 [i_0] [i_1] [i_2] [i_2] [i_2]) ? (5887519207442789046 + 1) : ((((arr_8 [i_1 - 1] [i_0]) ? 529669880 : 252294482)))));
                                var_11 = (1 % 968827930);
                            }
                        }
                    }
                }
                arr_14 [i_1] = (6427042709838822735 * (((min((max(0, 7213)), 255)))));
                var_12 &= ((((arr_4 [i_1 - 1]) ? 422530917 : 2032)));
            }
        }
    }
    var_13 = -125;
    var_14 = ((-((-((0 ? 65510 : 1644368133))))));
    #pragma endscop
}
