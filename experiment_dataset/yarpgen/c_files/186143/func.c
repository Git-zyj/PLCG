/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186143
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ (((6076395477766997395ULL) | (((/* implicit */unsigned long long int) 5478282913107500939LL))))))) ? (((/* implicit */long long int) ((((/* implicit */int) min((var_3), (var_2)))) | (((/* implicit */int) max(((short)-16), ((short)29003))))))) : (((max((var_1), (((/* implicit */long long int) var_2)))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_2))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 8; i_2 += 3) 
                {
                    for (short i_3 = 3; i_3 < 9; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_11 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_7 [(short)9] [i_1 + 1] [i_2 - 1] [i_4])) || (((/* implicit */_Bool) arr_11 [i_0] [i_1 + 1] [i_2 - 1] [i_2])))) || (((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_5))))));
                                arr_12 [i_3] [i_1] [i_2 + 1] [i_4] [i_4] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_4]))) - (1164249856U)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_1]))))) : (arr_2 [i_2 + 2] [i_2 - 1] [(signed char)1])))));
                                var_12 = ((/* implicit */int) ((unsigned int) (signed char)-64));
                            }
                        } 
                    } 
                } 
                var_13 = ((((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1] [i_1 + 1] [i_1 + 1])) || (((/* implicit */_Bool) (unsigned short)21650)))) ? (((/* implicit */int) (short)-15194)) : (((/* implicit */int) (signed char)34)));
            }
        } 
    } 
}
