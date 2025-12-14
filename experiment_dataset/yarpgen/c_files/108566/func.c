/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108566
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
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */int) (unsigned char)21))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 239668022))))) : ((+(((/* implicit */int) arr_1 [i_0] [i_0]))))));
        var_14 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_4)) : (-2145871215))) * (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */int) ((unsigned int) (-((+(((/* implicit */int) var_11)))))));
        var_15 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (arr_2 [i_0])))) ? ((((~(var_8))) / (max((((/* implicit */int) (short)-32760)), (399933948))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_6))))))));
    }
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) >= (((int) 1725638746U))));
}
