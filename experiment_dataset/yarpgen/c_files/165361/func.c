/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165361
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_12 = ((/* implicit */_Bool) arr_0 [(signed char)9] [(short)16]);
        var_13 = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_2 [i_0] [i_0])))), ((((_Bool)1) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (short)24576)))))) <= (((/* implicit */int) min(((_Bool)1), ((_Bool)0))))));
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((arr_1 [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (((var_4) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (9223372036854775807LL))))) | (((/* implicit */long long int) max((((/* implicit */int) ((_Bool) (_Bool)0))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))))))));
        var_15 = (!(min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))));
    }
    var_16 = ((/* implicit */_Bool) ((((((/* implicit */int) max((((/* implicit */unsigned short) (short)24582)), (var_11)))) == ((+(((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_2)));
}
