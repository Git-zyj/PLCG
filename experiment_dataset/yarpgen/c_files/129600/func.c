/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129600
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
    var_13 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_14 = ((arr_9 [i_0] [i_0] [i_2] [i_2]) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) (+(arr_13 [i_3] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
                                arr_15 [i_0] [i_1] [i_2] [i_2] [i_0] [11ULL] = ((/* implicit */unsigned int) (signed char)112);
                            }
                        } 
                    } 
                } 
                arr_16 [i_1] [(_Bool)1] [(_Bool)1] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1]))))) & (((/* implicit */int) arr_1 [i_1 - 1]))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1])) * (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)8])))))));
            }
        } 
    } 
    var_15 += ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2764678324U)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)32766)) < (((/* implicit */int) (signed char)113)))))) : (((((/* implicit */_Bool) var_2)) ? (-9223372036854775802LL) : (((/* implicit */long long int) var_7))))))) : ((+(6587654487769740406ULL))));
}
