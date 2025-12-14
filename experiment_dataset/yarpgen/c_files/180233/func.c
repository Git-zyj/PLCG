/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180233
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((unsigned long long int) (signed char)82)) << (((((/* implicit */_Bool) arr_0 [i_0])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))))));
        var_20 = (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0])))));
        var_21 = ((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) arr_2 [i_0])))));
        var_22 &= ((/* implicit */signed char) 16U);
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned char) min(((signed char)-120), (((/* implicit */signed char) (_Bool)1))));
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) max((var_2), (((/* implicit */short) (signed char)-3))))) : (arr_3 [i_1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1842938840)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (arr_2 [i_1]))))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                {
                    var_25 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) (_Bool)1)), (var_8)))))), (((arr_9 [i_3] [i_1] [i_1]) % (max((((/* implicit */unsigned long long int) 794077437U)), (16ULL)))))));
                    var_26 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (min((((/* implicit */unsigned long long int) var_2)), (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                    var_27 &= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_13)))))))));
                    var_28 = ((/* implicit */signed char) arr_2 [i_1]);
                    var_29 = max((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)127))))) ? (min((((/* implicit */long long int) (signed char)-126)), (arr_2 [i_1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)24171)) : (((/* implicit */int) var_18))))))), (((/* implicit */long long int) arr_1 [i_2])));
                }
            } 
        } 
    }
    for (signed char i_4 = 0; i_4 < 20; i_4 += 4) /* same iter space */
    {
        var_30 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_8 [i_4]) % (((((/* implicit */_Bool) -6577208706515522101LL)) ? (arr_8 [i_4]) : (((/* implicit */unsigned long long int) arr_4 [i_4]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((arr_2 [i_4]) + (9223372036854775807LL))) << (((arr_8 [i_4]) - (14912297054331094688ULL))))) > (((((/* implicit */_Bool) var_8)) ? (arr_2 [i_4]) : (((/* implicit */long long int) 795705271U)))))))) : (min((8371777544549149510ULL), (((/* implicit */unsigned long long int) var_2))))));
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                {
                    var_31 = ((((((/* implicit */_Bool) arr_5 [i_5 + 2] [i_5 + 2] [i_5 - 1])) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)76)) : (var_6))) : (((/* implicit */int) var_11)))) * (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) 188383161)), (arr_15 [i_4] [i_5] [i_6] [i_5])))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_6 [i_5 + 3] [i_5 + 3] [i_4])), (91170814U))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        for (long long int i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) max((((arr_12 [i_4] [i_6]) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) > (arr_13 [i_8] [i_7] [i_6]))))))), (((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) / (3499262021U))), (((/* implicit */unsigned int) (+(1219749005))))))))))));
                                var_33 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_13 [i_4] [i_7] [i_8])) || (((/* implicit */_Bool) var_17)))) ? (arr_13 [i_7] [i_5] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-38)) && (((/* implicit */_Bool) 4294967295U))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned int i_9 = 0; i_9 < 15; i_9 += 4) 
    {
        for (signed char i_10 = 0; i_10 < 15; i_10 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 15; i_11 += 2) 
                {
                    for (unsigned int i_12 = 0; i_12 < 15; i_12 += 4) 
                    {
                        {
                            var_34 = ((/* implicit */_Bool) min((var_34), ((!(((/* implicit */_Bool) max((8453178064099240509ULL), (((/* implicit */unsigned long long int) var_6)))))))));
                            var_35 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_30 [i_12] [(signed char)2] [(signed char)2])) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_9] [i_9]))))))) / (min((arr_14 [i_9] [i_10] [19U]), (((/* implicit */int) (short)-24172))))));
                            var_36 &= ((/* implicit */long long int) arr_10 [i_9]);
                        }
                    } 
                } 
                var_37 = ((/* implicit */unsigned short) min(((~(max((((/* implicit */long long int) arr_23 [i_9])), (arr_25 [i_10] [i_9]))))), (((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) var_15)))) + (var_16))))));
                var_38 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-24172)), (var_0)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_13 [i_9] [(unsigned char)17] [i_9]) : (arr_13 [i_10] [i_9] [i_9]))))));
            }
        } 
    } 
}
