/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_11 = (((0 & -7333172867874504481) ? ((((((6157741991317730739 ? 0 : (arr_4 [i_1])))) ? 12 : 226))) : (max(-6157741991317730760, ((((arr_6 [i_0] [i_0] [i_0]) - var_8)))))));
                var_12 = (min(var_12, ((((arr_6 [i_0] [i_0] [i_1]) ? (((((((arr_2 [8]) ? (arr_4 [i_1]) : (arr_3 [i_0] [8] [16]))) == (((var_8 ? (arr_0 [i_0] [i_1]) : var_7))))))) : ((var_5 ? 0 : (((arr_4 [16]) ? -7333172867874504489 : (arr_5 [i_0] [9]))))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                var_13 += (((((-1910699254 ? var_4 : (-9223372036854775807 - 1))) <= 1910699252)) ? ((2021177717570411784 ? 0 : (((arr_1 [i_3]) ? (arr_8 [i_3]) : (arr_6 [i_2] [i_2] [i_3]))))) : (((var_4 < var_4) ? var_5 : (arr_5 [i_2] [i_3]))));
                var_14 = (((arr_2 [i_3]) - ((var_6 - (arr_7 [i_2] [i_3])))));
            }
        }
    }
    #pragma endscop
}
