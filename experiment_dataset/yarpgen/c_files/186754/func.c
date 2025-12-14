/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186754
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
    var_12 = ((/* implicit */unsigned int) min((0ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_5) / (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) ((unsigned short) var_1))) : (((/* implicit */int) max((var_4), (var_4)))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */short) (unsigned short)16384);
        arr_4 [i_0] = ((/* implicit */unsigned char) (~(max((((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)192))))), (((/* implicit */unsigned int) ((int) arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        var_13 = ((/* implicit */int) min((var_13), ((+(((/* implicit */int) var_4))))));
        arr_8 [i_1] &= (~(((9223372036854775788LL) - (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_1]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 3) 
    {
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) var_1))));
        arr_11 [i_2] [i_2 + 2] = ((/* implicit */short) arr_1 [i_2 + 1]);
    }
    var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 9223372036854775781LL)))) == (((var_3) % (max((var_1), (var_7)))))));
}
