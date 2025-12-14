/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106871
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
    var_13 = ((/* implicit */long long int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-24794)), (var_6)))) ? (((395665694U) << (((var_10) - (1102118844430999943LL))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) var_4))));
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) var_5))));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((3974886197U) != (((/* implicit */unsigned int) 15)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)4318)) ? (((/* implicit */int) (unsigned char)117)) : (((/* implicit */int) (signed char)-91))))) : (((long long int) arr_0 [i_0 + 2])))))));
        var_15 = ((3U) & (((3899301620U) >> (((395665694U) - (395665671U))))));
        var_16 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) arr_1 [i_0 - 1] [i_0 - 2])) ^ (min((-1LL), (1LL))))) == (((/* implicit */long long int) ((8191U) << ((-(-15))))))));
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)24794)) || (((/* implicit */_Bool) -36)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43944))) : (arr_5 [(unsigned short)3] [i_1]))))));
        arr_8 [i_1] [i_1] = ((/* implicit */short) ((((2U) < (4294959104U))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1]))))) & (((/* implicit */int) arr_4 [i_1] [i_1])))) : (((/* implicit */int) (unsigned short)18691))));
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((1023U) << (((35) - (29)))))))))));
        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)24794))) : (arr_5 [i_1] [i_1]))))));
    }
    /* vectorizable */
    for (short i_2 = 1; i_2 < 15; i_2 += 4) 
    {
        arr_11 [i_2 - 1] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_2]))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((-1LL) >= (((/* implicit */long long int) 8191U)))))));
        arr_12 [i_2] = ((/* implicit */unsigned short) ((arr_9 [i_2 + 1]) * (arr_9 [i_2 - 1])));
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_2 + 1])) ? (((/* implicit */int) (short)24794)) : ((-(((/* implicit */int) (short)-24794))))));
    }
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) & (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((2110999027U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))) >= (2386725779U))))));
}
