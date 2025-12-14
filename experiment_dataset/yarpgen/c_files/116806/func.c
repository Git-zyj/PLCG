/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116806
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
    var_11 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) (!(var_7))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((short) var_10)))));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */short) (+((-(arr_0 [i_0] [i_0 - 1])))));
        var_12 = ((min((((/* implicit */long long int) (_Bool)0)), (max((((/* implicit */long long int) arr_2 [i_0 - 1] [i_0])), (arr_0 [i_0 - 1] [(short)12]))))) >= (((((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) (short)7695))))) ? (min((var_1), (var_8))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)65535))))))));
        arr_4 [i_0] [i_0 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) : (min((((/* implicit */long long int) var_0)), (-1678660463550853825LL)))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */long long int) var_0)) & (arr_0 [i_0 - 2] [i_0 - 2]))), (arr_0 [i_0] [i_0 - 2])))) : (((((/* implicit */_Bool) ((signed char) arr_2 [i_0] [i_0]))) ? (max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0 - 1])), (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(_Bool)1] [i_0 + 1])))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_13 ^= ((/* implicit */short) (-(max((((/* implicit */long long int) arr_2 [i_1 - 1] [i_1 - 1])), (((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (var_1)))))));
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) 2147483647))));
        var_15 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (6414898330261172195ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1)))))) ? (((unsigned long long int) 12031845743448379421ULL)) : (((/* implicit */unsigned long long int) min((arr_0 [i_1] [i_1]), (arr_0 [i_1] [i_1])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-23177)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)768))) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_5 [i_1 - 1]) : (((/* implicit */unsigned long long int) 4166836515864922034LL))))))));
        arr_7 [i_1 - 1] [i_1 - 1] = ((/* implicit */short) ((min((((/* implicit */int) (!((_Bool)1)))), (((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-88)))))) <= (((((/* implicit */_Bool) arr_0 [i_1] [i_1 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65527))))) : (((/* implicit */int) ((((/* implicit */_Bool) 81668718645404779LL)) && (var_7))))))));
    }
}
