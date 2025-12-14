/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125495
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_18)))) ? (var_15) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)218)) ? (1) : (((/* implicit */int) (unsigned char)218))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((arr_2 [i_0]) ? ((((((_Bool)1) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_2 [i_0])))) / (max((arr_0 [i_0]), (((/* implicit */int) arr_1 [i_0])))))) : (((/* implicit */int) var_10))));
        var_21 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)-27002)))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((((/* implicit */int) (short)-19790)) + (((/* implicit */int) var_4)))) & (((/* implicit */int) ((unsigned short) (signed char)-51))))) : (((((/* implicit */_Bool) ((((((/* implicit */int) (short)-17839)) + (2147483647))) << (((2269814212194729984ULL) - (2269814212194729984ULL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (((((/* implicit */int) var_10)) << (((4000983033U) - (4000983029U)))))))));
    }
}
