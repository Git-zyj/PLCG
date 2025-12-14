/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10606
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
    var_14 = ((/* implicit */unsigned int) var_0);
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-15152)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4U)));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))));
        arr_3 [i_0] = ((/* implicit */int) ((short) ((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) arr_0 [i_0])))));
        arr_4 [i_0] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)57958)))) != ((~(var_13)))))), (((((/* implicit */long long int) ((/* implicit */int) var_3))) - (max((((/* implicit */long long int) arr_0 [i_0])), (var_6)))))));
        var_17 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26466))) & (arr_1 [i_0]))), (((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)7580)))));
    }
}
