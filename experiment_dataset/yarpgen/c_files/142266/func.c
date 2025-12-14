/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142266
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
    var_15 = ((/* implicit */unsigned short) -10531463);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_16 = ((/* implicit */short) (~((~(((3457374583645352542ULL) ^ (var_0)))))));
        arr_4 [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) ((short) var_4))) <= (((((/* implicit */_Bool) (unsigned short)24302)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_11))))))) > (((/* implicit */int) ((((arr_3 [i_0] [i_0]) != (((/* implicit */unsigned long long int) arr_2 [(unsigned short)9])))) || (((/* implicit */_Bool) (short)-19728)))))));
    }
    var_17 = ((/* implicit */short) ((((/* implicit */int) var_14)) > (((((/* implicit */_Bool) ((((/* implicit */int) var_13)) ^ (var_4)))) ? (((/* implicit */int) min((var_14), (var_14)))) : (((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */int) var_11))))))));
}
