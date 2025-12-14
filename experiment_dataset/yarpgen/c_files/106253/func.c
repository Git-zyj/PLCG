/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106253
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
    var_14 ^= ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) (+(((/* implicit */int) var_8)))))) <= (((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((arr_0 [i_0] [i_0]) + (2147483647))) >> ((((((-(arr_0 [i_1] [i_1]))) & (((((/* implicit */int) (unsigned char)30)) | (((/* implicit */int) var_12)))))) - (2650))))))));
                var_16 = ((/* implicit */long long int) ((max((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)30)), (arr_2 [i_1])))), (max((arr_0 [i_0] [i_1]), (((/* implicit */int) var_7)))))) <= (((/* implicit */int) ((((/* implicit */int) var_8)) <= (min((arr_1 [i_0]), (((/* implicit */int) arr_5 [i_1] [i_1] [i_1])))))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 1; i_2 < 15; i_2 += 2) 
                {
                    var_17 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (unsigned char)30)), (arr_3 [i_0] [i_1 + 1]))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)30))) ^ (var_3)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_8))))) : ((~(9223370937343148032LL))))))));
                    arr_8 [i_1] [i_2] = ((/* implicit */unsigned int) arr_2 [i_0]);
                    var_18 = (((+(((/* implicit */int) var_1)))) - (((((/* implicit */int) min((((/* implicit */short) var_10)), (arr_5 [i_0] [i_0] [i_0])))) & (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)225)), (arr_7 [(short)13] [i_0 + 2] [i_2] [(short)16])))))));
                    var_19 = ((/* implicit */unsigned char) max(((~((~(var_4))))), (((/* implicit */unsigned long long int) ((short) arr_4 [i_0 + 1] [i_0])))));
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_8))));
                }
            }
        } 
    } 
}
