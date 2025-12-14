/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((max(var_7, 38857))) | ((var_4 ? (arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (arr_2 [i_0] [i_0] [i_0 - 1])))));
                var_14 = ((((((arr_2 [i_0] [i_0] [i_1]) ? (arr_2 [i_0] [i_1] [i_1]) : 1))) ? ((((22952 >= ((var_2 ? 16303701543396792326 : 65535)))))) : (arr_1 [i_0 - 1])));
                var_15 = (min((max((((arr_2 [i_0] [i_1] [i_0]) ? 0 : -3773062409465643982)), -1)), ((min(((((arr_0 [i_0]) >= 1))), (arr_2 [i_1] [i_0] [i_0]))))));
                var_16 |= (arr_0 [i_1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_17 += (((((-64 ? (min(38858, 15093864354736683298)) : 1))) ? (((arr_8 [8]) ? ((299796606949537378 ? 107 : var_4)) : (arr_7 [18] [2] [i_3]))) : var_7));
                var_18 *= ((((max((arr_5 [10]), var_5))) ? var_3 : (((1 | var_1) ? (arr_7 [8] [8] [8]) : (arr_8 [8])))));
            }
        }
    }
    var_19 ^= ((((((var_9 ? 0 : var_6)) | var_6)) >= var_5));
    #pragma endscop
}
