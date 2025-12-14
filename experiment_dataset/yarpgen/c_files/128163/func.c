/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128163
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
    var_10 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) max((1746708125U), (((/* implicit */unsigned int) (signed char)51))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (min((var_6), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) >> (((var_2) - (3185384662U))))))))));
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */unsigned short) (short)(-32767 - 1))), ((unsigned short)49404)))), ((~(((/* implicit */int) var_4))))))) ? (((/* implicit */int) ((_Bool) -1773698478))) : ((((-(1773698469))) / ((+(-1773698478)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) -8786803941467445945LL)) ? (911284412131312976LL) : (281988850377450338LL))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)39)))))));
        arr_4 [i_0] = ((/* implicit */_Bool) var_4);
        var_12 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) var_5)) || (((((/* implicit */unsigned long long int) arr_2 [i_0])) == (var_6))))));
    }
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */long long int) (_Bool)1)), ((~(-8786803941467445940LL))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65533)))));
    var_14 = ((/* implicit */long long int) var_5);
}
