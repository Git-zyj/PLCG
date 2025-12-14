/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112551
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
    var_15 = ((/* implicit */unsigned int) var_10);
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max((var_9), (var_9))))) > (((((/* implicit */_Bool) ((unsigned int) 953003627U))) ? (((((/* implicit */long long int) ((/* implicit */int) var_10))) + (var_5))) : (((/* implicit */long long int) max((2147483647), (((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 8; i_3 += 3) 
                    {
                        {
                            arr_14 [i_3 - 2] [i_2] [i_3] [i_3 - 2] = max((3341963668U), (953003622U));
                            arr_15 [i_2] = ((/* implicit */unsigned int) ((long long int) ((524287U) / (524287U))));
                            var_17 = ((/* implicit */_Bool) min((var_17), (((((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_12))) != (953003651U)))) != (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (3341963669U) : (4294967276U)))) && (((/* implicit */_Bool) 3470259535U)))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    for (unsigned int i_5 = 1; i_5 < 9; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)123)), (3470259522U))))));
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_0))))) < (5327109385572513070ULL))) ? (((/* implicit */int) ((signed char) arr_16 [i_5 + 1] [i_5 + 1]))) : ((~(((/* implicit */int) arr_19 [i_0] [i_5 + 1] [i_4] [i_4])))))))));
                            }
                        } 
                    } 
                } 
                var_20 *= ((/* implicit */_Bool) var_12);
                arr_25 [i_0] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_0])) ^ (((/* implicit */int) arr_18 [i_0]))))), (((18446744073709551615ULL) & (((/* implicit */unsigned long long int) 953003627U))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) var_11);
}
