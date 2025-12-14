/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168323
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
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_2 [6LL] [i_0] = ((/* implicit */unsigned char) ((((unsigned int) max((var_2), (arr_0 [7LL])))) ^ (arr_0 [i_0])));
        arr_3 [1ULL] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 140737488355327ULL)))) == (140737488355333ULL)));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 4; i_2 < 8; i_2 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                for (unsigned short i_4 = 1; i_4 < 9; i_4 += 2) 
                {
                    {
                        var_10 *= arr_8 [i_3];
                        arr_16 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) 140737488355327ULL));
                    }
                } 
            } 
            arr_17 [i_1] [i_2] = ((/* implicit */unsigned short) (+((+(18446603336221196286ULL)))));
            arr_18 [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_2 - 4] [i_1 - 1]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [(_Bool)1] [i_1] [(short)1]))) * (min((18446603336221196279ULL), (((/* implicit */unsigned long long int) (signed char)68)))))) : (((/* implicit */unsigned long long int) 4194240U))));
            var_11 *= ((/* implicit */_Bool) (-(max((((/* implicit */int) arr_15 [0LL] [i_1] [0LL] [i_1] [6] [i_2 + 1])), (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (signed char)-74)) : (((/* implicit */int) var_6))))))));
        }
        for (unsigned char i_5 = 4; i_5 < 8; i_5 += 3) /* same iter space */
        {
            var_12 *= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-18350)), (3289696660U)))))))) < (max((((/* implicit */long long int) var_7)), (arr_9 [i_5] [i_5 + 2] [i_5 - 4])))));
            var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((((/* implicit */_Bool) (signed char)17)) ? (14505759568771922555ULL) : (((/* implicit */unsigned long long int) -14)))) < (((/* implicit */unsigned long long int) ((long long int) max((arr_15 [0ULL] [i_5] [i_5] [0ULL] [i_5 - 4] [i_5]), (((/* implicit */unsigned short) (signed char)-69)))))))))));
            arr_21 [i_1] = ((((/* implicit */_Bool) (short)248)) ? (((((/* implicit */_Bool) 4194240U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_1] [i_5 - 4]))) : (arr_0 [i_1 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_7 [i_1] [i_1 - 1])))));
            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) min((((/* implicit */unsigned int) max((arr_5 [i_5 - 4] [i_1]), (((/* implicit */unsigned char) ((_Bool) arr_5 [i_1] [i_5])))))), (min((((/* implicit */unsigned int) arr_19 [0ULL] [0ULL])), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (0U))))))))));
        }
        var_15 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_11 [i_1] [i_1] [i_1 - 1])), ((+(140737488355333ULL)))));
        arr_22 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_14 [i_1] [(unsigned char)6]);
    }
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        var_16 = ((/* implicit */signed char) max((((((((/* implicit */_Bool) arr_24 [i_6] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2609713723U))) >> ((((-(3940984504937629046ULL))) - (14505759568771922539ULL))))), (((/* implicit */unsigned int) var_1))));
        /* LoopSeq 3 */
        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 2) 
        {
            arr_29 [i_6] [i_7] = ((/* implicit */long long int) ((short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (-3190012495146713226LL))));
            /* LoopNest 2 */
            for (short i_8 = 2; i_8 < 23; i_8 += 2) 
            {
                for (unsigned char i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    {
                        arr_37 [i_9] = ((/* implicit */long long int) arr_33 [i_6] [(short)23] [i_6 + 1] [21ULL] [i_6]);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 2) 
                        {
                            var_17 += ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) / (((unsigned long long int) arr_23 [(_Bool)1])))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_2)) : (((((/* implicit */_Bool) arr_38 [i_6 + 1] [(unsigned char)11])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_9] [i_7]))))))))));
                            arr_40 [i_6] [i_6] [i_6 + 1] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_39 [i_8] [i_8 + 1] [i_8] [i_8 - 1] [i_8] [i_6 + 1]), (var_0)))) ? ((~(((/* implicit */int) (short)30496)))) : (((/* implicit */int) (unsigned char)132))));
                        }
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned short) arr_38 [i_7] [i_9])), (arr_36 [i_8] [i_8]))), (((/* implicit */unsigned short) (short)-242))))) ? (((/* implicit */long long int) max((((unsigned int) var_3)), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_38 [i_9] [i_7])))))))) : (((arr_23 [i_8]) / (arr_23 [21]))))))));
                        var_19 -= ((/* implicit */long long int) min((((((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) var_6))))) ? (arr_34 [i_6] [i_6] [i_8] [i_8] [i_9]) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_30 [(_Bool)1])), (arr_26 [i_6 + 1]))))));
                    }
                } 
            } 
            arr_41 [i_6 + 1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((-8074012988649396027LL) + (9223372036854775807LL))) << (((((/* implicit */int) ((short) 3190012495146713226LL))) - (138)))))), (((unsigned long long int) (signed char)103))));
        }
        for (short i_11 = 0; i_11 < 24; i_11 += 1) 
        {
            var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? ((~(((/* implicit */int) var_9)))) : (max((728831751), (((/* implicit */int) (signed char)-4))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (signed char)-46)) % (((/* implicit */int) var_4))))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_6 + 1]))) : (arr_43 [i_6 + 1] [i_11] [i_11])))));
            arr_45 [i_6] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-23956)))));
        }
        for (short i_12 = 1; i_12 < 23; i_12 += 3) 
        {
            arr_48 [i_6] [i_12 - 1] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((17096673194112197349ULL), (((/* implicit */unsigned long long int) (unsigned char)175))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_0))))) : ((~(var_3)))));
            arr_49 [(signed char)0] [(_Bool)1] = ((/* implicit */unsigned char) max(((-(9851631967573673626ULL))), (((/* implicit */unsigned long long int) ((_Bool) arr_27 [i_12 + 1] [i_12 - 1])))));
            /* LoopNest 3 */
            for (long long int i_13 = 2; i_13 < 23; i_13 += 2) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (unsigned char i_15 = 2; i_15 < 22; i_15 += 1) 
                    {
                        {
                            arr_59 [i_15] [i_15] [i_13 - 1] [i_15] = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)62714)) >= (((/* implicit */int) (unsigned short)2822)))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned char)252)) ? (3190012495146713231LL) : (((/* implicit */long long int) ((/* implicit */int) (short)241))))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_7)))))))) : (max(((+(3940984504937629046ULL))), (((12704578517010212992ULL) << (((arr_35 [i_6 + 1] [i_14] [(signed char)14] [i_6] [i_15]) - (10277272274320301276ULL)))))))));
                            var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */unsigned long long int) 0U)), (18446744073709551615ULL))) : (524286ULL)));
                        }
                    } 
                } 
            } 
            var_22 -= ((/* implicit */short) (-(((/* implicit */int) arr_28 [i_6 + 1] [i_12]))));
        }
        arr_60 [(signed char)19] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_51 [i_6] [i_6 + 1] [i_6] [i_6 + 1]))) + (-7044485717745840854LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [(signed char)12] [i_6]))) : (var_2)))));
    }
    var_23 = ((/* implicit */unsigned short) min((var_2), (((((/* implicit */_Bool) 3940984504937629046ULL)) ? (1543903756U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63)))))));
}
