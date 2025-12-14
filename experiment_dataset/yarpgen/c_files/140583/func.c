/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140583
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
    var_11 &= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) max(((_Bool)0), ((_Bool)0))))) | (((-7384298759597725719LL) - (((/* implicit */long long int) (+(((/* implicit */int) (short)-1)))))))));
    var_12 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */unsigned long long int) 0U)) : (18119366725301711187ULL)))) ? (((/* implicit */unsigned long long int) 1113657678952224460LL)) : ((-(var_1)))))) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (1113657678952224452LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)8))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((int) arr_0 [i_0] [i_0]));
        arr_2 [i_0] = ((((/* implicit */long long int) ((((/* implicit */_Bool) 53561404471219744ULL)) ? (((/* implicit */int) (unsigned short)65535)) : (2147483645)))) % (8573751078613699443LL));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) & (arr_1 [i_0] [i_0])));
    }
    for (unsigned char i_1 = 1; i_1 < 19; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) (~(((unsigned long long int) ((short) arr_4 [i_1] [i_1])))));
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) var_10))));
    }
    var_16 = ((/* implicit */long long int) var_1);
    var_17 = ((unsigned short) var_7);
}
