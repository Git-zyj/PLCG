/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14223
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_10 += ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_3 [i_0] [i_0]) || (arr_3 [i_0] [i_0])))) <= (((/* implicit */int) arr_2 [i_0]))));
        var_11 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_1 [i_0] [i_0])))) ? (((784800415) - (((/* implicit */int) (unsigned short)21804)))) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (min((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_3)))), (((/* implicit */int) arr_3 [i_0] [i_0])))) : (((/* implicit */int) arr_2 [i_0]))));
        var_12 += ((/* implicit */long long int) arr_3 [2LL] [i_0]);
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_13 += ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_2 [i_1])))) > (((/* implicit */int) arr_3 [i_1] [i_1]))));
        var_14 = ((/* implicit */unsigned short) arr_3 [i_1] [i_1]);
        var_15 += ((/* implicit */unsigned short) (((~(((/* implicit */int) (unsigned short)43734)))) < (((/* implicit */int) ((((/* implicit */int) (short)-3146)) != (((/* implicit */int) (_Bool)1)))))));
    }
    var_16 = var_5;
    var_17 = ((/* implicit */int) var_5);
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (-(max((var_2), (((/* implicit */long long int) var_1))))))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
}
