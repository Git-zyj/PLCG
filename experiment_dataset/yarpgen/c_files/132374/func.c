/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132374
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
    for (short i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] [(_Bool)1] = ((/* implicit */_Bool) 11660013300457031443ULL);
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((11660013300457031436ULL) - (((/* implicit */unsigned long long int) arr_1 [i_0 - 2]))))) ? ((~(arr_1 [i_0 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        arr_3 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 2])))))));
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 2221520299U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_1 [(_Bool)1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))))) : ((~(min((var_2), (((/* implicit */long long int) (signed char)43))))))));
        var_16 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_1 [i_0])))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (((((/* implicit */int) (signed char)15)) % (((/* implicit */int) (signed char)-3)))) : (((((/* implicit */int) var_4)) + (((/* implicit */int) (_Bool)1))))))));
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) (-(((((/* implicit */int) arr_5 [i_1] [i_1])) - (((/* implicit */int) ((arr_0 [i_1]) == (var_6))))))));
        arr_7 [i_1] = ((/* implicit */short) 7957683109553886002LL);
        arr_8 [i_1] = ((/* implicit */short) ((2221520299U) & (((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))));
    }
    var_17 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) & ((~(22ULL))))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_9))));
    var_19 = ((/* implicit */unsigned int) var_13);
}
