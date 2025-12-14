/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159951
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
    for (signed char i_0 = 4; i_0 < 15; i_0 += 2) 
    {
        arr_4 [i_0 + 3] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 - 2])) : ((+(((/* implicit */int) arr_0 [i_0 - 2])))))))));
        var_12 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_2 [i_0 - 2]), (arr_2 [i_0 + 4])))) ? ((+(((/* implicit */int) arr_2 [i_0 + 4])))) : ((~(((/* implicit */int) arr_2 [i_0 - 1]))))));
        var_13 -= ((/* implicit */unsigned char) (~(((/* implicit */int) min((min((((/* implicit */unsigned short) arr_0 [i_0 + 2])), (arr_1 [i_0 + 2] [i_0 + 1]))), (min((arr_2 [i_0 + 1]), (((/* implicit */unsigned short) arr_0 [i_0 - 1])))))))));
    }
    var_14 = ((/* implicit */_Bool) var_1);
    var_15 = ((/* implicit */short) var_4);
    var_16 += ((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (min((min(((unsigned short)65505), (((/* implicit */unsigned short) (signed char)112)))), (((/* implicit */unsigned short) var_2))))));
    var_17 = ((/* implicit */unsigned char) min((var_4), (((/* implicit */int) var_9))));
}
