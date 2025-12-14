/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 = (181 >= 32767);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_20 = 15;
                                arr_14 [i_0] [i_0] [i_0] [6] [i_0] [i_0] [i_4] = ((14 ? (((((876293690 ? 255 : (arr_3 [i_0] [i_0] [i_0])))) ? 1295984760 : 11)) : (((12 ? 112 : (arr_13 [i_0] [i_1] [i_0]))))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_0] = (arr_10 [i_0] [i_0] [i_1] [i_2 + 1] [i_3] [i_4]);
                            }
                        }
                    }
                    var_21 ^= var_13;
                }
            }
        }
    }
    var_22 = (max(var_22, (((3262632522 ? 3262632522 : 15)))));
    #pragma endscop
}
