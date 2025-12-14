/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167998
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            var_19 *= ((/* implicit */unsigned long long int) max((arr_3 [i_1]), (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_7))))))))));
            var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) var_1)))));
        }
        var_21 -= ((/* implicit */signed char) var_8);
    }
    /* vectorizable */
    for (unsigned int i_2 = 2; i_2 < 15; i_2 += 2) 
    {
        var_22 = ((/* implicit */unsigned long long int) arr_0 [i_2]);
        var_23 = ((/* implicit */signed char) arr_2 [i_2]);
        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (-((-(((/* implicit */int) arr_6 [i_2])))))))));
    }
    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (var_10) : (((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (unsigned char)0)))))))));
    var_26 &= ((/* implicit */unsigned long long int) var_2);
}
