/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174289
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((min((9096233278833617849ULL), (((/* implicit */unsigned long long int) var_8)))) >= (((/* implicit */unsigned long long int) (~(573205141U)))))))) * (var_3)));
    var_20 = ((/* implicit */short) (((-(min((573205141U), (((/* implicit */unsigned int) var_15)))))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_8)))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_21 = ((/* implicit */short) arr_0 [i_0 + 1] [i_0 + 1]);
        var_22 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_12) ? (var_2) : (arr_1 [i_0])))) ? (((/* implicit */long long int) arr_0 [i_0] [i_0])) : ((+(var_0)))))) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_0 [i_0 - 1] [i_0]))))));
    }
    for (unsigned short i_1 = 1; i_1 < 16; i_1 += 1) 
    {
        var_23 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) arr_2 [i_1] [(signed char)10])), (arr_5 [i_1])));
        arr_6 [i_1] = ((/* implicit */short) var_7);
        arr_7 [i_1] = min((((((/* implicit */_Bool) arr_2 [i_1 + 2] [i_1 + 2])) ? (((/* implicit */int) arr_3 [i_1 - 1])) : (((/* implicit */int) arr_3 [i_1 - 1])))), (((/* implicit */int) min((arr_3 [i_1 + 3]), (arr_3 [i_1 + 3])))));
    }
    var_24 = ((/* implicit */int) var_8);
    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_10)), (min((((/* implicit */int) var_14)), (var_15)))))) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((274877906944ULL) | (13818062118575633774ULL))))))));
}
