/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174494
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
    var_17 = ((/* implicit */_Bool) var_2);
    var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((var_6), (((/* implicit */signed char) var_1)))))));
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) 447329108))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) ((signed char) arr_0 [i_0] [i_0]))))) << (((((unsigned int) arr_1 [i_0] [i_0])) - (2476980005U))))))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((arr_1 [i_0] [i_0]) == (arr_1 [i_0] [i_0])))) : (((/* implicit */int) ((short) arr_1 [i_0] [i_0])))));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_22 |= ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_0 [i_1] [i_1]))))));
        var_23 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((_Bool) var_6))), (var_15)))) ? (arr_1 [i_1] [i_1]) : (((/* implicit */unsigned long long int) (~((~(1015003926))))))));
        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [(unsigned char)1] [i_1])) ? (arr_1 [i_1] [i_1]) : (((/* implicit */unsigned long long int) arr_2 [(unsigned short)10])))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [(unsigned short)6]) > (((/* implicit */int) var_13)))))))))));
    }
}
