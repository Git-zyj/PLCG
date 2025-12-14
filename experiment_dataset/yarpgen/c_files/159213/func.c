/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159213
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned short) arr_3 [i_0] [i_0]));
        var_18 = ((/* implicit */unsigned char) var_1);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_11 [i_0] [(unsigned char)12] [(short)10] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) max(((unsigned char)55), ((unsigned char)136)))) ^ (((/* implicit */int) var_10))));
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) (signed char)30)))))));
                }
            } 
        } 
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-18570)))))));
    }
    for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (0) : (((/* implicit */int) (short)-18583))));
        var_22 = ((/* implicit */short) ((((/* implicit */int) (short)18581)) > (((/* implicit */int) (_Bool)1))));
        var_23 = arr_6 [i_3] [i_3];
    }
    for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                {
                    var_24 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_20 [(short)10] [i_5] [i_6 - 1]), (((/* implicit */unsigned char) var_2)))))) >= (((((/* implicit */_Bool) ((unsigned char) (short)18570))) ? (((/* implicit */long long int) ((int) var_8))) : (var_5)))));
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 4) /* same iter space */
                    {
                        var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)18585))));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(-7473595300323589091LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-124)), (arr_20 [i_6] [i_5] [i_6 - 1]))))) : (arr_22 [12LL] [12LL] [i_6 - 1])));
                        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_6 - 1]))) * (max((arr_22 [i_6 - 1] [i_6 - 1] [1LL]), (arr_3 [i_4] [i_6 - 1]))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_8 = 0; i_8 < 14; i_8 += 4) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned char) var_3);
                        /* LoopSeq 4 */
                        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) 
                        {
                            arr_31 [i_5] [i_5] [(unsigned short)1] [i_5] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)180)) ? (((/* implicit */int) arr_9 [15LL])) : (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (short)-18578)))) : (var_13)));
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (-(arr_8 [i_9] [(_Bool)1] [i_6 - 1] [i_6 - 1]))))));
                            var_30 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15))));
                            arr_32 [i_5] [9ULL] [(_Bool)1] = ((/* implicit */_Bool) ((int) arr_9 [i_6 - 1]));
                            arr_33 [i_5] [(signed char)0] [i_5] [i_5] [i_5] [(signed char)0] = ((/* implicit */signed char) (short)19113);
                        }
                        for (short i_10 = 0; i_10 < 14; i_10 += 4) 
                        {
                            var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) var_7))));
                            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_6))))) : (var_17)));
                            var_33 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_4] [i_6])) ? (((/* implicit */int) arr_20 [10] [i_5] [i_5])) : (((/* implicit */int) var_12))))) ? (-218240846) : (((/* implicit */int) arr_21 [i_5] [i_6] [i_6] [(_Bool)1])));
                        }
                        for (long long int i_11 = 0; i_11 < 14; i_11 += 1) 
                        {
                            arr_40 [i_4] [7ULL] [(signed char)3] [i_5] [7ULL] = ((/* implicit */_Bool) ((var_15) ? (((((/* implicit */int) arr_26 [i_5])) % (arr_17 [(_Bool)1]))) : (((((/* implicit */_Bool) 3927474636U)) ? (((/* implicit */int) (unsigned short)60697)) : (((/* implicit */int) arr_39 [i_11] [i_5] [i_5] [13LL] [i_11] [(signed char)11] [i_6]))))));
                            arr_41 [i_8] [i_5] [i_4] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))));
                            var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) == (arr_3 [i_6 - 1] [i_6 - 1]))))));
                            arr_42 [i_4] [(_Bool)1] [13ULL] [i_8] [(short)1] [i_5] = ((/* implicit */short) var_10);
                        }
                        for (int i_12 = 0; i_12 < 14; i_12 += 2) 
                        {
                            arr_46 [i_4] [(unsigned char)2] [i_5] [i_8] [i_12] [(short)9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_8] [i_8] [i_6] [(_Bool)1] [13] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [(unsigned short)7] [(unsigned short)7] [i_5] [(unsigned short)7] [i_8] [10ULL] [i_8]))) : (var_3)))) ? (-7812715671995765690LL) : (arr_29 [i_4] [i_5] [i_5] [i_5] [i_5])));
                            var_35 = (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (-5815410247346325555LL))));
                            arr_47 [i_5] [i_8] = ((arr_8 [i_5] [(_Bool)1] [i_6 - 1] [13LL]) + (var_11));
                            var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) arr_15 [i_8]))));
                        }
                        var_37 = ((/* implicit */_Bool) -1159062070);
                    }
                    /* LoopNest 2 */
                    for (short i_13 = 0; i_13 < 14; i_13 += 2) 
                    {
                        for (long long int i_14 = 2; i_14 < 12; i_14 += 1) 
                        {
                            {
                                var_38 = ((/* implicit */unsigned long long int) arr_0 [2LL]);
                                var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) (short)-4738))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_40 = ((/* implicit */unsigned long long int) -9223372036854775798LL);
        var_41 = ((/* implicit */unsigned long long int) (-(var_13)));
    }
    var_42 = ((/* implicit */long long int) (short)(-32767 - 1));
    var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) max(((short)791), (((/* implicit */short) ((((/* implicit */int) (unsigned char)248)) > (((/* implicit */int) (short)(-32767 - 1)))))))))));
    var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) var_10))));
}
