/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101847
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
    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11))));
    var_18 ^= ((/* implicit */signed char) ((unsigned int) var_9));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (short i_2 = 0; i_2 < 16; i_2 += 2) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */short) var_11))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) (~(((var_0) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)168)))) : (((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) var_7)))))))));
                                var_21 = ((/* implicit */_Bool) var_6);
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((long long int) var_15)))));
                                arr_11 [i_0] [i_1] [i_0] [14LL] [i_4] = ((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))) <= (arr_10 [i_4 + 4] [i_4 + 4] [i_0] [i_1] [(unsigned char)9])));
                            }
                        } 
                    } 
                }
                for (short i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned long long int) var_4);
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        for (int i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            {
                                var_24 |= ((/* implicit */unsigned short) (signed char)-117);
                                var_25 ^= ((/* implicit */unsigned short) max(((+(((/* implicit */int) arr_1 [5U] [i_1 + 1])))), (((((/* implicit */_Bool) arr_18 [i_1] [i_5] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) var_4))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (long long int i_8 = 2; i_8 < 12; i_8 += 1) 
                {
                    var_26 = ((/* implicit */long long int) (-(arr_8 [i_0] [i_1 + 1] [i_1 + 1] [i_8 + 4])));
                    var_27 &= ((/* implicit */unsigned int) var_6);
                }
                for (long long int i_9 = 0; i_9 < 16; i_9 += 4) 
                {
                    var_28 &= ((/* implicit */unsigned int) min((((unsigned long long int) (signed char)28)), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)93)))))));
                    arr_24 [i_0] [8LL] = ((/* implicit */unsigned short) var_4);
                }
                arr_25 [9U] [i_0] = ((/* implicit */long long int) max(((-(min((var_8), (((/* implicit */unsigned long long int) var_3)))))), (((/* implicit */unsigned long long int) var_5))));
                /* LoopSeq 3 */
                for (int i_10 = 0; i_10 < 16; i_10 += 2) 
                {
                    var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) var_14))));
                    var_30 |= ((/* implicit */unsigned long long int) max((var_3), (((/* implicit */short) (signed char)-14))));
                    /* LoopSeq 2 */
                    for (signed char i_11 = 0; i_11 < 16; i_11 += 2) 
                    {
                        var_31 = arr_22 [i_1] [i_0];
                        /* LoopSeq 1 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_32 -= (signed char)-69;
                            var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) min(((signed char)-14), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))))))))));
                            arr_35 [i_12] [i_11] [i_0] [15U] [i_0] [(unsigned char)9] [(signed char)10] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 144115119356379136ULL)) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) var_4))))));
                        }
                    }
                    for (unsigned int i_13 = 0; i_13 < 16; i_13 += 2) 
                    {
                        var_34 = ((/* implicit */unsigned short) var_0);
                        /* LoopSeq 2 */
                        for (short i_14 = 0; i_14 < 16; i_14 += 4) 
                        {
                            arr_42 [i_14] [i_13] [i_0] [(unsigned short)8] [(_Bool)1] = ((/* implicit */unsigned short) var_2);
                            var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(2147483647)))))))));
                            arr_43 [6U] [(unsigned char)2] [i_10] [i_0] [i_14] [i_10] [i_13] = ((/* implicit */unsigned short) 576460752303423488LL);
                        }
                        for (short i_15 = 0; i_15 < 16; i_15 += 3) 
                        {
                            arr_47 [(_Bool)1] [11ULL] [i_10] [i_0] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_9 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])), (9223372036854775807LL)))) ? ((((_Bool)1) ? (4005843650732621789LL) : (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((((/* implicit */int) arr_45 [(signed char)6] [i_1 + 1] [i_1 + 1])) << (((/* implicit */int) (_Bool)1)))))));
                            arr_48 [i_0] [(_Bool)0] [i_0] [(short)2] [i_13] [(short)8] |= ((/* implicit */long long int) min((max((var_2), (((/* implicit */int) min((var_9), (((/* implicit */short) var_12))))))), (((/* implicit */int) ((signed char) min((((/* implicit */unsigned int) (signed char)16)), (var_5)))))));
                            var_36 = ((/* implicit */short) min((var_36), (var_3)));
                            var_37 = ((/* implicit */long long int) min((var_37), (9223372036854775807LL)));
                        }
                    }
                    var_38 = ((/* implicit */int) var_13);
                }
                for (short i_16 = 0; i_16 < 16; i_16 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_17 = 2; i_17 < 14; i_17 += 4) 
                    {
                        for (short i_18 = 2; i_18 < 15; i_18 += 2) 
                        {
                            {
                                var_39 *= ((/* implicit */_Bool) max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))));
                                var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)175))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 16160915900473985185ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)4359))))) : (min((arr_46 [(signed char)0] [i_1] [i_0] [i_17 - 1] [i_17 - 1] [i_0]), (arr_46 [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_18 - 1] [i_18])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_19 = 0; i_19 < 16; i_19 += 2) 
                    {
                        for (long long int i_20 = 3; i_20 < 15; i_20 += 1) 
                        {
                            {
                                var_41 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_2)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5))))) : (var_8)));
                                var_42 = ((/* implicit */unsigned short) ((min((var_13), (((/* implicit */long long int) arr_20 [i_0])))) - (((/* implicit */long long int) arr_55 [i_0] [i_1 + 1] [i_16] [i_19] [(unsigned short)2]))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_21 = 0; i_21 < 16; i_21 += 3) 
                {
                    var_43 = ((/* implicit */long long int) 2076775370U);
                    arr_64 [6] [4U] [i_21] [(signed char)0] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) min((var_5), (arr_2 [(_Bool)0])))) || (((/* implicit */_Bool) var_5)))))));
                    var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) 15ULL))));
                    /* LoopSeq 1 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        var_45 = ((/* implicit */unsigned long long int) var_0);
                        var_46 = ((/* implicit */unsigned int) var_4);
                        var_47 = ((/* implicit */unsigned short) (unsigned char)255);
                        arr_68 [i_0] [i_1] [i_0] = ((/* implicit */long long int) min((var_1), (((/* implicit */unsigned int) ((unsigned short) (~(arr_28 [i_0] [i_1 + 1] [(signed char)11] [(signed char)14])))))));
                    }
                }
                var_48 &= ((/* implicit */unsigned char) var_13);
            }
        } 
    } 
    var_49 = ((/* implicit */long long int) min((var_49), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((var_7) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) min((var_13), (((/* implicit */long long int) (unsigned char)93))))) ? ((((_Bool)1) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)32)))) : (((/* implicit */int) var_14)))) : ((~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)-111)))))))))));
}
