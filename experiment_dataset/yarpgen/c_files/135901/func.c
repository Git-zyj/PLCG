/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135901
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */long long int) (-((~(((/* implicit */int) var_2))))))) ^ (min((-5618590474562741291LL), (((/* implicit */long long int) ((-5545927589711005910LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
    var_17 += ((/* implicit */unsigned short) var_14);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_18 = ((/* implicit */short) (~((~(arr_1 [i_0])))));
        var_19 = ((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_0])), (((var_15) >> (((((unsigned int) var_0)) - (45158U)))))));
        var_20 |= ((/* implicit */int) arr_1 [i_0]);
        var_21 = ((/* implicit */int) ((long long int) arr_0 [i_0]));
    }
}
