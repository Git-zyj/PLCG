/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125325
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
    var_16 = ((/* implicit */unsigned int) var_0);
    var_17 = ((/* implicit */unsigned char) max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) ((int) -1332911551))) ? (var_6) : (((/* implicit */int) var_0))))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) max((((((((/* implicit */int) arr_7 [i_0 - 1] [i_0] [i_1 + 2] [i_1 + 2] [i_1 + 3] [i_2])) + (2147483647))) << (((((-1027600028) + (1027600038))) - (10))))), ((~(((1014411010) ^ (((/* implicit */int) var_1))))))));
                            var_19 = (-(((/* implicit */int) (signed char)111)));
                        }
                    } 
                } 
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [(signed char)3] [i_0 + 2] [i_1 + 3])) > (max((((/* implicit */int) arr_2 [i_0] [8LL] [i_1])), (var_6)))))) - (946867570))))));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483636)) ? (1027600027) : (((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 4] [(unsigned short)3] [i_1]))))) ? (((/* implicit */unsigned int) arr_0 [(signed char)19])) : (min((4294967295U), (476127950U))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1327005602)) ? (((/* implicit */int) (signed char)-17)) : (((/* implicit */int) (signed char)17))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_15)) ^ (((/* implicit */int) (signed char)13))))) : (1379913601U))))))));
                var_22 = ((/* implicit */_Bool) ((long long int) min((var_10), (var_10))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (short i_5 = 3; i_5 < 20; i_5 += 4) 
        {
            {
                var_23 ^= ((/* implicit */signed char) ((unsigned char) max((arr_5 [i_5 - 1] [i_5] [i_5 - 2] [i_5]), (arr_5 [i_5 - 2] [(signed char)0] [i_5 + 2] [i_5]))));
                /* LoopNest 3 */
                for (unsigned int i_6 = 0; i_6 < 22; i_6 += 4) 
                {
                    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        for (int i_8 = 1; i_8 < 20; i_8 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) 13080835340579426117ULL);
                                arr_23 [i_8] [i_7] [i_6] [i_8] [i_4] [i_4] [i_4] = ((/* implicit */signed char) arr_9 [i_5]);
                                arr_24 [i_8] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_1), (((/* implicit */unsigned char) var_10)))))) : (((((/* implicit */_Bool) (signed char)-49)) ? (4294967295U) : (((/* implicit */unsigned int) -726995636)))))), (((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_7 [i_4] [i_5] [i_5 + 2] [i_5 + 2] [i_4] [i_4])))))))));
                                var_25 -= ((/* implicit */_Bool) ((((8U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)77))))) ? (592797055) : (((/* implicit */int) ((_Bool) (signed char)39)))));
                                var_26 ^= ((/* implicit */int) max((((/* implicit */signed char) ((((2429200287U) * (arr_6 [i_7]))) == (var_12)))), (var_10)));
                            }
                        } 
                    } 
                } 
                var_27 = ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)202)))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [(signed char)2] [i_5 + 2]))))) : (((1865767008U) + (((/* implicit */unsigned int) (-(var_6)))))));
            }
        } 
    } 
}
