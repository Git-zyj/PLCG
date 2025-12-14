/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140725
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
    var_16 = ((/* implicit */unsigned char) max((((var_2) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)243))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))) - ((-(var_8)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_17 = ((arr_2 [i_0]) << (((((((/* implicit */int) ((signed char) (+(-542611736))))) + (79))) - (55))));
        var_18 = ((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned char)248)) + (((/* implicit */int) (unsigned char)30))))));
        var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_6)) || ((_Bool)1)))))) * (min((((/* implicit */unsigned long long int) var_6)), (var_5)))));
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        var_20 = ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? ((+(((/* implicit */int) (unsigned short)1594)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (var_14)))));
        arr_7 [i_1] = var_0;
    }
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (+(((/* implicit */int) var_15)))))));
    var_22 = ((/* implicit */_Bool) min((var_22), (min((((((/* implicit */_Bool) (unsigned char)45)) || (((/* implicit */_Bool) ((int) var_2))))), (var_0)))));
}
