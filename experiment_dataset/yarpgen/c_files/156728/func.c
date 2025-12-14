/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156728
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_20 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-115))) : (((((/* implicit */_Bool) (signed char)118)) ? (arr_11 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-123)))))));
                                arr_16 [i_0] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [12LL] [(short)14] [i_0] [10ULL] [12U] [i_0])) ? (1327606581) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_8 [i_0] [i_0])) == (4796059712183183727LL))))) : (var_19))));
                                arr_17 [i_0] [i_0] [i_1] [i_2] [i_3] [(short)12] [i_0] = var_17;
                                var_21 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_3 [i_4]))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) arr_14 [(short)0] [10ULL] [i_2] [i_4] [10] [(short)0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)122))) : (arr_5 [i_1] [i_1]))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) arr_14 [i_1] [i_0] [2ULL] [i_1] [i_1] [i_0]))));
                    var_23 = ((/* implicit */short) var_19);
                }
            } 
        } 
    } 
    var_24 *= ((/* implicit */signed char) min((((/* implicit */unsigned int) var_0)), (((((/* implicit */_Bool) var_4)) ? (var_19) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))));
}
