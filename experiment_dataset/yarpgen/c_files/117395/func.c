/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117395
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
    var_18 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) >> (((/* implicit */int) ((((/* implicit */_Bool) max((2147483647), (1881793841)))) || (((/* implicit */_Bool) var_7)))))));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) max((arr_1 [6U]), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1])))))));
        var_19 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)162))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_1])) && (((/* implicit */_Bool) -1033853450009423428LL)))) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) < (((((/* implicit */_Bool) ((long long int) arr_4 [12LL] [22U]))) ? (((/* implicit */unsigned long long int) ((1881793847) | (((/* implicit */int) var_17))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) * (arr_4 [15U] [17ULL])))))));
        var_20 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) || (((/* implicit */_Bool) arr_3 [21U])))))) != (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8))) : (var_8))))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4691661314785894666LL)) ? (33845500) : (-1881793851)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14217))) * (arr_4 [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))))));
    }
    for (int i_2 = 1; i_2 < 16; i_2 += 4) 
    {
        var_21 |= ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((((/* implicit */int) (unsigned short)60386)) >= (((/* implicit */int) (unsigned char)0))))))), (((arr_4 [i_2 + 2] [i_2 - 1]) ^ (arr_4 [i_2 - 1] [i_2 + 2])))));
        var_22 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) -1881793852)) && ((!(((/* implicit */_Bool) (unsigned char)119))))))) >= (2147483647)));
        var_23 = ((/* implicit */unsigned char) (((-(8914559758714738910ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)65530))))));
        var_24 = ((/* implicit */short) ((unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8))) <= (var_1)))), (max((arr_9 [i_2] [i_2]), (((/* implicit */unsigned long long int) (_Bool)1)))))));
    }
}
