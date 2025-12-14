/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119623
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
    var_13 += ((/* implicit */unsigned int) (-(min((((((/* implicit */_Bool) -13LL)) ? (13LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37431))))), ((~(var_0)))))));
    var_14 = ((/* implicit */long long int) ((1601715491U) == (2U)));
    var_15 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((long long int) arr_0 [i_1])), (((/* implicit */long long int) var_7))))), (max((((/* implicit */unsigned long long int) max((var_12), (5LL)))), (arr_0 [i_2 - 1])))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) max((min((((/* implicit */long long int) var_8)), (-11LL))), ((((_Bool)1) ? (-1090975438179839196LL) : (-34LL))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1])))));
                                var_18 = (unsigned short)0;
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_2 - 1])) || (((/* implicit */_Bool) var_2)))))));
                            var_20 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((max((((/* implicit */long long int) (_Bool)1)), (-9223372036854775796LL))), (((/* implicit */long long int) arr_10 [i_2 + 1] [i_2] [i_2 + 1])))))));
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_15 [i_2]), (((/* implicit */unsigned short) (signed char)(-127 - 1)))))) ? (((((/* implicit */_Bool) 8333151449722862705ULL)) ? (-207229806) : (((/* implicit */int) (unsigned char)238)))) : (((/* implicit */int) (signed char)-115))));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_0] [i_5] [i_5] [i_5] [i_6 - 1] [11LL]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_7)), (var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_12 [i_0 - 1])))) : (max((3783239780U), (((/* implicit */unsigned int) var_5))))))) : (10113592623986688931ULL)));
                            arr_22 [i_0] [i_0 - 2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_10))) ? (((arr_3 [i_0 - 2] [i_0 - 1] [i_0 + 1]) | (arr_3 [i_0 - 2] [6] [i_0 + 1]))) : (arr_3 [i_0 - 2] [i_0] [i_0 + 1])));
                        }
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_2 - 1] [i_5])) ? (((/* implicit */unsigned long long int) 1603843578824279927LL)) : (arr_0 [i_7])))))) ? (((arr_21 [i_1] [i_5] [i_7 - 1]) + (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0 - 2] [i_0]))))) : (((arr_10 [i_0] [i_7 - 1] [i_2 + 1]) ? (max((-24LL), (((/* implicit */long long int) (unsigned short)41964)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -2431042187116861879LL))))))))));
                            arr_25 [i_0 - 2] [i_1] [i_7] [i_5] [i_2] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0] [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243))) : (arr_6 [i_0 - 1] [i_0 - 2] [i_0 - 1])))));
                        }
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2431042187116861849LL)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_8 - 1] [i_8 - 1] [16LL] [i_8 - 1] [i_2])))))) : (((((/* implicit */_Bool) arr_19 [i_8 - 1] [i_8 - 1] [(short)21] [i_8 - 1] [i_8])) ? (arr_19 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8]) : (1249430266494208816ULL)))));
                            var_25 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (_Bool)0)), (max((((/* implicit */long long int) (_Bool)1)), (2734061796106407424LL)))));
                            arr_28 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (-((-(12LL)))));
                        }
                        var_26 = ((/* implicit */long long int) ((((unsigned long long int) arr_16 [i_0] [i_2 + 1] [i_0 - 2])) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [1] [i_2])))));
                        arr_29 [i_2] [i_1] [i_2] [(signed char)12] [10LL] [19LL] = (signed char)126;
                        arr_30 [i_5] [i_1] [i_2] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) % (((((/* implicit */_Bool) (short)-10724)) ? (((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0])) : (var_0)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : ((+(((/* implicit */int) arr_2 [i_0 - 2]))))));
                        var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)16559)) : (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) arr_5 [i_2 + 1] [i_2 + 1] [i_2 - 1])) : (max((((/* implicit */long long int) (unsigned short)46983)), (var_6)))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)28320))))), (var_3)))));
                    }
                    for (long long int i_9 = 3; i_9 < 18; i_9 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(arr_7 [i_0] [i_0 - 2] [i_0])))), ((~(((((/* implicit */_Bool) 1949431550935571500LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (2663367778009426313LL)))))));
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_11 [i_0 - 1] [i_1] [i_9 - 2] [i_9] [(_Bool)1]), (arr_11 [i_0 - 2] [i_0 + 1] [i_9 - 2] [i_9] [i_9])))) | (((/* implicit */int) ((unsigned short) var_3)))));
                    }
                    for (unsigned char i_10 = 1; i_10 < 19; i_10 += 2) 
                    {
                        var_30 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)59607)) || (((/* implicit */_Bool) (short)-10724)))))));
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_17 [i_0] [i_10] [i_1] [i_0] [i_10 + 3] [i_2 - 1]) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (signed char)88)))))) ? ((~(((/* implicit */int) (signed char)110)))) : (((/* implicit */int) arr_14 [i_0 - 2] [i_1]))))) ? (((((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_2 - 1] [i_10 + 3])) ? (((/* implicit */unsigned long long int) var_11)) : (arr_32 [i_0] [(signed char)3] [i_0] [i_0 - 2] [i_2 - 1] [i_10 + 3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)201))))))));
                    }
                    for (long long int i_11 = 0; i_11 < 22; i_11 += 4) 
                    {
                        arr_40 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */long long int) (+(((14781697270996750802ULL) / (arr_12 [i_0 - 2])))));
                        var_32 = ((/* implicit */int) min((var_32), (min((((int) arr_26 [i_0] [i_0] [i_0 - 1] [i_2] [i_2] [i_0 - 1])), (((/* implicit */int) (unsigned char)30))))));
                    }
                }
            } 
        } 
    } 
}
