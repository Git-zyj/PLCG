/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170399
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_10 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_1 [(_Bool)1]))) ? (((((/* implicit */_Bool) 157542853296749989ULL)) ? (((/* implicit */unsigned long long int) var_2)) : (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54590)))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) 2071277750))));
        var_11 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10917))) != (arr_1 [i_0])));
        var_12 = ((/* implicit */unsigned char) ((arr_0 [i_0]) > (arr_0 [i_0])));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [(unsigned char)9])) : (((/* implicit */int) arr_3 [i_1])))));
        var_14 = ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_1]) : (((/* implicit */int) (unsigned short)54577)));
    }
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) var_9))));
}
