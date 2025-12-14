/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129749
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
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -224959730)) ? (max((1900807268), (((/* implicit */int) (short)6675)))) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_21 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) 15U)), (6234254755942513958ULL))), (max((var_12), (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) max((3250833646U), (3451588673U)))), ((~(5894758110543802321ULL))))), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))))));
    }
    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) var_14))));
}
