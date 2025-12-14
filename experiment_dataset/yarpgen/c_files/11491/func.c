/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11491
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
    var_19 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))));
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((short) 238087813000386664LL))) ? (993137870U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_8)) < (var_10))))))))));
    var_21 ^= ((/* implicit */unsigned int) max((var_6), (((/* implicit */unsigned long long int) var_12))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_22 |= ((/* implicit */int) min((max((((/* implicit */unsigned int) arr_1 [i_1])), (var_18))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_2] [6ULL])))))));
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 22; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_3] = ((/* implicit */signed char) ((unsigned int) 1491650624));
                                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((min((((((/* implicit */int) arr_5 [i_0] [i_0])) % (((/* implicit */int) arr_0 [i_0] [i_0])))), (((/* implicit */int) (unsigned short)19144)))) >> (((/* implicit */int) ((((/* implicit */int) arr_0 [i_3 - 1] [i_3 - 3])) < (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)49685)))))))))))));
                                arr_13 [i_0] [22ULL] [i_2] [(short)0] [i_0] |= ((/* implicit */unsigned long long int) arr_2 [i_2] [i_2]);
                                var_24 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)55877)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35946))))))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) var_6))));
                    var_26 |= ((/* implicit */long long int) ((((/* implicit */int) max((arr_7 [i_0] [i_1] [i_2]), (arr_7 [i_0] [i_1] [(short)4])))) == (((/* implicit */int) var_17))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 4) 
    {
        for (unsigned long long int i_6 = 1; i_6 < 15; i_6 += 1) 
        {
            {
                var_27 ^= ((/* implicit */unsigned long long int) arr_8 [i_5] [i_5] [i_5] [(unsigned char)17] [i_6] [i_6]);
                /* LoopNest 3 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned int i_8 = 3; i_8 < 17; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 1; i_9 < 16; i_9 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [2] [2])) ? (((/* implicit */int) arr_2 [i_8] [i_8])) : (((/* implicit */int) arr_10 [(_Bool)1] [i_6] [i_7] [(_Bool)1] [i_8] [i_7]))))) > (min((((/* implicit */unsigned long long int) var_4)), (13222594086218245384ULL))))) ? ((~(8ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_6] [i_6]))))))));
                                var_29 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [18ULL] [i_7] [20U] [i_7]))))), (arr_8 [i_6 + 1] [i_8] [i_8] [i_8] [i_8] [i_8 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_5] [i_5] [1LL] [i_5] [i_5 + 1]))) < (arr_21 [i_5 - 1] [i_5] [i_5 + 1])))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_10 = 2; i_10 < 16; i_10 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_11 = 3; i_11 < 16; i_11 += 4) 
                    {
                        var_30 += ((/* implicit */long long int) ((max((((unsigned long long int) arr_28 [i_5] [i_5] [i_10 - 2] [i_11 - 1])), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)255)), (arr_26 [i_5] [i_6])))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (~(((/* implicit */int) arr_7 [i_10] [i_5] [i_5])))))))));
                        /* LoopSeq 2 */
                        for (short i_12 = 1; i_12 < 14; i_12 += 2) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_0 [i_11 - 1] [i_6 - 1]))) + (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_0 [i_11 - 1] [i_6 - 1])) : (((/* implicit */int) arr_0 [i_11 - 1] [i_6 - 1])))))))));
                            var_32 -= ((/* implicit */unsigned short) ((min((((/* implicit */long long int) max((-1682429740), (((/* implicit */int) (unsigned short)35743))))), (var_3))) == (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18320940442250601506ULL)) ? (3839310351018166646LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-31271)))))) ? (max((((/* implicit */int) var_5)), (1786604596))) : (((/* implicit */int) (unsigned char)90)))))));
                            var_33 = ((/* implicit */_Bool) var_4);
                            var_34 ^= ((/* implicit */short) ((((/* implicit */_Bool) 7831108931407427459LL)) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31))) & (290751466U)))))) : (18446744073709551615ULL)));
                        }
                        /* vectorizable */
                        for (short i_13 = 1; i_13 < 14; i_13 += 2) /* same iter space */
                        {
                            var_35 -= ((/* implicit */short) (~(((((/* implicit */_Bool) 2186811139U)) ? (var_11) : (((/* implicit */unsigned long long int) 0U))))));
                            var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) var_13))));
                            var_37 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_4 [i_11 + 2] [i_13 + 2]) : (((/* implicit */int) (_Bool)1)))))));
                            arr_38 [i_6] [i_6] [i_5 - 1] [i_11] [11ULL] [i_11 - 3] [i_11] = ((/* implicit */unsigned long long int) ((-3490625875762487694LL) <= (((/* implicit */long long int) arr_4 [i_5 - 1] [i_5 - 1]))));
                        }
                        var_38 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) | (-993361923)))) ? (((/* implicit */unsigned long long int) max((795757163U), (((/* implicit */unsigned int) 2147483643))))) : (18446744073709551615ULL)))) ? (var_3) : (((((/* implicit */_Bool) max((arr_36 [i_5 - 1] [i_6 + 3] [i_10 - 1] [i_10] [2LL] [i_11]), (4294967294U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((long long int) 4294967295U))))));
                        var_39 = (((+(var_14))) - ((-(((/* implicit */int) arr_22 [i_6 - 1] [i_10])))));
                        var_40 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))))) ? ((+(0))) : (((arr_31 [i_5] [i_5] [i_6]) - (((/* implicit */int) var_15))))))));
                    }
                    for (unsigned short i_14 = 1; i_14 < 14; i_14 += 3) 
                    {
                        var_41 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_15 [i_5] [i_6 + 2]), (((/* implicit */short) (unsigned char)255))))) ? ((~(-440483303))) : (((/* implicit */int) var_17))))) + (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)57695)) : (((/* implicit */int) (unsigned char)230))))) ? (max((((/* implicit */unsigned long long int) arr_29 [i_14 - 1] [i_5] [i_5])), (3274742617727527094ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16)))))));
                        var_42 *= arr_7 [i_14 + 3] [i_10] [i_6];
                    }
                    var_43 += ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) 2147483641)) ? (arr_14 [i_5]) : (((/* implicit */unsigned long long int) 2766338375U)))))) << (((max((5965948023067806924ULL), (((/* implicit */unsigned long long int) ((int) var_13))))) - (5965948023067806867ULL)))));
                }
                for (unsigned short i_15 = 3; i_15 < 16; i_15 += 4) 
                {
                    var_44 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_16 [i_6 + 2]), (arr_16 [i_6 + 2]))))) == (((((/* implicit */_Bool) max((7042612456576430934LL), (((/* implicit */long long int) arr_37 [i_15] [(unsigned char)0] [i_6] [12U] [(unsigned char)0] [(unsigned char)0] [12U]))))) ? (((18446744073709551615ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (10597010712136258759ULL)))));
                    var_45 &= ((/* implicit */int) max((max(((~(var_3))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [(unsigned short)12] [i_6] [(unsigned short)4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (arr_36 [i_6] [i_6] [i_6 + 1] [(short)2] [i_6 + 1] [(short)2])))))), (-879059658020072246LL)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_16 = 1; i_16 < 15; i_16 += 3) 
                    {
                        for (unsigned short i_17 = 0; i_17 < 18; i_17 += 1) 
                        {
                            {
                                var_46 -= ((/* implicit */long long int) arr_44 [0U] [0U] [i_15 - 1] [(short)13]);
                                var_47 = ((/* implicit */int) ((unsigned int) 8033427608107266964ULL));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
