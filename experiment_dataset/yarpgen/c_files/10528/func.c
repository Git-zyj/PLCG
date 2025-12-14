/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10528
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
    var_18 = ((/* implicit */unsigned char) ((1152921504606846975LL) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) != (max((var_5), (((/* implicit */int) (_Bool)1))))))))));
    var_19 = ((/* implicit */int) ((unsigned char) var_0));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 - 3] [i_0])) && (((/* implicit */_Bool) ((arr_0 [i_0 + 1] [i_0]) - (arr_0 [i_0 - 1] [i_0]))))));
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1])) * (((((/* implicit */int) (short)28830)) + (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_0] [i_0])), (var_0)))) & (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (short)-28831)) ? (arr_2 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127))))) <= (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)6144))))))))));
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) max((((long long int) ((((/* implicit */_Bool) arr_0 [i_0] [(unsigned char)10])) ? (((/* implicit */int) arr_1 [i_0] [12LL])) : (((/* implicit */int) (short)-6144))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [12LL])) ? (((/* implicit */int) arr_4 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0] [(signed char)6]))))))))));
                var_23 = ((/* implicit */signed char) arr_3 [i_0] [i_1] [(_Bool)1]);
            }
        } 
    } 
    var_24 = ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((((/* implicit */int) var_17)) + (2147483647))) << (((((/* implicit */int) (short)6142)) - (6142)))))))) >= ((((_Bool)1) ? (((-713810104656211031LL) % (((/* implicit */long long int) ((/* implicit */int) (short)28830))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) (short)6169)) : (((/* implicit */int) (unsigned short)50290))))))));
}
