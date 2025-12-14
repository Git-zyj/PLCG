/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_12 = (min(var_12, (((((max(19169, 31))) ? (((((max(var_4, var_10))) >= ((max(-37, 46385)))))) : (((((-8561220040762443454 ? 38 : -32))) ? (arr_2 [i_1 + 1] [i_1 + 1] [i_1 + 1]) : (max(894955753, var_10)))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_13 ^= 46367;
                                arr_11 [i_4] = ((((((((arr_9 [i_4]) / var_8)) + ((max((arr_2 [i_0] [6] [i_0]), 5748)))))) || ((max((-22 / 574395452), var_8)))));
                            }
                        }
                    }
                }
                var_14 = -43623407;
            }
        }
    }
    var_15 = (((max(((var_8 ? var_6 : -574395465)), (var_11 / -894955753))) != ((var_6 >> (var_6 - 6191186991713273713)))));
    #pragma endscop
}
