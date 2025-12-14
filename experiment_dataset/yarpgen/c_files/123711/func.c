/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123711
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */_Bool) (unsigned char)25);
                var_21 = max((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */long long int) arr_0 [i_0] [i_1 + 2])) : (var_1))), (((/* implicit */long long int) ((arr_0 [i_1] [i_1]) > (arr_0 [i_0] [i_1 + 1])))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (unsigned int i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_3] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) (_Bool)1)), (1909612464U))), (((/* implicit */unsigned int) max((arr_7 [i_2] [2LL]), (arr_7 [i_0] [i_1 + 2]))))));
                                var_22 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) max((2385354831U), (((/* implicit */unsigned int) arr_11 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))))) || (((/* implicit */_Bool) var_19)))));
                                var_23 = ((/* implicit */unsigned char) max((max((max((arr_6 [i_0]), (((/* implicit */unsigned int) arr_7 [i_3] [i_1])))), (max((1909612464U), (2385354831U))))), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_11 [i_0] [16U] [i_2] [i_3] [i_4] [16U] [i_2])) ? (var_9) : (arr_0 [i_1] [i_1]))), (max((arr_0 [i_3] [i_1]), (((/* implicit */int) arr_11 [i_4] [i_3] [i_0] [i_2] [i_1 + 1] [i_0] [i_0])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) 1487348135U))) ? (3080075244694504604LL) : (((/* implicit */long long int) 4294967295U))));
}
