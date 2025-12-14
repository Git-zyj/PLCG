/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150931
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
    var_18 = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_14))))), (11612464752694653878ULL))) * (((/* implicit */unsigned long long int) var_3))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) var_0);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_2 - 2] [i_2 - 1] [i_2 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_0 [i_0])))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_2 + 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2 + 1]))) : (var_8)))));
                        var_20 += ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 2] [i_2]))) : ((-9223372036854775807LL - 1LL)));
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (131072U))))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 2; i_4 < 15; i_4 += 2) 
                        {
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) var_15)))))));
                            var_23 = ((/* implicit */short) 1713105494U);
                        }
                        arr_13 [i_0 - 1] [i_2] [i_2] [i_3] &= arr_6 [i_1 + 1] [i_1 - 1] [i_1 + 1];
                    }
                } 
            } 
        } 
    }
    var_24 = (short)-22014;
}
