/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142585
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
    var_16 = ((/* implicit */long long int) (unsigned short)49395);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (arr_0 [i_0 + 1]) : (-8589934592LL)));
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) min((((((/* implicit */int) var_12)) >> (((((/* implicit */int) (unsigned char)49)) - (27))))), (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_15)))))))))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_13) ? (arr_1 [i_0 - 1]) : (arr_1 [7LL])))))))));
        arr_2 [i_0 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_0 + 1]))) ? ((~(arr_0 [i_0 + 1]))) : ((~(arr_0 [i_0 + 1])))));
        arr_3 [i_0] [i_0] = (!(((/* implicit */_Bool) (+(((arr_1 [i_0]) / (-8105238970990792307LL)))))));
    }
}
