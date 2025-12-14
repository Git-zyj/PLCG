/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110825
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((3805227094U) | (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_0)), (var_14)))))))) ? (((/* implicit */unsigned long long int) 0U)) : (((var_2) & (((/* implicit */unsigned long long int) ((var_9) | (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_10 [i_2] [i_2] [i_2] = ((((((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_1 [i_1] [i_0])))))) ? (var_1) : (arr_1 [i_0] [i_0]));
                    arr_11 [i_2] [i_2] = ((((/* implicit */_Bool) max((3474910274U), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_0] [i_0]))) >= (arr_1 [(unsigned char)17] [(unsigned char)17]))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2] [i_2])) || (((/* implicit */_Bool) arr_2 [i_0] [i_1])))))))) : (arr_2 [20ULL] [20ULL]));
                    arr_12 [16U] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_2 - 2] [i_2 - 1] [i_1])) ^ (((/* implicit */int) arr_5 [i_2 - 3] [i_2 - 1] [i_1]))))) & (var_11)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 16; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 4) 
        {
            {
                arr_19 [i_4] [i_4] = arr_14 [(unsigned char)3];
                arr_20 [i_4] [i_4] [i_3] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_3 [i_3] [i_4])), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_4]))))) ? (((long long int) 4294967295U)) : (((/* implicit */long long int) min((4294967285U), (1448344519U))))))));
                arr_21 [i_4] [i_4] [i_3] = ((/* implicit */unsigned long long int) min((((((arr_2 [i_3] [i_4 + 3]) >> (((var_9) - (3842466664U))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_4])) || (((/* implicit */_Bool) arr_17 [i_4] [i_4])))))))), (((((/* implicit */_Bool) arr_1 [i_4 - 1] [i_4 + 1])) && (((/* implicit */_Bool) arr_16 [i_4 - 1] [i_4 + 1]))))));
            }
        } 
    } 
}
