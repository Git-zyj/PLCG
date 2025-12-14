/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175867
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
    var_20 += ((/* implicit */long long int) min((((/* implicit */int) var_11)), (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) > (var_17)))) ^ (((/* implicit */int) max((var_8), (((/* implicit */unsigned short) (_Bool)1)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        var_21 = ((/* implicit */short) ((_Bool) ((long long int) min((arr_0 [i_0 + 2] [i_0 - 1]), (((/* implicit */unsigned short) arr_2 [i_0 + 2]))))));
        var_22 = ((/* implicit */int) var_8);
        arr_3 [(unsigned short)6] |= ((/* implicit */long long int) min((((/* implicit */int) arr_2 [i_0 - 1])), (min((((/* implicit */int) min((arr_0 [i_0] [i_0 + 1]), (arr_0 [i_0 + 2] [i_0])))), (((((/* implicit */int) arr_2 [i_0])) ^ (var_0)))))));
        var_23 = ((/* implicit */unsigned short) var_10);
    }
}
