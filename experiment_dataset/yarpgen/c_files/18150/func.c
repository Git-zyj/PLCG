/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18150
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)-3644)) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) ? ((+(((/* implicit */int) (short)3644)))) : ((~(((/* implicit */int) arr_3 [i_0] [i_0]))))));
        var_17 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (short)30064)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (_Bool)1))))));
        var_18 = ((/* implicit */unsigned short) (_Bool)1);
    }
    var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (short)32744)) || ((_Bool)1)))) * (((/* implicit */int) min(((short)(-32767 - 1)), ((short)3657))))))) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) min(((!(((/* implicit */_Bool) var_10)))), (((var_2) >= (((/* implicit */long long int) ((/* implicit */int) var_13))))))))));
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_6))));
    var_21 -= max((((/* implicit */unsigned long long int) ((((unsigned int) var_13)) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) -3522273881994919910LL)) ? (((/* implicit */int) (signed char)76)) : (((/* implicit */int) (_Bool)1)))))))), (((max((((/* implicit */unsigned long long int) (signed char)32)), (15693017049817279099ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_9), (((/* implicit */unsigned short) var_11)))))))));
}
