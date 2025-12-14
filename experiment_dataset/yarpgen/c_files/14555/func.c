/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14555
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
    var_12 = ((/* implicit */unsigned char) (~((~(var_4)))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_0] [(signed char)9]);
        arr_5 [i_0] = ((/* implicit */signed char) (~(max((917504U), (var_4)))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 3) 
    {
        arr_9 [i_1] = ((/* implicit */signed char) 1893142477U);
        arr_10 [i_1] = ((/* implicit */long long int) (~((~(2401824819U)))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 1) 
    {
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_3))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_2]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2 + 4])))))));
        arr_14 [i_2] = (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_2]))))));
    }
    var_13 ^= ((/* implicit */unsigned short) var_11);
}
