/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112298
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
    var_18 = ((/* implicit */long long int) min((-1525414583), (((/* implicit */int) (short)0))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((var_10), (var_4))) * (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) var_8))));
    var_20 = ((/* implicit */long long int) min((((int) (-(-1LL)))), (((/* implicit */int) ((unsigned char) var_16)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_21 = ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_15) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-15))))))) | (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_0 [9LL])))), (((/* implicit */int) min((((/* implicit */short) var_6)), (arr_0 [i_0]))))))));
        var_22 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_0 [i_0]))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_6)) - (171)))))) < ((+(var_0)))));
        var_24 = ((/* implicit */signed char) arr_3 [i_1] [i_1]);
    }
}
