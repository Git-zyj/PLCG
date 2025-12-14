/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138326
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
    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)148)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)89)) > (((/* implicit */int) var_4)))))) : (var_9))), (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)184)))))) & (min((((/* implicit */long long int) (_Bool)1)), (-6542604641446122068LL))))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 2])))))));
                arr_4 [(signed char)8] = ((/* implicit */unsigned char) (~(((((((/* implicit */_Bool) (unsigned char)57)) ? (((/* implicit */int) (signed char)102)) : (((/* implicit */int) (signed char)102)))) + (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) arr_0 [i_0] [i_0])))))))));
                arr_5 [i_0] = ((/* implicit */unsigned int) ((arr_2 [i_0 - 2]) == (((((/* implicit */int) var_4)) + (((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1]))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned int i_2 = 1; i_2 < 18; i_2 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (var_5)))) + (((/* implicit */int) arr_10 [i_4] [i_4] [i_2 - 1] [i_2 - 1] [i_4] [i_2 - 1])))))));
                                arr_12 [i_3] [i_2 - 1] [i_2 - 1] [i_1] [i_0 + 1] [i_3] = ((/* implicit */unsigned long long int) ((arr_3 [i_0 + 1]) + (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) arr_11 [i_3] [i_4]))))));
                                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0 + 1] [i_3 + 1])))))));
                            }
                        } 
                    } 
                    var_16 ^= ((/* implicit */unsigned char) ((int) arr_0 [i_0 - 2] [i_2 - 1]));
                }
                for (unsigned int i_5 = 1; i_5 < 18; i_5 += 2) /* same iter space */
                {
                    arr_17 [i_0] [(unsigned short)6] = ((/* implicit */_Bool) arr_2 [i_1]);
                    var_17 *= ((/* implicit */short) arr_10 [(signed char)14] [i_0] [i_0] [i_0 - 2] [i_0] [(signed char)18]);
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (~(arr_2 [i_5]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 3; i_6 < 16; i_6 += 2) 
                    {
                        for (short i_7 = 0; i_7 < 19; i_7 += 1) 
                        {
                            {
                                var_19 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1])) ? ((~(((/* implicit */int) arr_22 [i_0] [i_6 - 2] [i_0] [i_0] [i_0 - 2])))) : (((/* implicit */int) ((((3025701404U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_5] [i_1] [i_5] [(unsigned char)0]))))) > (((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [i_1] [i_0]), ((_Bool)1))))))))));
                                var_20 = ((/* implicit */_Bool) max((((unsigned long long int) ((unsigned short) var_1))), (((/* implicit */unsigned long long int) (~(8166797812329758252LL))))));
                            }
                        } 
                    } 
                    arr_25 [i_0] [i_0] [i_1] [i_5] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) (unsigned char)216))))) | (((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)40)) + (((/* implicit */int) var_0))))) + (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)80))) - (arr_18 [i_0] [i_1] [i_5] [i_0])))))));
                }
                /* vectorizable */
                for (unsigned short i_8 = 2; i_8 < 18; i_8 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 19; i_9 += 3) 
                    {
                        for (short i_10 = 2; i_10 < 15; i_10 += 3) 
                        {
                            {
                                var_21 |= ((/* implicit */signed char) ((unsigned short) (+(((/* implicit */int) (_Bool)1)))));
                                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_9 [i_10] [i_0] [i_0] [1] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_0] [i_10] [i_8 + 1] [i_9] [i_10 + 2]))))))));
                                arr_34 [(unsigned char)5] [i_1] [(short)10] [i_10] [i_10 - 2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_30 [i_10 + 3] [i_10])) + (((/* implicit */int) arr_30 [i_10 + 1] [i_10]))));
                            }
                        } 
                    } 
                    arr_35 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_8 - 1] [i_8 + 1] [i_8] [i_0 + 1] [i_0 - 2])) ? (((/* implicit */int) arr_24 [i_1] [i_1] [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_24 [i_0] [i_0 - 2] [i_8] [i_1] [i_8 + 1]))));
                    var_23 += ((/* implicit */short) var_11);
                }
                for (unsigned int i_11 = 0; i_11 < 19; i_11 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_12 = 2; i_12 < 18; i_12 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned short) ((short) arr_6 [i_0 - 2] [i_0 + 1] [i_1] [i_12 - 1]));
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_6 [i_0 - 2] [i_0 + 1] [i_12 - 2] [i_12])) : (((/* implicit */int) arr_6 [i_0] [i_0 + 1] [i_12 - 2] [i_12]))));
                    }
                    arr_40 [i_11] = ((/* implicit */unsigned int) min((((((/* implicit */int) ((((/* implicit */int) (signed char)15)) == (((/* implicit */int) (signed char)(-127 - 1)))))) % (((/* implicit */int) ((unsigned char) 7374096307374720008LL))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_1] [i_11])) ? (((/* implicit */int) arr_24 [i_0] [i_1] [i_0] [i_11] [i_11])) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) (signed char)78)) ? (((/* implicit */int) (unsigned short)8577)) : (((/* implicit */int) arr_23 [i_0] [i_1] [i_1] [i_11] [i_11] [i_11])))) : (((int) var_10))))));
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_13 = 3; i_13 < 20; i_13 += 2) 
    {
        var_26 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_42 [i_13 + 1] [(signed char)0])), (-7374096307374720009LL)))) ? (-8166797812329758231LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) arr_41 [i_13] [i_13])) : (-7374096307374720012LL)))) ? (arr_41 [i_13 - 1] [i_13 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_41 [i_13] [i_13])))))))));
        arr_43 [i_13] = max((min((arr_42 [i_13] [i_13]), (arr_41 [i_13 - 3] [i_13 + 2]))), (((/* implicit */unsigned int) (~(-402851437)))));
    }
    for (long long int i_14 = 1; i_14 < 19; i_14 += 3) 
    {
        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((7374096307374720009LL), (var_9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)229))))) : (((/* implicit */int) arr_46 [i_14]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) max(((unsigned short)3), (var_0))))))) : (((unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_14] [i_14])) ? (((/* implicit */int) arr_46 [i_14])) : (((/* implicit */int) (unsigned char)3))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_15 = 0; i_15 < 22; i_15 += 2) 
        {
            var_28 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_44 [i_14 - 1] [i_14 + 3])) : (((/* implicit */int) var_7)));
            /* LoopNest 2 */
            for (unsigned int i_16 = 0; i_16 < 22; i_16 += 3) 
            {
                for (signed char i_17 = 0; i_17 < 22; i_17 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_18 = 0; i_18 < 22; i_18 += 4) 
                        {
                            var_29 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65532)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_53 [i_14 + 3] [i_15] [i_16] [i_17]))))) > (72056494526300160LL)));
                            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_16] [i_15])) ? (((/* implicit */int) arr_55 [i_14 - 1] [i_15] [i_16] [i_14] [i_16])) : (((/* implicit */int) (signed char)-123))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_14 + 2] [i_14 + 3] [i_14 + 2] [i_14 + 3]))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64))) : (1716454738U))))))));
                            arr_58 [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_45 [i_14] [i_15]) + (((/* implicit */long long int) 1901173326U))))) ? ((~(((/* implicit */int) arr_57 [i_18] [i_15] [i_16] [i_15] [i_14 + 1])))) : (((/* implicit */int) ((unsigned short) (unsigned short)65535)))));
                        }
                        for (unsigned long long int i_19 = 0; i_19 < 22; i_19 += 3) 
                        {
                            arr_61 [i_14] [i_14] [i_16] [i_14] = ((/* implicit */short) ((((((/* implicit */int) var_1)) == (((/* implicit */int) (unsigned char)3)))) ? (((arr_45 [i_14] [i_14]) * (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_15] [i_15] [i_14 + 1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (500778536) : (((/* implicit */int) var_11)))))));
                            var_31 = ((/* implicit */unsigned short) ((arr_60 [i_14 + 1] [i_14 + 1] [i_14 + 3]) - (arr_60 [i_14 + 1] [i_14 - 1] [i_14 + 3])));
                            var_32 &= ((/* implicit */short) (-(-500778540)));
                        }
                        for (signed char i_20 = 0; i_20 < 22; i_20 += 2) 
                        {
                            var_33 = ((/* implicit */unsigned int) ((int) ((var_9) == (((/* implicit */long long int) ((/* implicit */int) var_6))))));
                            var_34 = ((/* implicit */unsigned char) ((unsigned short) arr_50 [i_14 + 3]));
                        }
                        for (unsigned long long int i_21 = 0; i_21 < 22; i_21 += 2) 
                        {
                            var_35 = ((/* implicit */short) ((((/* implicit */int) var_1)) | (((/* implicit */int) arr_52 [i_14 + 3] [i_16] [i_14 + 3]))));
                            var_36 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) 254549634)) > (((((/* implicit */_Bool) 4611685880988434432LL)) ? (arr_41 [i_14] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-27751)))))));
                            var_37 = ((/* implicit */short) ((arr_41 [14] [(unsigned char)10]) | (((/* implicit */unsigned int) ((/* implicit */int) (short)27751)))));
                            arr_68 [i_14] [i_14] [i_14] [i_14] [1U] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_51 [i_14] [i_14 - 1] [i_14 - 1])) + (((/* implicit */int) arr_51 [i_14] [i_14 - 1] [i_14 + 2]))));
                        }
                        var_38 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) (signed char)-78)) ? (36028797018439680ULL) : (((/* implicit */unsigned long long int) -500778540)))));
                        arr_69 [i_14] [i_14] [i_16] [i_16] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_63 [i_14 + 1] [i_14 + 2] [i_14 + 1] [i_17] [i_14])) ? (((/* implicit */int) (unsigned short)0)) : (arr_63 [i_14] [i_14 - 1] [i_16] [i_17] [i_14])));
                        var_39 = (-(((-500778520) + (((/* implicit */int) (unsigned char)0)))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_22 = 1; i_22 < 21; i_22 += 1) 
            {
                for (short i_23 = 0; i_23 < 22; i_23 += 2) 
                {
                    {
                        var_40 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_42 [i_14] [i_14]))))));
                        var_41 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)118)) : (1316543246)))) || (((/* implicit */_Bool) arr_53 [i_14 + 1] [i_14 - 1] [i_22 - 1] [i_22 - 1]))));
                        var_42 += ((/* implicit */_Bool) ((unsigned short) var_2));
                    }
                } 
            } 
            arr_78 [i_14 + 1] [i_14] [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) arr_56 [i_14] [i_14] [i_14 - 1])) || (((/* implicit */_Bool) arr_60 [i_14 + 3] [i_14] [i_14 - 1]))));
        }
    }
    /* LoopNest 2 */
    for (signed char i_24 = 0; i_24 < 23; i_24 += 4) 
    {
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
        {
            {
                arr_85 [i_25] = ((/* implicit */short) (signed char)-109);
                var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_83 [i_24])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)26)))))) : (((((/* implicit */_Bool) (short)-8)) ? (var_5) : (arr_79 [i_24])))));
            }
        } 
    } 
}
