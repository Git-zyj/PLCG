/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127704
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_19)), (((((/* implicit */_Bool) max((arr_1 [(_Bool)1] [(_Bool)1]), (var_18)))) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_2 [i_1])), (arr_1 [i_0] [i_1])))) : (((unsigned int) -2020894370))))));
                arr_5 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) ((1407238969) > (((/* implicit */int) arr_2 [i_1 + 1]))))), (((signed char) var_2))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) -2020894370)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))) < (((/* implicit */unsigned long long int) min((arr_1 [i_0] [i_1]), (((/* implicit */int) var_7)))))))) < (((((/* implicit */_Bool) ((var_14) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)4)))))) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))))));
                var_21 = ((/* implicit */_Bool) ((unsigned long long int) ((long long int) (unsigned char)134)));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_7);
    var_23 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) 635546369630583924LL)) ? (((/* implicit */int) (unsigned char)83)) : (((/* implicit */int) (signed char)0)))));
    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)85)) ? (((/* implicit */int) (short)26)) : (-1480796104)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)251)), (var_16)))) ? (((/* implicit */int) ((0ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251)))))) : (((/* implicit */int) min((var_17), (var_10))))))) : ((+(11656972752336175718ULL)))));
}
