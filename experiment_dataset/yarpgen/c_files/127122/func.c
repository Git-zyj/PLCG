/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127122
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
    var_20 |= ((/* implicit */long long int) min((var_19), (((/* implicit */unsigned char) var_5))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) min((var_7), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (var_9))))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (~((+(arr_4 [i_0] [i_0] [i_0] [i_0]))))))));
                    arr_8 [i_1] [i_1] [i_1] |= ((/* implicit */int) ((var_7) | (((/* implicit */unsigned long long int) arr_5 [i_1 - 2] [i_1] [i_1] [i_1 - 2]))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 2; i_3 < 12; i_3 += 4) 
                {
                    for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [3ULL] [i_3 + 2] [i_1 - 1] [i_1] [i_0])) && (((((/* implicit */_Bool) ((((var_9) + (2147483647))) >> (((var_7) - (14177662108161908135ULL)))))) && (((/* implicit */_Bool) arr_13 [i_0 + 2] [i_0] [i_0 + 2] [i_0] [i_0 + 2]))))));
                            /* LoopSeq 1 */
                            for (int i_5 = 0; i_5 < 14; i_5 += 2) 
                            {
                                var_24 = ((/* implicit */_Bool) 4294967278U);
                                arr_17 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) var_13))))));
                            }
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) arr_5 [(unsigned char)5] [i_1 - 1] [i_0] [i_4])) > (0U)))) != ((~(((/* implicit */int) var_8))))))) : (((/* implicit */int) var_13))));
                        }
                    } 
                } 
            }
        } 
    } 
}
