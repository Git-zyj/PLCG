/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161579
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((min((((((/* implicit */int) (_Bool)1)) << (((968465012) - (968465011))))), (((/* implicit */int) ((unsigned char) 13620093568907702424ULL))))) & (((((/* implicit */_Bool) (short)-17635)) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) arr_1 [i_0]))))));
        arr_3 [i_0] = arr_0 [i_0];
        var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) var_0))));
        var_12 *= ((/* implicit */unsigned short) arr_1 [i_0]);
        var_13 = ((/* implicit */short) -1LL);
    }
    var_14 += ((/* implicit */long long int) var_7);
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) var_1))) ? (((((/* implicit */_Bool) ((1LL) ^ (0LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_2), (((/* implicit */short) (signed char)-32)))))) : (var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_8)) + (2147483647))) << (((802022404U) - (802022404U)))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)0)))))));
    var_16 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (+(((/* implicit */int) (short)(-32767 - 1)))))))) ? (((unsigned long long int) ((((/* implicit */_Bool) (signed char)89)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_6)))) : (((/* implicit */unsigned long long int) 339638377065652074LL))));
}
