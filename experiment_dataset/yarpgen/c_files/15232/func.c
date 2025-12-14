/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15232
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
    var_19 ^= ((/* implicit */signed char) ((((/* implicit */int) ((signed char) max((((/* implicit */short) (signed char)51)), (var_8))))) | (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) == (var_0))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((+(var_7)))))) && ((!(((/* implicit */_Bool) var_13))))));
        arr_3 [i_0] = ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-113)) + (2147483647))) << (((((/* implicit */int) ((_Bool) 4909332713284368308LL))) - (1)))))) ? ((-9223372036854775807LL - 1LL)) : ((-9223372036854775807LL - 1LL)));
        arr_4 [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */long long int) min((var_7), (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))))), (max((9168413140439210189LL), (((/* implicit */long long int) (short)20954))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_20 &= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((/* implicit */int) ((((/* implicit */int) var_16)) >= (((/* implicit */int) arr_7 [i_2] [i_1]))))) : ((-(((/* implicit */int) var_18))))))) >= (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_0)))) | (((arr_6 [i_2] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_0])))))))));
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_0))));
                    var_22 = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) (-(var_5)))), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [8U] [(_Bool)1]))) : (var_13))))), (-4833150524253432806LL)));
                    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2035778210223500969LL)) ^ (var_15)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0] [i_1])) % (((/* implicit */int) var_6))))) : (arr_6 [(short)10] [(_Bool)1]))) <= (min((((/* implicit */long long int) var_12)), ((~((-9223372036854775807LL - 1LL)))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] &= ((/* implicit */short) (-(var_9)));
                                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) max((((/* implicit */unsigned long long int) arr_5 [i_2] [14LL] [i_2])), (((((((/* implicit */unsigned long long int) var_1)) - (2600920132802861659ULL))) + (((/* implicit */unsigned long long int) ((var_0) + (2370061855U)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_25 ^= ((/* implicit */signed char) (unsigned short)28888);
    }
}
