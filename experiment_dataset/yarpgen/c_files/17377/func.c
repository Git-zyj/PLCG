/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17377
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
    var_17 = ((/* implicit */long long int) var_3);
    var_18 = ((/* implicit */unsigned char) var_1);
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)10338)) ? (((/* implicit */int) (unsigned char)197)) : (((/* implicit */int) (_Bool)1))));
    var_20 = ((/* implicit */unsigned short) max((((/* implicit */long long int) max((((/* implicit */int) (unsigned short)55188)), (((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) (short)-24981)) : (((/* implicit */int) (signed char)-8))))))), (var_15)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (arr_1 [i_0])))) ? ((~(((((/* implicit */_Bool) arr_0 [10LL])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55204))))))) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)55198)))) ? (((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */int) (unsigned short)55199)) : (((/* implicit */int) (signed char)-8)))) : (((/* implicit */int) (unsigned short)10338)))))));
        var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) var_0)) << (((((/* implicit */int) arr_0 [i_0])) - (95)))))) / ((((~(7583364511993541061LL))) % (((/* implicit */long long int) arr_2 [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) var_15);
    }
}
