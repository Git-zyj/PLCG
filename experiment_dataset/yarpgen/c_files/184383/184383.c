/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_13 = var_1;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_14 = ((!(arr_9 [i_0] [i_2])));
                                var_15 = (((((((max(var_9, (arr_0 [i_3])))) ? 3927158774 : (arr_5 [i_0] [i_1 + 2] [i_2])))) ? -1173993922 : 309596621));
                                var_16 = (min((((!(arr_11 [i_0 - 1] [i_0 - 2] [i_2] [i_0 - 1] [i_4])))), 16256));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (7434322996748618082 >= var_4);
    #pragma endscop
}
