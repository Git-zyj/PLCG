/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116952
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
    var_14 ^= ((/* implicit */long long int) (+(72057593769492480ULL)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_15 = ((/* implicit */long long int) ((unsigned long long int) ((short) min((arr_1 [i_0]), (((/* implicit */int) (_Bool)1))))));
        var_16 = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_2 [i_1])))) < (840147637169558710ULL)));
        var_18 = ((/* implicit */_Bool) ((int) ((((/* implicit */unsigned long long int) arr_1 [i_1])) * (arr_4 [i_1]))));
    }
    for (short i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775807LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)13))) : (-536870912LL)));
        var_20 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)17))));
        var_21 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)14)) && (((/* implicit */_Bool) 1455072201U))));
        var_22 = ((/* implicit */_Bool) arr_6 [i_2] [i_2]);
    }
    var_23 = ((/* implicit */_Bool) min((17401598907619648266ULL), (((/* implicit */unsigned long long int) var_13))));
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 684965179)) ? (((/* implicit */unsigned long long int) 1980265067277565739LL)) : (8117881416744358962ULL)));
}
