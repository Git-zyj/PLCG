/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112318
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
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_18 ^= ((/* implicit */unsigned int) (!(((((-2771483969449097842LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)43))))) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) -1789629785)) + (arr_2 [i_0]))) & (((/* implicit */unsigned long long int) ((-1100743456) - (((/* implicit */int) arr_3 [i_0])))))));
        arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) min(((~(3334717936U))), (((/* implicit */unsigned int) (unsigned short)8784))))) <= (((570983216606997152ULL) & (((/* implicit */unsigned long long int) -1100743456))))));
    }
    var_19 &= ((/* implicit */short) (+(min((min((8094857925435462479LL), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) ((var_4) + (((/* implicit */int) var_9)))))))));
    var_20 = var_10;
    var_21 = ((/* implicit */int) var_2);
    var_22 = (+((~(((/* implicit */int) var_14)))));
}
