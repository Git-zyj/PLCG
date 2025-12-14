/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126820
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
    /* LoopSeq 2 */
    for (long long int i_0 = 4; i_0 < 8; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned short)8217)) ? (((/* implicit */int) (unsigned short)60532)) : (((/* implicit */int) (short)-26987)))), (((/* implicit */int) (short)26972))));
        var_20 = var_15;
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_2)) | (((min((((/* implicit */long long int) var_13)), (6897173107975937807LL))) * (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (arr_2 [i_0 + 1]) : (((/* implicit */int) (unsigned short)8209)))))))));
    }
    for (int i_1 = 3; i_1 < 14; i_1 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) 11368288164373734797ULL);
        var_22 = ((/* implicit */long long int) max((var_22), (((((((/* implicit */_Bool) arr_4 [i_1] [i_1 - 3])) || (((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1])))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (-1699510384) : (((/* implicit */int) var_6)))), (((/* implicit */int) (unsigned short)8199))))) : (((long long int) 690095420U))))));
    }
    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (((~(((/* implicit */int) var_4)))) == (((/* implicit */int) var_5)))))));
}
