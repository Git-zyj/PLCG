/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122646
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) var_13)), (var_14))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_0))))))))) ? ((+((+(((/* implicit */int) var_1)))))) : (((/* implicit */int) var_5))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0] [2ULL] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))) : (var_7))), (var_7)));
        var_16 &= ((/* implicit */unsigned short) arr_3 [i_0]);
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] &= ((/* implicit */_Bool) min(((~(((/* implicit */int) var_4)))), (((/* implicit */int) ((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_5 [i_1])))) && (((/* implicit */_Bool) min((arr_3 [(short)2]), (((/* implicit */unsigned char) var_1))))))))));
        arr_8 [3] = 1246091265U;
        var_17 |= ((((/* implicit */int) (unsigned char)251)) | (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)124)), (arr_6 [i_1])))));
        var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (short)23089)), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)198))) ^ (3157493244U)))));
    }
    var_19 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-1), (((/* implicit */signed char) var_9)))))) * (min((((/* implicit */unsigned int) var_6)), (var_10))))))));
}
