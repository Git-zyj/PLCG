/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115903
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
    var_17 = ((/* implicit */long long int) var_7);
    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (var_7)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)11858)))) : (((((/* implicit */int) var_14)) % (((/* implicit */int) var_4)))))))));
    var_19 = ((/* implicit */unsigned char) var_3);
    var_20 -= ((/* implicit */signed char) (!((!(var_4)))));
    /* LoopSeq 3 */
    for (short i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) ((unsigned char) (short)-32718))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))) ? ((~(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) min((arr_1 [i_0 - 2]), (((/* implicit */unsigned short) arr_0 [i_0 - 3]))))) ^ (((/* implicit */int) max((arr_1 [i_0 + 2]), (arr_1 [i_0 + 2]))))));
        var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (2130706432U)))) && (((/* implicit */_Bool) (signed char)47)))) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */int) arr_1 [i_0])))))));
        var_23 = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0])) / (max(((-(((/* implicit */int) var_6)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1))))))));
    }
    for (unsigned int i_1 = 1; i_1 < 19; i_1 += 1) 
    {
        var_24 = ((/* implicit */unsigned short) 4LL);
        var_25 -= ((/* implicit */signed char) (_Bool)1);
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        arr_7 [i_2] = ((/* implicit */unsigned char) 7140780534671886645LL);
        var_26 = ((/* implicit */unsigned short) (~(((unsigned int) (unsigned char)183))));
        var_27 = (+(((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_5 [i_2])))));
    }
}
