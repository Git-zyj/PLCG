/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176122
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
    var_16 = ((/* implicit */long long int) var_11);
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4323455642275676160LL)) ? (((int) ((var_0) >> (((((/* implicit */int) var_5)) + (28112)))))) : (max(((+(((/* implicit */int) var_8)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)0)) : (5)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                            {
                                var_18 = ((/* implicit */_Bool) ((var_15) ? (-5) : (((/* implicit */int) (short)32757))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 2233785415175766016ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (2233785415175766016ULL)));
                            }
                            arr_16 [i_1] [i_2] [i_3 + 3] = ((/* implicit */int) 0LL);
                            arr_17 [i_0 - 1] [i_1] [i_1] [i_3 + 3] = ((/* implicit */long long int) max(((-(((/* implicit */int) var_13)))), (min((((arr_5 [i_3] [i_1] [i_2]) % (2147483643))), ((~(((/* implicit */int) var_7))))))));
                            var_19 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (signed char)0)))) ? (((((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)0))))) ^ (11U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((10) * (13)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_3))))))))));
                            arr_18 [i_3] [i_1] [i_2] [i_1] [i_1] [i_0 + 1] = ((/* implicit */unsigned long long int) 0LL);
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((-5) % (((/* implicit */int) (short)32758)))))))) * ((-(((/* implicit */int) arr_2 [i_1] [i_0 + 1]))))));
            }
        } 
    } 
}
