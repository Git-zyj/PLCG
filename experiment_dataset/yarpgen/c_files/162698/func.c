/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162698
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
    for (short i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)96))) < (((arr_0 [i_0]) | (arr_0 [i_0])))));
        arr_2 [i_0] = ((/* implicit */int) ((var_13) >> (((((/* implicit */int) var_14)) + (47)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (-(var_7)));
    }
    for (short i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
    {
        var_20 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-15353)) + (((/* implicit */int) (short)161)))) + (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)14099))) < (var_1))))))) < (((var_12) | (((/* implicit */unsigned long long int) var_11))))));
        var_21 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)13)) == (((/* implicit */int) (short)15353)))))) < (18268256012878338853ULL))))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) | (((/* implicit */int) (unsigned char)128))))) < ((-(3267279793U)))));
    }
    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (~((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (var_12))))))))));
    var_24 = ((/* implicit */signed char) var_13);
}
