/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174480
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (max((((18113006929564160953ULL) / (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) var_12)))) : (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) * (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_8), (var_8)))))))));
    var_14 = ((/* implicit */unsigned short) (~(((((/* implicit */int) min(((_Bool)0), ((_Bool)1)))) / (max((var_7), (var_3)))))));
    var_15 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (4616763714484891837ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((var_10) <= (((/* implicit */long long int) var_5))))))) <= (max((var_5), (((((/* implicit */int) var_8)) + (((/* implicit */int) (short)-4165)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned int) arr_0 [13]);
        arr_2 [i_0] |= ((((((/* implicit */int) (short)-17179)) + (((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) var_8)));
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) var_5);
        arr_5 [i_1] = ((_Bool) ((((/* implicit */_Bool) max((arr_3 [i_1]), (((/* implicit */unsigned short) var_4))))) ? (62412211U) : (((((/* implicit */_Bool) var_6)) ? (arr_4 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [10])))))));
    }
}
