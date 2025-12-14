/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128904
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
    var_11 = ((/* implicit */signed char) (+(((/* implicit */int) ((((((/* implicit */_Bool) (signed char)88)) ? (((/* implicit */int) (unsigned char)50)) : (856953253))) <= (((/* implicit */int) var_3)))))));
    var_12 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 2])) - (((/* implicit */int) arr_1 [i_0 + 1])))), (((((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 2])) - (((/* implicit */int) arr_1 [i_0 + 1]))))));
        var_13 += ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-123)) > (((/* implicit */int) (_Bool)1))))), (arr_1 [i_0])))) > (((/* implicit */int) (((-9223372036854775807LL - 1LL)) <= (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
    }
}
