/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100820
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
    var_16 = ((/* implicit */unsigned short) ((short) ((((((/* implicit */_Bool) 12396328712747618330ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22568))) : (12396328712747618330ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29681))))));
    var_17 = ((/* implicit */unsigned int) var_2);
    var_18 = ((/* implicit */short) min((((/* implicit */unsigned long long int) 4294967286U)), (6050415360961933286ULL)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        var_19 ^= ((/* implicit */int) max((min((min((12396328712747618330ULL), (((/* implicit */unsigned long long int) arr_1 [i_0])))), (((/* implicit */unsigned long long int) arr_0 [i_0 - 1])))), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
        var_20 += ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((715039294) ^ (((/* implicit */int) (signed char)107))))), (((((_Bool) arr_1 [i_0 + 1])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) | (arr_0 [i_0 - 4]))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)20413)))))));
    }
    for (short i_1 = 2; i_1 < 9; i_1 += 2) 
    {
        arr_4 [i_1] = (-(min((1193841012), (-1193840985))));
        var_21 += ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_3 [i_1 - 2])))) && (((/* implicit */_Bool) min((arr_3 [i_1 - 1]), (arr_3 [i_1 + 1]))))));
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? ((-9223372036854775807LL - 1LL)) : (-3343375440785841140LL))))));
    }
    for (int i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned short) arr_6 [i_2]);
        var_23 ^= ((/* implicit */unsigned char) ((long long int) -4088391076393922858LL));
        arr_9 [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)23802))));
        arr_10 [i_2] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_0 [i_2])) / (var_3)))) ? (((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) var_8)) / (((/* implicit */int) (unsigned short)41619)))))) : (((/* implicit */int) ((short) (-(((/* implicit */int) arr_5 [(signed char)14]))))))));
        arr_11 [i_2] = ((/* implicit */unsigned short) (short)30111);
    }
}
