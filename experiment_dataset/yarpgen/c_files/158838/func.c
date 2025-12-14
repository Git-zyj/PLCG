/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158838
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
    var_10 = ((/* implicit */unsigned char) ((var_9) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] |= ((/* implicit */long long int) arr_3 [(short)8]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_0]))))) ? (((((/* implicit */int) arr_8 [i_3])) << (((max((((/* implicit */long long int) var_5)), (arr_0 [i_0] [(short)16]))) - (58LL))))) : (((/* implicit */int) var_0))));
                                var_12 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (max((((/* implicit */unsigned long long int) var_3)), (((var_6) / (1ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                                arr_15 [i_4] [i_4] [i_2] [i_4] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)188)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)193)) - (((/* implicit */int) arr_8 [15LL]))))) : (((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)172))) : (arr_2 [i_4]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        var_13 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_5])) && (((/* implicit */_Bool) (-(((/* implicit */int) var_3)))))));
        var_14 *= ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_0))))) : (var_9)));
        var_15 |= ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_14 [4U]))))));
        arr_19 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (arr_11 [i_5] [i_5] [i_5] [i_5] [i_5]) : (arr_5 [i_5])));
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) (-(((/* implicit */int) ((var_0) || (((/* implicit */_Bool) (unsigned short)52682)))))));
        var_17 = ((/* implicit */long long int) var_3);
        /* LoopSeq 1 */
        for (unsigned char i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 3; i_8 < 19; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_10 = 0; i_10 < 20; i_10 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (2147483647) : (((/* implicit */int) arr_13 [i_6] [i_6] [i_7] [i_8] [i_9] [i_10]))));
                            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) arr_3 [i_9]))));
                        }
                        var_20 += ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) 3898021153U)) && (((/* implicit */_Bool) var_8)))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
            {
                var_21 += ((/* implicit */unsigned char) arr_10 [i_6]);
                arr_35 [i_6] [i_6] = ((/* implicit */unsigned short) arr_30 [i_7]);
                var_22 |= ((/* implicit */unsigned int) (unsigned char)238);
                var_23 = ((/* implicit */unsigned short) var_5);
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
            {
                arr_39 [14ULL] [i_6] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121))) : (arr_31 [i_6] [i_12] [i_7] [i_7] [i_6] [i_6])));
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 2; i_13 < 18; i_13 += 1) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_24 *= ((/* implicit */_Bool) (+(arr_42 [i_6] [i_12] [i_12] [3ULL] [i_13 + 1] [i_14] [i_12])));
                            arr_46 [i_14] [i_13] [i_6] [i_12] [i_6] [(_Bool)1] [i_6] = ((/* implicit */short) (unsigned char)86);
                            arr_47 [i_6] [i_6] [i_6] [i_13 + 2] [i_14] [i_6] = ((/* implicit */unsigned int) (unsigned short)65535);
                        }
                    } 
                } 
            }
            var_25 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_6] [2ULL] [i_6] [i_6]))) - ((~(arr_38 [(_Bool)1] [i_6] [i_7] [i_7])))));
            var_26 -= arr_13 [i_6] [i_7] [(unsigned char)5] [i_6] [i_7] [5U];
        }
        /* LoopSeq 3 */
        for (int i_15 = 4; i_15 < 18; i_15 += 1) 
        {
            var_27 = (!(((/* implicit */_Bool) (-(((/* implicit */int) var_1))))));
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) == ((~(18446744073709551605ULL)))));
            /* LoopSeq 1 */
            for (unsigned char i_16 = 0; i_16 < 20; i_16 += 1) 
            {
                arr_54 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)55)) ? (((/* implicit */int) var_1)) : (((var_0) ? (((/* implicit */int) arr_29 [i_6] [i_15] [i_16])) : (((/* implicit */int) var_5))))));
                /* LoopSeq 3 */
                for (int i_17 = 0; i_17 < 20; i_17 += 1) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) (+(arr_0 [i_6] [i_6]))))));
                    arr_58 [i_6] = ((/* implicit */unsigned char) ((var_9) > (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) var_5)) - (69))))))));
                }
                for (int i_18 = 0; i_18 < 20; i_18 += 1) /* same iter space */
                {
                    arr_61 [0ULL] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551605ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (6693220234154739252LL)));
                    var_30 = ((/* implicit */long long int) (-(arr_30 [i_15 - 3])));
                }
                for (signed char i_19 = 0; i_19 < 20; i_19 += 1) 
                {
                    arr_64 [i_6] [i_6] [i_16] [i_6] = ((/* implicit */signed char) (((-(((/* implicit */int) arr_24 [i_6] [i_15] [i_19])))) >= (((/* implicit */int) (unsigned char)162))));
                    var_31 = ((/* implicit */unsigned int) arr_18 [i_6]);
                    /* LoopSeq 1 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                        var_33 = ((/* implicit */unsigned long long int) -923566228);
                    }
                }
            }
            arr_67 [i_6] = (-((-(var_9))));
        }
        for (unsigned char i_21 = 0; i_21 < 20; i_21 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                for (unsigned int i_23 = 0; i_23 < 20; i_23 += 1) 
                {
                    {
                        var_34 = (+(((/* implicit */int) arr_27 [i_6] [i_6] [i_22])));
                        var_35 = ((/* implicit */long long int) arr_51 [i_6] [i_21] [i_22] [i_23]);
                        arr_74 [10LL] [10LL] &= (~(9096146147381877600ULL));
                        arr_75 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-10323))) < (939524096U)));
                    }
                } 
            } 
            var_36 -= ((/* implicit */unsigned int) ((((/* implicit */int) (short)10347)) >> (((arr_48 [i_6]) - (436059581U)))));
            arr_76 [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) - (((/* implicit */int) arr_60 [i_6] [i_21] [i_21] [i_6] [i_6] [i_6]))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (arr_26 [i_6] [i_6] [i_21] [i_6])))));
            var_37 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 1710008768)) % (var_4)));
        }
        for (unsigned char i_24 = 0; i_24 < 20; i_24 += 1) 
        {
            var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) var_0))));
            /* LoopNest 2 */
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                for (long long int i_26 = 0; i_26 < 20; i_26 += 1) 
                {
                    {
                        var_39 += ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)10299))) * (var_9)))));
                        arr_85 [i_6] [i_6] [i_6] [i_6] [9ULL] = ((/* implicit */long long int) (unsigned char)176);
                        var_40 = ((/* implicit */_Bool) ((10304553344538564444ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_83 [i_25] [i_25] [i_25] [i_26])))));
                    }
                } 
            } 
        }
        var_41 ^= ((((/* implicit */int) arr_33 [i_6] [i_6] [(unsigned short)10] [i_6])) + (((/* implicit */int) arr_33 [i_6] [i_6] [14ULL] [(unsigned char)4])));
    }
    /* vectorizable */
    for (long long int i_27 = 0; i_27 < 20; i_27 += 1) /* same iter space */
    {
        var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_63 [6ULL] [6ULL])))) ? (((((/* implicit */int) var_5)) * (((/* implicit */int) var_7)))) : ((+(1909947069))))))));
        var_43 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) == (((((/* implicit */_Bool) (unsigned short)9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_80 [i_27] [i_27]))))));
        var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((arr_38 [i_27] [i_27] [i_27] [i_27]) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65524))))))));
    }
    var_45 &= ((/* implicit */_Bool) (-2147483647 - 1));
    var_46 = max((((/* implicit */unsigned int) ((var_9) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_2), (((/* implicit */signed char) (_Bool)1))))))))), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 9098116309862770423LL)) || (var_7))))) & (min((var_8), (((/* implicit */unsigned int) var_7)))))));
}
