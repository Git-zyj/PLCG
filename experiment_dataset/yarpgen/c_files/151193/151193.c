/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_8;
    var_20 = (~65508);
    var_21 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_22 = ((((min(19, -1162801006098809064))) ? 1162801006098809057 : ((-(((arr_6 [i_0]) ? (arr_4 [i_0] [i_0 + 1]) : 3636400015644958580))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_23 ^= min(((-3403005667879816047 / (arr_12 [i_4] [i_2] [i_2] [i_0 + 1]))), ((min((7010246471497037310 || -22), (arr_13 [i_0 - 1] [i_1 + 1] [i_0 - 1] [i_3 - 1] [i_0 - 1])))));
                                var_24 ^= 1;
                                arr_14 [i_4] [i_0] [i_0] = (1338585263 < 0);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {
                var_25 = (arr_10 [6]);
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_26 -= ((+(((175 - -1162801006098809064) ? ((229 & (arr_15 [i_6]))) : (arr_16 [i_5] [i_5])))));
                                var_27 = ((~((-1162801006098809064 ? 1 : (arr_8 [i_7] [i_7] [i_8 - 1])))));
                                var_28 ^= arr_16 [i_5] [i_5];
                                var_29 ^= (min((arr_5 [i_5] [i_7]), (255 >> 1)));
                            }
                        }
                    }
                }
                var_30 += (arr_0 [8]);
                var_31 -= (min((min(-22, ((9223372036854775807 ? 0 : (arr_5 [i_5] [i_6]))))), (((1 || (arr_3 [i_5]))))));
            }
        }
    }
    #pragma endscop
}
