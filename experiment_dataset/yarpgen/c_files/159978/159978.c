/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += var_12;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_13 [4] [i_0] [10] [10] [i_4] [4] = (min((!65472), (min((855579970326852929 / 174765379), 174765360))));
                                var_17 |= (((855579970326852947 % 174765358) && ((!(!-174765380)))));
                                arr_14 [i_0] = ((127 <= (13652 && 46833)));
                            }
                        }
                    }
                }
                var_18 = 507904;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            arr_21 [i_0] [i_1] [i_0] = (max((min((-931050266 & 524224), (101 ^ 931050265))), ((-96 ^ (-127 - 1)))));
                            var_19 = (max(((!((max(174765382, -1))))), (!-21)));
                            var_20 += 51884;
                            arr_22 [3] [i_1] [i_0] [i_1] [i_1] [i_1] = 135107988821114880;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
