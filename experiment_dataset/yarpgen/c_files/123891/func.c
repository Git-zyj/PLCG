/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123891
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
    var_16 = ((/* implicit */short) max((var_16), (var_1)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        var_17 = ((/* implicit */short) var_5);
        var_18 -= ((/* implicit */short) ((max((((/* implicit */unsigned long long int) ((signed char) (short)-8942))), (max((arr_1 [(short)10]), (((/* implicit */unsigned long long int) 2578196131943181734LL)))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-6327), (((/* implicit */short) var_6))))))));
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) arr_0 [i_0 + 2]))));
    }
    for (unsigned char i_1 = 2; i_1 < 12; i_1 += 3) 
    {
        var_20 *= ((/* implicit */long long int) min((max((((((/* implicit */_Bool) arr_3 [i_1 - 1] [12])) ? (((/* implicit */int) arr_2 [2ULL] [i_1])) : (((/* implicit */int) arr_2 [4ULL] [i_1 - 2])))), (((/* implicit */int) var_11)))), (((/* implicit */int) ((((/* implicit */_Bool) ((var_15) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) && ((!(((/* implicit */_Bool) 2382985321U)))))))));
        var_21 = ((/* implicit */_Bool) ((max((((/* implicit */int) var_14)), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)-53)) : (((/* implicit */int) arr_2 [i_1] [i_1])))))) * (((/* implicit */int) min((arr_3 [i_1] [i_1]), (((/* implicit */unsigned short) arr_2 [i_1] [i_1 - 1])))))));
    }
}
