/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((~((1144624176 ? 30 : 1144624176)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_17 ^= max(var_5, var_2);
                arr_8 [i_1] = -1083497577;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 14;i_4 += 1)
            {
                {
                    var_18 += var_3;
                    var_19 = ((-1144624176 ? ((var_0 ? var_14 : (var_14 + var_12))) : 1144624181));
                    arr_19 [i_3] [i_3 - 1] [i_3] = (max(((((arr_15 [i_2] [i_4 - 4] [i_2]) && 26407))), ((var_9 ? (arr_15 [i_2] [i_4 - 1] [i_3]) : (arr_15 [i_2 - 3] [i_4 + 1] [i_2 - 3])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            {
                var_20 = (min(var_20, (((var_10 ? (!var_3) : ((var_5 ? (!var_15) : ((-4 ? var_8 : (arr_13 [6] [i_5]))))))))));
                var_21 = ((7148809222877382840 ? 78 : 56444));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_22 = min((arr_7 [i_6] [i_6] [i_9]), (var_7 <= var_3));
                                var_23 = ((((((arr_7 [i_5] [i_8 + 1] [i_6 + 1]) ? (arr_7 [i_5] [i_8 - 1] [i_6 + 1]) : var_14))) ? (((~(arr_7 [i_6] [i_8 + 1] [i_6 + 1])))) : (((arr_7 [14] [i_8 + 2] [i_6 + 1]) ? 7148809222877382840 : 2097152))));
                                var_24 ^= (((((min(4755559146577289469, 4755559146577289469) >= ((var_5 ? 18018955069950227196 : 34)))))));
                                arr_33 [8] [8] [8] [i_7] = -var_9;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
