/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12309
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
    var_17 = ((/* implicit */unsigned short) -159998399);
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_15 [i_1] [i_1] [(unsigned short)9] [13ULL] [i_2] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_6 [i_1] [i_0 + 1] [i_0 + 1] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_6 [i_1] [i_0 - 1] [i_0 + 2] [i_0]))) % (((/* implicit */unsigned long long int) min((295964316), (-295964316))))));
                                arr_16 [i_0] [2ULL] [i_0] [i_0] [i_0] [10] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_0] [i_4] [(signed char)9])) >> (((((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 - 1] [i_1] [(_Bool)1]))) >= (arr_5 [i_0] [i_3])))), ((unsigned short)25584)))) - (25577)))));
                            }
                        } 
                    } 
                    var_18 |= max((((/* implicit */unsigned long long int) ((arr_0 [i_0 + 1] [i_0 - 2]) < (17045928491269984083ULL)))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 159998404)), (14979437621176724433ULL)))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) arr_2 [i_0])))))))));
                    /* LoopSeq 4 */
                    for (int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -295964325)) ? (((/* implicit */int) arr_8 [i_0 + 1] [i_0 - 1] [i_0 - 2])) : (-137579320)))) ? (max((((/* implicit */unsigned int) (short)24436)), (2056105007U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (-9223372036854775807LL - 1LL)))))));
                        var_20 = ((/* implicit */short) min((((((/* implicit */unsigned long long int) (-2147483647 - 1))) / (arr_11 [(unsigned short)2] [i_1] [i_2] [i_5] [i_5]))), (((/* implicit */unsigned long long int) var_11))));
                        arr_19 [i_2] [i_1] = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) min((9223372036854775807LL), (-6260249330690522596LL)))) + (34359738367ULL))), ((-(63ULL)))));
                        var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 532676608)))))) > (min((arr_4 [12ULL] [i_1]), (arr_1 [5ULL] [5ULL])))));
                    }
                    for (signed char i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        var_22 *= max((min((((((/* implicit */_Bool) 159998399)) ? (arr_3 [i_0] [i_0] [i_0 + 2]) : (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) (unsigned short)5270)))), (min((arr_11 [i_6] [i_0] [(unsigned short)1] [i_6] [(unsigned short)10]), (((18446744073709551559ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                        var_23 *= ((/* implicit */long long int) (-(((arr_9 [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 1]) - (arr_9 [i_0 - 2] [i_0] [i_0 - 2] [i_0 + 2])))));
                    }
                    for (signed char i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_8 = 2; i_8 < 12; i_8 += 3) 
                        {
                            var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_11)))) & (((((/* implicit */_Bool) 787269133)) ? (((/* implicit */unsigned int) ((/* implicit */int) (((-2147483647 - 1)) < (((/* implicit */int) (signed char)-2)))))) : (3319052605U)))));
                            var_25 = ((/* implicit */long long int) ((unsigned short) var_10));
                        }
                        for (unsigned short i_9 = 0; i_9 < 14; i_9 += 2) /* same iter space */
                        {
                            var_26 = arr_12 [i_0 + 2] [i_1] [i_2];
                            arr_30 [i_1] [i_1] [7ULL] [7ULL] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (16444033452607163278ULL)))) ? (((((/* implicit */_Bool) (signed char)3)) ? (81ULL) : (((/* implicit */unsigned long long int) -1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) % (((/* implicit */unsigned long long int) 3319052605U))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 14; i_10 += 2) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (unsigned short)21048))));
                            arr_33 [i_0] [i_0] [(short)6] [i_7] [(_Bool)1] &= ((/* implicit */unsigned long long int) ((((arr_5 [i_0 + 1] [i_0 + 2]) % (arr_5 [i_0 - 2] [i_0 - 1]))) <= (((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned short)21309)) * (((/* implicit */int) (short)10382)))), ((-(((/* implicit */int) (signed char)16)))))))));
                        }
                        var_28 *= ((/* implicit */unsigned long long int) (signed char)1);
                    }
                    for (signed char i_11 = 0; i_11 < 14; i_11 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_12 = 4; i_12 < 13; i_12 += 3) 
                        {
                            arr_40 [i_0] [i_1] [i_2] [i_11] [(signed char)9] = ((/* implicit */signed char) max((((((14353680741512159495ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_26 [i_0 - 1] [i_1] [i_1] [i_1] [i_2] [(short)12] [(signed char)5]), (((/* implicit */short) (signed char)-124)))))))), (((unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)(-127 - 1))))))));
                            var_29 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((signed char)-2), (var_15)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_0 - 1] [i_1] [i_2] [i_11] [i_11] [8]))) : (((unsigned long long int) 295964320))))) ? (min(((+(288230376151711743LL))), (((/* implicit */long long int) arr_17 [i_0 + 1] [i_12 + 1] [i_0] [i_11])))) : (((/* implicit */long long int) arr_32 [i_0] [i_0 + 2] [(unsigned short)4] [(unsigned short)3] [(short)9]))));
                        }
                        for (int i_13 = 0; i_13 < 14; i_13 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) max((((arr_21 [i_0] [i_0 - 2] [(_Bool)1] [i_0 + 1]) ? (((/* implicit */int) arr_21 [i_0] [i_0 - 2] [i_0] [i_0 + 1])) : (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0 + 1])))), (((arr_21 [i_0 + 2] [i_0] [13U] [i_0 + 1]) ? (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0 + 1])) : (((/* implicit */int) var_13))))));
                            var_31 = ((/* implicit */_Bool) (~(((((/* implicit */int) max(((signed char)-125), (((/* implicit */signed char) (_Bool)1))))) % (max((-1555166912), (((/* implicit */int) (signed char)-126))))))));
                        }
                        var_32 -= ((/* implicit */short) ((((/* implicit */_Bool) var_8)) && (((((/* implicit */int) arr_24 [i_0 + 2] [i_0 + 1])) < (((/* implicit */int) arr_43 [i_0 + 1]))))));
                    }
                    arr_44 [(_Bool)1] [i_0] [i_0 + 1] |= ((/* implicit */signed char) arr_32 [i_0 - 1] [(signed char)12] [11ULL] [i_0 - 2] [i_0]);
                    arr_45 [i_2] [i_1] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((arr_14 [(_Bool)1] [9ULL] [i_0 - 1] [i_0] [9LL] [i_0 - 2]), (arr_14 [i_0] [i_0 - 2] [i_0 - 1] [i_1] [i_2] [i_0])))), (((arr_4 [i_1] [i_0 + 2]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
    var_33 = ((/* implicit */unsigned long long int) var_15);
}
