/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105649
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
    var_13 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_0))));
    var_14 = ((/* implicit */_Bool) max(((+((+((-9223372036854775807LL - 1LL)))))), (9223372036854775807LL)));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = (-((-(min((9223372036854775807LL), (((/* implicit */long long int) arr_0 [i_0])))))));
        var_15 += ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (+(arr_1 [i_0])))) && (((/* implicit */_Bool) arr_2 [i_0])))));
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_16 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_8)), (min((arr_1 [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? ((-9223372036854775807LL - 1LL)) : (9223372036854775807LL))))))));
        arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_1]))))) ? (((((((/* implicit */_Bool) arr_0 [i_1])) && (((/* implicit */_Bool) var_5)))) ? (min((((/* implicit */unsigned long long int) arr_4 [i_1] [i_1])), (arr_1 [i_1]))) : (arr_1 [i_1]))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_2 [i_1]) : (arr_2 [i_1])))));
        var_17 = min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (((/* implicit */_Bool) var_6)))) || (((/* implicit */_Bool) arr_1 [i_1]))))), ((+(max((((/* implicit */unsigned long long int) arr_0 [i_1])), (arr_1 [i_1]))))));
        arr_7 [i_1] = ((/* implicit */unsigned int) arr_0 [i_1]);
        arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min(((-9223372036854775807LL - 1LL)), (9223372036854775807LL)))) | (((((/* implicit */unsigned long long int) 9223372036854775807LL)) * (arr_1 [i_1])))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_18 -= ((/* implicit */signed char) ((((/* implicit */long long int) arr_10 [i_2] [i_2])) / ((-9223372036854775807LL - 1LL))));
        arr_13 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((arr_11 [i_2]) + (9223372036854775807LL))) >> (((((/* implicit */int) var_5)) - (59)))))) ? (((arr_9 [i_2]) ? (9223372036854775807LL) : (-9223372036854775785LL))) : ((-9223372036854775807LL - 1LL))));
    }
    for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        arr_16 [13] [(unsigned char)12] = ((/* implicit */int) arr_12 [i_3] [i_3]);
        var_19 = ((/* implicit */_Bool) arr_15 [(signed char)11]);
    }
    var_20 = ((/* implicit */unsigned short) min(((-9223372036854775807LL - 1LL)), ((-9223372036854775807LL - 1LL))));
}
