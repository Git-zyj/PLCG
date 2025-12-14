/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106065
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
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        arr_3 [(unsigned char)4] &= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [4])) && (((var_2) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(_Bool)1]))))))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)28)) ? (-7272071259437580754LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_5)))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
    }
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2840400538993913521ULL)) ? (3154711389937379442LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)20)))))) ? (((/* implicit */int) ((unsigned short) var_16))) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) max(((~(var_13))), (((/* implicit */long long int) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_16)))))))) : ((+(var_2)))));
}
