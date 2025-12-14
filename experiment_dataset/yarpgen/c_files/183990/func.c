/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183990
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
    var_12 = ((/* implicit */short) (unsigned short)3968);
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (max((-3547707070164711694LL), (-3547707070164711694LL))) : (((((/* implicit */long long int) ((/* implicit */int) var_8))) / (((((/* implicit */_Bool) 2467307988U)) ? (-3547707070164711694LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) (((_Bool)1) ? (((unsigned int) arr_0 [i_0 + 1] [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63674)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [(unsigned short)3] [i_0])) / (arr_1 [i_0]))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))) == (((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) var_0)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((int) 3547707070164711693LL));
        arr_4 [9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 373616148U)), (-3547707070164711694LL)))) ? (3547707070164711694LL) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (_Bool)1))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)25954)) & (((arr_0 [i_0] [i_0 - 1]) ? (min((((/* implicit */int) var_8)), (arr_1 [(short)0]))) : (arr_1 [i_0 + 1])))));
    }
}
