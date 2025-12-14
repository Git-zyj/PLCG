/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132195
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_3))))));
        var_16 *= ((/* implicit */short) ((((((/* implicit */int) var_0)) == (((/* implicit */int) var_8)))) ? ((+((+(((/* implicit */int) arr_1 [(unsigned short)7])))))) : (max((((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_0])) >= (((/* implicit */int) arr_2 [i_0]))))), (((((/* implicit */int) var_1)) | (((/* implicit */int) var_4))))))));
        var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((((/* implicit */int) var_12)) < (((/* implicit */int) var_1))))))) << (((((/* implicit */int) arr_0 [i_0] [i_0])) & ((+(((/* implicit */int) var_0))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) (~(max((((/* implicit */long long int) max((var_0), (((/* implicit */short) arr_2 [i_1]))))), (max((((/* implicit */long long int) var_12)), (var_2)))))));
        var_19 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */int) arr_3 [i_1] [i_1])))));
        var_20 = ((/* implicit */unsigned char) arr_2 [i_1]);
    }
    var_21 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_2))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))))))))));
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? ((-(((var_2) / (((/* implicit */long long int) ((/* implicit */int) var_9))))))) : (((/* implicit */long long int) min((((/* implicit */int) min((var_9), (((/* implicit */unsigned short) var_0))))), (((int) var_6)))))));
    var_23 -= ((/* implicit */unsigned char) var_5);
}
