/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102716
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
    var_16 = ((/* implicit */signed char) (+(max((((((/* implicit */_Bool) (short)-29363)) ? (((/* implicit */long long int) var_2)) : (var_1))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_0)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (!(min((((((/* implicit */_Bool) (short)28685)) && (((/* implicit */_Bool) arr_0 [i_0])))), (((((/* implicit */_Bool) (short)-29349)) && (((/* implicit */_Bool) 1690812687))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_0 - 1]) + (((/* implicit */unsigned long long int) (-(-24))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (min((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (544392116U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) : ((~(arr_0 [i_0 - 1])))));
        arr_4 [i_0] = ((/* implicit */short) arr_0 [i_0]);
    }
    var_17 = ((/* implicit */short) (unsigned short)59569);
}
