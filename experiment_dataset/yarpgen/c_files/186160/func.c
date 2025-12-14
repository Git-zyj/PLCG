/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186160
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_15 += ((/* implicit */signed char) (_Bool)1);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))) : (((((/* implicit */_Bool) arr_0 [(short)14] [5LL])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))) ? (((((/* implicit */_Bool) -8961119939870050440LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)204))) : (-9223372036854775794LL))) : (((((long long int) arr_5 [i_0] [i_1])) << (((arr_0 [i_0] [i_0]) - (12234762370038700287ULL)))))));
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (-(((/* implicit */int) var_6)))))));
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)13)) ? (((/* implicit */unsigned int) -2806714)) : (0U)));
                arr_10 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) arr_3 [i_0]);
            }
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned short)3852)) << (((arr_0 [(unsigned char)11] [(unsigned short)23]) - (12234762370038700289ULL))))), (((/* implicit */int) arr_4 [i_0]))))) / (9218572445075214904ULL)));
            var_20 = ((/* implicit */signed char) arr_9 [(short)8] [16U] [(short)8]);
        }
    }
    var_21 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)54))))) ? (((var_6) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2813))) : (-7474191936536332720LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_11))))))));
    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (signed char)59))))) + (min((((/* implicit */unsigned int) var_11)), (var_10))))), (((/* implicit */unsigned int) var_4)))))));
    var_23 = ((((var_6) ? (((/* implicit */int) (signed char)54)) : (((((/* implicit */_Bool) (signed char)85)) ? (((/* implicit */int) (unsigned short)2813)) : (((/* implicit */int) var_4)))))) & (((/* implicit */int) (unsigned short)2810)));
}
