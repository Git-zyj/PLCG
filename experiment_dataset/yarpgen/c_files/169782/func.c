/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169782
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
    for (long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_15 -= ((/* implicit */unsigned short) max((max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1]))), (max((arr_1 [i_0 - 2]), (arr_1 [i_0 - 1])))));
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [(unsigned char)14] [i_0]))))) ? (((arr_0 [i_1 + 1]) | (arr_0 [i_1 + 3]))) : (arr_0 [i_1 + 3]))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) min((arr_2 [i_3 + 3] [i_1 + 2]), (arr_2 [i_3 - 2] [i_1 + 3])))) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_0]))))))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (max((arr_2 [i_2 - 1] [i_2 - 1]), (arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 2] [5]))))))))));
                            var_18 -= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 1])) >= (((/* implicit */int) arr_1 [i_0 + 1]))))) & (((/* implicit */int) ((min((arr_4 [i_0] [i_1] [i_3]), (((/* implicit */unsigned long long int) (short)-11500)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1 + 3])) || (((/* implicit */_Bool) arr_6 [i_0] [(unsigned short)4] [16LL] [16ULL] [i_1 + 3] [i_1 + 3])))))))), (((arr_7 [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_1] [i_1 + 2] [i_1 + 3]) & (arr_7 [i_1] [3LL] [i_1] [i_1] [i_1 + 2] [i_1 + 1])))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))))) ? (((((/* implicit */_Bool) var_13)) ? (max((var_9), (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (9223372036854775807LL) : (((/* implicit */long long int) var_13))))))) : (var_9))))));
    var_21 = ((/* implicit */long long int) ((((_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) ((_Bool) var_4))) : (((((/* implicit */_Bool) var_14)) ? ((+(((/* implicit */int) (unsigned short)64295)))) : ((+(((/* implicit */int) var_3))))))));
    var_22 = ((/* implicit */unsigned short) ((int) min((((unsigned short) var_7)), (((/* implicit */unsigned short) min((((/* implicit */short) var_7)), (var_6)))))));
}
