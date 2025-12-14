/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126269
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
    var_19 |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 1635051080U)) != (17475106875731026106ULL)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_0])), (1391667819599169306ULL)))) ? (((unsigned long long int) arr_1 [i_0])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))));
        var_20 |= ((/* implicit */unsigned short) ((0ULL) / (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (1896241377677752633ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        arr_5 [(unsigned char)9] |= ((/* implicit */signed char) ((short) max((((((/* implicit */int) var_18)) % (((/* implicit */int) var_10)))), (arr_2 [i_0]))));
    }
    var_21 = ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            {
                var_22 = ((/* implicit */signed char) var_0);
                var_23 = ((/* implicit */unsigned long long int) var_16);
            }
        } 
    } 
}
