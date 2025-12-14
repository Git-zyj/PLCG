/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131039
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
    var_13 *= ((/* implicit */unsigned long long int) 576782595U);
    var_14 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) 16625220196690058928ULL)) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) (unsigned char)13))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1821523877019492702ULL)) ? (-5637844335442598541LL) : (3444999115564176441LL)))) : (max((((/* implicit */unsigned long long int) 147448151)), (16625220196690058913ULL))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_15 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 16625220196690058913ULL)) ? (3U) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)13)) << (((/* implicit */int) (_Bool)0)))))));
        arr_2 [(short)2] [(short)2] = ((/* implicit */_Bool) (unsigned short)10418);
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) (_Bool)1))));
        var_17 *= ((/* implicit */short) (unsigned char)13);
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)72)))) / (((((/* implicit */int) (signed char)-42)) * (((/* implicit */int) (unsigned char)109)))))))));
    }
}
