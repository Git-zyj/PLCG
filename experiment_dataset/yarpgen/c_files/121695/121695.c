/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_14 *= var_1;
                var_15 *= (var_11 ? ((-73 ? 1080863910568919040 : 123)) : (arr_2 [6]));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                var_16 ^= (!var_0);

                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    arr_14 [i_2] [1] [1] = var_4;
                    var_17 = ((-((1 | (~var_8)))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    arr_19 [i_3] = 1080863910568919040;
                    arr_20 [i_2] [i_2] [i_2] [i_5] = (arr_13 [i_2 - 2]);
                }

                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_18 = (min(var_18, ((min(((min((var_2 % var_2), (arr_28 [i_8] [i_2] [i_7] [i_6] [i_3] [i_2] [i_2])))), (min((max(-1047562620011768705, (arr_5 [i_6]))), 24249)))))));
                                var_19 -= (max((((-24249 ? 24246 : 2740605403322899374))), ((((((var_2 ? 961304512 : 12))) ? (~-272718494) : ((-1047562620011768705 ? (arr_3 [i_8] [i_8]) : (arr_13 [i_2]))))))));
                            }
                        }
                    }
                    var_20 |= 24240;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 1; i_9 < 13;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 16;i_11 += 1)
            {
                {
                    var_21 = (min(var_21, (((!(((var_8 | (arr_1 [8] [i_10])))))))));
                    arr_38 [i_9] [i_10] [7] [i_9] = ((164 ? var_8 : (arr_33 [i_11 - 1])));
                }
            }
        }
    }
    #pragma endscop
}
