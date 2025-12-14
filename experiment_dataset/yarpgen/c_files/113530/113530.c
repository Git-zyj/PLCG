/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 2180;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 7;i_2 += 1)
                {
                    var_20 = (((arr_1 [i_0 + 1]) % var_6));
                    arr_8 [i_0] = 17245;
                    var_21 = (((((~(arr_6 [i_0])))) ^ (arr_1 [i_0 + 1])));
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    var_22 = (arr_0 [i_0 - 1] [i_0 + 1]);
                    arr_11 [1] [1] [i_0] = (arr_1 [i_0 + 1]);
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_23 = (((arr_10 [i_0] [i_0 - 1] [i_0] [i_0]) - (arr_10 [i_0] [i_0 + 1] [4] [i_0])));
                            arr_16 [i_0] = (arr_3 [i_0 + 1]);
                            var_24 -= 25448;
                        }
                    }
                }
                var_25 = ((!((!(arr_3 [i_0 - 1])))));
            }
        }
    }
    #pragma endscop
}
