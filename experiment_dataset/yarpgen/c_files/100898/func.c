/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100898
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
    var_14 = ((/* implicit */signed char) 11049671219090375183ULL);
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) 7397072854619176430ULL)) ? (var_1) : (var_12)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [(_Bool)1] [(_Bool)1] |= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [(unsigned short)0]))) != (arr_1 [i_0] [i_0])));
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */int) var_7)) / (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (short)0);
    }
}
