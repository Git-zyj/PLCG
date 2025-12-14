/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110111
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max(((short)-32748), (((/* implicit */short) (signed char)-51))))), (min((var_1), (((/* implicit */unsigned long long int) var_5))))))) ? (((/* implicit */unsigned long long int) var_9)) : (var_10)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_17 &= var_14;
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_0 [i_0])))) ? (var_0) : (((/* implicit */unsigned long long int) (+(arr_0 [i_0])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
        var_19 = ((/* implicit */unsigned char) ((min((((/* implicit */int) max((arr_1 [i_0 + 1] [i_0]), (((/* implicit */short) var_6))))), ((~(((/* implicit */int) (signed char)40)))))) & ((+(((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1]))))));
    }
    for (unsigned short i_1 = 1; i_1 < 22; i_1 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_0)) ? (arr_3 [i_1]) : (arr_3 [i_1 + 1])))));
        arr_4 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) min(((signed char)40), ((signed char)-22))))));
    }
}
