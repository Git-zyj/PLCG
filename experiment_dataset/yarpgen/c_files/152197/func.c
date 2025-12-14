/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152197
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (int i_4 = 4; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) arr_12 [i_1] [i_1]))));
                                arr_13 [i_2] [i_3] [i_3] [i_3] [(short)8] [i_3] [i_2] = ((/* implicit */int) ((498042527U) > (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)154), (((/* implicit */unsigned char) (_Bool)1))))))));
                                var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) ((unsigned char) (~(((/* implicit */int) var_5))))))));
                                var_12 = (((!(((/* implicit */_Bool) arr_0 [i_0 - 1])))) || (((/* implicit */_Bool) (-(min((((/* implicit */long long int) var_5)), (arr_7 [i_0] [i_0 - 1] [i_0 - 1] [(short)13])))))));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (var_2)))) ? (((((/* implicit */unsigned long long int) 498042527U)) * (min((12ULL), (((/* implicit */unsigned long long int) arr_4 [(unsigned short)2])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_7);
}
