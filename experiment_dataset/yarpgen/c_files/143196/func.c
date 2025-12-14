/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143196
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) var_14)) / (max((((((/* implicit */_Bool) 165706554645778227ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)96)))), (((/* implicit */int) var_14))))));
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((unsigned int) (+(min((9644189141880616080ULL), (((/* implicit */unsigned long long int) var_19))))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) 2124188728U))));
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)144)))) <= (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) arr_0 [i_0]))))))) ? (((arr_2 [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) arr_1 [i_0])))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_17)) & (((/* implicit */int) (unsigned char)7)))) << (((((/* implicit */int) arr_0 [i_0])) - (60764)))))))))));
    }
}
