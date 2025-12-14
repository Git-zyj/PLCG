/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131106
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
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned int) var_4)), (343284177U))), (((/* implicit */unsigned int) (((_Bool)1) || (((/* implicit */_Bool) var_9)))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) >= (((((/* implicit */_Bool) 3951683119U)) ? (-2218168579094917215LL) : (((/* implicit */long long int) 3951683121U))))))) : (((/* implicit */int) var_8)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0]))))), (((((/* implicit */_Bool) -1556479715)) ? (3951683119U) : (arr_10 [i_0] [i_1] [14LL] [i_3] [i_4] [i_0])))))) ? (min(((-(((/* implicit */int) (_Bool)1)))), ((+(1252650116))))) : (((((/* implicit */int) ((unsigned short) (-9223372036854775807LL - 1LL)))) + (((/* implicit */int) (unsigned short)58395))))));
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)3)) ^ ((+(((/* implicit */int) arr_4 [i_0]))))));
                                var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (!((_Bool)1)))), (var_1))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) max(((~(9223372036854775807LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967288U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))))));
                    arr_14 [i_0] [i_1] [i_2] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_10 [i_2 + 2] [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])) ? (arr_10 [i_2 + 2] [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]) : (((/* implicit */unsigned int) arr_12 [i_2 + 2] [i_2 - 1] [i_2 - 1] [i_2 + 1])))));
                }
            } 
        } 
    } 
}
