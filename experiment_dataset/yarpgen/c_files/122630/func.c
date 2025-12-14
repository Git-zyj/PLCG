/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122630
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
    var_17 = ((/* implicit */signed char) min((((var_4) ? (((/* implicit */int) var_15)) : (var_8))), (((/* implicit */int) var_4))));
    var_18 = ((/* implicit */_Bool) var_16);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 *= ((/* implicit */short) ((((((/* implicit */int) arr_2 [i_0])) <= (var_0))) ? (min((((/* implicit */long long int) var_12)), (arr_1 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
        var_20 = ((/* implicit */int) var_9);
        var_21 = ((/* implicit */short) ((signed char) ((int) arr_0 [i_0])));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)29806))) >= (((unsigned int) var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_2)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)56))) % (((long long int) var_7))));
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-60))))) ? (var_9) : (((((/* implicit */_Bool) (signed char)81)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (3006862168U)))))) ? ((((~(arr_4 [8]))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [(_Bool)1])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)56))))))));
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) arr_5 [i_1] [i_1]))));
        var_25 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) max((var_12), (var_12)))) ? (((/* implicit */int) ((short) var_3))) : (((/* implicit */int) arr_5 [i_1] [i_1])))));
        var_26 -= ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [4ULL])))))));
    }
}
