/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_12 = (max(var_12, ((min((arr_2 [16] [17] [i_3]), (arr_7 [14] [12] [i_2] [i_2] [i_3]))))));
                            var_13 = 761309434;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_16 [i_1] [i_6] = (!0);
                                arr_17 [i_0] [i_6] [i_0] = max(-2275188344490495420, (((arr_5 [i_0] [i_6] [i_5] [i_5]) ? 2911341234087283658 : (arr_5 [i_1] [i_4] [i_5] [3]))));
                                arr_18 [i_0] [i_1] [i_6] [i_0] = (arr_5 [i_1] [i_1] [i_1] [i_6]);
                                arr_19 [i_6] [16] [16] [i_5] = (arr_3 [i_1] [i_1] [i_6]);
                                var_14 = -1189019447;
                            }
                        }
                    }
                }
                arr_20 [i_1 - 1] [0] [0] = (min((min(1786758731, 99)), var_11));
            }
        }
    }
    var_15 = var_2;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            {
                arr_26 [i_8] [19] = ((!(arr_15 [i_7] [1] [i_8] [i_8] [i_8])));
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_16 = ((min((arr_10 [i_7] [i_8] [i_10 + 1]), var_9)));
                                var_17 = (min(var_17, var_7));
                            }
                        }
                    }
                }
                var_18 = (min(3179516517, (max((arr_13 [1] [i_8] [i_8] [i_7] [i_7] [i_8] [i_7]), 3324397008703950676))));
                var_19 = arr_23 [i_7] [i_8];
                var_20 ^= (min(-451944324, var_11));
            }
        }
    }
    var_21 = -15;
    #pragma endscop
}
