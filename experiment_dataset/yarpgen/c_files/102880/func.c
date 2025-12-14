/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102880
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_2))) != (((max((-5190827151749426594LL), (((/* implicit */long long int) (unsigned short)14731)))) % ((-9223372036854775807LL - 1LL))))));
    /* LoopSeq 4 */
    for (short i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        var_12 -= ((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_3 [i_0])))), ((-(((/* implicit */int) var_6))))));
        var_13 = ((/* implicit */signed char) arr_2 [i_0]);
        arr_4 [i_0 + 1] = ((/* implicit */unsigned short) (-(arr_0 [6ULL] [i_0])));
        var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)84))));
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */short) arr_6 [i_1] [i_1]);
        var_15 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) (short)-11127)) + (2147483647))) >> (((max((((/* implicit */long long int) (unsigned short)65535)), (arr_6 [i_1] [i_1]))) - (3616313330264075483LL)))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */int) (short)29465)) : (((/* implicit */int) (signed char)-114))));
        var_17 = ((/* implicit */unsigned int) ((((_Bool) ((((/* implicit */int) arr_5 [i_1])) <= (((/* implicit */int) (signed char)115))))) ? (arr_6 [i_1] [i_1]) : ((-(arr_6 [i_1] [i_1])))));
    }
    for (short i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((-8294126338332235258LL), (((/* implicit */long long int) (unsigned short)4564))))) != (((((/* implicit */_Bool) var_4)) ? (max((arr_8 [i_2] [i_2]), (((/* implicit */unsigned long long int) (signed char)-119)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
        arr_10 [i_2] = ((/* implicit */_Bool) 1203014645);
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_3] [i_3])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)117))))))))));
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_3])) / (((/* implicit */int) arr_12 [i_3])))))));
    }
}
