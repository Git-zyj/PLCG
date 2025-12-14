/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156514
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-21)), (15ULL))))))) ^ (((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */int) (short)38))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) max((min((((/* implicit */int) ((unsigned char) -1087050807))), ((+(1087050807))))), ((+(((/* implicit */int) var_4))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) 1087050807);
                                var_19 = ((/* implicit */int) arr_11 [i_0] [i_0]);
                                var_20 = ((/* implicit */unsigned long long int) (((~(arr_9 [i_0] [(unsigned char)8] [i_2] [i_0 + 2] [i_4] [(_Bool)1]))) | (((((/* implicit */int) (unsigned char)169)) ^ (((/* implicit */int) (short)-21))))));
                                var_21 *= ((/* implicit */unsigned char) arr_12 [i_0] [i_1] [i_2] [(unsigned char)15]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (max(((-(((/* implicit */int) (unsigned char)169)))), ((~(((/* implicit */int) (unsigned char)129)))))) : (arr_9 [i_6] [i_5] [i_2] [i_1] [i_1] [i_0])));
                                var_23 &= ((/* implicit */unsigned short) ((min((((/* implicit */int) var_15)), (arr_9 [i_0 + 2] [i_0] [i_0 + 1] [8LL] [8LL] [i_0]))) <= ((+(((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_6])) ? (-1087050819) : (((/* implicit */int) arr_7 [i_5]))))))));
                                var_24 = ((_Bool) min((min((((/* implicit */short) (_Bool)1)), (arr_2 [i_0]))), (((/* implicit */short) (!(arr_16 [i_0 + 1] [i_0] [i_0 + 1] [19LL] [i_0 + 2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
