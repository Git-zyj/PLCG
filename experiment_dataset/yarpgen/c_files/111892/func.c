/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111892
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
    var_16 = ((/* implicit */unsigned short) min((((/* implicit */int) var_3)), ((~(((/* implicit */int) var_11))))));
    var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned short) (unsigned char)38))))) ? (((/* implicit */unsigned long long int) var_14)) : (((18446744073709551606ULL) >> (((-10) + (69))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) (+(min((-1957244899), (((/* implicit */int) min(((short)24974), (((/* implicit */short) var_4)))))))));
        var_18 = ((/* implicit */unsigned short) min((((/* implicit */short) (_Bool)1)), ((short)24974)));
        var_19 = ((/* implicit */unsigned char) var_15);
    }
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) % (((/* implicit */int) var_6))));
    var_21 = (short)-24975;
}
