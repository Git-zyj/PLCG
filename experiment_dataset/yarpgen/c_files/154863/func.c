/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154863
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                var_14 += ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_4)), (var_7)))), (((3464225256319188486ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-36))))))), (((/* implicit */unsigned long long int) ((unsigned int) 1637831330)))));
                arr_4 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1 - 1]))))), (min((arr_3 [i_0] [i_1 - 1]), (arr_3 [i_0] [i_1 - 1])))));
                var_15 ^= ((/* implicit */unsigned short) var_4);
                var_16 *= var_9;
            }
        } 
    } 
    var_17 += ((/* implicit */short) min(((+(((/* implicit */int) var_9)))), (((((/* implicit */_Bool) (unsigned short)14931)) ? (((/* implicit */int) (signed char)-36)) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_3))))))));
}
