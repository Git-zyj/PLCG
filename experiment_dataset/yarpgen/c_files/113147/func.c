/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113147
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_14 = max((((1883747016U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))), (((/* implicit */unsigned int) min((((/* implicit */int) arr_1 [i_0] [i_0])), (-1529140732)))));
        arr_2 [i_0] [(signed char)3] = ((/* implicit */unsigned char) 18446744073709551615ULL);
        var_15 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0] [i_0]))))), (((((/* implicit */_Bool) 479054106979657630ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (max((-26LL), (((/* implicit */long long int) var_2))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_16 -= ((/* implicit */signed char) var_9);
        arr_5 [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))));
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) -534096894))));
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (-(var_0))))));
    }
    var_19 ^= ((/* implicit */_Bool) var_2);
    var_20 ^= ((/* implicit */_Bool) var_13);
    var_21 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_11)), (max((max((var_0), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11)))))))));
}
