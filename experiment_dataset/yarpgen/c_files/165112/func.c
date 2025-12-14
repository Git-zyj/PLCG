/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165112
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
    var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(7757424896068630981LL)))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */int) ((((/* implicit */int) var_1)) != (-1852324306)))) : (((/* implicit */int) var_2))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] [(signed char)0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 263362732))));
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((long long int) 18446744073709551607ULL)))));
                var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL)));
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) max((-4266842546976360298LL), (((/* implicit */long long int) var_10))))), (18446744073709551607ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)255)), ((short)1024)))))));
            }
        } 
    } 
    var_23 ^= ((/* implicit */unsigned int) var_1);
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) 315871308)), (((((/* implicit */_Bool) var_12)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))) || (((/* implicit */_Bool) var_13))));
    var_25 = ((/* implicit */unsigned short) min(((signed char)-32), (((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)12))))))))));
}
