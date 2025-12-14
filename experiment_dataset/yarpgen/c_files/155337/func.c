/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155337
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((arr_1 [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_1)))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))) : (var_8)))))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (var_4)))) : (min((max((arr_1 [i_0 - 1] [i_0]), (((/* implicit */long long int) arr_0 [i_0] [i_0])))), (((((/* implicit */long long int) ((/* implicit */int) var_1))) / (arr_1 [i_0] [i_0 - 1])))))));
        arr_4 [i_0] = 11446341144107331556ULL;
    }
    /* vectorizable */
    for (long long int i_1 = 2; i_1 < 10; i_1 += 2) 
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [(unsigned short)7] [i_1 - 1])) : (arr_5 [i_1])))))));
        var_19 = ((/* implicit */unsigned long long int) (~(arr_5 [i_1 + 3])));
    }
    var_20 -= ((/* implicit */int) (((~(((((/* implicit */long long int) ((/* implicit */int) var_1))) % (var_17))))) + (var_13)));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 11446341144107331535ULL)) ? ((~(((/* implicit */int) ((7000402929602220092ULL) > (7000402929602220081ULL)))))) : (((/* implicit */int) (unsigned short)4096))));
    var_22 = ((/* implicit */unsigned short) (unsigned char)3);
}
