/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150206
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
    var_18 = ((/* implicit */unsigned long long int) 0U);
    var_19 = (-(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (608927613933870700ULL)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-22395))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) var_3)) : (var_15))))));
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) max((var_7), (((/* implicit */unsigned short) (short)-22391))))) > (((((/* implicit */_Bool) -1)) ? (1703734461) : (((/* implicit */int) var_6))))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) max((var_13), (((/* implicit */int) arr_2 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28963)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)63))) : (4515668939847198750LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : ((-(-6189642643982058191LL))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_2 [i_0]))))) ? (var_5) : ((-(var_15))))))));
    }
    for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) ((unsigned char) max((2681988809U), (((/* implicit */unsigned int) (short)3890)))));
        arr_7 [i_1] |= ((/* implicit */signed char) var_6);
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) arr_4 [i_1]))));
    }
    for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        var_23 = ((/* implicit */long long int) max((var_23), (((min((((/* implicit */long long int) 1304846258)), (((long long int) -6202380661461078332LL)))) - (((/* implicit */long long int) (-(arr_5 [i_2]))))))));
        arr_12 [i_2] = ((/* implicit */unsigned int) var_4);
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned char) var_11);
    }
    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((short) var_5)))))) ? ((+(62663310U))) : (var_15)));
}
