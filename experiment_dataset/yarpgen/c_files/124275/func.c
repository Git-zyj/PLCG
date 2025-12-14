/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124275
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */int) min((((((((/* implicit */_Bool) arr_4 [i_0])) ? (7941286911202406684ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0])))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [i_1])) * (-1)))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11)))))));
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((((/* implicit */_Bool) min((((/* implicit */long long int) max((363359618U), (((/* implicit */unsigned int) 371591505))))), (arr_0 [i_0])))) ? (min((arr_4 [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((signed char) 2610558750U))))) ? (((/* implicit */long long int) -1495603679)) : (((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) ^ (arr_0 [i_0]))))));
                arr_7 [i_0] [i_0] = ((/* implicit */long long int) (((-(((((/* implicit */_Bool) (signed char)127)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))))))) <= (((/* implicit */long long int) arr_3 [i_0] [i_1]))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((var_6) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) (signed char)0))));
    var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_13) : (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) -371591505)) ? (((/* implicit */unsigned long long int) 2046874544U)) : (17970997463188928432ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (signed char)122))))))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        for (signed char i_3 = 2; i_3 < 18; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_5 = 1; i_5 < 20; i_5 += 2) 
                    {
                        var_21 |= ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) var_0))))) ? (arr_4 [i_4]) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_1 [i_3])), (371591505)))))), (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) var_1)))), (((/* implicit */int) var_3)))))));
                        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (short)16383))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 2; i_6 < 19; i_6 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) -506372977)) ? (2078650650) : (((/* implicit */int) (_Bool)1)))));
                        var_24 = ((/* implicit */short) ((arr_11 [i_2] [i_2] [i_3 - 1]) / (arr_11 [i_2] [i_3] [i_3 + 2])));
                        var_25 = ((/* implicit */unsigned char) ((int) (((-2147483647 - 1)) < (((/* implicit */int) (signed char)-1)))));
                        arr_21 [i_2] [i_3] [i_2] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_6 + 1] [i_3 + 3])) ? (((((/* implicit */_Bool) arr_14 [i_4] [i_4] [i_3] [i_2])) ? (((/* implicit */int) arr_20 [i_2] [i_3] [i_3] [i_6])) : (var_0))) : (((/* implicit */int) arr_15 [i_6 - 1] [i_6 - 2] [i_6 - 1] [i_6]))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        var_26 = ((unsigned short) (unsigned char)209);
                        var_27 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_11 [i_2] [i_2] [i_2])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_2] [i_2] [i_3] [i_3] [i_7]))) >= (17970997463188928428ULL)))) : (((/* implicit */int) (_Bool)1))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) arr_16 [i_2] [i_3] [i_4] [i_3] [i_3]);
                        /* LoopSeq 3 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_29 = ((/* implicit */_Bool) arr_18 [i_9] [i_8] [i_4] [i_3] [i_3] [i_2]);
                            arr_30 [i_2] [i_2] [i_2] [i_2] [i_8] = ((/* implicit */long long int) (~(1644239814)));
                        }
                        for (int i_10 = 1; i_10 < 17; i_10 += 3) /* same iter space */
                        {
                            arr_33 [i_2] [i_2] [i_8] [i_8] [i_10] = ((/* implicit */unsigned int) ((signed char) arr_29 [i_3 + 2] [i_3 - 1] [i_3 - 1] [i_10 - 1] [i_10 + 3] [i_10 + 3]));
                            var_30 = ((/* implicit */long long int) (+(var_12)));
                            var_31 = ((/* implicit */short) ((signed char) 963967956U));
                        }
                        for (int i_11 = 1; i_11 < 17; i_11 += 3) /* same iter space */
                        {
                            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) arr_29 [i_2] [i_2] [i_3] [i_3] [i_8] [i_11])) && (((/* implicit */_Bool) arr_22 [i_3 - 2] [i_11 + 3]))));
                            arr_36 [i_11 + 1] [i_8] [i_8] [i_4] [i_8] [i_2] = ((/* implicit */int) var_9);
                        }
                    }
                    arr_37 [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_2] [i_3 - 1] [i_4] [i_4] [i_3 + 2])))))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        for (long long int i_13 = 2; i_13 < 19; i_13 += 4) 
                        {
                            {
                                arr_44 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_15 [i_3] [i_4] [i_4] [i_13 + 2])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) -371591481)))) % (((/* implicit */long long int) min((var_13), (((/* implicit */int) (unsigned short)65535)))))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 268435455)), (5852908071587631962ULL))))));
                                var_33 = ((/* implicit */_Bool) ((unsigned int) (-(-1LL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-16)), (var_17))))) >= (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_12)))))), (var_3)));
}
