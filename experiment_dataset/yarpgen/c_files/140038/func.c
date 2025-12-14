/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140038
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] |= ((/* implicit */unsigned short) ((((((((/* implicit */int) (signed char)79)) != (((/* implicit */int) (_Bool)1)))) ? (1030912797) : (((/* implicit */int) (signed char)-28)))) % ((~(((/* implicit */int) (signed char)-56))))));
        var_11 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) arr_0 [i_0])) << (((/* implicit */int) ((4187516624922036595LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) : ((~(((/* implicit */int) var_0))))));
    }
    var_12 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? ((((_Bool)0) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))))));
    var_13 = ((/* implicit */unsigned short) min((((/* implicit */int) ((short) max((1030912797), (((/* implicit */int) (_Bool)0)))))), ((~((~(((/* implicit */int) (short)8064))))))));
}
