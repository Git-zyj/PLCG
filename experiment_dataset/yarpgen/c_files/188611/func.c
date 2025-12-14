/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188611
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
    var_15 = ((/* implicit */_Bool) var_12);
    var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)65535))));
    var_17 |= ((min((((((/* implicit */_Bool) (unsigned char)156)) ? (4636244544142646692ULL) : (13725613660986740903ULL))), (((/* implicit */unsigned long long int) var_2)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) % (var_14))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [10] [10])) && (((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0])))))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 + 1])) >= (((/* implicit */int) arr_1 [i_0 - 1])))))));
        arr_4 [i_0] [(unsigned char)8] &= ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) min(((_Bool)1), (var_5)))))));
        arr_5 [i_0] = ((/* implicit */unsigned int) ((unsigned short) ((short) (+(1743416234U)))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (~(((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (arr_1 [i_0 - 1])))))))));
    }
    for (unsigned short i_1 = 4; i_1 < 20; i_1 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) min((arr_6 [i_1 + 1] [i_1 + 1]), (arr_6 [i_1 + 1] [i_1 + 1]))))));
        arr_8 [i_1] [(unsigned char)13] |= ((/* implicit */_Bool) var_7);
    }
}
