/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132186
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_10 *= ((arr_2 [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))));
        var_11 = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0]));
    }
    var_12 -= ((/* implicit */int) (-((-(var_3)))));
    var_13 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)255))));
    var_14 += ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-3172))))) ? (var_6) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_0)) > (((/* implicit */int) var_2)))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (var_5))))))));
}
