/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117130
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned short) max((((/* implicit */long long int) max(((unsigned char)2), (((/* implicit */unsigned char) (_Bool)0))))), (((((/* implicit */_Bool) ((((var_12) + (9223372036854775807LL))) << (((((-4942894364816730162LL) + (4942894364816730176LL))) - (14LL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) : (-1LL)))));
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_7 [i_0] [i_1] [3LL])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_7 [i_1] [(_Bool)1] [i_1])))) * (((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) 2ULL))))) ^ (((/* implicit */int) (unsigned short)13853))))));
                var_16 = ((/* implicit */short) (~(((/* implicit */int) ((min((var_2), (arr_2 [i_1]))) > (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_5 [i_1] [i_0] [i_0])) + (2147483647))) << (((arr_2 [i_0]) - (12541849246059726907ULL)))))))))));
                arr_9 [i_0] [i_1] [i_0] = max((((1592499121347811207ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1] [i_0])) ^ (((/* implicit */int) arr_3 [i_0] [i_1]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) var_11);
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        for (unsigned char i_3 = 2; i_3 < 19; i_3 += 2) 
        {
            {
                arr_16 [i_2] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) -1LL)) > (1592499121347811207ULL)))) : (((/* implicit */int) arr_13 [i_2] [i_3])))))));
                /* LoopNest 3 */
                for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    for (unsigned char i_5 = 2; i_5 < 19; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */int) (short)9816)) | (((/* implicit */int) ((min((1592499121347811226ULL), (var_2))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24))))))));
                                var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_23 [2LL] [i_3 + 1] [i_5 - 1] [i_5])) ? (-4809940417534808906LL) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_3 - 1] [i_3 - 2] [i_5 + 1] [i_6]))))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_3] [i_3 + 2] [i_5 + 1] [i_5]))) > (13LL)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) max((var_0), (((/* implicit */unsigned int) max((min((1188603275), (((/* implicit */int) (short)28991)))), (((/* implicit */int) (!(((/* implicit */_Bool) 10261365365509500208ULL))))))))));
    var_21 = ((/* implicit */signed char) 2782866343U);
}
