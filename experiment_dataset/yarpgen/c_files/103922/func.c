/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103922
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    var_16 = ((/* implicit */unsigned int) var_9);
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) <= (arr_7 [i_0] [(signed char)14]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 14; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_15 [i_2] [i_0] [i_1] [i_3] [i_3] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) -6856744379661006014LL))))));
                                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 186272237184906237ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4))))) : (var_7))))));
                                var_19 = ((/* implicit */long long int) max((var_19), (((((/* implicit */_Bool) (unsigned char)0)) ? (var_0) : (8117120153739819807LL)))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) 443938017U)) ? ((+(arr_13 [i_0] [i_0] [i_1] [i_1] [i_2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)103)))))));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 4) 
                {
                    arr_19 [i_0] [i_0] = ((/* implicit */long long int) var_14);
                    /* LoopSeq 3 */
                    for (unsigned short i_6 = 1; i_6 < 15; i_6 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((short) arr_18 [i_5 + 2] [i_5 + 1] [12LL])))));
                        var_22 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2)));
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)129)))))));
                            var_24 += ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */int) (signed char)10))))));
                        }
                        var_25 = ((/* implicit */unsigned char) ((((unsigned int) var_14)) >> (((((/* implicit */int) var_2)) - (236)))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        var_26 = ((short) (signed char)-126);
                        arr_26 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_2 [7LL] [0U] [0LL]) << (((var_5) - (9794518615793548871ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_8] [i_5 + 2] [i_8]))) : ((-(-4423904161765893988LL)))));
                    }
                    for (int i_9 = 0; i_9 < 16; i_9 += 4) 
                    {
                        var_27 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)21138)) ? (((/* implicit */int) arr_21 [i_0] [i_9] [i_5] [i_9])) : (((/* implicit */int) var_14))));
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 0; i_10 < 16; i_10 += 1) 
                        {
                            arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [10] [i_0] = ((/* implicit */unsigned int) var_10);
                            var_28 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_10] [i_9] [i_5 + 1] [i_1] [i_0])))))) ? (((int) var_1)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) >= (1116980227U))))));
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) != (((/* implicit */int) (unsigned char)39))));
                        }
                        arr_32 [i_0] [i_1] [i_5] [11ULL] = ((/* implicit */unsigned char) var_13);
                    }
                    arr_33 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_5 + 2] [i_0] [i_0] [i_5 + 2]))) & (var_15)));
                    arr_34 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */long long int) ((unsigned int) (-(((/* implicit */int) var_4)))));
                }
                var_30 = ((/* implicit */unsigned char) ((max((((unsigned long long int) var_4)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10881211015283954240ULL)) ? (var_6) : (((/* implicit */int) var_1))))))) > (((unsigned long long int) arr_7 [i_0] [i_0]))));
                /* LoopSeq 2 */
                for (long long int i_11 = 0; i_11 < 16; i_11 += 4) 
                {
                    var_31 += ((/* implicit */short) ((unsigned long long int) max((var_12), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))))))));
                    /* LoopNest 2 */
                    for (long long int i_12 = 1; i_12 < 13; i_12 += 2) 
                    {
                        for (int i_13 = 1; i_13 < 15; i_13 += 3) 
                        {
                            {
                                arr_43 [i_0] [i_1] [i_1] [i_11] [i_0] [i_1] = ((((/* implicit */_Bool) -8117120153739819784LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-4166))) : (-4423904161765893988LL));
                                var_32 = ((/* implicit */short) max((((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) (unsigned short)44408)))), (var_9)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_14 = 0; i_14 < 16; i_14 += 4) 
                    {
                        for (signed char i_15 = 2; i_15 < 13; i_15 += 4) 
                        {
                            {
                                var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_15))) ? ((-9223372036854775807LL - 1LL)) : (min((((/* implicit */long long int) var_4)), (var_10)))));
                                var_34 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) + (arr_35 [i_0] [i_0] [i_0] [i_14])))) <= (var_5)));
                                arr_50 [i_0] [i_0] = ((/* implicit */long long int) max((((int) min((-1LL), (((/* implicit */long long int) var_12))))), (((int) ((unsigned long long int) 2265797864340270565LL)))));
                            }
                        } 
                    } 
                }
                for (int i_16 = 4; i_16 < 15; i_16 += 3) 
                {
                    arr_53 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) min((((long long int) 9223372036854775796LL)), (((long long int) ((unsigned short) var_4)))));
                    /* LoopNest 2 */
                    for (long long int i_17 = 2; i_17 < 15; i_17 += 4) 
                    {
                        for (int i_18 = 0; i_18 < 16; i_18 += 4) 
                        {
                            {
                                arr_59 [i_18] [i_18] [6U] [6U] [6U] &= ((/* implicit */unsigned char) max((var_6), (((/* implicit */int) var_13))));
                                var_35 = ((/* implicit */signed char) ((long long int) ((unsigned int) var_6)));
                            }
                        } 
                    } 
                }
                var_36 = ((/* implicit */int) ((signed char) ((long long int) 4423904161765894001LL)));
            }
        } 
    } 
    var_37 = ((/* implicit */signed char) ((max((((unsigned int) -4423904161765894004LL)), (((/* implicit */unsigned int) (unsigned short)21115)))) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)4)) ? (-9223372036854775796LL) : (8117120153739819807LL))))))));
}
