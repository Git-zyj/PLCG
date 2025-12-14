/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143828
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_4) : (var_6))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            arr_7 [18] [19] [(unsigned char)21] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))));
            arr_8 [(unsigned char)3] [i_1] = ((/* implicit */_Bool) (((_Bool)1) ? (2793116431U) : (1501850876U)));
        }
        var_18 = ((/* implicit */short) ((((/* implicit */long long int) (+(((/* implicit */int) var_13))))) % (var_9)));
        arr_9 [i_0 - 1] [9] &= (-((~(15128905721932866710ULL))));
        var_19 = ((/* implicit */unsigned char) (~(var_9)));
    }
    var_20 = ((/* implicit */short) ((var_9) / ((-(((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */long long int) var_12))))))));
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) max(((+(((var_7) * (((/* implicit */long long int) ((/* implicit */int) var_11))))))), (((/* implicit */long long int) var_14)))))));
}
