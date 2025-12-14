/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107255
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
    var_19 ^= ((/* implicit */unsigned int) var_9);
    var_20 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) var_11)), (var_3))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((short) (short)29537))))))));
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((var_11) <= (((/* implicit */int) ((short) ((unsigned char) (unsigned char)18)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_22 = ((/* implicit */short) min((((/* implicit */unsigned int) ((int) (unsigned char)16))), (((unsigned int) arr_2 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 4; i_2 < 14; i_2 += 2) 
            {
                {
                    var_23 *= ((/* implicit */_Bool) arr_3 [i_2] [i_0] [i_0]);
                    arr_8 [i_0] [i_0] [i_2 - 4] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) (short)32767)))));
                    /* LoopNest 2 */
                    for (short i_3 = 4; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */short) max((((/* implicit */int) arr_2 [i_0] [13])), ((-(((/* implicit */int) arr_12 [i_1 + 1] [i_2 - 3] [i_3 - 3] [i_4] [(unsigned char)6]))))));
                                var_25 = ((/* implicit */int) (((~(((((/* implicit */_Bool) arr_5 [i_3] [7ULL] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_11 [i_0] [i_0] [i_0] [i_3 + 2]))))) / (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3 + 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
