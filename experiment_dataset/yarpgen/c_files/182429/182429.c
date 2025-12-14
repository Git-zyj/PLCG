/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~(~10434602956016232188)));
    var_16 = 1056141296;
    var_17 = 1718878867;
    var_18 = ((-((-1056141294 ? (min(65535, 8012141117693319428)) : 0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] = (min(19232, -27374));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] = (((max((arr_8 [i_1] [i_1] [i_2 + 2] [i_3] [i_1] [i_1]), -2012448468)) ^ (arr_8 [0] [15] [15] [i_2] [15] [1])));
                            arr_11 [6] [i_1] [i_2] [6] [i_2] [i_1] &= (arr_3 [i_2 - 1] [i_2 + 2] [i_1]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            arr_17 [i_0] [i_0] [i_1] [i_4] [i_1] [i_4] = 3689421394327176182;
                            arr_18 [i_0] [i_1] [i_0] [i_5] = 255;
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = max((~-3689421394327176197), ((((max((arr_4 [i_0] [i_0]), 9697272474118754889))) ? (arr_7 [i_0] [i_0] [13]) : 2561854885325088871)));
                        }
                    }
                }
                arr_20 [i_0] = (((-(arr_7 [i_1] [i_1] [i_1]))));
            }
        }
    }
    #pragma endscop
}
