/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109619
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) var_7);
                /* LoopNest 3 */
                for (unsigned char i_2 = 3; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned char i_3 = 2; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) arr_0 [i_1])), (var_3))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(_Bool)1] [i_4 - 2] [i_2] [(unsigned char)8] [(unsigned short)17] [i_3])))))) ? (((arr_6 [i_3 + 1] [(unsigned char)9] [i_4] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3 - 2] [i_4] [i_4 + 1] [i_1]))) : (var_5))) : (((/* implicit */unsigned long long int) ((max(((_Bool)0), ((_Bool)1))) ? ((-(var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)0), (var_11))))))))));
                                var_15 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) >> (((/* implicit */int) arr_5 [i_2 + 2] [i_1] [i_3 - 2] [i_1 - 1]))))) ? (((arr_5 [i_2 - 3] [i_1] [i_3 - 2] [i_1 + 4]) ? (((/* implicit */int) arr_5 [i_2 - 2] [i_1] [i_3 - 1] [i_1 - 2])) : (((/* implicit */int) arr_5 [i_2 - 2] [i_2 - 2] [i_3 + 1] [i_1 - 1])))) : (((/* implicit */int) var_12))));
                                arr_13 [i_1] = (unsigned short)0;
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_7 [i_0] [3U] [(unsigned short)19] [i_1] [i_1])), (var_4))))) : (min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [(unsigned short)13] [(unsigned char)8] [i_0] [i_0])), (var_5)))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)0)))), (((((/* implicit */_Bool) 524032ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_14))))))) : (max((max((var_7), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) arr_10 [i_1] [i_1 + 1] [i_1 + 4] [i_1 - 1] [i_1 - 3]))))));
                arr_14 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (((+(((/* implicit */int) var_10)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [(_Bool)1])))))))) * (((/* implicit */int) max((((/* implicit */unsigned char) arr_7 [i_1] [i_1 - 2] [i_1 - 2] [i_1 + 1] [i_1 + 1])), (var_0))))));
            }
        } 
    } 
    var_17 ^= ((/* implicit */unsigned char) min((max((var_13), (((/* implicit */unsigned long long int) var_11)))), (((var_7) % (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10)))))))));
}
