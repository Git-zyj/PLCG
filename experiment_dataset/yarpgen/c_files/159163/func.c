/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159163
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_9)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_5)));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) ((((((var_5) + (9223372036854775807LL))) >> (((((/* implicit */int) var_6)) + (14))))) | (((/* implicit */long long int) (~(((/* implicit */int) var_2))))))))));
                arr_5 [i_0 - 1] [i_0] [i_1] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_3 [i_1])), (arr_2 [i_0])))) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) arr_0 [i_0 - 1] [(unsigned short)7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (arr_2 [i_0 - 1])))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_12 ^= ((/* implicit */long long int) min((max((((((/* implicit */int) var_8)) >> (((((/* implicit */int) var_1)) - (49752))))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))))), (((((_Bool) arr_6 [i_2] [i_1] [i_0 + 1])) ? (((/* implicit */int) (!(var_2)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) arr_4 [i_0])))))))));
                            var_13 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((arr_2 [i_3]), (((/* implicit */long long int) arr_9 [i_0] [i_1] [i_1] [i_1] [i_2] [i_0]))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8)))) : (((((/* implicit */int) arr_3 [i_1])) / (((/* implicit */int) (signed char)-49)))))) | (((/* implicit */int) min((((/* implicit */unsigned short) max((((/* implicit */short) (_Bool)1)), (var_7)))), (arr_8 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3]))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_4 [i_0 + 2])), (arr_7 [i_0 + 1] [i_0] [i_0 + 2])))), (((unsigned long long int) arr_7 [i_0 + 2] [i_0] [i_0 + 2]))));
            }
        } 
    } 
}
