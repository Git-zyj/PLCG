/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104984
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
    var_14 = ((/* implicit */short) var_5);
    var_15 = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) (unsigned short)62600)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (1703658962136043795ULL))) | (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_2)) : (var_10))))), (((/* implicit */unsigned long long int) var_13))));
    /* LoopSeq 4 */
    for (int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        var_16 = ((/* implicit */_Bool) max((var_16), (((((/* implicit */_Bool) min((arr_2 [i_0 + 3]), (((/* implicit */unsigned short) ((unsigned char) (signed char)-115)))))) || (((/* implicit */_Bool) arr_2 [i_0]))))));
        var_17 = ((/* implicit */short) ((unsigned int) (+(((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (unsigned short)9934)) : (((/* implicit */int) arr_1 [i_0] [i_0 + 1])))))));
        var_18 ^= ((/* implicit */unsigned long long int) var_9);
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_19 *= ((/* implicit */short) (unsigned char)78);
        var_20 += ((/* implicit */_Bool) ((((/* implicit */int) ((var_9) != (((/* implicit */int) arr_4 [i_1] [i_1]))))) + (((/* implicit */int) arr_3 [i_1] [i_1]))));
        arr_5 [i_1] |= ((/* implicit */short) arr_0 [i_1] [i_1]);
    }
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned int) -1647886822888042478LL);
        arr_11 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)55716)) == (((/* implicit */int) max((((/* implicit */short) arr_0 [i_2] [i_2])), ((short)-1))))));
        arr_12 [i_2] [i_2] = arr_8 [i_2];
        var_21 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)119)) && (var_6)))) >= (arr_6 [i_2] [i_2]))));
    }
    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        arr_15 [i_3] = ((/* implicit */unsigned char) arr_9 [i_3]);
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -2147041598)) + (16382ULL)))) ? (max((arr_9 [i_3]), (((/* implicit */long long int) 817946307)))) : (((((/* implicit */_Bool) arr_9 [i_3])) ? (arr_9 [i_3]) : (((/* implicit */long long int) -5))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            var_23 = ((/* implicit */short) min((((/* implicit */unsigned int) arr_3 [i_3] [i_4])), (((((/* implicit */_Bool) arr_17 [i_3])) ? (max((((/* implicit */unsigned int) var_6)), (18U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3] [i_3])))))));
            var_24 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-35)), (17223128134474376970ULL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */unsigned long long int) arr_6 [18] [i_4])) : (var_10)))) ? (((unsigned int) 5692829090934637607LL)) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) -8431790347122163032LL)))))) : (arr_18 [i_3]));
        }
    }
    var_25 = ((/* implicit */int) var_13);
}
