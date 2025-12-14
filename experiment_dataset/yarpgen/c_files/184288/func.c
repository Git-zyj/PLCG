/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184288
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
    var_10 = ((/* implicit */short) var_4);
    var_11 -= ((/* implicit */unsigned char) ((unsigned long long int) var_9));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_12 -= ((/* implicit */signed char) ((((((int) arr_2 [i_0] [i_0])) + (2147483647))) << (((((/* implicit */int) (unsigned char)49)) - (49)))));
        var_13 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), ((-(arr_1 [i_0] [i_0])))));
        arr_4 [i_0] = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) (~(arr_2 [i_0] [i_0])))), ((-(arr_1 [i_0] [i_0]))))) != (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_2 [i_0] [i_0]))))))));
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37451))) : (arr_2 [i_0] [i_0])))), ((+(var_4)))))) ? (((/* implicit */int) ((short) arr_3 [i_0] [i_0]))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-71)) != (1940953575))))));
        var_15 -= ((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) max((var_6), (var_3)))), (201326592U))), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) -1101148282)))) && (((/* implicit */_Bool) var_6)))))));
    }
    var_16 = ((/* implicit */signed char) var_7);
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((var_9) != (max(((~(((/* implicit */int) var_3)))), (((/* implicit */int) var_3)))))))));
}
