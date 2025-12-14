/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11380
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
    var_20 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) min((-3429736193796413722LL), (((/* implicit */long long int) (unsigned char)172))))), (min((var_15), (((/* implicit */unsigned long long int) var_17)))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))))))));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) != (((/* implicit */int) ((889522345) == (((/* implicit */int) (signed char)-100)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_22 = min((min((((/* implicit */unsigned int) arr_2 [i_0] [i_1] [i_0])), (var_12))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_0]))))));
                var_23 = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned long long int) 3361256977U)), (2956778781096696351ULL)))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1402175096)) ? (((/* implicit */int) (unsigned char)151)) : (((/* implicit */int) (unsigned short)3))))) ? (((((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_2] [i_0] [i_4] [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_19)) || (((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_7))));
                                var_25 &= ((/* implicit */unsigned int) ((4294967295U) != (((/* implicit */unsigned int) (+(((/* implicit */int) var_8)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_26 = var_2;
}
