/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101217
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
    var_12 = ((/* implicit */short) var_11);
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((signed char) (short)-13753));
        arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) (short)-13753)) ? (9060889249570296209ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-40))));
        var_13 *= ((/* implicit */short) (~(255LL)));
    }
    /* LoopSeq 1 */
    for (signed char i_1 = 2; i_1 < 15; i_1 += 1) 
    {
        arr_8 [(_Bool)1] [i_1] = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_10))))), ((-(9060889249570296218ULL))))), (((unsigned long long int) var_6))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (((~(var_7))) <= (((/* implicit */unsigned long long int) var_2))))) - (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
        arr_10 [i_1 + 2] [i_1 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-13763))))), (max((((/* implicit */unsigned long long int) arr_1 [16LL])), (var_7)))))) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) var_0))));
        var_14 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_1 [8ULL])), (((((/* implicit */_Bool) -751559526351538365LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)60))) : (9060889249570296209ULL)))));
    }
}
