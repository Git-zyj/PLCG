/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108840
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
    var_16 = ((/* implicit */unsigned char) var_13);
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_0)), (max((((/* implicit */long long int) ((((/* implicit */long long int) var_1)) > (9223372036854775807LL)))), (((var_14) + (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
        var_17 = ((/* implicit */short) ((max((((-1051522186199123699LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-5))))), (((/* implicit */long long int) (unsigned short)52848)))) < (((/* implicit */long long int) ((/* implicit */int) (short)-5651)))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1] [0LL])) ? (((((/* implicit */_Bool) (unsigned short)12704)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_7 [i_1])))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) arr_5 [(_Bool)1] [i_1]))))));
        var_19 = ((long long int) arr_8 [i_1]);
        arr_9 [i_1] = ((/* implicit */long long int) arr_5 [22ULL] [i_1]);
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) arr_6 [(unsigned char)7] [i_1])) : (((/* implicit */int) arr_8 [i_1]))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 12783016822577731089ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 5663727251131820527ULL))))) : (((/* implicit */int) var_11))));
    }
}
