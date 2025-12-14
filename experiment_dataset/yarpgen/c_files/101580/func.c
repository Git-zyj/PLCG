/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101580
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
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_7 [i_2] [i_1] [i_0] [i_0]))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((var_4), (((/* implicit */unsigned short) arr_2 [i_1]))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0] [i_2]);
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65524)) - (((/* implicit */int) (short)-5877))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 3; i_3 < 9; i_3 += 2) /* same iter space */
                    {
                        var_13 -= ((/* implicit */_Bool) (unsigned short)65524);
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)0)), (var_2)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-20229)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_0))))) : (max((1090715534753792ULL), (((/* implicit */unsigned long long int) (short)8611))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (min((7447523366526308964LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])))))))));
                        arr_15 [i_0] [i_2] [i_2] [i_2] [i_0] &= ((/* implicit */unsigned char) 10552617572698647731ULL);
                    }
                    for (unsigned char i_4 = 3; i_4 < 9; i_4 += 2) /* same iter space */
                    {
                        var_15 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)54)) & (((/* implicit */int) (signed char)-79))));
                        var_16 -= ((/* implicit */unsigned int) var_11);
                        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) 358318362)) : (10ULL)))) ? (((long long int) ((_Bool) (unsigned short)65509))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) arr_14 [i_0] [i_1] [i_0] [i_2] [i_0] [i_2]))));
                        var_19 = ((/* implicit */unsigned char) ((3653907075U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)225)))));
                        var_20 = ((/* implicit */short) max((var_20), (((short) 2728682477U))));
                        var_21 |= ((/* implicit */signed char) 297597904U);
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0)))))))) ? (var_9) : (((((/* implicit */_Bool) (unsigned short)39814)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)201))) : (130023424U)))));
    var_23 *= ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967288U)) ? (-1780797800) : (((/* implicit */int) (unsigned char)8))))))));
    var_24 *= ((/* implicit */unsigned char) var_4);
    var_25 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_11)) & (((/* implicit */int) var_1))))))) ? (((3617949856U) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-2048)) : (((/* implicit */int) (unsigned short)65509))))))) : (((((unsigned int) var_5)) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
}
