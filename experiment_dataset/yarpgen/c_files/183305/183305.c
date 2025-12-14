/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = (min(var_15, (((arr_0 [9] [1]) ? (((~((10 ? (arr_3 [i_1]) : var_7))))) : (min((arr_0 [i_0] [1]), ((var_4 ? (arr_0 [i_1] [i_1]) : 33554431))))))));
                var_16 = (((-31077 ? (min((arr_0 [i_0] [i_1]), (arr_3 [7]))) : (~255))) % ((((((arr_2 [i_0] [i_1]) || 52)) ? 9 : (arr_1 [5])))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_17 = (((!245) ^ (((((arr_5 [i_1] [1] [i_1] [i_1]) | 7))))));
                    var_18 *= ((((((var_9 & var_10) ? var_3 : (((arr_2 [i_0] [i_0]) & (arr_0 [i_1] [0])))))) ? ((~(arr_0 [i_1] [i_0]))) : (arr_3 [i_2])));
                    var_19 = ((((((var_13 ^ (arr_0 [i_0] [i_2]))) ^ ((((arr_1 [i_2]) ? 16383 : (arr_0 [i_2] [i_1])))))) & (((arr_3 [i_0]) & 52))));
                }
                var_20 = ((~(((-11074 ? (arr_0 [10] [i_0]) : (arr_3 [i_1]))))));
            }
        }
    }
    var_21 = (((var_1 >= -var_0) ? (min(((49172 ? 16393 : var_12)), (1 <= 16369))) : ((((((var_9 ? 248 : var_9))) && 9424976804684222935)))));
    #pragma endscop
}
