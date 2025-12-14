/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179740
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_20 -= ((/* implicit */long long int) max((((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)18313)), (-2203926146742196519LL)))) ? (((/* implicit */int) max((arr_0 [(short)8]), (((/* implicit */unsigned short) (signed char)-38))))) : (((/* implicit */int) arr_0 [2U])))), (((/* implicit */int) (!(((/* implicit */_Bool) (~(var_7)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_3), ((unsigned short)65534)))) ? (min((var_12), (((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [(unsigned short)1]))) != (max((((/* implicit */long long int) var_10)), (-2361095593469308173LL))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((unsigned int) var_3))) && (arr_2 [i_0]))), (arr_2 [i_0])));
    }
    var_21 = ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
}
