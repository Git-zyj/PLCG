/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156797
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
    var_14 = ((/* implicit */int) (short)32759);
    var_15 = ((/* implicit */signed char) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_10), (((/* implicit */int) (unsigned short)24421))))) ? (((/* implicit */int) ((signed char) var_6))) : ((~(((/* implicit */int) var_7)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((((/* implicit */int) arr_1 [i_0] [i_0])) == (((/* implicit */int) (unsigned short)41114))))))) < (var_1)));
        arr_4 [i_0] = ((/* implicit */unsigned int) var_3);
        var_16 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-45)) ? (((/* implicit */int) ((short) (short)(-32767 - 1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)32748)))))));
        arr_5 [i_0] [i_0] = (~(var_11));
        var_17 = ((/* implicit */signed char) min((var_17), (arr_1 [i_0] [i_0])));
    }
}
