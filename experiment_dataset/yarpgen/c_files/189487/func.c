/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189487
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) (~(3246428174U))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) var_0);
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((((/* implicit */int) var_1)) / (((/* implicit */int) var_0)))))))));
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_3 [i_1] [i_1]), (arr_3 [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) (~(max((((/* implicit */unsigned int) var_9)), (1048539137U)))))) : (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (arr_3 [i_1] [i_1]) : (arr_3 [i_1] [i_1])))));
        arr_6 [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) min((arr_3 [i_1] [i_1]), (arr_4 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1])))))) : (min((((/* implicit */unsigned long long int) (unsigned short)7439)), (arr_3 [i_1] [i_1])))))));
        var_14 |= ((/* implicit */unsigned short) 16745671620178246582ULL);
    }
    var_15 -= ((/* implicit */signed char) var_5);
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        arr_11 [i_2] |= ((/* implicit */unsigned long long int) (unsigned char)193);
        var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)7439)), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) 2511528486U)) : (arr_9 [i_2])))));
        var_17 -= ((/* implicit */unsigned short) max((arr_9 [i_2]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) var_0)))))));
        var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_10)))))) : (min((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_2])) || (((/* implicit */_Bool) arr_9 [i_2]))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_10 [i_2]))))))));
    }
}
