/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184878
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            var_17 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) var_16)) >= (((/* implicit */int) (signed char)-55)))))));
            var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : ((-(((/* implicit */int) var_7))))));
        }
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)44))) > (((((/* implicit */_Bool) 9923359753214790414ULL)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-55)))))));
        var_19 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))));
    }
    var_20 = ((/* implicit */unsigned long long int) var_0);
}
