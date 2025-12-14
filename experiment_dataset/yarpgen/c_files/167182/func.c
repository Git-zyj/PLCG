/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167182
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
    var_15 = ((/* implicit */short) var_2);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) (-((+(((((/* implicit */_Bool) var_6)) ? (arr_3 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [11LL])))))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 2; i_2 < 10; i_2 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
                    {
                        var_17 -= ((/* implicit */int) arr_3 [(_Bool)1] [i_1 - 1]);
                        arr_8 [i_0] [i_1 - 1] [i_2] [i_3] [i_0] [i_1 - 1] = ((((arr_1 [i_0 + 2] [i_0 + 3]) || (arr_1 [i_0 + 3] [i_0 + 3]))) || ((!(arr_1 [i_0 + 3] [i_0 + 1]))));
                        var_18 = ((/* implicit */int) (+(var_9)));
                    }
                    for (short i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
                    {
                        arr_11 [(unsigned short)8] [i_1] [i_2] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_10)) ? (1669985662U) : (((/* implicit */unsigned int) var_3)))))))));
                        var_19 = ((/* implicit */short) ((((int) arr_2 [i_4] [i_1] [i_0])) >> ((((~(((/* implicit */int) arr_2 [(signed char)10] [i_2 + 1] [i_1 - 1])))) + (13365)))));
                        /* LoopSeq 3 */
                        for (short i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
                        {
                            var_20 |= ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)11644)) >= (((/* implicit */int) (short)5280)))))) ^ ((~(arr_5 [i_2] [i_2]))))) < (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)5286)) : (-676750455)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_1]))) | (arr_6 [i_4] [i_1 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) < (12592462531944006314ULL))))))))));
                            var_21 &= (((-(min((var_2), (((/* implicit */long long int) 2147483647)))))) / (((/* implicit */long long int) ((/* implicit */int) (short)-5288))));
                        }
                        for (short i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
                        {
                            arr_18 [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_12 [i_0] [i_4] [i_4] [(signed char)1] [i_1 - 1] [i_1 - 1] [i_0]))));
                            arr_19 [i_2] [i_1] [10] [i_4] = ((/* implicit */long long int) ((arr_13 [i_0] [i_1] [i_0] [i_4] [i_0] [i_0]) || (((/* implicit */_Bool) (~(max((arr_3 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_6 [i_2] [8ULL])))))))));
                        }
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 12; i_7 += 3) /* same iter space */
                        {
                            var_22 = (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_6 [i_2] [i_1 - 1]))));
                            var_23 &= ((/* implicit */short) (-(((/* implicit */int) arr_10 [i_0 + 3] [2ULL] [i_0] [i_0] [i_1 - 1] [i_4]))));
                            arr_22 [i_0] [(unsigned short)11] [(unsigned short)2] [i_2] [i_2] [i_4] [i_7] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_7] [i_4] [i_2] [i_0 - 1] [i_0 - 1]))));
                        }
                        arr_23 [i_2 + 1] [i_2] [i_0] = ((/* implicit */short) ((((long long int) (signed char)36)) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_3 [i_0] [(signed char)0]))))))))));
                        var_24 = ((/* implicit */unsigned short) arr_2 [i_0] [i_0 + 1] [i_2 - 2]);
                    }
                    for (short i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
                    {
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-5271)) ? ((-(arr_3 [i_0 - 1] [i_0 - 1]))) : (((((/* implicit */_Bool) var_11)) ? (arr_3 [i_0] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1] [i_1 - 1])))))));
                        var_26 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_6)) == (((/* implicit */int) arr_15 [(short)8] [i_8] [2U] [i_8] [i_2])))) ? (((/* implicit */unsigned long long int) arr_16 [i_0 - 1] [i_1] [i_2] [(unsigned short)9] [i_2 + 1] [(unsigned char)3])) : (((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))) | (((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (10632813667842839160ULL)))))));
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) var_6))));
                    }
                    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (-((-(((/* implicit */int) max((((/* implicit */short) arr_1 [i_0 + 2] [i_0 + 2])), ((short)5264)))))))))));
                    var_29 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) var_14))))), (4294967295U)));
                }
                /* vectorizable */
                for (unsigned char i_9 = 2; i_9 < 10; i_9 += 1) /* same iter space */
                {
                    arr_30 [(unsigned char)3] [(unsigned char)3] [(unsigned char)3] = ((/* implicit */long long int) (~((-(10632813667842839164ULL)))));
                    arr_31 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 7813930405866712458ULL)) && (((/* implicit */_Bool) arr_28 [i_9 + 2] [i_1] [i_0 + 1])))))) ^ (10632813667842839145ULL)));
                }
                arr_32 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_27 [i_0] [i_1] [0LL] [0LL])) + (((/* implicit */int) (signed char)60))))))) ? (18446744073709551602ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-1)))))));
                /* LoopSeq 1 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_30 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-5304))))) / ((+(arr_20 [(unsigned short)8] [i_1] [(unsigned short)6] [i_1 - 1] [i_1])))));
                    var_31 = ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_4 [i_1])))), ((!(((/* implicit */_Bool) (short)-1)))))) ? (((/* implicit */int) ((_Bool) max((var_12), (arr_26 [i_0 - 1] [2LL] [i_10] [(unsigned char)6]))))) : (((/* implicit */int) max(((!(((/* implicit */_Bool) var_1)))), (((_Bool) var_12)))))));
                }
            }
        } 
    } 
    var_32 = ((((/* implicit */_Bool) 4865366456355268877LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) 15843802101683584717ULL)) ? (4865366456355268882LL) : (var_2))) : (var_0))));
    var_33 = var_12;
}
