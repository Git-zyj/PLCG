/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183524
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
        var_12 = ((((/* implicit */_Bool) min((arr_0 [i_0 - 1] [i_0 - 1]), (var_8)))) ? ((~(((/* implicit */int) ((var_0) != (((/* implicit */int) (unsigned char)16))))))) : ((((((-(((/* implicit */int) arr_0 [2ULL] [i_0])))) + (2147483647))) >> (((((arr_1 [i_0]) << (((/* implicit */int) (unsigned char)55)))) - (12970366926827028457ULL))))));
        var_13 = ((/* implicit */unsigned short) arr_1 [i_0]);
        arr_2 [i_0] [i_0 - 1] = ((((((/* implicit */_Bool) var_11)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_0] [i_0])))))) != (((/* implicit */unsigned long long int) min((var_5), (var_2)))));
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) var_3))));
    }
    for (int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        arr_5 [i_1] |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)18303)) ? (((/* implicit */int) arr_4 [(_Bool)0] [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_1])))) << ((((+(((/* implicit */int) arr_3 [i_1] [(_Bool)1])))) - (56228)))));
        var_15 = ((/* implicit */unsigned short) ((var_11) >= (((/* implicit */unsigned int) var_10))));
    }
    var_16 = ((((/* implicit */int) (_Bool)1)) << (((min((((var_11) << (((3800480220U) - (3800480202U))))), (((/* implicit */unsigned int) var_10)))) - (2631139322U))));
    var_17 = ((/* implicit */_Bool) var_10);
}
