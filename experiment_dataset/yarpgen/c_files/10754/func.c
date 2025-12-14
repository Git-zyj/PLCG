/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10754
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 4; i_0 < 22; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_0 - 2]))));
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) min((min((max((2305843009213693951ULL), (((/* implicit */unsigned long long int) (signed char)(-127 - 1))))), (((/* implicit */unsigned long long int) (signed char)-117)))), (((/* implicit */unsigned long long int) 1442997135U)))))));
        arr_5 [i_0] = (+((~(((/* implicit */int) (unsigned char)220)))));
    }
    for (unsigned int i_1 = 4; i_1 < 22; i_1 += 3) /* same iter space */
    {
        arr_9 [i_1 + 1] [i_1 - 1] = ((/* implicit */long long int) min((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1442997135U)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (unsigned char)234))))), (var_9))), (((/* implicit */unsigned int) min((((/* implicit */int) arr_2 [i_1])), (((((/* implicit */int) (signed char)-117)) & (((/* implicit */int) arr_6 [i_1] [i_1])))))))));
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (-(max(((~(((/* implicit */int) (unsigned short)15220)))), (((/* implicit */int) ((unsigned char) arr_7 [i_1] [i_1]))))))))));
    }
    var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) (~(((/* implicit */int) (short)-32641))))))));
    var_21 = ((/* implicit */int) var_2);
    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (-(((/* implicit */int) var_14)))))));
    var_23 = ((/* implicit */signed char) var_0);
}
