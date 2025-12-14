/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = (arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_3] [i_4]);
                                var_18 *= ((8213543792133187566 ? (8213543792133187565 / 17461267101331890671) : (arr_11 [i_0 - 2] [i_0 - 2])));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_19 = (((max((((var_1 / (arr_10 [i_0] [i_5] [10] [i_7] [10] [i_6])))), var_8))) ? ((((1079238901464511456 && (!1))))) : (((~985476972377660943) ? (arr_21 [i_0] [i_0] [i_0] [i_7 - 1] [i_7 + 1]) : ((-(arr_20 [i_0] [i_1] [i_6] [i_7]))))));
                                var_20 = (arr_5 [i_0] [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                }
                var_21 &= 3712591821946103819;
                var_22 *= ((5561787713694227482 / ((1 ? 4301402880408199748 : -8213543792133187566))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 4; i_8 < 14;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                {
                    var_23 = arr_25 [i_9 - 1] [i_8];
                    var_24 &= var_12;
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 15;i_12 += 1)
                        {
                            {
                                arr_33 [11] [i_9 - 2] [i_10] [i_11] [i_8] = (((((8213543792133187565 > (985476972377660959 | 0)))) == (!var_2)));
                                arr_34 [i_8] = ((((max(22574, 1009612407839135958))) >= (((~33034) | (min(var_0, -19863))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
