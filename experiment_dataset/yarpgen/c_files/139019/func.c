/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139019
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (min((((/* implicit */unsigned long long int) var_8)), (var_3)))))));
    var_12 = ((/* implicit */short) max(((-(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)11)), ((unsigned char)215)))))), (((((/* implicit */_Bool) (unsigned char)215)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)75))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) var_5);
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) (signed char)-41))));
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */unsigned char) var_7);
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            var_15 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_4)))))) - (var_8)));
            arr_7 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)32756))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            arr_10 [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-41)) < (((/* implicit */int) (unsigned char)0))));
            var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
        }
        var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
    }
}
