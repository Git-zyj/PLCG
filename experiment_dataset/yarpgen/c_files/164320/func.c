/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164320
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (0ULL) : (min((((/* implicit */unsigned long long int) var_2)), (((var_10) + (0ULL)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_16 = ((((/* implicit */_Bool) 16707579725130143180ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : ((-(0ULL))));
        var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_2)) != (var_9)));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            arr_5 [i_0] [i_0] [i_1 - 2] = ((/* implicit */short) 500693722U);
            arr_6 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13))));
        }
        for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            /* LoopNest 3 */
            for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        {
                            arr_16 [i_0] [(signed char)10] [i_4] [i_0] = 44716826U;
                            arr_17 [i_0] [15U] = ((/* implicit */int) var_6);
                            arr_18 [i_0] [i_4] [(signed char)7] [6] [i_0] = ((/* implicit */unsigned long long int) var_12);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 1; i_6 < 22; i_6 += 4) 
            {
                arr_22 [i_0] [i_2] [(signed char)22] [i_2] = ((/* implicit */long long int) (signed char)2);
                var_18 = ((/* implicit */signed char) ((0ULL) + (16707579725130143173ULL)));
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) 0ULL))));
                arr_23 [i_0] [i_2] [i_0] [i_6] = ((/* implicit */int) ((((/* implicit */unsigned long long int) 3794273573U)) * (18446744073709551607ULL)));
            }
        }
    }
}
