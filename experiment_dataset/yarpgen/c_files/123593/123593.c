/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = (min(var_19, ((min((min((max(var_0, 255)), var_3)), (max(255, var_0)))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [14] [i_3] |= 1;
                            var_20 = -1;
                            var_21 -= (max(49, (15876 > var_0)));
                            arr_12 [i_3] [i_1] [i_1] [i_0] = 206;
                        }
                    }
                }
                var_22 ^= max((max(194, var_0)), 2);
            }
        }
    }
    var_23 = (min(var_23, (((0 >= ((max(197871590, 26))))))));
    var_24 = (max((max((206 < 237), (max(0, -491724621)))), ((((var_4 < var_14) <= (63625 * var_8))))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        {
                            var_25 = (var_11 & 63073);
                            arr_24 [i_5] [i_5] [i_6 + 1] [i_4] [i_5] [i_5] = 0;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 10;i_9 += 1)
                    {
                        {
                            var_26 = (min((max(var_14, 38025)), var_1));
                            var_27 = var_3;
                        }
                    }
                }
                var_28 = (min(var_28, ((min(-164785254, ((max(1, var_12))))))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        {
                            arr_37 [i_5] = var_8;
                            arr_38 [i_5] [i_5] [i_10] [4] = (min(-164785266, -21415));
                            arr_39 [i_4] [i_5] [0] [0] [i_5] [i_4] = (((((var_17 < (var_15 + 164785230)))) >> (var_17 - 3262112018010510457)));
                        }
                    }
                }
                var_29 = (max(((min(3786341792, 2272516727))), (((min(var_17, var_12)) | ((9268853189201345788 >> (508625478 - 508625417)))))));
            }
        }
    }
    var_30 ^= var_7;
    #pragma endscop
}
