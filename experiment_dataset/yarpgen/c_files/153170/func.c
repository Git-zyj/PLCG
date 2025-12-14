/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153170
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
    var_10 = ((/* implicit */signed char) (((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-106)))));
    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) max((var_5), (var_5))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] [6ULL] |= ((/* implicit */_Bool) (+(((/* implicit */int) (!(arr_1 [i_1 + 1]))))));
                arr_5 [i_1] = ((((/* implicit */unsigned long long int) 2110998938U)) + (min((0ULL), (((/* implicit */unsigned long long int) arr_0 [i_1 - 1] [i_1 + 1])))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_15 [i_1] [i_1] [i_3] [i_3] [i_1] [i_3] = ((/* implicit */int) min((arr_7 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0]))))))))));
                                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (+(((/* implicit */int) (_Bool)0)))))));
                            }
                        } 
                    } 
                } 
                var_13 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) min((var_3), (((/* implicit */unsigned short) (_Bool)0)))))))) & ((+(18446744073709551615ULL)))));
            }
        } 
    } 
    var_14 &= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_8)), (var_9))))))));
}
