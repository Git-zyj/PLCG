/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18237
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
    for (short i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                var_14 &= ((/* implicit */long long int) ((arr_3 [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_1] [18LL])))))));
                var_15 *= ((/* implicit */unsigned int) (+(((((/* implicit */int) var_3)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (short)-22285)))))))));
                var_16 = ((/* implicit */long long int) (short)5338);
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_0 - 3])) ? (arr_6 [i_4 + 2] [(short)8] [12ULL] [i_0 - 3]) : (arr_6 [i_4 + 2] [i_4] [i_4] [i_0 - 3]))), (((arr_6 [i_4 + 2] [i_0 - 3] [(short)3] [i_0 - 3]) + (arr_6 [i_4 + 2] [i_2] [i_2] [i_0 - 3])))));
                                var_18 = ((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (min((((/* implicit */long long int) (-(arr_1 [i_1 - 2] [i_2])))), ((-(9223372036854775807LL)))))));
                                var_19 = ((/* implicit */unsigned char) ((arr_8 [i_0] [i_0 - 4] [i_0 - 4] [i_1 + 1] [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3] [i_4 + 4]))) : (2117438243U))))))))));
                                var_20 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0 - 2] [i_1] [i_4 + 4] [i_0 + 2] [(unsigned char)9] [i_1 - 2])) >> (((/* implicit */int) arr_7 [i_0] [i_0] [i_4 - 1] [i_0 + 2] [i_4] [i_1 + 1]))))), (arr_9 [i_0 + 1] [i_1 - 2] [i_1 - 1])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = (((!(((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) var_2))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_13) - (2117438243U)))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) : (var_11));
    var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((var_11) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) <= (var_12)))))))), (var_9)));
    var_23 = ((/* implicit */unsigned int) var_2);
}
