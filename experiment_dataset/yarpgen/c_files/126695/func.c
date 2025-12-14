/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126695
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
    var_17 = ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((int) 18446744073709551607ULL));
        var_18 = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_19 = ((signed char) arr_1 [(_Bool)1] [i_0]);
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */unsigned long long int) 4248938793U)) % (1580494660513326770ULL)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_21 = ((/* implicit */int) 15013504891694693062ULL);
        var_22 = ((/* implicit */signed char) ((((unsigned int) arr_3 [i_1] [i_1])) / (((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_1] [i_1])))))));
        var_23 = min((-5476375480120308692LL), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-6973))) >= (511U)))));
    }
    for (unsigned short i_2 = 4; i_2 < 16; i_2 += 4) 
    {
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2])) || (((/* implicit */_Bool) 10118842574103819545ULL)))))));
        var_25 ^= ((/* implicit */long long int) arr_9 [i_2 - 4]);
    }
    var_26 = ((/* implicit */short) 0U);
    var_27 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) >= (var_5)));
}
