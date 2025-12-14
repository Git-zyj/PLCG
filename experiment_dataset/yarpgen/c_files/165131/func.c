/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165131
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
    var_19 = ((/* implicit */unsigned long long int) max((max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_17))), (((/* implicit */long long int) var_11)))), (min((-4898381977368658230LL), (((var_11) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = max((min((((/* implicit */unsigned long long int) ((_Bool) arr_1 [i_0]))), (max((arr_0 [(signed char)6] [i_0]), (((/* implicit */unsigned long long int) var_5)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0 + 1])) | (((/* implicit */int) var_3))))));
        arr_3 [3U] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned char)19]))) : (var_10))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 2])) && (((/* implicit */_Bool) arr_0 [i_0] [i_0 + 1])))))));
        var_20 ^= ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) (signed char)114)), (arr_0 [i_0] [i_0]))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) -4898381977368658232LL))))), (arr_0 [i_0] [i_0])))));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) var_1))));
        var_22 = min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) (short)629)) == (((/* implicit */int) (signed char)119))))), (min((7200420985186937892LL), (((/* implicit */long long int) var_12))))))), (min((((/* implicit */unsigned long long int) var_17)), (arr_0 [i_1] [i_1]))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 3) 
    {
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((unsigned int) (~(var_14)))))));
        var_24 = ((/* implicit */unsigned long long int) ((int) (_Bool)0));
    }
    var_25 &= ((/* implicit */int) var_18);
    var_26 = ((/* implicit */long long int) var_14);
}
