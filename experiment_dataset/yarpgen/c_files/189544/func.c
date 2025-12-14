/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189544
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
    var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_8))));
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) max((((((((/* implicit */_Bool) 15573513078370161062ULL)) ? (((/* implicit */unsigned int) var_4)) : (var_9))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)83))))), (((/* implicit */unsigned int) (~((~(((/* implicit */int) var_7))))))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (+((-((+(2873230995339390554ULL))))))))));
        arr_2 [i_0] = ((/* implicit */int) arr_0 [i_0] [i_0]);
        var_21 = ((/* implicit */unsigned char) var_10);
    }
    for (short i_1 = 4; i_1 < 17; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((4327130670553669489ULL) + (262144ULL)))))) ? (((((/* implicit */int) arr_1 [13U])) & (((/* implicit */int) arr_5 [6])))) : (((/* implicit */int) arr_0 [i_1] [(short)5]))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) 2873230995339390541ULL))))) <= (((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) arr_3 [i_1]))))))) && (((/* implicit */_Bool) -8148753528869239677LL))));
    }
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (max((var_1), (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_2))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709289471ULL)) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) & (2873230995339390550ULL))))))))));
}
