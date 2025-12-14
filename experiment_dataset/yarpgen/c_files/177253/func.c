/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177253
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
    var_19 = ((/* implicit */long long int) var_3);
    var_20 *= ((/* implicit */int) (_Bool)1);
    var_21 = ((/* implicit */unsigned long long int) var_16);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_22 = min((((/* implicit */long long int) ((((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned short) (_Bool)1))))) + ((~(((/* implicit */int) (_Bool)0))))))), (min((((/* implicit */long long int) ((unsigned int) (_Bool)1))), (arr_2 [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (arr_2 [i_0])))) >= (((/* implicit */int) ((unsigned char) (unsigned char)170)))))), (((signed char) (_Bool)1))));
        arr_4 [i_0] = arr_0 [i_0];
    }
    var_23 = ((/* implicit */int) max((((/* implicit */unsigned int) var_3)), (((unsigned int) 13449045470125939821ULL))));
}
