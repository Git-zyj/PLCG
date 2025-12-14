/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147982
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
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) max(((unsigned char)105), ((unsigned char)150))))));
    var_16 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_0)), (var_14)));
    var_17 = ((/* implicit */long long int) var_8);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_18 |= ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)150))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_0]))));
        arr_4 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
    }
    for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 2) 
    {
        var_19 &= ((/* implicit */unsigned char) min((arr_1 [i_1]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)150)) > (((/* implicit */int) arr_6 [18ULL]))))))))));
        var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1])) ^ ((~(((/* implicit */int) arr_7 [i_1])))))))));
        var_21 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_6 [(_Bool)1]), (((/* implicit */unsigned short) arr_2 [i_1 - 1])))))) * (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)150))) / (709390123U)))));
    }
}
