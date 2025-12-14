/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152717
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
    var_11 += ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_1))) != (((long long int) ((short) var_10)))));
    var_12 = ((/* implicit */unsigned char) var_3);
    var_13 = var_7;
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (unsigned char)103))))))));
        arr_4 [i_0] = ((/* implicit */long long int) (_Bool)1);
        var_16 = ((/* implicit */int) max((var_16), (((((/* implicit */_Bool) arr_2 [i_0])) ? ((((_Bool)1) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : (((((/* implicit */_Bool) (signed char)-106)) ? (((/* implicit */int) (unsigned char)189)) : (2049734614)))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_17 &= ((/* implicit */signed char) (-(-2049734614)));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((_Bool) (_Bool)1)) ? ((((_Bool)1) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1])))) : (((/* implicit */int) ((signed char) arr_5 [i_1]))))))));
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((signed char) (+(((((/* implicit */_Bool) (unsigned char)255)) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_5 [i_1]))))))))));
    }
}
