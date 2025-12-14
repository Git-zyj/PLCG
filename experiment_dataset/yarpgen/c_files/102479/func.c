/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102479
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
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) ((-4716274198046117642LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) < (511)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) -1199102794554011054LL)), (18446744073709551599ULL)));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) 511)) ? (((/* implicit */int) arr_0 [i_0] [14])) : (((/* implicit */int) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) (_Bool)0)))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (_Bool)1);
        arr_4 [i_0] = ((/* implicit */_Bool) ((4716274198046117643LL) | (((/* implicit */long long int) ((/* implicit */int) var_15)))));
    }
    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) var_18))));
}
