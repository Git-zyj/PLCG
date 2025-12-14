/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127844
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
    var_19 = ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) (unsigned char)171)));
    var_20 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_3)) | (0ULL))) ^ (((/* implicit */unsigned long long int) -3LL))));
    var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -11LL)) || (((/* implicit */_Bool) -13LL)))) ? (var_11) : (((/* implicit */long long int) min((min((((/* implicit */int) (unsigned char)59)), (var_7))), (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */int) ((_Bool) arr_3 [i_0 - 1]))) > (-2147483617))))));
        arr_4 [3LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_3 [i_0 - 1]))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)45722))))) : (max((7U), (((/* implicit */unsigned int) var_17))))));
        arr_5 [i_0] = ((/* implicit */short) (+(var_5)));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_8 [i_1]))));
        arr_9 [i_1] = ((/* implicit */short) arr_6 [i_1]);
        var_24 = ((/* implicit */short) ((((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29156))) : (2ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
        arr_10 [i_1] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (unsigned char)132)) > (((/* implicit */int) (_Bool)1)))));
    }
}
