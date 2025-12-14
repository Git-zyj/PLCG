/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1814
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
    var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_9))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        arr_4 [i_0 + 1] = ((/* implicit */unsigned long long int) var_14);
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */int) var_11)) >> ((((~(((/* implicit */int) arr_2 [i_0 + 1])))) + (12309))))))));
        var_17 = ((/* implicit */int) arr_0 [(_Bool)1]);
        var_18 -= ((/* implicit */long long int) ((((var_8) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (((/* implicit */int) arr_3 [i_0 + 1])))) % (((/* implicit */int) min((arr_3 [i_0 + 1]), (arr_3 [i_0 + 1]))))));
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 12; i_1 += 4) 
    {
        var_19 &= ((/* implicit */_Bool) var_5);
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((unsigned int) arr_6 [i_1 + 3])))));
    }
    var_21 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)181)) * (((/* implicit */int) (short)-7110))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)78)) == (((/* implicit */int) (unsigned char)75))))) : (((/* implicit */int) ((_Bool) (signed char)-7))))), (((/* implicit */int) var_5))));
}
