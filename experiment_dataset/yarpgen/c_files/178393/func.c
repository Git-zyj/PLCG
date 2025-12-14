/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178393
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
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 - 1])) * (((/* implicit */int) arr_1 [i_0]))))))) && (((/* implicit */_Bool) var_11))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0 - 1]))) ? (((/* implicit */int) ((short) max((((/* implicit */unsigned long long int) var_13)), (17082373310979326775ULL))))) : (((/* implicit */int) (!(arr_0 [i_0 + 1]))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0 - 2]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) -1011134722383191652LL)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) & (max((((/* implicit */unsigned long long int) (short)-27133)), (1364370762730224829ULL)))))));
    }
    var_21 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */long long int) (((+(((/* implicit */int) (short)-27133)))) - (((/* implicit */int) max((var_11), (var_10)))))))));
}
