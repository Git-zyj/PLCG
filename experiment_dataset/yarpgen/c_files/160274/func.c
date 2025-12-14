/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160274
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
    var_15 = ((/* implicit */_Bool) ((unsigned char) 7787827032604350847LL));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551603ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((-(var_3)))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)18640)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (7787827032604350847LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13050))) : (arr_1 [i_0] [i_0]))))))) : (((((/* implicit */_Bool) arr_0 [(unsigned short)14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4))) : (arr_0 [i_0])))));
        var_18 *= ((/* implicit */_Bool) ((arr_0 [(_Bool)1]) << (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) -7)) : (arr_1 [i_0] [i_0]))) - (4294967279U)))));
        arr_2 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned int) ((/* implicit */int) ((450531839) != (((/* implicit */int) (short)-11458)))))) & (arr_1 [i_0] [17ULL]))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) != (((((/* implicit */unsigned long long int) -1600601548)) & (0ULL))))))));
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 14; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) ((arr_0 [(unsigned short)9]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        arr_7 [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) ((var_7) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))))))));
    }
    var_19 = ((/* implicit */long long int) var_9);
}
