/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182442
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
    var_12 = 8561465038470774014LL;
    var_13 -= var_9;
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_0 - 1] [i_0 - 1] = ((/* implicit */long long int) ((((((min(((-2147483647 - 1)), ((+((-2147483647 - 1)))))) + (2147483647))) + (2147483647))) << (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)989)) : (((/* implicit */int) arr_4 [i_0 - 1] [i_0] [i_1]))))) ? (((/* implicit */int) ((var_1) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0 - 1])))))) : (((((/* implicit */int) var_0)) / (((/* implicit */int) arr_0 [i_0]))))))));
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)989)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)62221))));
                arr_6 [i_0] = ((/* implicit */signed char) ((_Bool) var_7));
                var_15 = var_2;
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) 1098344025U))));
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        for (unsigned char i_3 = 3; i_3 < 11; i_3 += 3) 
        {
            {
                var_17 = arr_10 [i_2] [i_3] [i_2];
                var_18 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((arr_3 [i_3 - 2]) % (((/* implicit */unsigned int) ((/* implicit */int) min((var_5), (((/* implicit */unsigned char) var_3))))))))), (var_9)));
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    for (unsigned int i_5 = 2; i_5 < 9; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 3; i_6 < 12; i_6 += 3) 
                        {
                            {
                                arr_18 [i_4] [i_3] [i_4] [i_5] [i_6] = ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)23)) * (((/* implicit */int) arr_0 [i_2]))))), (((arr_16 [i_6] [i_6 - 1] [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 3] [i_6 - 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2] [i_3 + 1])))))))));
                                arr_19 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((arr_11 [i_5 + 3] [i_4] [i_3 + 1]) + (var_9))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_12 [i_2] [i_4])), (arr_8 [i_2]))))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)989)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_10 [i_2] [i_3] [i_4])))))) : (((((/* implicit */int) arr_10 [i_2] [i_3 - 3] [i_4])) & (((/* implicit */int) var_11))))));
                                arr_20 [i_4] [i_3] [i_4] [i_5 + 1] [i_4] [i_3] [i_6 + 1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) -150690369079165224LL)) ? (2609159553797217776ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) 245325505U))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
