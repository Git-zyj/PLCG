/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121328
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
    var_11 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))), (((((/* implicit */_Bool) (+(13887409578172628475ULL)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))) : (var_9)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */signed char) max(((~(arr_1 [i_0] [i_0]))), (arr_1 [i_0] [i_0])));
                var_13 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (4559334495536923141ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) << (((((/* implicit */int) var_10)) - (17016))))))));
                var_14 = ((/* implicit */unsigned int) arr_0 [i_0]);
            }
        } 
    } 
    var_15 = var_10;
}
