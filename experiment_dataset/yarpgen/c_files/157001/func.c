/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157001
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) 1035057722)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_9)))))) ? (((unsigned int) ((unsigned int) 768362839U))) : ((~(((((/* implicit */unsigned int) -244102237)) / (arr_1 [i_0])))))));
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) arr_3 [i_1]);
        var_11 = ((/* implicit */int) (+(((long long int) arr_4 [i_1]))));
        var_12 = ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (max((var_1), (((((/* implicit */_Bool) (unsigned short)12353)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1]))) : (var_7))))));
        var_13 = ((/* implicit */int) min((max((((/* implicit */long long int) arr_5 [i_1] [i_1])), (-6226704812699720929LL))), (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_1] [i_1])))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) max(((~(var_6))), (((arr_3 [i_1]) ? (max((991964819U), (1698273206U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_5 [i_1] [i_1]))))))));
    }
    var_14 -= ((/* implicit */long long int) (~((~((~(((/* implicit */int) (_Bool)1))))))));
}
