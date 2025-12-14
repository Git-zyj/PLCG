/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14047
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
    var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_5)) % (((((/* implicit */_Bool) (unsigned char)43)) ? (((/* implicit */int) (unsigned short)62880)) : (-1664279686))))))));
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (min((((/* implicit */long long int) var_5)), (var_6))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) || (((/* implicit */_Bool) ((unsigned char) arr_3 [i_0])))));
        arr_5 [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((unsigned int) arr_0 [i_0])) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
    }
    for (unsigned short i_1 = 2; i_1 < 12; i_1 += 3) 
    {
        arr_8 [6U] &= ((/* implicit */unsigned char) (+(((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [i_1 + 3])), ((unsigned short)65075))))));
        arr_9 [4ULL] &= ((/* implicit */unsigned char) var_6);
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        var_13 += ((/* implicit */unsigned short) (+((~(((/* implicit */int) var_10))))));
        var_14 &= ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) % (arr_11 [i_2]))) << (((((/* implicit */int) var_10)) - (94)))));
    }
}
