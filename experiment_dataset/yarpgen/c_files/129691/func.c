/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129691
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
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_10 -= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_0])) >= (max((((/* implicit */int) (unsigned short)25946)), (2147483647)))))) % (((arr_3 [i_0]) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (unsigned short)5593))))));
                        arr_10 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5614127013396908678ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28727))) : (arr_9 [i_3] [1ULL] [i_2] [i_3])))) ? (((long long int) arr_4 [i_0])) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3])))));
                        arr_11 [i_0] [i_3] [i_0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31554))) : (arr_9 [i_3] [i_3] [i_2] [i_3]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)-3269)) * (((/* implicit */int) (_Bool)1))))) ? (var_9) : (var_9))) : (max((((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2]))) : (var_9))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_3])) ? (((/* implicit */int) (unsigned short)50661)) : (((/* implicit */int) var_2)))))))));
                    }
                    for (int i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        var_11 = ((((/* implicit */_Bool) ((arr_3 [i_0]) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [i_2] [i_2] [i_1] [i_0])))) : (((/* implicit */int) ((var_4) == (((/* implicit */unsigned long long int) var_9)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) * (arr_2 [i_0] [(unsigned short)8])))) : (((unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)32256))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            var_12 = ((/* implicit */unsigned int) ((unsigned char) (+(((/* implicit */int) (unsigned char)0)))));
                            arr_16 [(_Bool)1] [i_1] [(unsigned char)1] [i_4] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (arr_15 [i_0] [(unsigned char)3] [i_2] [i_4] [i_5]) : (((/* implicit */unsigned long long int) var_9))));
                        }
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
                        {
                            var_13 -= ((/* implicit */signed char) ((18446744073709551595ULL) | (((/* implicit */unsigned long long int) arr_2 [i_4] [i_6]))));
                            var_14 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_6])) ? (((((/* implicit */_Bool) arr_14 [i_1] [0LL] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28831))) : (var_4))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3)))))));
                            var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_0])) ? (((((/* implicit */_Bool) (unsigned short)56881)) ? (((/* implicit */int) arr_0 [0LL])) : (((/* implicit */int) arr_17 [i_0] [i_1] [8LL] [i_4] [i_4] [i_6])))) : (((((/* implicit */_Bool) (unsigned short)28734)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) (_Bool)1)))))))));
                            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))));
                            var_17 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned short)31554)) ? (8252036326880370791ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63)))))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 10; i_7 += 3) /* same iter space */
                        {
                            arr_23 [i_7] [i_1] [i_1] = ((((/* implicit */_Bool) max((var_2), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */int) arr_0 [i_7])) : (((/* implicit */int) ((((/* implicit */_Bool) -7930963554132815392LL)) && (((/* implicit */_Bool) var_7))))));
                            arr_24 [i_7] [i_7] [i_7] [i_4] [i_7] [i_1] [(short)6] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_9))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 3) 
                        {
                            {
                                var_18 -= ((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)11)), (max((var_6), (var_7)))));
                                var_19 = ((/* implicit */signed char) (+(min((((/* implicit */int) arr_31 [i_0] [i_2] [i_0])), (((((/* implicit */_Bool) -190882301)) ? (((/* implicit */int) (unsigned short)36819)) : (((/* implicit */int) (signed char)(-127 - 1)))))))));
                                var_20 = ((/* implicit */unsigned short) ((-946331489) ^ (-170306974)));
                            }
                        } 
                    } 
                    arr_32 [i_0] = ((/* implicit */unsigned short) (unsigned char)1);
                    var_21 = ((/* implicit */long long int) min((var_21), (745409386683089015LL)));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((((var_0) < (((/* implicit */unsigned int) var_5)))) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) var_7)) - (-234788260))))) & (((/* implicit */int) var_8)))))));
    var_23 = min((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)41609))))) ? (max((var_9), (((/* implicit */long long int) -112138679)))) : (((/* implicit */long long int) ((/* implicit */int) var_1))))));
    var_24 = ((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_1))));
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2560841818876998317LL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_0))))));
}
