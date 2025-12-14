/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123020
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
    var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) -1667851413)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-51))) ^ (1107638852011367292ULL))) : (((/* implicit */unsigned long long int) (~(-2064293558))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 2) /* same iter space */
    {
        var_20 ^= ((/* implicit */unsigned int) arr_0 [i_0]);
        arr_3 [i_0 - 2] [(unsigned char)10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) arr_1 [i_0]))));
    }
    for (long long int i_1 = 2; i_1 < 21; i_1 += 2) /* same iter space */
    {
        var_21 ^= ((/* implicit */unsigned char) ((arr_4 [15U]) > (((/* implicit */long long int) (-(((2576858458U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)122))))))))));
        arr_8 [i_1] [14ULL] = (-(((/* implicit */int) arr_5 [i_1])));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_2 = 1; i_2 < 12; i_2 += 2) 
    {
        var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2 + 1])) ? (((((/* implicit */_Bool) arr_11 [(unsigned short)12])) ? (((/* implicit */int) arr_7 [i_2] [i_2 - 1])) : (arr_0 [i_2]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [1])) || (((/* implicit */_Bool) arr_6 [i_2])))))));
        var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2]))) : (arr_4 [i_2])))) ? (((/* implicit */int) ((((/* implicit */long long int) arr_11 [(signed char)6])) == (arr_4 [i_2])))) : ((-(((/* implicit */int) arr_10 [(short)0]))))));
    }
}
