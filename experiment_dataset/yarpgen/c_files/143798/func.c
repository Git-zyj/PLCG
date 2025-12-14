/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143798
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (short i_2 = 4; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_11 [i_0] [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
                    arr_12 [i_2] [i_1] [i_2] |= ((/* implicit */long long int) (-(((unsigned long long int) 532205746812364037ULL))));
                    var_19 *= ((/* implicit */unsigned char) 17914538326897187579ULL);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (short i_4 = 4; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -728537761)) || (((/* implicit */_Bool) var_4)))) ? (max((var_9), (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) arr_0 [i_0 + 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [(unsigned short)6]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3] [i_4 - 4])) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-118)))))) ? (((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0 + 1]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_4])))))))))))));
                                arr_18 [i_0] [i_0] = ((/* implicit */short) (unsigned short)17626);
                                arr_19 [i_0] [i_4] = ((/* implicit */unsigned int) (+(min((((/* implicit */long long int) arr_6 [i_0] [i_0])), (((long long int) var_10))))));
                            }
                        } 
                    } 
                    arr_20 [i_0] = ((/* implicit */int) (~(((((/* implicit */_Bool) 3735640607U)) ? (((((/* implicit */_Bool) arr_14 [i_0] [i_1] [0ULL] [i_2])) ? (((/* implicit */long long int) arr_13 [(unsigned short)8] [(unsigned short)8] [23] [i_2] [i_2] [i_2 - 3])) : (var_5))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 17914538326897187610ULL))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 21; i_5 += 2) 
    {
        for (long long int i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            {
                var_21 += ((/* implicit */short) (-(((/* implicit */int) max((min((arr_10 [i_5] [i_5] [i_6]), (((/* implicit */unsigned short) var_10)))), (((/* implicit */unsigned short) var_2)))))));
                arr_25 [i_5] [(short)14] = ((/* implicit */short) var_0);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 21; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (~((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)0))) != (3366702537292611639LL)))))))))));
                            var_23 ^= ((/* implicit */unsigned short) (unsigned char)219);
                            arr_33 [i_8] [i_7] [i_7] [i_5] = ((/* implicit */signed char) ((long long int) max((max((((/* implicit */unsigned long long int) arr_29 [i_5] [i_5] [i_7])), (var_3))), (((/* implicit */unsigned long long int) arr_6 [i_7] [i_8])))));
                        }
                    } 
                } 
                var_24 ^= ((/* implicit */_Bool) ((((min(((+(((/* implicit */int) (short)-4777)))), ((+(((/* implicit */int) arr_29 [i_5] [i_6] [i_6])))))) + (2147483647))) << (((559326694U) - (559326694U)))));
            }
        } 
    } 
    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) || (((/* implicit */_Bool) 855244494))));
    var_26 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned short)43724)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-27097))) : (var_5))))))));
}
