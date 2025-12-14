/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12156
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
    var_10 = ((/* implicit */int) min((((long long int) (!(((/* implicit */_Bool) -1684688378))))), (((/* implicit */long long int) ((int) var_2)))));
    var_11 |= ((/* implicit */unsigned int) (((-(((/* implicit */int) var_5)))) >= (var_8)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        var_12 = ((/* implicit */int) min((((/* implicit */long long int) max((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */_Bool) (unsigned short)39732)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_5))))))), (min((((/* implicit */long long int) arr_1 [i_0 - 1] [i_0])), (((((/* implicit */_Bool) (short)-31233)) ? (((/* implicit */long long int) 718014865U)) : (6010915197328517943LL)))))));
        arr_4 [i_0] [7U] = ((/* implicit */int) (+(max((((/* implicit */long long int) ((short) 2102547485))), (((((/* implicit */long long int) 325978809)) - (-2063879350928946451LL)))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-25077)) : (((/* implicit */int) (unsigned short)39732))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [10]))) : (arr_6 [i_1])));
        var_14 = arr_2 [i_1] [i_1];
        var_15 = ((int) ((unsigned int) var_9));
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((unsigned int) arr_0 [4])))));
    }
}
