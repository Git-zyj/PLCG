/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14726
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((unsigned short) var_9)))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (min((((((/* implicit */_Bool) 0ULL)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))), (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((((((/* implicit */int) arr_0 [i_0] [i_0])) == (((/* implicit */int) (short)24576)))) ? ((+(1251687281U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) min((((((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_0 [i_0] [i_0])) + (148))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) (signed char)-105);
        arr_5 [(short)12] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [i_0]) : (70368744177663LL)))));
        arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-8))) : (-70368744177664LL)))), (((((/* implicit */_Bool) (short)-32745)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24560)))))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_11))));
    }
    /* vectorizable */
    for (signed char i_1 = 3; i_1 < 22; i_1 += 3) 
    {
        arr_10 [i_1] = ((/* implicit */short) (-(arr_7 [i_1])));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 3) 
        {
            arr_13 [i_1] [i_1] = ((/* implicit */short) arr_7 [i_2]);
            arr_14 [i_1 - 1] [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4090298539U))));
        }
        arr_15 [i_1] = ((((/* implicit */long long int) ((/* implicit */int) (short)12302))) - (-70368744177664LL));
    }
    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        arr_18 [i_3] = ((/* implicit */short) (-(((((/* implicit */int) arr_12 [i_3] [i_3] [i_3])) + (((/* implicit */int) arr_12 [i_3] [i_3] [i_3]))))));
        arr_19 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_12 [i_3] [i_3] [i_3])) : (((((/* implicit */int) (short)14497)) * (((/* implicit */int) arr_11 [i_3] [i_3] [i_3]))))));
    }
}
