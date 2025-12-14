/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((var_0 ? (max(12581762279304654199, ((((arr_4 [i_0]) & (arr_3 [i_1])))))) : ((-(arr_0 [i_1 + 3])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_18 = var_2;

                            for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                            {
                                arr_16 [i_0] [i_1 + 1] [i_0] [i_3] [i_0] = (arr_9 [i_0] [i_2] [i_0] [8]);
                                arr_17 [2] [i_1 + 2] [i_2] [2] [i_3] [6] [i_0] = (min(4294967295, 5864981794404897418));
                                var_19 = ((12581762279304654199 ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (max(((1 ? 5091491949548697805 : 932581894466292156)), 28))));
                                var_20 -= ((((arr_15 [i_4] [i_3] [i_0] [i_1 + 2] [i_1 + 2] [i_4]) > (arr_15 [i_0] [i_1 - 1] [i_2] [i_3 + 1] [i_3 + 1] [i_4]))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                            {
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_15 [2] [i_3 - 1] [i_1 - 1] [i_3] [i_5] [i_0]) ? (arr_15 [1] [i_3 + 1] [i_1 - 1] [1] [i_5] [i_0]) : (arr_15 [i_0] [i_3 + 1] [i_1 + 3] [i_3 + 1] [i_5] [i_0])));
                                var_21 = (-127 - 1);
                                arr_22 [i_0] = 1;
                                var_22 *= 7;
                            }
                            arr_23 [i_0] [i_0] [i_2] [4] = ((((~((var_10 ^ (arr_8 [i_3] [i_0] [i_0] [i_0]))))) ^ var_17));
                            arr_24 [0] [i_0] [i_0] = var_8;
                        }
                    }
                }
                var_23 ^= (arr_11 [7] [7] [i_0] [i_0]);
            }
        }
    }
    var_24 = (min((5864981794404897404 - var_10), ((((((9193 ? 60021 : 5017744821245420582))) ? -105 : 122)))));
    var_25 &= ((18049 ? (((-5078590419519702337 ? -7430 : -5091491949548697806))) : 0));
    #pragma endscop
}
