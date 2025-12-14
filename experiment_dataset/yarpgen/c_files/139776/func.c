/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139776
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) (_Bool)1);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            var_13 = ((/* implicit */unsigned int) arr_1 [(unsigned char)18]);
            var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_3 [i_1])))))))));
        }
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned short)17]))) | (var_11))) : (((((/* implicit */_Bool) (unsigned char)1)) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)18))))))))));
    }
    var_16 = ((/* implicit */unsigned char) ((long long int) (_Bool)1));
    var_17 = ((/* implicit */unsigned long long int) var_0);
    var_18 = ((/* implicit */short) ((long long int) (-(((/* implicit */int) var_2)))));
}
