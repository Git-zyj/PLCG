/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186418
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5708711463023378526ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21638))) : (var_9)))) || (((/* implicit */_Bool) var_11))))) & (((/* implicit */int) var_12))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */int) var_6)) : (var_10)))));
    var_15 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 10273020838949747398ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-21635))) & (var_0)))) || (((/* implicit */_Bool) max((var_5), (var_0)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21638)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))) ? (min((0LL), (((/* implicit */long long int) (short)-17491)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4)))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) -1)) ? (var_10) : (((/* implicit */int) var_11))));
        var_16 -= ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-31170)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_17 += min((((/* implicit */int) (unsigned char)239)), (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_12))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6)))));
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (int i_4 = 1; i_4 < 20; i_4 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)30341)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25284))) : (0ULL)));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                        {
                            var_19 -= ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)36621))))) : (var_3));
                            var_20 = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) (unsigned char)7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21638))) : (18446744073709551592ULL));
                        }
                        for (signed char i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            arr_19 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)42)))))) || (((/* implicit */_Bool) (+(18446744073709551615ULL))))));
                            arr_20 [i_1] [i_1] [i_4] [i_1] [i_3] [i_4 + 1] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) (unsigned char)224))));
                            arr_21 [i_4] [i_2] [i_3] [i_2] [i_6] = ((/* implicit */long long int) (~(0ULL)));
                            arr_22 [i_4] [i_3] [i_4] = ((/* implicit */unsigned char) -1LL);
                        }
                        arr_23 [i_1] [5LL] [i_3] [i_4] = ((/* implicit */long long int) min((max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)-127)))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) 1733081112U))))) : (((/* implicit */int) var_1))))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) var_12)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (-1)))))) ? (((0ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_10)) ? (var_3) : (var_9))) : (((/* implicit */unsigned long long int) min((var_0), (((/* implicit */long long int) (unsigned short)53639)))))))));
        var_22 = ((/* implicit */unsigned int) max((var_9), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6)))))));
    }
    /* vectorizable */
    for (short i_7 = 4; i_7 < 16; i_7 += 4) /* same iter space */
    {
        arr_28 [i_7 - 4] [i_7 - 3] = ((/* implicit */signed char) var_9);
        /* LoopSeq 1 */
        for (short i_8 = 1; i_8 < 13; i_8 += 2) 
        {
            arr_31 [i_8] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)0)) || (((/* implicit */_Bool) var_1)))))) : (var_5)));
            arr_32 [i_7 - 4] [i_8 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)9374)) ? (((/* implicit */int) var_7)) : (-1500187658)))) && (((/* implicit */_Bool) ((var_0) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
            arr_33 [i_8] = ((/* implicit */unsigned long long int) var_7);
            arr_34 [i_7] [i_7] [i_8 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)77)) && (((/* implicit */_Bool) 0ULL))));
            /* LoopNest 2 */
            for (signed char i_9 = 0; i_9 < 17; i_9 += 1) 
            {
                for (unsigned char i_10 = 0; i_10 < 17; i_10 += 2) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1872996784)) && (((/* implicit */_Bool) (unsigned char)186))));
                        /* LoopSeq 1 */
                        for (int i_11 = 2; i_11 < 16; i_11 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) var_0);
                            var_25 -= ((/* implicit */long long int) ((var_7) ? (var_10) : (((/* implicit */int) var_4))));
                        }
                        var_26 = ((/* implicit */int) ((var_6) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_12 = 0; i_12 < 17; i_12 += 4) 
                        {
                            var_27 += ((/* implicit */_Bool) (-(((/* implicit */int) var_4))));
                            var_28 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-21638)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12))));
                            var_29 = ((/* implicit */unsigned int) var_5);
                        }
                        /* LoopSeq 1 */
                        for (int i_13 = 1; i_13 < 15; i_13 += 4) 
                        {
                            arr_47 [i_7] [i_8] [i_9] [i_10] [i_13] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) var_2))));
                            arr_48 [i_7 - 3] [i_8] [i_9] [(unsigned char)4] [i_9] = ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))));
                            var_30 *= ((((/* implicit */_Bool) 1872996783)) ? (18446744073709551600ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21638))));
                        }
                    }
                } 
            } 
        }
        var_31 -= (((+(((/* implicit */int) var_4)))) & (((/* implicit */int) var_11)));
    }
    for (short i_14 = 4; i_14 < 16; i_14 += 4) /* same iter space */
    {
        var_32 *= ((/* implicit */signed char) ((0ULL) & (((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */long long int) -840460151)) : (var_0))))));
        var_33 += ((/* implicit */unsigned int) max((max((((((/* implicit */_Bool) 0)) ? (4260607557632ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (486515330) : (((/* implicit */int) var_2))))) && (((((/* implicit */_Bool) (unsigned char)227)) && (var_7))))))));
        var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 661552382)) ? (((/* implicit */unsigned long long int) ((var_7) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) -1)) : (var_0))) : (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), (var_7)))))))) : (max((var_8), (0ULL)))));
    }
}
