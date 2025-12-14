/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16316
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_8 [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */long long int) arr_3 [i_0])) ^ (arr_5 [i_0] [i_1] [i_0]))) == (((/* implicit */long long int) 885888975U))));
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    var_19 ^= 10763758562574302954ULL;
                    arr_11 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32685)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_2])) : (((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)62993))))), (min((var_14), (((/* implicit */unsigned long long int) arr_4 [i_1])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_2] [i_1] [i_0])) < (min((arr_2 [i_0]), (((/* implicit */int) var_0))))))))));
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    var_20 |= ((/* implicit */_Bool) arr_4 [i_0]);
                    var_21 = ((/* implicit */long long int) arr_12 [i_0] [i_3] [i_3]);
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) == ((+(var_17)))));
                                arr_19 [i_0] &= ((/* implicit */long long int) arr_1 [i_3] [i_1]);
                                arr_20 [i_0] [i_1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) % (arr_16 [i_5] [i_3] [i_1] [i_0])));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_3] [i_1] [i_3] [i_1] [i_1] [i_0])) - (((/* implicit */int) arr_15 [i_1] [i_6] [i_1] [i_6] [i_6] [i_1]))));
                        arr_23 [i_3] [i_3] [i_3] = ((/* implicit */int) (-(var_14)));
                        var_24 |= ((/* implicit */unsigned short) var_10);
                        var_25 = (-(-3346673612767981738LL));
                    }
                    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
                    {
                        var_26 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_0] [i_3])) || (((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_7]))));
                        var_27 = ((/* implicit */unsigned char) ((int) (~(((/* implicit */int) (short)-21701)))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 4) /* same iter space */
                    {
                        arr_28 [i_3] [i_1] [i_3] = ((/* implicit */unsigned short) (((~(var_17))) * (((/* implicit */int) ((((/* implicit */unsigned int) arr_3 [i_0])) != (65535U))))));
                        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) arr_0 [i_0]))));
                        var_29 = ((/* implicit */int) (short)-7711);
                        var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) var_13))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 24; i_9 += 4) /* same iter space */
                    {
                        var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((unsigned long long int) arr_27 [i_1] [i_0])))));
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_1] [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_30 [i_3] [i_3] [i_1] [i_0] [i_3])) : (((/* implicit */int) arr_30 [i_3] [i_3] [i_3] [i_9] [i_0]))));
                    }
                }
                for (long long int i_10 = 0; i_10 < 24; i_10 += 2) 
                {
                    arr_33 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) >> (((((/* implicit */unsigned int) ((/* implicit */int) ((var_12) == (var_6))))) / (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)16380))) : (2694837876U)))))));
                    var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_26 [i_10] [i_1] [i_10] [i_10])))))));
                }
                var_34 |= ((/* implicit */int) ((((((/* implicit */int) ((unsigned short) (short)13044))) % (((/* implicit */int) ((((/* implicit */int) (signed char)-123)) < (((/* implicit */int) (unsigned char)242))))))) > ((-(((var_3) + (var_3)))))));
                var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) (-(((((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)13031))) : (arr_14 [i_1] [i_1] [i_0]))) & (65539U))))))));
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 24; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 2) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) ((long long int) -1492367220)))));
                            arr_39 [i_0] [i_12] [i_11] [i_1] = ((/* implicit */unsigned short) ((((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)214))) % (var_15))) + (((/* implicit */long long int) ((var_4) / (arr_14 [i_1] [i_1] [i_1])))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_11] [i_11] [i_11])) ? (((/* implicit */int) (short)16380)) : (((/* implicit */int) (short)-23332)))))));
                            var_37 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((arr_29 [i_1] [i_1]), (arr_6 [i_0] [i_1])))), (2540475716106544245LL)));
                            /* LoopSeq 1 */
                            for (signed char i_13 = 0; i_13 < 24; i_13 += 4) 
                            {
                                var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_9)))) ? (min((arr_18 [i_11] [i_12] [i_0] [i_11] [i_1] [i_1] [i_0]), (((/* implicit */long long int) var_17)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) >= (arr_32 [i_13])))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_2), (arr_30 [i_13] [i_1] [i_0] [i_12] [i_0])))) ? (((/* implicit */int) ((var_9) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))) : (min((var_17), (1752919941)))))) : ((+(3482545009786538025LL)))));
                                var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(9223372036854775807LL)))) ? (((/* implicit */int) var_10)) : (min((1443618735), (((/* implicit */int) (_Bool)1))))));
                                arr_43 [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775802LL)) ? (((/* implicit */int) (short)120)) : (((/* implicit */int) arr_15 [i_0] [i_1] [i_11] [i_12] [i_11] [i_1]))))) ? (((((/* implicit */_Bool) arr_16 [i_12] [i_11] [i_11] [i_12])) ? (9223372036854775802LL) : (((/* implicit */long long int) 1965060438)))) : (((/* implicit */long long int) ((/* implicit */int) var_18)))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) (short)-13038))))) == (((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_12] [i_12] [i_1] [i_12])) && (((/* implicit */_Bool) var_5)))))))) : (((/* implicit */int) (short)23331))));
                                var_40 = var_0;
                                var_41 = ((/* implicit */int) ((arr_21 [i_0] [i_13] [i_13] [i_12] [i_13]) ? (min((((245760U) & (arr_27 [i_12] [i_1]))), (((/* implicit */unsigned int) arr_15 [i_13] [i_13] [i_11] [i_11] [i_1] [i_0])))) : (arr_14 [i_12] [i_11] [i_0])));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_42 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)125)) - (((/* implicit */int) (short)-13024)))) & (((var_5) * (((/* implicit */int) ((((/* implicit */unsigned int) 268435328)) == (var_4))))))));
}
