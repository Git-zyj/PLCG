/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180443
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
    var_20 ^= ((/* implicit */_Bool) var_16);
    var_21 = ((/* implicit */long long int) var_11);
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned char) (+(((unsigned long long int) (+(arr_5 [i_0]))))));
                        var_23 = ((/* implicit */unsigned int) (-(max((((long long int) arr_9 [i_0] [i_0])), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)164)) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) arr_7 [i_1] [i_2] [i_3])))))))));
                        var_24 = ((/* implicit */short) arr_3 [i_0] [i_0] [i_3]);
                        arr_11 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) ((short) var_7))) | (((((/* implicit */int) (unsigned short)27765)) ^ (arr_3 [i_3] [i_0] [i_0]))))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) ((max((((/* implicit */int) var_11)), (arr_3 [i_0] [i_1] [i_2]))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)113))))))))));
                            arr_14 [i_0] [i_0] [i_0] [i_0 - 2] [i_0 - 2] = ((/* implicit */unsigned int) ((((max((arr_5 [i_0]), (((/* implicit */long long int) (unsigned char)228)))) * (((/* implicit */long long int) ((/* implicit */int) var_3))))) / ((-(arr_1 [i_0 - 1])))));
                        }
                    }
                    arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) -2080097757)) / (((((/* implicit */_Bool) (unsigned short)12876)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)37770))))) : (((var_13) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))));
                    arr_16 [i_0 - 2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) max((arr_2 [i_0] [i_1]), (((/* implicit */unsigned int) arr_4 [i_0] [i_1]))));
                }
            } 
        } 
    } 
}
