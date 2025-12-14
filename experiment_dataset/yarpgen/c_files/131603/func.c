/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131603
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
    var_10 = ((/* implicit */unsigned char) (-(((max((((/* implicit */int) (unsigned char)9)), (var_4))) * (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (var_3)))))));
    var_11 ^= (+(((((/* implicit */unsigned long long int) var_7)) * (min((var_2), (((/* implicit */unsigned long long int) var_3)))))));
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) var_9))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    arr_7 [i_0] [i_1] [i_1] |= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)7))))) != (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [i_2]))))));
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)18456))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_0))))) : (9223372036854775807LL)));
                }
                /* vectorizable */
                for (unsigned int i_3 = 1; i_3 < 19; i_3 += 3) 
                {
                    arr_11 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
                    var_14 ^= ((/* implicit */long long int) arr_5 [i_1] [i_0]);
                    var_15 &= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [(short)6]))));
                    var_16 |= ((/* implicit */signed char) arr_8 [i_3]);
                }
                for (int i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    var_17 = ((/* implicit */_Bool) (short)-33);
                    arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (+(var_8)));
                }
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    arr_21 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_8) + (((/* implicit */int) var_6))))) ? (arr_13 [i_0] [i_1] [i_1]) : (((/* implicit */long long int) ((unsigned int) var_3)))));
                    /* LoopSeq 4 */
                    for (unsigned char i_6 = 2; i_6 < 17; i_6 += 4) /* same iter space */
                    {
                        var_18 ^= var_1;
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) var_4)) != (-7589731646017956519LL)))) != (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) var_1))))));
                    }
                    for (unsigned char i_7 = 2; i_7 < 17; i_7 += 4) /* same iter space */
                    {
                        var_20 = ((/* implicit */long long int) var_4);
                        arr_27 [i_0] [7LL] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_1))))));
                    }
                    for (unsigned char i_8 = 2; i_8 < 17; i_8 += 4) /* same iter space */
                    {
                        var_21 = ((/* implicit */short) arr_25 [i_8 - 2] [i_8 - 2] [i_8 - 1] [i_5] [i_5]);
                        var_22 -= ((/* implicit */unsigned char) (short)5476);
                    }
                    for (unsigned char i_9 = 2; i_9 < 17; i_9 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (signed char i_10 = 3; i_10 < 18; i_10 += 4) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */int) arr_8 [i_0]))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (13497483899863232807ULL)))));
                            arr_34 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_9 + 2] [i_10]))));
                        }
                        for (signed char i_11 = 3; i_11 < 18; i_11 += 4) /* same iter space */
                        {
                            arr_37 [(signed char)15] [i_1] [i_1] [i_9] [i_11] = ((/* implicit */int) var_5);
                            var_24 = ((/* implicit */_Bool) (+(260096U)));
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)47072)))) ^ (((/* implicit */int) (unsigned char)151)))))));
                        }
                        var_26 = (~(((/* implicit */int) var_0)));
                    }
                    arr_38 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_17 [i_0] [i_0] [i_5]);
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                arr_47 [i_0] [i_12] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)0))));
                                var_27 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) (_Bool)1))))));
                                arr_48 [i_0] [i_12] [i_0] [i_0] [i_12] [i_0] = ((/* implicit */short) (+((~(min((var_4), (((/* implicit */int) var_1))))))));
                                arr_49 [i_12] = ((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_1 [i_0]))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */short) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)18456)), (var_2)))) ? (((((/* implicit */_Bool) var_1)) ? (0U) : (((/* implicit */unsigned int) arr_5 [i_12] [i_0])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-50)) : (var_3))))))));
                    var_29 = ((/* implicit */_Bool) max((((arr_33 [i_0] [i_0] [i_0] [i_1] [i_1] [i_12]) / (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (arr_23 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)47080))))))))));
                }
                /* vectorizable */
                for (signed char i_15 = 1; i_15 < 19; i_15 += 4) 
                {
                    var_30 = ((/* implicit */short) ((((/* implicit */int) (short)-23837)) * ((-(((/* implicit */int) arr_45 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                    /* LoopSeq 1 */
                    for (int i_16 = 0; i_16 < 20; i_16 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            arr_58 [i_0] [i_0] [i_15] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [i_15]))));
                            arr_59 [i_15] [i_1] [i_15] [i_16] [4U] [i_1] [i_17] = (!((!(((/* implicit */_Bool) var_7)))));
                            var_31 *= ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                        }
                        for (unsigned int i_18 = 1; i_18 < 18; i_18 += 2) 
                        {
                            var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) var_2))));
                            arr_64 [i_0] [i_15] [i_0] [i_16] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_0])) : (var_4)))) : (((unsigned long long int) 4294967295U))));
                            arr_65 [i_0] [i_1] [i_0] [i_18] [i_15] [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(4294967295U)))) ? (arr_52 [i_18 - 1] [i_15 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_0] [i_1] [i_0] [i_16]))))))));
                            var_33 = ((/* implicit */int) arr_17 [(short)13] [i_15] [i_0]);
                            var_34 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))));
                        }
                        /* LoopSeq 1 */
                        for (int i_19 = 2; i_19 < 18; i_19 += 4) 
                        {
                            var_35 = ((/* implicit */_Bool) min((var_35), ((_Bool)1)));
                            var_36 -= ((((/* implicit */_Bool) ((var_5) ? (var_8) : (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_54 [i_19] [i_16] [(unsigned char)2] [i_1] [i_0]))) : (arr_10 [i_0] [i_0]))));
                            var_37 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_63 [i_15 + 1] [i_19 + 2] [(short)16] [i_16]))));
                            arr_70 [i_0] [i_1] [i_1] [i_15 - 1] [i_16] [i_19 + 2] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967278U)) ? (4294967283U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18456)))));
                        }
                    }
                }
                var_38 = ((/* implicit */int) arr_12 [i_0] [i_0]);
                var_39 = ((/* implicit */long long int) (((_Bool)1) ? (((((/* implicit */_Bool) (unsigned short)47080)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)18454)) : (var_3))) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)(-32767 - 1)))));
            }
        } 
    } 
    var_40 -= ((/* implicit */short) (+((~(var_8)))));
}
