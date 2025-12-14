/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171501
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
    for (int i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [i_3])) ? (((((/* implicit */_Bool) arr_8 [i_0 - 2] [(signed char)16] [i_4 + 2] [i_4 + 1])) ? (((/* implicit */int) (unsigned short)34924)) : (((/* implicit */int) arr_8 [i_0 - 2] [(unsigned short)24] [i_4 - 1] [i_4 + 2])))) : (((/* implicit */int) (unsigned short)34906))));
                                arr_12 [i_1] [i_1] [i_2] [i_1] [i_4 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) (!((_Bool)1)))), ((~(((/* implicit */int) var_8))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (arr_2 [(unsigned char)24])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)2345)))))) : (((1074674286U) * (arr_4 [i_0] [i_1] [i_3] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_19)))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) (!(arr_11 [i_0 + 1] [i_1] [i_1] [i_0 - 1])))), (arr_10 [i_1] [i_1] [i_1] [i_0 + 1] [i_0 - 2]))), (min((((/* implicit */unsigned int) ((signed char) 1023U))), (arr_10 [i_0] [i_1] [i_1] [i_1] [i_1])))));
                arr_13 [i_1] = ((/* implicit */long long int) 1786701791);
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_7 = 1; i_7 < 22; i_7 += 3) 
                {
                    for (unsigned char i_8 = 2; i_8 < 23; i_8 += 3) 
                    {
                        for (long long int i_9 = 2; i_9 < 24; i_9 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((unsigned long long int) (_Bool)1)) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)25866)) ? (-1786701792) : (((/* implicit */int) (signed char)71))))))))));
                                var_23 &= ((/* implicit */signed char) min(((unsigned short)63191), (((/* implicit */unsigned short) (signed char)1))));
                                arr_26 [i_8] [i_8 - 1] [16ULL] |= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) >= (((/* implicit */int) var_5)))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */short) ((_Bool) (unsigned short)2337));
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) (~(((/* implicit */int) ((var_15) >= (((/* implicit */unsigned long long int) min((((/* implicit */int) var_1)), (1755053639)))))))));
    var_26 = var_18;
}
