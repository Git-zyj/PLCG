/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146629
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
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))))) ? ((-(9223372036854775807LL))) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-50))))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)9980)))))) - (((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9963))) : (arr_0 [i_1 - 2] [i_1 - 2])))));
                var_16 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [(short)14]))));
            }
        } 
    } 
    var_17 = min(((!(((/* implicit */_Bool) var_10)))), (((var_9) && (var_9))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-101))));
        arr_10 [i_2] [i_2] = ((/* implicit */signed char) var_5);
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) var_3))))))));
                        arr_21 [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_6] [i_3])) || (((/* implicit */_Bool) var_1)))))));
                        var_20 = ((/* implicit */signed char) (~(var_6)));
                        var_21 = ((/* implicit */short) ((signed char) (unsigned short)65280));
                        var_22 |= (+(((((-9223372036854775807LL) + (9223372036854775807LL))) << (((var_6) + (571109133472445323LL))))));
                    }
                } 
            } 
        } 
        var_23 &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_16 [i_3] [i_3] [i_3] [i_3])) ^ (((/* implicit */int) arr_16 [i_3] [i_3] [i_3] [i_3]))));
        arr_22 [i_3] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [6LL] [i_3]))) | (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_20 [i_3] [i_3])) : (arr_14 [i_3] [i_3]))));
    }
    for (signed char i_7 = 0; i_7 < 15; i_7 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 15; i_8 += 2) 
        {
            for (unsigned short i_9 = 1; i_9 < 14; i_9 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)55026))))) || (((/* implicit */_Bool) 0U))));
                        var_25 += ((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) arr_11 [i_7] [i_7])))));
                    }
                    for (short i_11 = 0; i_11 < 15; i_11 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_40 [i_7] [i_8] [i_7] [i_9] [i_7] [i_11] = ((/* implicit */unsigned short) arr_30 [i_7] [i_7] [i_8]);
                            arr_41 [i_9] [i_9] = ((/* implicit */unsigned char) (short)-23697);
                        }
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) (unsigned short)9980))));
                    }
                    for (unsigned int i_13 = 0; i_13 < 15; i_13 += 3) 
                    {
                        var_27 = ((/* implicit */short) (+(min((((/* implicit */unsigned long long int) ((long long int) (unsigned char)14))), (((arr_31 [i_7] [i_8] [i_9] [i_13]) ? (((/* implicit */unsigned long long int) -1366078057)) : (7639658599861579905ULL)))))));
                        arr_44 [i_8] [i_9] [i_8] [i_8] [i_9] [i_7] = ((/* implicit */unsigned short) var_3);
                        arr_45 [i_7] [i_7] [i_9] [i_9] [i_8] = ((/* implicit */long long int) (((((-(((((/* implicit */int) (short)-10311)) * (((/* implicit */int) (short)-10311)))))) + (2147483647))) << ((((((-((-(var_3))))) + (1794328001))) - (20)))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_14 = 0; i_14 < 15; i_14 += 2) /* same iter space */
                        {
                            var_28 = ((/* implicit */_Bool) (~(((unsigned int) var_6))));
                            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) arr_31 [i_9 - 1] [i_8] [i_8] [i_9 - 1]))));
                            var_30 &= ((/* implicit */short) ((unsigned char) var_3));
                        }
                        for (unsigned short i_15 = 0; i_15 < 15; i_15 += 2) /* same iter space */
                        {
                            arr_50 [i_9] [i_8] [i_9 + 1] [i_9 + 1] [i_15] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((int) (~(((/* implicit */int) var_8)))))), (max((min((((/* implicit */long long int) 2723101042U)), (9223372036854775807LL))), (((/* implicit */long long int) var_13))))));
                            var_31 = ((/* implicit */_Bool) (((+(max((((/* implicit */long long int) (unsigned short)48602)), (var_5))))) * (((/* implicit */long long int) (-(((/* implicit */int) arr_33 [i_9 - 1] [i_9 - 1] [i_9] [i_9 - 1] [i_9 + 1])))))));
                        }
                        arr_51 [i_7] [i_9] [i_9] [i_13] = ((/* implicit */long long int) min((min((((/* implicit */int) arr_34 [i_9 - 1] [i_9 + 1] [i_9] [i_9 + 1])), (((((/* implicit */int) var_8)) << (((((arr_37 [i_7] [i_8]) + (577133890))) - (13))))))), ((-((-(((/* implicit */int) (unsigned short)65535))))))));
                    }
                    var_32 |= min((min((((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_7] [i_7] [i_7]))) : (arr_36 [i_9] [i_8] [i_9 + 1] [i_9 - 1] [i_8] [i_8]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)10311))))))), ((~(var_2))));
                    var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned short)1920)) : (((/* implicit */int) (signed char)-74))))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_16 = 0; i_16 < 15; i_16 += 1) 
        {
            for (short i_17 = 0; i_17 < 15; i_17 += 1) 
            {
                {
                    arr_59 [i_16] [i_17] [i_16] [i_16] = ((/* implicit */long long int) (+(((/* implicit */int) max((arr_53 [i_16]), (arr_53 [i_16]))))));
                    arr_60 [i_7] [i_7] [i_7] [i_16] = ((/* implicit */long long int) ((short) var_8));
                }
            } 
        } 
    }
    var_34 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_0)), (var_4)));
}
