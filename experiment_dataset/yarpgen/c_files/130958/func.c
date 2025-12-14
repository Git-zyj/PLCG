/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130958
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_6 [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)60326)))))));
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 20; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) 4966840082026548314LL);
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_12 [i_0])));
                            arr_15 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */signed char) ((min((((((/* implicit */int) arr_11 [i_0] [i_0] [i_0])) / (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((arr_14 [i_1] [i_1] [i_1]), (((/* implicit */signed char) arr_0 [i_0]))))))) == (((/* implicit */int) ((short) arr_8 [i_2 - 1] [i_3] [i_3])))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                            {
                                arr_19 [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_17))));
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (unsigned char)232))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 |= ((/* implicit */short) max((max((((/* implicit */int) min((((/* implicit */unsigned short) var_17)), (var_0)))), (min((((/* implicit */int) var_19)), (var_3))))), (((/* implicit */int) (unsigned char)232))));
}
