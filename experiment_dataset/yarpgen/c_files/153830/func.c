/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153830
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
    var_13 = ((/* implicit */long long int) var_6);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) min((arr_1 [i_0]), (arr_1 [i_0])))) & (4091160671830023478LL)));
        var_14 |= ((/* implicit */signed char) min((max((max((arr_1 [i_0]), (((/* implicit */unsigned int) arr_0 [i_0] [i_0])))), (((/* implicit */unsigned int) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(signed char)2] [i_0]))) | (arr_1 [i_0])))));
    }
    var_15 = ((/* implicit */unsigned char) var_5);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 21; i_1 += 2) 
    {
        arr_7 [i_1] = (unsigned char)255;
        arr_8 [i_1 - 1] &= ((/* implicit */int) ((((/* implicit */int) ((_Bool) arr_6 [21]))) >= (((/* implicit */int) arr_0 [9U] [i_1]))));
        var_16 = ((/* implicit */unsigned char) ((arr_0 [i_1] [i_1 + 1]) ? (((/* implicit */int) var_12)) : (var_2)));
    }
}
