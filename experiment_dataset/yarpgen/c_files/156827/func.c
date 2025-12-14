/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156827
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
    var_18 = ((/* implicit */short) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_17))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_19 = ((/* implicit */int) ((arr_1 [i_0] [11ULL]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0]))))) : (((var_10) >> (((/* implicit */int) (_Bool)1))))));
        var_20 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0]))));
        var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) arr_1 [(unsigned char)8] [i_0]))))) >> (((((/* implicit */int) (signed char)-91)) + (119)))));
    }
    var_22 = min((((5975618776631796784ULL) + (((/* implicit */unsigned long long int) var_8)))), (((((/* implicit */_Bool) var_10)) ? (((var_6) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (-1194655603)))))));
    var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned int) var_3)))))));
}
