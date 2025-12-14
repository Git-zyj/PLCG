/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10059
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
    var_11 = ((/* implicit */unsigned int) (+(max((-5250762177182247710LL), (5250762177182247710LL)))));
    var_12 = ((/* implicit */unsigned int) 4671363159960084246LL);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        var_13 = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))) ? ((~(5250762177182247710LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27806)))))) ? (645707631U) : (((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 - 2])) ? (645707631U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))));
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 739798599)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (short)2048)), (1501402501U)))) : (((((/* implicit */long long int) ((/* implicit */int) (short)16575))) & (5250762177182247710LL)))))) ? (((((/* implicit */_Bool) (+(var_0)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37743))) : (var_0))) : (min((((/* implicit */long long int) var_5)), (var_0))))) : (((long long int) ((6991915611162394840LL) / (((/* implicit */long long int) var_1)))))));
        arr_3 [3LL] |= ((/* implicit */unsigned short) ((long long int) (~(((/* implicit */int) (short)5091)))));
        var_15 ^= ((/* implicit */unsigned int) max(((~(arr_2 [i_0 - 1]))), (((/* implicit */long long int) ((92166089) % (((/* implicit */int) (unsigned short)17832)))))));
    }
}
