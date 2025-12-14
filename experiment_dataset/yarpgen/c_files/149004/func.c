/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149004
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
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) var_8);
                /* LoopSeq 4 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 1) /* same iter space */
                {
                    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_8)))) : (((unsigned int) (~(0))))));
                    arr_9 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned int) (signed char)-71);
                }
                /* vectorizable */
                for (signed char i_3 = 0; i_3 < 24; i_3 += 1) /* same iter space */
                {
                    var_11 = ((((/* implicit */_Bool) (unsigned short)31)) ? (arr_1 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_3] [i_3]))));
                    var_12 = ((/* implicit */long long int) (((+(2924200565U))) > (var_7)));
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_1])) << (((var_7) - (3500385827U)))));
                    var_14 *= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 760158609U)) ? (14LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                }
                /* vectorizable */
                for (signed char i_4 = 2; i_4 < 22; i_4 += 3) 
                {
                    var_15 = ((short) arr_2 [i_1]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 4; i_5 < 22; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_13 [i_4 + 2] [i_4] [i_6] [i_6])) : (((/* implicit */int) arr_3 [10] [i_0]))));
                                var_17 ^= ((/* implicit */long long int) var_6);
                                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) ((int) -28))) ? (((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_2)))))))));
                                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) arr_7 [i_5] [i_4] [i_0] [i_0]))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_7 = 2; i_7 < 22; i_7 += 2) 
                {
                    var_20 ^= ((/* implicit */unsigned char) (unsigned short)16286);
                    /* LoopSeq 2 */
                    for (int i_8 = 0; i_8 < 24; i_8 += 2) /* same iter space */
                    {
                        arr_26 [i_0] [i_0] [i_0] [(unsigned short)21] [14] [i_8] = ((/* implicit */unsigned short) max((arr_25 [i_0]), (((/* implicit */short) var_1))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned char) 16ULL);
                            arr_30 [i_0] [i_0] [i_7] [(short)0] = ((/* implicit */unsigned int) min(((~(3390177764055936491LL))), (22LL)));
                        }
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)0)), (3390177764055936491LL)))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 0; i_10 < 24; i_10 += 4) 
                        {
                            arr_34 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? ((+(3390177764055936491LL))) : (((((/* implicit */_Bool) var_4)) ? (-6646827031561523309LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)206))))))), (((/* implicit */long long int) 1500091844))));
                            arr_35 [i_0] [i_1] = ((/* implicit */short) (!(((((/* implicit */_Bool) (unsigned char)253)) && (((/* implicit */_Bool) (unsigned short)44282))))));
                            var_23 = ((/* implicit */unsigned long long int) ((short) max((arr_3 [i_0] [i_0]), ((unsigned char)70))));
                        }
                    }
                    for (int i_11 = 0; i_11 < 24; i_11 += 2) /* same iter space */
                    {
                        var_24 |= ((unsigned short) (!(((/* implicit */_Bool) arr_10 [i_11]))));
                        var_25 = ((/* implicit */unsigned long long int) (+(((((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37950))) : (-3501387293095000069LL))) + (((/* implicit */long long int) (-(4294967295U))))))));
                        arr_39 [i_0] [i_1] [1U] [i_11] = ((/* implicit */unsigned long long int) (unsigned char)39);
                        var_26 = ((/* implicit */long long int) var_9);
                        var_27 = ((/* implicit */long long int) (-(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)35872))))));
                    }
                }
            }
        } 
    } 
    var_28 = ((/* implicit */signed char) var_2);
    var_29 = ((/* implicit */_Bool) var_9);
}
