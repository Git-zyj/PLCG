/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13418
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
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            var_13 -= ((/* implicit */long long int) arr_0 [i_1 + 1] [i_0 + 2]);
            arr_6 [i_0] [i_1 + 1] = ((/* implicit */long long int) 11789295298787574083ULL);
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) /* same iter space */
                {
                    var_14 = ((/* implicit */short) ((long long int) (-((-(((/* implicit */int) arr_10 [i_0] [i_1 - 1] [i_1 + 2] [i_2] [i_1 - 1] [i_2])))))));
                    var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                }
                for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) /* same iter space */
                {
                    arr_13 [4LL] [i_1] &= (unsigned short)34009;
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_5 = 3; i_5 < 8; i_5 += 3) 
                    {
                        var_16 = 3787295520U;
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_8 [i_2] [i_1 - 1] [i_2] [i_4])))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0 - 2] [i_0] [i_0] [0LL] [i_0]))) + (-3778142936184706983LL))) : (arr_12 [i_1 + 2] [i_0] [i_5 - 3])));
                    }
                    /* vectorizable */
                    for (long long int i_6 = 2; i_6 < 10; i_6 += 4) /* same iter space */
                    {
                        var_18 -= ((/* implicit */long long int) (+(913150135U)));
                        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0] [i_0]))));
                    }
                    /* vectorizable */
                    for (long long int i_7 = 2; i_7 < 10; i_7 += 4) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned char) var_11);
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0))));
                        var_22 = ((/* implicit */short) (!(arr_3 [i_0] [i_0 + 2])));
                    }
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (unsigned short)34017))));
                    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0 - 3] [i_1 + 1])) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) (short)4852)))) : (((/* implicit */int) (unsigned short)63038))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned char)41)) << (((((/* implicit */int) (unsigned char)47)) - (34))))), ((-(((/* implicit */int) var_8))))))) : (arr_14 [i_0 + 1] [(unsigned short)5] [i_2] [i_2])));
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        var_25 = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_4)) & (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 468021187U)))))) : (max((arr_14 [i_2] [i_1] [i_2] [i_1]), (((/* implicit */unsigned long long int) -3002299520089615348LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)113)))))));
                        arr_23 [i_0] [6LL] = ((/* implicit */_Bool) ((short) (unsigned short)7562));
                    }
                }
                for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 3) /* same iter space */
                {
                    var_26 = (-9223372036854775807LL - 1LL);
                    var_27 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (max((((/* implicit */unsigned long long int) var_11)), (11345593403302858310ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)241))))), (((/* implicit */unsigned long long int) ((_Bool) arr_17 [i_0 - 2] [i_0 + 2])))));
                    var_28 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)0))))) + (max((1129255780U), (((/* implicit */unsigned int) (unsigned short)65535))))))), (min((((/* implicit */long long int) ((int) arr_5 [i_1] [i_2] [i_1]))), (((long long int) (unsigned char)180))))));
                }
                arr_26 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(4152469858U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)252)))) : ((-9223372036854775807LL - 1LL))));
                arr_27 [i_0] [i_0] [i_0] = ((/* implicit */short) -9223372036854775793LL);
                var_29 *= ((/* implicit */unsigned int) max((6227699308722629435ULL), (9457559846959538264ULL)));
            }
        }
        for (unsigned char i_10 = 3; i_10 < 9; i_10 += 1) 
        {
            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((var_7) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
            var_31 = ((/* implicit */unsigned char) -1774129175866936919LL);
            /* LoopNest 2 */
            for (unsigned short i_11 = 0; i_11 < 12; i_11 += 4) 
            {
                for (unsigned short i_12 = 0; i_12 < 12; i_12 += 2) 
                {
                    {
                        var_32 = ((/* implicit */unsigned int) max((var_32), (((((/* implicit */unsigned int) var_11)) % (max((((/* implicit */unsigned int) ((unsigned char) 9U))), (((3716532436U) << (((var_2) - (879441136U)))))))))));
                        var_33 += ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (short)25278)) ? (arr_32 [i_10 - 2] [i_11] [(_Bool)1] [(unsigned short)3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11777))))), (((((/* implicit */_Bool) (unsigned short)4456)) ? (14542610482401744916ULL) : (0ULL)))));
                        var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (max((((((/* implicit */_Bool) 1736670270)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)180))) : (128660702585973541ULL))), (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) 2022514628U)))))));
                        var_35 &= ((/* implicit */long long int) (+(((((/* implicit */int) max(((unsigned char)96), (((/* implicit */unsigned char) var_10))))) % (((/* implicit */int) min(((unsigned short)44599), (((/* implicit */unsigned short) (short)28958)))))))));
                    }
                } 
            } 
            var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) var_11))));
        }
        arr_36 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((unsigned int) max((7148820761116133474LL), (((/* implicit */long long int) var_1)))))) <= ((-9223372036854775807LL - 1LL))));
        var_37 = ((/* implicit */unsigned short) max((max((arr_1 [i_0 - 3]), (max((((/* implicit */unsigned long long int) (unsigned char)138)), (18446744073709551589ULL))))), (((/* implicit */unsigned long long int) max(((_Bool)1), (max(((_Bool)1), ((_Bool)1))))))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_13 = 1; i_13 < 17; i_13 += 2) 
    {
        arr_41 [i_13 - 1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)240)))) + (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) (+(2188102022U)))) ? (max((((/* implicit */unsigned int) (unsigned char)31)), (arr_38 [i_13]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)133)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_13 - 1])))));
        var_38 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)0)))) >= (((/* implicit */int) (unsigned char)123))));
        /* LoopSeq 1 */
        for (signed char i_14 = 1; i_14 < 17; i_14 += 3) 
        {
            /* LoopNest 3 */
            for (long long int i_15 = 1; i_15 < 18; i_15 += 4) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (unsigned short i_17 = 3; i_17 < 17; i_17 += 1) 
                    {
                        {
                            var_39 = ((/* implicit */signed char) (unsigned short)42841);
                            var_40 = 5793135299142143148LL;
                        }
                    } 
                } 
            } 
            var_41 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 2614602462U))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_13]))))) : ((+(((/* implicit */int) var_6))))))), ((-(var_7))));
            var_42 &= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) -446306516)) ? (((((/* implicit */_Bool) (unsigned char)243)) ? (var_3) : (var_4))) : (((/* implicit */long long int) ((/* implicit */int) min((var_1), (((/* implicit */short) (unsigned char)74))))))))));
        }
        var_43 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_11), (((/* implicit */int) (signed char)45))))) ? (arr_42 [i_13 - 1] [i_13 - 1]) : (((/* implicit */unsigned long long int) max((arr_51 [i_13] [i_13] [i_13 - 1] [i_13 + 2] [i_13] [i_13 - 1] [i_13 + 2]), (((/* implicit */long long int) arr_45 [i_13] [(unsigned short)12] [i_13 + 1])))))));
        /* LoopSeq 2 */
        for (unsigned int i_18 = 0; i_18 < 19; i_18 += 3) 
        {
            arr_56 [i_13 - 1] [i_18] = ((/* implicit */_Bool) ((((/* implicit */int) ((46ULL) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (2614602453U))))))) & (((((/* implicit */int) ((unsigned short) arr_40 [i_18]))) << (((max((((/* implicit */unsigned int) (unsigned short)22695)), (4024745846U))) - (4024745841U)))))));
            arr_57 [i_18] [i_13] [i_18] = ((/* implicit */int) 2039987738U);
            var_44 = ((/* implicit */unsigned int) arr_50 [i_18] [i_18] [i_13 - 1] [i_13 + 2] [i_18]);
            var_45 = max((min((((/* implicit */unsigned int) arr_52 [i_13 + 1] [i_13 - 1])), (var_5))), (max((10U), (var_5))));
        }
        for (unsigned long long int i_19 = 1; i_19 < 18; i_19 += 2) 
        {
            /* LoopSeq 3 */
            for (short i_20 = 3; i_20 < 18; i_20 += 4) /* same iter space */
            {
                var_46 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_6))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_21 = 0; i_21 < 19; i_21 += 3) 
                {
                    arr_70 [i_21] [i_20] [i_20] [i_13] = ((/* implicit */_Bool) ((long long int) 268435455LL));
                    var_47 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_43 [i_20]))));
                }
                for (unsigned int i_22 = 0; i_22 < 19; i_22 += 3) 
                {
                    var_48 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2672098495553564699LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))), (11036592238137644773ULL));
                    var_49 = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_67 [i_13 - 1])))), (((((/* implicit */int) arr_67 [i_13 - 1])) / (((/* implicit */int) (_Bool)1))))));
                }
            }
            for (short i_23 = 3; i_23 < 18; i_23 += 4) /* same iter space */
            {
                var_50 = ((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) arr_67 [i_13])), (max((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL)))))));
                arr_78 [i_19] [i_19 + 1] [(unsigned short)2] |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 6265175733895110073LL)))))) * (((((/* implicit */_Bool) arr_50 [i_23 - 3] [i_23] [i_19] [i_19 + 1] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (var_2)))));
            }
            for (long long int i_24 = 0; i_24 < 19; i_24 += 1) 
            {
                var_51 = ((/* implicit */_Bool) arr_42 [i_19 + 1] [i_13 + 1]);
                var_52 = ((/* implicit */unsigned short) max((var_52), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_6))))))) ? (((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (2039987731U))) : (max((arr_49 [i_24] [(short)16] [i_19 + 1] [(short)7] [i_13]), (((/* implicit */unsigned int) (unsigned short)0)))))))));
                var_53 = ((/* implicit */unsigned long long int) max((var_53), (((/* implicit */unsigned long long int) var_2))));
            }
            var_54 = (-(((((/* implicit */_Bool) var_7)) ? (max((-5992786422966411100LL), (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-120))))));
        }
    }
    var_55 = ((/* implicit */unsigned short) (-((+(max((var_4), (((/* implicit */long long int) var_10))))))));
}
