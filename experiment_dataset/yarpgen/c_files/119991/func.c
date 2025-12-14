/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119991
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_16 += ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-13077))))), ((((!(((/* implicit */_Bool) var_4)))) ? (max((((/* implicit */unsigned long long int) var_0)), (2164663517184ULL))) : (((/* implicit */unsigned long long int) max((var_14), (((/* implicit */int) arr_4 [i_1] [i_1] [i_2] [i_2])))))))));
                            var_17 *= ((/* implicit */_Bool) min((((/* implicit */int) (signed char)-1)), (((int) (-(18446744073709551615ULL))))));
                        }
                    } 
                } 
                var_18 = ((((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1] [i_1])) ? (arr_7 [i_1] [i_1] [i_0] [i_1]) : (arr_7 [i_1] [i_1] [i_1] [i_1]))) ^ (min((arr_7 [i_1] [i_1] [i_1] [i_1]), (arr_7 [i_1] [i_0] [i_1] [i_1]))));
                var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])))))) ? (0ULL) : (((/* implicit */unsigned long long int) min((arr_9 [i_0] [i_0] [i_0] [i_0]), (arr_9 [i_0] [i_1] [i_0] [i_0]))))));
            }
        } 
    } 
    var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((8122892817500580609LL) << (((var_5) - (1102066149781493686ULL)))))))) ? (((/* implicit */unsigned int) var_4)) : ((~(0U)))));
}
