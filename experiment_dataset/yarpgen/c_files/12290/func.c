/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12290
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) (unsigned char)192))))) ? ((-(var_0))) : ((-(arr_0 [i_0] [i_0]))))));
        var_17 += ((/* implicit */unsigned long long int) var_1);
        var_18 = ((((/* implicit */_Bool) arr_3 [13ULL])) ? (max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)174)) : (((/* implicit */int) (short)-32762)))), (max((((/* implicit */int) (short)-32747)), (var_5))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_0] [i_0]))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) ((signed char) (_Bool)1));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) : (var_8))))));
        var_20 = ((/* implicit */_Bool) min((var_20), (((((((/* implicit */_Bool) (unsigned short)41904)) || (((/* implicit */_Bool) arr_0 [i_1] [(short)18])))) || (((((/* implicit */_Bool) (unsigned char)201)) || (((/* implicit */_Bool) var_4))))))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) 1902692042);
        var_21 &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_1] [i_1]))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_12))));
        var_23 = (-(((/* implicit */int) (_Bool)1)));
    }
    var_24 = ((/* implicit */unsigned long long int) var_4);
    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) 15464490322109647217ULL))));
    var_26 = ((/* implicit */unsigned long long int) var_9);
    var_27 = ((/* implicit */int) max((var_15), (((((/* implicit */_Bool) ((((/* implicit */int) var_12)) % (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) (short)-32765))))));
}
