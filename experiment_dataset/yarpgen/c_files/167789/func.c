/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167789
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_14 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)8)) ? (16366962190031817343ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))));
        var_15 = ((unsigned char) max((arr_1 [i_0]), (arr_1 [i_0])));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_16 = ((/* implicit */long long int) max(((signed char)68), (((/* implicit */signed char) (!(((/* implicit */_Bool) 20ULL)))))));
        var_17 = ((/* implicit */unsigned short) ((arr_3 [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)172), (((/* implicit */unsigned char) min((var_0), ((_Bool)1))))))))));
        arr_4 [i_1] = ((/* implicit */unsigned int) max((((/* implicit */short) ((((/* implicit */int) (signed char)17)) < (((/* implicit */int) (unsigned short)63373))))), (max((min((((/* implicit */short) (signed char)-19)), (arr_2 [i_1] [i_1]))), (((/* implicit */short) (signed char)8))))));
    }
    var_18 = ((/* implicit */signed char) var_12);
}
