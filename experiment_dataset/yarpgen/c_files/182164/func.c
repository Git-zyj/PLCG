/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182164
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
    var_10 = ((/* implicit */unsigned short) var_0);
    var_11 = ((/* implicit */signed char) max((var_2), (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */int) max((min((var_3), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) ((var_0) - (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                    var_12 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) > (4294967295U))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_3 = 1; i_3 < 16; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 15; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
            {
                {
                    arr_17 [i_5] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) min((max((min((((/* implicit */unsigned long long int) 4294967294U)), (var_3))), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) var_9)), ((signed char)0)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) <= (var_3))))) - (max((var_3), (var_3)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (short i_7 = 1; i_7 < 13; i_7 += 4) 
                        {
                            var_13 = ((/* implicit */unsigned int) var_9);
                            var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)227)) / (((((/* implicit */_Bool) (-(-453222474)))) ? (((/* implicit */int) max(((unsigned char)184), (((/* implicit */unsigned char) var_9))))) : (min((var_2), (962809787)))))));
                        }
                        /* vectorizable */
                        for (long long int i_8 = 4; i_8 < 16; i_8 += 3) 
                        {
                            var_15 = ((/* implicit */short) 2306815764U);
                            var_16 = (+(((unsigned long long int) -1137791203)));
                            arr_27 [i_3] [i_3] = ((/* implicit */unsigned short) var_2);
                            var_17 = (unsigned char)101;
                            var_18 = ((/* implicit */unsigned long long int) var_4);
                        }
                        var_19 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */int) var_5)))) * (((((/* implicit */int) var_1)) / (((/* implicit */int) var_5)))))) - (931193620)));
                        var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-6921)) ? (((unsigned int) 1012408641)) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)32)))))) ? (((((/* implicit */_Bool) min((var_6), (var_2)))) ? (min((((/* implicit */int) (_Bool)1)), (1137791203))) : (((/* implicit */int) var_7)))) : (min((((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */int) var_5)))), ((-(((/* implicit */int) var_9))))))));
                        var_21 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (signed char)34)) ? (8761733283840LL) : (8761733283840LL))), (((/* implicit */long long int) min((((/* implicit */int) ((var_8) == (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) var_5)))))))));
                    }
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) max((1U), (((/* implicit */unsigned int) (unsigned char)32))))) ? (((/* implicit */unsigned long long int) var_2)) : (var_3))) : (min((((/* implicit */unsigned long long int) var_0)), (var_3)))));
                    var_23 = ((/* implicit */unsigned int) max((var_23), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1404142041U)), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (9815265042571053261ULL)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (4095U))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_9)))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (int i_9 = 0; i_9 < 17; i_9 += 4) 
        {
            /* LoopSeq 2 */
            for (short i_10 = 0; i_10 < 17; i_10 += 1) 
            {
                var_24 = (-(((min((((/* implicit */int) var_7)), (var_8))) - (var_8))));
                arr_32 [i_3] = ((((/* implicit */_Bool) min((((/* implicit */signed char) var_1)), (var_7)))) ? (max((((/* implicit */unsigned long long int) 2147483647)), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_7)), (var_6)))));
                var_25 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)0)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) (unsigned char)64)))) : (((/* implicit */int) var_5)))) + (((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) var_4)))))));
            }
            for (unsigned short i_11 = 1; i_11 < 16; i_11 += 3) 
            {
                arr_35 [i_9] [i_9] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) max((3581085243U), (((/* implicit */unsigned int) var_9))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_8) > (var_2)))))));
                var_26 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) var_4)), (var_5)))) ? (((18446744073709551604ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)36))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_4), (((/* implicit */unsigned char) var_1))))))));
                arr_36 [i_3] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) 449774297U)) > (14300358197749180738ULL)));
                var_27 = ((/* implicit */_Bool) 29);
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((((/* implicit */long long int) ((/* implicit */int) var_7))) == (-8761733283841LL))), ((!(var_9)))))) != (((/* implicit */int) var_1))));
            }
            var_29 *= ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_9))))) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_7)))) : (min((((/* implicit */int) var_9)), (var_2)))))));
            arr_37 [i_3] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) (+((-(var_3)))))) ? (((11969889109717360182ULL) & (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((1137791197) << (((((-421390006) + (421390031))) - (25))))))));
            var_30 = ((/* implicit */unsigned long long int) ((14222209414051751639ULL) != (min((12568780825875878280ULL), (((/* implicit */unsigned long long int) var_8))))));
        }
        /* vectorizable */
        for (short i_12 = 0; i_12 < 17; i_12 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_13 = 0; i_13 < 17; i_13 += 4) /* same iter space */
            {
                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)8)) && (((/* implicit */_Bool) 360574885U))));
                arr_44 [i_13] [i_13] &= ((/* implicit */unsigned short) ((unsigned long long int) var_1));
                var_32 = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) (unsigned short)63513)) > (var_2))));
                var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((((13121386596361295083ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) <= (((/* implicit */unsigned long long int) var_8)))))));
            }
            for (signed char i_14 = 0; i_14 < 17; i_14 += 4) /* same iter space */
            {
                var_34 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)35885)) < (((/* implicit */int) (unsigned short)29655)))))) > (var_3)));
                arr_47 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_6) / (var_6))))));
                var_35 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (268369920U)));
            }
            arr_48 [i_3] [i_3] [i_3] = (+(((((/* implicit */_Bool) 631307489)) ? (((/* implicit */int) var_4)) : (-1317111140))));
            var_36 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) var_9))));
            /* LoopNest 2 */
            for (unsigned long long int i_15 = 0; i_15 < 17; i_15 += 3) 
            {
                for (unsigned int i_16 = 3; i_16 < 13; i_16 += 4) 
                {
                    {
                        var_37 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)29650)) / (((/* implicit */int) var_5))));
                        /* LoopSeq 2 */
                        for (int i_17 = 0; i_17 < 17; i_17 += 1) 
                        {
                            arr_57 [i_16] [i_3] [(short)5] = ((/* implicit */int) 13925809167245180928ULL);
                            arr_58 [i_16] [i_3] = ((/* implicit */short) ((var_6) & (((/* implicit */int) (unsigned short)21421))));
                        }
                        for (signed char i_18 = 3; i_18 < 15; i_18 += 1) 
                        {
                            var_38 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))));
                            arr_61 [i_16] [i_3] [i_16 + 2] [i_3] [3ULL] = ((/* implicit */unsigned char) ((unsigned int) (unsigned char)224));
                            var_39 = ((/* implicit */signed char) ((8761733283825LL) / (((/* implicit */long long int) var_8))));
                            var_40 = ((/* implicit */short) (_Bool)0);
                        }
                        /* LoopSeq 4 */
                        for (unsigned long long int i_19 = 0; i_19 < 17; i_19 += 2) 
                        {
                            arr_64 [i_3] [i_3] [i_3] [i_12] [i_15] [i_16] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((-694251362) ^ (((/* implicit */int) var_5))))) ? (((/* implicit */int) ((unsigned short) var_9))) : (((/* implicit */int) (signed char)-63))));
                            var_41 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)13))));
                            arr_65 [i_3] = ((/* implicit */unsigned int) ((var_0) <= (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                            var_42 = var_5;
                        }
                        for (unsigned char i_20 = 1; i_20 < 15; i_20 += 4) /* same iter space */
                        {
                            var_43 += ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)32767))));
                            arr_70 [i_16] [i_3] [i_20] [i_16] [i_20 + 2] [i_16] = ((/* implicit */long long int) (+(var_2)));
                            var_44 = ((/* implicit */int) var_4);
                        }
                        for (unsigned char i_21 = 1; i_21 < 15; i_21 += 4) /* same iter space */
                        {
                            var_45 = ((/* implicit */unsigned long long int) (unsigned short)65534);
                            arr_75 [i_3] [(short)1] [i_15] [i_3] [i_21] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
                            arr_76 [i_3] [i_3] [i_12] [i_15] [i_16] [i_16] [i_21] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_8)) : (((((/* implicit */_Bool) 1921748296)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32766))) : (var_0)))));
                        }
                        for (unsigned int i_22 = 0; i_22 < 17; i_22 += 1) 
                        {
                            var_46 += ((/* implicit */_Bool) var_2);
                            var_47 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)2040)) : (((/* implicit */int) (unsigned char)67)))) | (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)49418))))));
                        }
                    }
                } 
            } 
            var_48 = ((/* implicit */signed char) var_4);
        }
    }
    for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
    {
        /* LoopSeq 4 */
        for (int i_24 = 0; i_24 < 21; i_24 += 1) 
        {
            var_49 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)245))) < (var_0))))) < (min((((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)8339)), (102547034U)))), (-9104665494249554881LL)))));
            var_50 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_7))));
            var_51 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)140)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65532))) / (var_3)))))));
            var_52 = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))), (-1787473004)));
        }
        for (unsigned char i_25 = 0; i_25 < 21; i_25 += 1) 
        {
            var_53 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))));
            arr_89 [i_23] [i_23] = ((/* implicit */signed char) ((unsigned char) (unsigned short)65534));
            var_54 = ((/* implicit */signed char) min((var_54), (((/* implicit */signed char) ((((min((var_3), (((/* implicit */unsigned long long int) (unsigned char)133)))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (1023769479U) : (15U)))))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))))))));
            arr_90 [(short)16] [(short)16] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)32766)), (102547034U)))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)115)) == (((/* implicit */int) (signed char)63))))) == (((/* implicit */int) var_7))))) : (((/* implicit */int) ((((/* implicit */int) var_1)) != (var_6))))));
            arr_91 [i_23] = ((/* implicit */int) ((unsigned int) (unsigned short)65532));
        }
        /* vectorizable */
        for (unsigned char i_26 = 4; i_26 < 20; i_26 += 1) 
        {
            var_55 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)56)) - (((/* implicit */int) (signed char)-52))));
            arr_96 [i_23] [i_23] [i_23] = ((/* implicit */unsigned char) ((var_6) | (var_6)));
            arr_97 [i_23] [i_23] [i_26] = ((/* implicit */long long int) ((unsigned long long int) 2251799276814336ULL));
            var_56 = ((/* implicit */signed char) var_5);
            var_57 = ((/* implicit */unsigned short) ((var_3) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
        }
        for (unsigned long long int i_27 = 0; i_27 < 21; i_27 += 3) 
        {
            arr_101 [i_23] [i_23] [i_23] = ((/* implicit */_Bool) (-(var_3)));
            var_58 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)11))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) & (-740818328)))) : (((((/* implicit */unsigned long long int) var_0)) / (10019396737522090821ULL)))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)45)), (var_8)))) > (min((((/* implicit */unsigned long long int) var_7)), (12262541720106914894ULL))))))));
        }
        arr_102 [i_23] = var_6;
        var_59 = ((/* implicit */unsigned char) max((var_59), (((/* implicit */unsigned char) min((var_0), (((/* implicit */unsigned int) ((min((((/* implicit */int) (unsigned short)16965)), (-11336577))) / (((/* implicit */int) min(((unsigned short)59699), ((unsigned short)12))))))))))));
    }
}
