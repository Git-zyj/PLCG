/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152418
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) != (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_0]) : (var_9)))));
        arr_5 [21] = ((/* implicit */short) (+(arr_0 [i_0])));
        arr_6 [i_0] [i_0] = ((/* implicit */short) arr_1 [i_0]);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_15 = arr_1 [i_1];
        arr_9 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_0 [(short)16]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((unsigned long long int) arr_8 [i_1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1])))));
        var_16 = ((/* implicit */short) arr_8 [i_1]);
        arr_10 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)3245)) ? (12389447706886015969ULL) : (523776ULL))) * (arr_2 [i_1])));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        arr_13 [i_2] = arr_3 [i_2];
        var_17 = ((((/* implicit */int) var_5)) + (((/* implicit */int) arr_12 [i_2] [i_2])));
        var_18 = ((/* implicit */signed char) arr_12 [i_2] [i_2]);
        /* LoopSeq 2 */
        for (signed char i_3 = 0; i_3 < 11; i_3 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)62310)) || (((/* implicit */_Bool) arr_16 [i_3]))));
            arr_17 [i_2] = ((/* implicit */short) ((arr_15 [i_3] [i_2]) % (arr_15 [i_2] [i_2])));
            var_20 = ((/* implicit */unsigned int) ((int) ((628247202U) >= (arr_0 [i_2]))));
        }
        for (signed char i_4 = 0; i_4 < 11; i_4 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_2] [i_4])) ? (((/* implicit */int) arr_20 [0] [(signed char)0] [6])) : (((/* implicit */int) arr_3 [i_4]))));
            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_2] [i_4])) ? (arr_19 [i_2] [i_4]) : (arr_19 [i_2] [i_4])));
            arr_21 [1ULL] [i_2] [i_2] = ((/* implicit */unsigned short) arr_7 [i_2] [i_4]);
        }
        var_23 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_2]))) - (arr_0 [i_2])));
    }
    var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))));
    var_25 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)62291))))) % ((+(((/* implicit */int) var_13))))));
}
