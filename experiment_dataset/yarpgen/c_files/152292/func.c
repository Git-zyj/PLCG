/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152292
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
    var_20 &= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((var_5) >= (var_11)))) : ((-(((/* implicit */int) var_10))))))) >= (0U)));
    var_21 += ((/* implicit */int) ((((/* implicit */_Bool) 4528926731218599932LL)) ? (4U) : (1023U)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 4; i_0 < 22; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(3U))))))) >= (((/* implicit */int) ((((((/* implicit */_Bool) (short)-19792)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)27))) : (-3689123144299881152LL))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (1733483382U) : (4294967295U)))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_14 [i_3] [(signed char)20] [i_2 - 1] [i_3 - 1] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)3))))) ? ((-(((/* implicit */int) var_16)))) : (((((/* implicit */_Bool) arr_11 [i_2 + 2] [i_3])) ? (((/* implicit */int) arr_3 [i_0 - 2] [i_2 - 1])) : (((/* implicit */int) var_3))))));
                                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_13 [i_2 + 2] [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_1])))) ? (((((/* implicit */_Bool) arr_13 [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_2 + 1] [i_2] [i_2 - 1] [i_1])) ? (arr_5 [i_2 + 2] [i_2] [i_2]) : (arr_5 [i_2 + 2] [(short)21] [i_2]))) : ((-(((/* implicit */int) (signed char)(-127 - 1))))))))));
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) max((-387745819), (((/* implicit */int) (signed char)120))))) : (((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */long long int) ((/* implicit */int) (short)19791))) : (5608787602299400266LL)))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */_Bool) arr_11 [10ULL] [i_2]);
                }
            } 
        } 
        var_25 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) -190860178)) >= (2316407927663133122ULL)));
        /* LoopSeq 1 */
        for (long long int i_5 = 2; i_5 < 22; i_5 += 4) 
        {
            /* LoopSeq 2 */
            for (long long int i_6 = 1; i_6 < 22; i_6 += 3) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_7 = 4; i_7 < 19; i_7 += 2) 
                {
                    var_26 *= ((/* implicit */unsigned long long int) (+(arr_11 [i_0 + 1] [i_5])));
                    var_27 = ((/* implicit */long long int) max((var_27), ((-(((long long int) -2LL))))));
                }
                for (unsigned int i_8 = 3; i_8 < 22; i_8 += 1) 
                {
                    arr_28 [i_0] [i_0] [i_6] [i_0 + 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3910714379250977727ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-21521))) : ((+(1733483384U))))))));
                    var_28 += ((/* implicit */unsigned long long int) var_11);
                }
                for (int i_9 = 0; i_9 < 23; i_9 += 3) 
                {
                    var_29 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) ((var_14) >= (var_14)))))) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-3)))))) >= (((((/* implicit */_Bool) arr_22 [(_Bool)1] [8LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21527))) : (var_4))))))));
                    var_30 = ((/* implicit */signed char) (+(var_11)));
                }
                var_31 |= ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(18446744073709551615ULL)))))))));
                arr_32 [i_6] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)70)) : (((/* implicit */int) arr_4 [i_6 + 1] [i_5 + 1] [i_0 - 3]))))));
            }
            for (int i_10 = 3; i_10 < 19; i_10 += 3) 
            {
                arr_35 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1327065118U)) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-19774)))));
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 3) 
                {
                    for (long long int i_12 = 0; i_12 < 23; i_12 += 3) 
                    {
                        {
                            arr_40 [i_10] [i_10] [i_10] [i_10 - 1] [i_10] [i_10] = (short)128;
                            var_32 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) ((var_17) >= (((/* implicit */int) arr_15 [i_5 + 1]))))), (arr_15 [i_5 - 2])));
                            arr_41 [i_12] [i_11] [i_10] [(short)13] [i_0] [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 9198721844390964215ULL)))) && (((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) (short)6822))))))));
                            arr_42 [i_0] [i_5 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_18))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)3))))) : ((+(4U)))));
                        }
                    } 
                } 
            }
            arr_43 [i_5] [i_0] = (+(((unsigned long long int) var_2)));
        }
    }
}
