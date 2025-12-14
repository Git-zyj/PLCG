/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157282
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_11 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)60))) == (arr_0 [i_0]))))) >= ((~((~(arr_0 [i_0])))))));
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (short)4640)) ? (min((((arr_0 [i_0]) << (((var_3) + (421275847))))), (((arr_0 [i_0]) ^ (((/* implicit */unsigned int) var_9)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))));
    }
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_4)))) ? (var_2) : (min((((/* implicit */unsigned int) (short)-4640)), (var_10)))))) : (var_5)));
    var_14 = ((/* implicit */int) ((((/* implicit */long long int) max((max((var_2), (((/* implicit */unsigned int) var_8)))), (var_2)))) / (((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-4659)) ? (var_3) : (((/* implicit */int) var_0))))) & (((((/* implicit */_Bool) var_1)) ? (3279418180967915180LL) : (((/* implicit */long long int) var_3))))))));
    var_15 &= var_5;
    var_16 = (short)-4646;
}
