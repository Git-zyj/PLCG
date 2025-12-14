/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188399
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
    var_20 = ((/* implicit */short) max((min((var_16), (((long long int) (short)15267)))), (((/* implicit */long long int) ((signed char) ((((/* implicit */unsigned long long int) -2147483625)) > (var_11)))))));
    var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-43)) ? (var_2) : (((/* implicit */int) (signed char)-43))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        var_22 += ((/* implicit */short) arr_2 [i_0 - 1]);
        var_23 += ((/* implicit */unsigned long long int) var_4);
    }
    for (long long int i_1 = 3; i_1 < 21; i_1 += 4) 
    {
        var_24 += ((/* implicit */unsigned long long int) (short)15240);
        var_25 += ((/* implicit */_Bool) (unsigned short)65528);
        var_26 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)33839)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) ((signed char) (signed char)-36)))))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_5 [i_1] [i_1])))))));
    }
    var_27 = ((/* implicit */unsigned short) min(((short)-16425), (((/* implicit */short) (unsigned char)140))));
}
