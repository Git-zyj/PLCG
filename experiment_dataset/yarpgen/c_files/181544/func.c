/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181544
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
    var_18 = ((/* implicit */unsigned short) -608394848);
    var_19 = ((/* implicit */unsigned short) ((((608394848) << (((((((/* implicit */_Bool) 2LL)) ? (608394847) : (((/* implicit */int) var_12)))) - (608394846))))) < (((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) arr_5 [i_0 + 1] [i_1] [i_0 + 1]);
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) & (arr_5 [i_1] [i_1 + 2] [i_0])))))) ? (((((((/* implicit */_Bool) (short)3)) ? (4294967295U) : (((/* implicit */unsigned int) 608394848)))) >> (((((((/* implicit */int) arr_2 [i_0])) >> (((/* implicit */int) var_1)))) - (8344))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) 608394853)) : (arr_5 [i_0] [i_1] [i_1])))) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_2 [i_1])), (arr_0 [i_0])))) : (1944612045U)))));
                var_22 = ((/* implicit */int) min((((((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) 6789186525581539761ULL)))) ? (((/* implicit */unsigned long long int) -1830936318)) : (arr_5 [(signed char)13] [i_1] [i_1]))), (((/* implicit */unsigned long long int) -3166486737557849165LL))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) (~(((7280790948074468092LL) << ((((((((_Bool)0) ? (1491060758) : (-608394840))) + (608394869))) - (29)))))));
}
