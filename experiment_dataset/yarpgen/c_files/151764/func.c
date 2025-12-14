/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151764
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
    var_16 = ((/* implicit */unsigned long long int) var_12);
    var_17 = ((/* implicit */unsigned short) 5664465596265799406ULL);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            var_18 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_5 [i_0] [i_1 + 1]) : (arr_5 [i_1 + 1] [i_0])))) == (((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (arr_1 [i_1 - 1]) : (((/* implicit */unsigned long long int) arr_5 [i_1 + 1] [i_0]))))));
            arr_6 [i_1] = ((/* implicit */short) (unsigned short)65535);
        }
        arr_7 [i_0] = ((/* implicit */long long int) (unsigned short)62663);
    }
    for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned short) (-(max((arr_0 [i_2]), (((/* implicit */unsigned long long int) (unsigned char)253))))));
        var_19 = ((/* implicit */long long int) (unsigned short)65535);
        arr_11 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2]))) | (((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32758))) : (arr_0 [8ULL])))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)65529)) != (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2]))) < (arr_3 [i_2] [i_2]))))))) : (((/* implicit */int) ((((((/* implicit */int) arr_2 [i_2])) >> (((var_6) - (4379396750020495363LL))))) > (((/* implicit */int) arr_2 [i_2])))))));
    }
}
