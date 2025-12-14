/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108117
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
    var_20 *= ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 11268936344160083223ULL))))), (((unsigned long long int) 15314267321556450507ULL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (15314267321556450477ULL));
    var_21 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 15314267321556450477ULL))))), ((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_16)) : (var_8)))))));
    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) max((((((/* implicit */unsigned long long int) min((var_11), (var_11)))) * ((-(15314267321556450452ULL))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_10))))) ? (max((3132476752153101139ULL), (((/* implicit */unsigned long long int) var_18)))) : (((/* implicit */unsigned long long int) ((unsigned int) var_6))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)105))) : (15314267321556450452ULL)));
        var_24 = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2975596138501699428ULL)) ? (((/* implicit */int) (signed char)-1)) : (var_19)))) ? (var_13) : (((/* implicit */unsigned int) ((var_15) ? (var_19) : (((/* implicit */int) (unsigned char)15))))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(((214929804) & (((/* implicit */int) arr_1 [i_0] [i_0]))))))), (min((3132476752153101139ULL), (((/* implicit */unsigned long long int) arr_0 [22LL]))))));
        arr_3 [i_0 - 3] [i_0] = ((/* implicit */unsigned long long int) ((long long int) (_Bool)1));
    }
}
