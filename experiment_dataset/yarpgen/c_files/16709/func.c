/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16709
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
    var_10 += ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) var_1))) & (((/* implicit */int) (signed char)-92))));
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned short i_3 = 4; i_3 < 13; i_3 += 2) 
                    {
                        for (long long int i_4 = 2; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((-1590453888637448942LL), (((/* implicit */long long int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) 1165670553388074548LL)) : (18446744073709551615ULL))) | (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 0ULL)) ? (4294967295U) : (0U))))))));
                                var_13 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) max((-5372212562074299878LL), (((/* implicit */long long int) 1584837145U))))) ? (((/* implicit */unsigned long long int) ((4294967295U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4])))))) : (arr_5 [0LL] [13ULL] [i_2 - 1] [i_2]))));
                                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_4 [i_4 + 2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_11 [i_4 + 1] [i_4] [i_4] [i_4] [i_4]))))))) ? (((/* implicit */unsigned long long int) (~(1167124047U)))) : (var_3)));
                            }
                        } 
                    } 
                } 
                arr_12 [i_1 - 2] [i_1 + 2] [(short)3] = ((/* implicit */unsigned int) arr_11 [i_1] [(short)4] [i_1 + 2] [i_1 - 2] [i_1]);
            }
        } 
    } 
}
