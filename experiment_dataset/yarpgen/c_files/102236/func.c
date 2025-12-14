/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102236
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
    for (signed char i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) 3464557529U)))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    var_15 = (unsigned char)127;
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_16 &= ((/* implicit */short) ((((/* implicit */int) (unsigned char)147)) == (((/* implicit */int) arr_10 [i_4] [i_3] [i_2] [13LL] [i_0 - 1]))));
                                var_17 *= ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) > (((/* implicit */int) max((var_1), (((/* implicit */unsigned char) arr_4 [i_4])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 17; i_6 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) min((max((-4686832274266491034LL), (((/* implicit */long long int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) (unsigned char)119))))))), (((/* implicit */long long int) ((unsigned char) max((9773414594109911562ULL), (((/* implicit */unsigned long long int) (short)-17717))))))));
                                arr_18 [i_2] &= ((/* implicit */long long int) (~(3474089476671427954ULL)));
                                arr_19 [i_0 - 3] [i_1] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)189)) ? (min((arr_16 [i_0 + 1] [i_1 - 1] [i_2] [i_5] [i_6 + 2]), (((/* implicit */unsigned int) max(((unsigned short)65522), (((/* implicit */unsigned short) (unsigned char)111))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_11 [i_0] [i_1 - 1] [i_2] [i_5] [i_6 + 2] [i_1])))))))))));
                                arr_20 [i_0] [i_1] [i_1] [i_0] [i_6] [i_1 - 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_13 [i_0 - 1] [i_1] [i_2] [i_0] [i_6]), (arr_13 [i_0] [i_1] [i_2] [i_0] [i_6 - 1])))) ? (arr_9 [i_0] [i_1 - 1] [i_5] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_7 [i_0]))))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_7 = 2; i_7 < 18; i_7 += 3) 
                {
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)247)))) >> (((/* implicit */int) ((short) arr_4 [i_0])))))) ? (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_13 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_7]))))), (((var_7) | (((/* implicit */unsigned long long int) 9223372036854775807LL)))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_10 [i_0 - 2] [i_1] [i_1 - 1] [i_7] [i_7 - 2])) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) arr_22 [i_0] [i_1])))))))));
                    var_20 = ((/* implicit */unsigned char) (+(23U)));
                    var_21 -= ((/* implicit */unsigned char) ((23U) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_7 + 1] [i_7 + 1] [i_7] [i_7]))))))));
                    var_22 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) ((long long int) var_1))) - (((unsigned long long int) var_8))))));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) (((-(max((var_5), (((/* implicit */long long int) var_9)))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (var_7)))) ? (((/* implicit */int) min(((signed char)126), (((/* implicit */signed char) var_8))))) : (((/* implicit */int) var_3)))))));
}
