/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((var_4 ? 3641682488 : (((max(var_6, 19992))))))) ? 18995 : 653284808);
    var_13 = ((3641682495 ? (max(35150012350464, ((min(var_8, 725444347))))) : ((((((35150012350469 ? -1 : 653284808))) ? var_6 : ((1 ? var_11 : 46648)))))));
    var_14 = 653284808;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (arr_0 [i_0] [i_0]);
                arr_4 [i_0] = (-2147483647 - 1);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] = 1;

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_10 [i_0] = 4445483286713765521;
                        var_16 = var_11;
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        arr_13 [i_0] [i_1] [i_0] = ((35150012350487 ? (arr_9 [i_1] [i_0]) : var_7));
                        arr_14 [i_0] [i_0] [i_2] [i_4] = (((((-32746 ? 8176 : 1807222208))) ? 6409173267403168198 : 15));
                    }
                    arr_15 [i_0] [i_0] = var_0;
                    var_17 ^= 12037570806306383425;
                }
                for (int i_5 = 2; i_5 < 21;i_5 += 1) /* same iter space */
                {
                    arr_18 [i_0] [i_1] [i_0] = 45569;
                    var_18 += (max((arr_6 [i_5 - 1] [i_1] [i_1] [i_1]), (((arr_11 [i_0] [i_0] [4] [i_0] [i_0] [i_0]) ? 0 : ((1 ? var_10 : 4294967295))))));
                }
                for (int i_6 = 2; i_6 < 21;i_6 += 1) /* same iter space */
                {
                    arr_21 [i_0] = var_11;
                    arr_22 [i_0] [12] [i_6] [i_0] = 19045;
                    var_19 = 3641682488;
                }
                for (int i_7 = 1; i_7 < 23;i_7 += 1)
                {

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        var_20 = (min(var_20, (((-1195984737620467765 ? var_10 : 159)))));
                        arr_28 [i_0] [3] [i_7] [i_1] [11] [i_0] = (var_8 ? (((arr_8 [i_0] [i_7] [i_1] [i_1] [i_0] [i_0]) ? 23 : -789500918)) : 65535);
                        var_21 = 44612;
                        arr_29 [i_0] [2] [i_1] [i_0] [i_8] = ((24 ? 186864727 : (arr_19 [i_1] [i_7 - 1] [i_7])));
                    }
                    var_22 ^= 2147483637;
                }
                var_23 = (max(var_23, (((0 ? (max((min(var_5, 6)), 240)) : var_6)))));
            }
        }
    }
    #pragma endscop
}
