/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105653
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
    for (unsigned int i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_19))));
        arr_4 [i_0] = ((/* implicit */long long int) var_16);
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (!(max(((!(((/* implicit */_Bool) var_19)))), (((((/* implicit */int) (unsigned char)255)) >= (((/* implicit */int) (signed char)64)))))))))));
            arr_7 [(short)8] = ((/* implicit */int) var_9);
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((long long int) ((unsigned char) var_17)))) & ((+(min((((/* implicit */unsigned long long int) var_14)), (var_4))))))))));
            var_22 = ((/* implicit */unsigned short) max(((~(((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))), (((/* implicit */unsigned long long int) ((((4294967293U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))) >= (var_8))))));
        }
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) var_12)) > (min((((/* implicit */int) ((_Bool) var_9))), (((530866729) / (((/* implicit */int) (short)13586)))))))))));
    }
    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */int) var_19)) ^ (((/* implicit */int) var_3)))))));
}
