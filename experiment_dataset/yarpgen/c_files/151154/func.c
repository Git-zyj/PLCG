/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151154
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) & (((var_8) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))) ? (min((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */int) arr_1 [(_Bool)1])) ^ (((/* implicit */int) var_4)))))) : (((/* implicit */int) arr_0 [i_0]))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) (short)26865)), (7613642442272001972ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((0ULL), (((/* implicit */unsigned long long int) (short)26865))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) min((((/* implicit */short) (signed char)121)), (arr_0 [i_0]))))))) : (((((/* implicit */_Bool) ((1537632155U) >> (((3273534785337823555ULL) - (3273534785337823536ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (4398046511103LL)))) : (2ULL)))));
    }
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) (+(3778913162U)))), (0ULL)))));
        arr_7 [(_Bool)1] = ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))) : (min((((/* implicit */unsigned int) arr_0 [i_1])), (2834668250U))))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))));
        var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) (short)-26865)))));
        arr_8 [i_1] [i_1] |= ((/* implicit */unsigned int) min((3242423732655048982ULL), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_10)) - (((/* implicit */int) var_11)))) + (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1])) != (((/* implicit */int) var_9))))))))));
    }
    var_13 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((var_4), (((/* implicit */short) ((_Bool) 2834668249U)))))), (2ULL)));
    var_14 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((2834668250U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1254613359141760794LL)))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) + (9223372036850581504ULL)))));
}
