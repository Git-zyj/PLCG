/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128490
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
    var_13 = ((/* implicit */unsigned long long int) 398933544U);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_2 - 3] [i_2] [i_2 + 3])) ? (((unsigned int) arr_0 [i_0])) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (398933544U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_2 + 3])))))))) ? (((/* implicit */unsigned int) (+(((arr_5 [i_2]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)7))))))) : (((arr_5 [i_1]) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)24714))) : (arr_8 [i_2 + 3] [i_1] [i_1] [10]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0 - 1] [i_0])) ? (-2138917767) : (((/* implicit */int) arr_3 [i_1] [19U])))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */_Bool) arr_1 [i_0]);
                                var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) arr_6 [i_0])), (arr_2 [i_0])))) ? ((+(((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) arr_4 [i_3 - 1] [i_2] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_15 [i_0 - 1] [i_0 - 1] [i_2 - 4] [16] [(_Bool)1] [i_4] [i_4]) > (arr_15 [i_0 - 1] [i_1] [i_2 + 3] [i_2 + 3] [i_2] [i_2 + 3] [i_2]))))) : ((~(max((var_5), (((/* implicit */long long int) arr_8 [12LL] [i_2] [i_1] [i_0])))))));
                                arr_16 [i_4] [i_1] [5U] [i_2 + 3] [i_0] [i_1] [i_0] = ((/* implicit */long long int) (-(((((((/* implicit */_Bool) (short)-24706)) ? (((/* implicit */int) (_Bool)1)) : (arr_14 [i_0 - 1] [i_1] [i_1] [i_2] [i_2 + 4] [i_3] [i_4]))) * (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [i_0] [i_4])) : (arr_7 [i_0 - 1] [(_Bool)1] [(_Bool)1] [i_4])))))));
                                var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) max((arr_5 [i_0 - 1]), (arr_5 [i_2 + 4]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
