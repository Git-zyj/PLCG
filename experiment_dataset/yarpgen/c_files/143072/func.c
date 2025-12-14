/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143072
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
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) -1310619296)) | (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)253))) | (var_11)))));
        arr_4 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_5) & (var_11))))));
    }
    for (unsigned short i_1 = 1; i_1 < 12; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */short) arr_6 [i_1 - 1])), (max(((short)-28820), (((/* implicit */short) arr_5 [i_1])))))))));
        arr_8 [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */int) arr_6 [i_1 - 1])) : (((/* implicit */int) (short)-1)))), (((((/* implicit */int) arr_6 [i_1 + 1])) + (((/* implicit */int) arr_6 [i_1 - 1]))))));
    }
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)56200))))) ? (((((/* implicit */_Bool) var_8)) ? (((var_4) * (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) - (var_5)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) % ((((_Bool)1) ? (((/* implicit */unsigned long long int) var_11)) : (var_4)))))));
    var_14 = ((/* implicit */short) var_0);
    var_15 = ((/* implicit */int) min((max((15614866900885244555ULL), (((/* implicit */unsigned long long int) ((unsigned short) (short)1))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)176)))))));
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) var_7))));
}
