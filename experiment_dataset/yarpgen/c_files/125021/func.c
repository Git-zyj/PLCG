/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125021
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
    var_11 = ((((/* implicit */_Bool) (unsigned short)61376)) ? (1157090237U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32766))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        arr_9 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_2 [i_3]);
                        arr_10 [i_0] = ((/* implicit */unsigned int) (~(18446744073709551615ULL)));
                        var_12 -= ((18446744073709551614ULL) % (((/* implicit */unsigned long long int) 1391662538U)));
                    }
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_5 = 1; i_5 < 18; i_5 += 4) 
                        {
                            var_13 -= ((/* implicit */short) (!(((/* implicit */_Bool) 1391662538U))));
                            arr_16 [i_0] [i_1] [4U] [i_4] [i_5] = ((/* implicit */int) 0U);
                            var_14 &= ((/* implicit */unsigned int) ((arr_11 [i_0] [i_1] [i_0] [i_0] [i_0]) ? (((/* implicit */int) (unsigned short)350)) : (((/* implicit */int) (unsigned short)4130))));
                            var_15 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [18U] [i_1] [18U] [i_4] [i_4]))) : (18446744073709551615ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) 1470096405125217901ULL)))) : (arr_1 [(short)18] [i_0 - 3])));
                        }
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 - 1])) ? (var_5) : (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_1])))))));
                            arr_19 [i_6] [i_0] [i_4] [i_2 + 1] [i_0] [i_0 + 1] = ((/* implicit */unsigned short) (+((+(16976647668584333709ULL)))));
                        }
                        arr_20 [i_2] [i_0] [i_2] [19ULL] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)13115))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (832972019U)))) || (((/* implicit */_Bool) 72057594037927935ULL))));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 20; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            {
                                arr_28 [i_0] [i_0] [i_2] [i_0] [17U] [i_7 + 1] [i_8 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-14)), (5ULL)))) ? (((/* implicit */unsigned long long int) 3312345230U)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)13113))) / (18446744073709551597ULL)))));
                                arr_29 [i_0] [i_0] [i_0] [i_7] [i_8] = ((/* implicit */_Bool) max(((~(0ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        for (unsigned int i_10 = 1; i_10 < 19; i_10 += 2) 
                        {
                            {
                                arr_34 [i_0] [1LL] [i_2 - 1] [i_2 - 1] [i_0] [i_9] [i_10 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) (unsigned char)144))));
                                arr_35 [i_0] [i_0] [i_0] [i_0] [i_9] [i_0] = ((/* implicit */int) ((unsigned long long int) ((((18446744073709551606ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0] [16U] [i_2]))))) && (((/* implicit */_Bool) var_8)))));
                                arr_36 [i_0] = max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_12 [(short)10] [(short)17] [i_2] [(unsigned short)7] [(unsigned short)7]), (arr_14 [15] [15] [i_2] [13ULL] [i_10 - 1]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_2 [i_9])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_1 [i_0 + 1] [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65534)) * (((/* implicit */int) (short)0))))))));
                            }
                        } 
                    } 
                    var_17 |= ((/* implicit */short) var_2);
                }
            } 
        } 
    } 
}
