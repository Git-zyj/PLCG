/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130060
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
    var_15 = ((/* implicit */unsigned short) var_10);
    var_16 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535))));
    var_17 = ((/* implicit */_Bool) max(((unsigned short)65535), (((/* implicit */unsigned short) ((((/* implicit */int) max((var_13), (var_11)))) > ((+(((/* implicit */int) var_13)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_1 [i_0])), (min((((/* implicit */long long int) var_7)), (max((((/* implicit */long long int) arr_1 [i_0])), (var_0)))))));
        var_18 = ((/* implicit */_Bool) arr_0 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (((+(((/* implicit */int) arr_1 [i_0])))) * (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
    }
}
