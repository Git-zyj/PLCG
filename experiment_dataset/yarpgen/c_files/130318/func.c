/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130318
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
    var_18 = var_14;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [1] [i_1] [4LL] = ((/* implicit */long long int) max((var_15), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)34181)) ? (1747103438) : (var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : ((~(arr_1 [i_0] [i_0])))))));
                var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_16) % (((/* implicit */unsigned long long int) arr_3 [i_1] [i_0]))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) % (var_1)))) ? (2936662730U) : (max((2936662730U), (arr_3 [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    var_20 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0] [i_0])) ? (2936662730U) : (arr_6 [i_2] [i_1] [i_2] [i_1]))), (((2936662730U) - (((/* implicit */unsigned int) -1534549223)))))))));
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_2])) % (((/* implicit */int) arr_0 [i_0])))))));
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0]))))), (18446744073709551615ULL))))));
                }
                for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    var_23 = var_13;
                    arr_13 [i_0] [i_1] [i_3] = ((/* implicit */signed char) ((short) (~((~(1ULL))))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_11))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (max((1295223654110879042LL), (((/* implicit */long long int) 2147483647))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (((var_8) % (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)20)) % (1750775594))))))));
    var_25 = ((/* implicit */long long int) var_9);
    var_26 = ((/* implicit */_Bool) min((var_26), (var_13)));
}
