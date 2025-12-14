/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152107
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
    var_20 = ((/* implicit */unsigned long long int) var_9);
    var_21 = ((/* implicit */_Bool) var_0);
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((-(((/* implicit */int) (_Bool)1))))))) ? ((+(((((/* implicit */_Bool) (signed char)-68)) ? (-1199878574) : (((/* implicit */int) var_17)))))) : (((/* implicit */int) var_18))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_23 = ((/* implicit */int) min((var_23), (((int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) 433962628)), (3307077512648976615LL)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) max((max((-957492067), (((/* implicit */int) arr_1 [i_0])))), (min((arr_2 [i_0]), (((/* implicit */int) arr_1 [i_0]))))));
        arr_4 [i_0] [11LL] = ((/* implicit */_Bool) 171667017);
        var_24 = ((/* implicit */_Bool) (-(((/* implicit */int) var_5))));
        var_25 = ((/* implicit */signed char) arr_1 [i_0]);
    }
}
