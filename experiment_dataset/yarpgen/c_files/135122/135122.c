/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((((min(var_3, var_8))) ? ((var_5 ? -239643165 : 17382)) : ((max(var_7, -17389)))))) ? (((((max(var_5, 101))) ? ((var_6 ? var_1 : var_0)) : (((var_8 ? var_11 : var_11)))))) : (max(((max(var_9, var_11))), ((var_3 ? 29253 : -3695014615654399693))))));
    var_13 = (min((max(((6158 ? var_4 : -8394458213926016033)), (((var_7 ? 8025 : -30775))))), (min(((var_0 ? 35381 : 3906661167010536317)), (((-1344268830 ? var_3 : 16128)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [2] = ((((((((var_9 ? 1 : var_8))) ? (min(var_10, (arr_1 [i_2] [i_1]))) : (((var_6 ? 1 : (arr_5 [4] [i_1] [i_0]))))))) ? (max(((var_2 ? (arr_3 [i_1]) : -3890433100344524970)), ((max(var_3, (arr_1 [i_0 + 2] [i_0])))))) : ((max((max((arr_5 [i_0] [i_1] [i_2]), var_4)), ((1105 ? 252 : var_7)))))));
                    arr_10 [i_0] [i_1] [i_1] [i_2] = (((min((max((arr_5 [i_2] [i_0] [i_0]), (arr_7 [i_0] [i_0] [i_0]))), (min((arr_7 [i_0 + 2] [i_0] [i_0]), (arr_2 [i_0])))))) ? (min(((var_6 ? (arr_4 [i_2]) : -6463727152112562219)), (((var_10 ? var_0 : (arr_3 [i_2])))))) : ((max((min((arr_6 [i_0] [9] [i_0 + 1] [i_0]), (arr_7 [i_0 + 2] [i_1] [i_2]))), ((var_5 ? (arr_8 [i_0] [i_0] [i_0] [i_1]) : (arr_6 [i_0] [i_0] [i_1 - 4] [i_1 - 4])))))));
                    var_14 = max((max((min(var_0, (arr_1 [i_2] [i_0]))), ((min(25, (arr_0 [i_1])))))), ((((((var_4 ? var_6 : var_10))) ? ((min(var_8, 3938))) : ((max(var_7, 512)))))));
                }
            }
        }
    }
    #pragma endscop
}
