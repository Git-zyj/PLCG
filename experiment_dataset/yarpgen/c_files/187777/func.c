/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187777
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) max((arr_3 [(short)20] [i_1]), (9007199254740991ULL)))) || (((/* implicit */_Bool) arr_1 [(_Bool)1])))));
                arr_6 [i_0] [i_1 - 2] [i_1] = ((/* implicit */unsigned long long int) max((((int) min((arr_0 [i_0 + 1] [i_0]), (((/* implicit */short) arr_2 [0ULL]))))), (((/* implicit */int) var_2))));
            }
        } 
    } 
    var_11 ^= ((/* implicit */signed char) ((var_10) | (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)37))))), (((((/* implicit */_Bool) var_7)) ? (9007199254740991ULL) : (18437736874454810625ULL)))))));
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) & (min((((/* implicit */unsigned long long int) 6287591283744983266LL)), (9007199254740991ULL)))));
    var_13 += ((/* implicit */unsigned long long int) ((var_5) ^ (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    var_14 = max((((/* implicit */unsigned long long int) var_4)), (18437736874454810624ULL));
}
