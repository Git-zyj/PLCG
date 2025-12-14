/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168046
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
    var_16 = ((/* implicit */unsigned long long int) ((((long long int) (_Bool)1)) * (562949953421311LL)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(17851442945088618398ULL)))) ? (((/* implicit */unsigned long long int) var_2)) : (((unsigned long long int) arr_1 [i_0] [i_0]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_4)))) - (((var_3) - (((/* implicit */unsigned long long int) arr_2 [11ULL] [11ULL])))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (17851442945088618393ULL) : (12741863753827234598ULL))));
        var_17 = ((/* implicit */unsigned long long int) var_2);
    }
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) var_9)), (var_5))))))))));
    var_19 = min((((/* implicit */long long int) (unsigned short)65535)), (-1152271358117889632LL));
}
