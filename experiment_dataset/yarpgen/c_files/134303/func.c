/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134303
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        var_10 = (!(((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0])));
        var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((long long int) (((!(((/* implicit */_Bool) 872972495)))) ? (((int) arr_3 [i_0] [i_0])) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)43627))))))))));
        var_12 = ((/* implicit */long long int) (!((!(((((/* implicit */_Bool) (unsigned short)21902)) || (((/* implicit */_Bool) (unsigned char)52))))))));
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) max((max((((unsigned int) var_1)), (((/* implicit */unsigned int) arr_1 [i_0 + 1])))), (((/* implicit */unsigned int) min((((/* implicit */int) var_0)), ((~(((/* implicit */int) var_1))))))))))));
        arr_4 [i_0 + 1] [i_0 - 2] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 1] [i_0]))) : (var_9))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)43627)))))));
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_1]);
        var_14 = ((/* implicit */_Bool) (+((-(((/* implicit */int) (_Bool)1))))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            for (short i_3 = 2; i_3 < 14; i_3 += 1) 
            {
                {
                    arr_13 [i_1] [i_1] [i_3 + 2] = ((/* implicit */short) max((((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_9)))))), ((+(2158478987611062310LL)))));
                    arr_14 [6U] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2))));
                    arr_15 [i_3] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) ((unsigned char) (_Bool)1))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (short)-20089))))))), (((/* implicit */int) (unsigned short)21908))));
                    arr_16 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */long long int) min(((+(((/* implicit */int) arr_11 [i_2])))), (((/* implicit */int) var_5))))), (max((((long long int) var_2)), (((/* implicit */long long int) arr_8 [i_1] [i_1] [i_1]))))));
                }
            } 
        } 
        arr_17 [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_9 [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_1])))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1])))))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))) : (var_7)))) ? (min((((/* implicit */unsigned long long int) arr_6 [i_1])), (var_7))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)27649)) : (((/* implicit */int) arr_5 [i_1])))))))));
    }
    var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) var_4))));
    /* LoopSeq 2 */
    for (short i_4 = 0; i_4 < 19; i_4 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_5 = 1; i_5 < 18; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (long long int i_7 = 2; i_7 < 17; i_7 += 1) 
                {
                    {
                        var_16 *= ((/* implicit */unsigned short) ((unsigned char) ((unsigned short) arr_18 [8LL] [8LL])));
                        arr_28 [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)28900)) / (((/* implicit */int) (short)-28900))))) * (((arr_24 [i_5 - 1] [i_6] [i_7] [i_7 + 2]) / (arr_24 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_7 - 2])))));
                        var_17 = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10919))) - (arr_24 [i_5 + 1] [i_5 + 1] [i_7 + 1] [i_7])))));
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_1))));
                        var_19 += ((/* implicit */signed char) (-(min((arr_24 [i_7] [i_7 - 2] [i_7 + 1] [i_7]), (arr_24 [i_7 + 1] [i_7 - 2] [i_7 + 2] [i_7 + 2])))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (unsigned char i_9 = 0; i_9 < 19; i_9 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_10 = 0; i_10 < 19; i_10 += 3) 
                    {
                        var_20 += ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) arr_31 [18LL]))) << (((arr_32 [(signed char)6]) - (9129443183699078110LL)))));
                        /* LoopSeq 1 */
                        for (unsigned short i_11 = 0; i_11 < 19; i_11 += 1) 
                        {
                            var_21 |= (short)-28923;
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 288225978105200640LL)) ? (((/* implicit */int) arr_41 [i_4] [i_8])) : (((/* implicit */int) arr_34 [i_8] [i_9] [i_11]))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_22 [i_8] [i_8] [i_8])));
                            var_24 &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)32756)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28900))) : (var_7))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
                            var_25 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_35 [i_9] [i_9])) ? ((-(var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                        }
                    }
                    for (unsigned short i_12 = 4; i_12 < 18; i_12 += 3) 
                    {
                        var_26 = ((/* implicit */_Bool) max((min((((((/* implicit */_Bool) var_2)) ? (-4410028442843071320LL) : (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) max((((/* implicit */short) var_0)), ((short)32764)))))), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)12))))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_4]))) : (var_3)))))));
                        var_27 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_39 [i_12 - 3] [i_12 - 3] [i_12 - 4] [i_12 - 1])) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (var_2)))))) >> ((((+(min((var_3), (((/* implicit */long long int) (short)-28901)))))) + (28920LL)))));
                        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) -4043543793448787060LL))));
                        arr_46 [i_4] [i_4] [i_8] [i_8] [i_9] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3928642237U)) ? (-4043543793448787060LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))))) | (((/* implicit */int) (short)28896))));
                    }
                    var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) (+(((/* implicit */int) var_6)))))));
                    var_30 = ((/* implicit */unsigned long long int) (!(((_Bool) var_4))));
                    arr_47 [i_4] [i_8] = ((/* implicit */unsigned short) arr_32 [i_4]);
                }
            } 
        } 
    }
    for (signed char i_13 = 0; i_13 < 17; i_13 += 3) 
    {
        arr_52 [i_13] [i_13] = ((/* implicit */long long int) min((var_9), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)11)) ? (arr_29 [i_13] [i_13]) : (((/* implicit */long long int) 1106243013U))))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_13])))))));
        var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) -4043543793448787060LL)) ? (((/* implicit */int) (unsigned short)21881)) : (((/* implicit */int) (_Bool)1)))))))));
    }
    var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) var_3))));
}
