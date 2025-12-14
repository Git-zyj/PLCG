/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131116
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)1598)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((((/* implicit */long long int) ((var_10) >> (((var_2) - (17353872531506751239ULL)))))) / (((var_11) + (arr_2 [i_0])))))));
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (-(11478803057643247136ULL))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (short)22135))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32341))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) arr_2 [i_0])) : (arr_8 [i_0] [i_1])))));
            arr_9 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_1] [i_1])) * (((/* implicit */int) (signed char)-93))))) + (17934088989238482913ULL)))) ? (((/* implicit */unsigned long long int) var_8)) : (var_4)));
            /* LoopSeq 3 */
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) /* same iter space */
            {
                arr_13 [i_1] [i_1] = ((/* implicit */unsigned short) arr_8 [i_0] [i_1]);
                var_17 += ((/* implicit */unsigned int) var_14);
                var_18 = ((/* implicit */_Bool) max((((((/* implicit */int) ((var_8) >= (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)93))))))), (((/* implicit */int) var_9))));
                arr_14 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_2])) % (((/* implicit */int) arr_5 [i_0]))));
            }
            for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) (short)23033)), (arr_1 [i_0]))) << (((((((/* implicit */_Bool) (signed char)80)) ? (arr_1 [i_3]) : (var_10))) - (3396674926U)))));
                var_20 |= ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_8), (arr_6 [i_1] [i_0])))) && (((/* implicit */_Bool) arr_6 [i_1] [i_3]))));
            }
            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)3729)) >> (((((/* implicit */int) (signed char)-110)) + (129)))));
                var_22 = ((/* implicit */_Bool) max((min(((unsigned short)31070), ((unsigned short)23405))), (((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_4]))));
                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1598)) ? (328697415) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), ((_Bool)0))))) + (var_10)))) : ((-(17033137902276668968ULL)))));
            }
            /* LoopNest 3 */
            for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                for (short i_6 = 0; i_6 < 15; i_6 += 4) 
                {
                    for (short i_7 = 0; i_7 < 15; i_7 += 4) 
                    {
                        {
                            var_24 += ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 13807605064020370874ULL)) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)-94)), (2150273875U)))) : (4639139009689180718ULL)))));
                            arr_29 [i_7] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */int) var_9);
                            arr_30 [i_0] [i_1] [i_5] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-108))));
                            arr_31 [i_0] [i_0] [i_0] [i_0] [i_7] = ((/* implicit */unsigned int) arr_0 [i_1] [i_0]);
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 4) 
        {
            /* LoopSeq 2 */
            for (long long int i_9 = 0; i_9 < 15; i_9 += 1) 
            {
                arr_37 [i_0] [i_9] [i_9] [i_9] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)3729))) / (13807605064020370874ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                arr_38 [i_0] [i_0] [i_9] [i_9] = ((/* implicit */signed char) ((((arr_26 [i_0] [i_8] [i_8] [i_9]) ? (((((/* implicit */_Bool) 4639139009689180742ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (3946931454671658256ULL))) : (((/* implicit */unsigned long long int) var_7)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            }
            for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 3) 
            {
                var_25 = min(((!(((/* implicit */_Bool) 13807605064020370867ULL)))), (arr_26 [i_10] [i_10] [i_8] [i_0]));
                var_26 = ((/* implicit */signed char) ((arr_10 [i_8]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_10] [i_8] [i_8] [i_0] [i_0])))));
                var_27 = ((/* implicit */int) min((3418590652U), (((/* implicit */unsigned int) var_9))));
            }
            var_28 = ((((/* implicit */_Bool) (+(arr_8 [i_0] [i_8])))) ? (((/* implicit */int) min((((/* implicit */short) arr_26 [i_0] [i_0] [i_0] [i_0])), (arr_28 [i_8] [i_8] [i_8] [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_8]))) < (var_4)))));
            var_29 = ((/* implicit */unsigned char) arr_28 [i_8] [i_8] [i_8] [i_8] [i_8]);
            arr_41 [i_0] [i_0] = ((/* implicit */unsigned char) arr_10 [i_0]);
            arr_42 [i_0] [i_0] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 6967941016066304479ULL)) ? (8075801386698307093ULL) : (938094230380884698ULL)));
        }
        /* vectorizable */
        for (unsigned short i_11 = 0; i_11 < 15; i_11 += 4) 
        {
            arr_45 [i_11] = ((/* implicit */unsigned long long int) 3667598163U);
            arr_46 [i_11] = ((/* implicit */unsigned short) (signed char)87);
        }
    }
    for (long long int i_12 = 2; i_12 < 14; i_12 += 4) 
    {
        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)110)) << (((max((((/* implicit */unsigned int) (unsigned char)32)), (var_10))) - (3399546436U))))))));
        var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_12 - 2] [i_12 + 1] [i_12 - 2]))) >= (4639139009689180735ULL)))), (((((/* implicit */_Bool) arr_20 [i_12 - 1] [i_12 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_12 - 1] [i_12 - 1] [i_12 + 1]))) : (var_6))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_13 = 3; i_13 < 11; i_13 += 1) 
        {
            for (long long int i_14 = 1; i_14 < 14; i_14 += 3) 
            {
                for (unsigned char i_15 = 0; i_15 < 15; i_15 += 3) 
                {
                    {
                        var_32 += ((/* implicit */_Bool) (unsigned short)19393);
                        var_33 = 7030701162115306746LL;
                        arr_56 [i_14] [i_14] [i_13 - 2] [i_14] [i_14] = ((/* implicit */_Bool) 2314177223689447569ULL);
                        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((4639139009689180735ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) (signed char)-93)) ? (arr_25 [i_13] [i_13] [i_13 - 2] [i_15] [i_15] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_13] [i_13]))))) : (max((var_2), (((/* implicit */unsigned long long int) var_1))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (signed char i_16 = 1; i_16 < 11; i_16 += 3) 
        {
            var_35 += ((/* implicit */unsigned char) ((((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)224)), (var_7)))) / ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (3690663770U)))));
            var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) var_10))));
            var_37 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_25 [i_16] [i_16] [i_16 + 2] [i_12 - 2] [i_12 - 1] [i_12 - 1])) && (((/* implicit */_Bool) 3105150912U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-6857))) : (((max((((/* implicit */unsigned int) var_0)), (var_5))) * (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
            /* LoopNest 2 */
            for (long long int i_17 = 3; i_17 < 13; i_17 += 1) 
            {
                for (unsigned long long int i_18 = 0; i_18 < 15; i_18 += 4) 
                {
                    {
                        arr_65 [i_18] [i_17] [i_16 - 1] [i_17] [i_12] = ((/* implicit */int) (+(arr_47 [i_17 - 2])));
                        arr_66 [i_18] [i_17] [i_17] [i_12 + 1] = ((/* implicit */long long int) (signed char)-19);
                        var_38 = ((/* implicit */signed char) var_1);
                    }
                } 
            } 
            arr_67 [i_16 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (max((((/* implicit */unsigned long long int) 1057903675)), (arr_16 [i_12] [i_12 - 1] [i_12] [i_12])))));
        }
        for (unsigned char i_19 = 0; i_19 < 15; i_19 += 1) 
        {
            var_39 = ((/* implicit */int) 3748797026U);
            var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) ((arr_22 [i_12] [i_19] [i_12 - 2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_12 - 2] [i_19]))) : (max((var_8), (((/* implicit */unsigned int) min((var_7), (((/* implicit */int) (short)-15357))))))))))));
            arr_71 [i_12] [i_19] [i_19] = ((/* implicit */signed char) (unsigned short)49757);
            var_41 = ((/* implicit */_Bool) -884164806);
        }
        var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_12 + 1] [i_12 - 2] [i_12] [i_12 + 1]))) <= (((max((((/* implicit */long long int) (unsigned char)21)), (var_11))) / (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
    }
    for (short i_20 = 0; i_20 < 23; i_20 += 3) 
    {
        var_43 = ((/* implicit */int) var_3);
        var_44 = ((/* implicit */long long int) arr_75 [i_20]);
    }
    for (unsigned short i_21 = 0; i_21 < 14; i_21 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_22 = 0; i_22 < 14; i_22 += 1) 
        {
            arr_83 [i_21] [i_22] = ((/* implicit */_Bool) max((((8075801386698307078ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (-7842408678920840994LL))))));
            /* LoopNest 2 */
            for (short i_23 = 0; i_23 < 14; i_23 += 4) 
            {
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    {
                        arr_90 [i_23] [i_22] [i_22] [i_22] [i_22] [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) 16137046299596218883ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_7 [i_21] [i_23] [i_21]))));
                        var_45 = ((/* implicit */unsigned short) ((2063801611037739336ULL) <= (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_34 [i_24] [i_22])), (var_11)))) ? (min((((/* implicit */unsigned long long int) var_11)), (2672059118331796459ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15779)))))));
                        var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-60)) ? (min((10370942687011244523ULL), (max((((/* implicit */unsigned long long int) var_8)), (16132566850020104047ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                        var_47 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 16132566850020104047ULL)) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) (unsigned short)3650)))) ^ (((/* implicit */int) (unsigned short)46717))));
                        arr_91 [i_21] [i_21] [i_22] [i_21] = ((/* implicit */signed char) min((((2314177223689447548ULL) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)3650)) ^ (((/* implicit */int) var_3))))))), (((/* implicit */unsigned long long int) 3183193735U))));
                    }
                } 
            } 
            arr_92 [i_21] [i_22] [i_22] = ((/* implicit */long long int) 10370942687011244523ULL);
            var_48 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_18 [i_21] [i_22])), (var_14)))) ? (((((/* implicit */_Bool) 2314177223689447569ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_18 [i_22] [i_21])))) : (((/* implicit */int) min((((/* implicit */signed char) arr_18 [i_21] [i_21])), (var_0))))));
        }
        arr_93 [i_21] |= ((/* implicit */int) max((var_5), (max((((/* implicit */unsigned int) arr_48 [i_21] [i_21])), (var_8)))));
    }
    var_49 = ((/* implicit */signed char) min((16132566850020104045ULL), (10370942687011244519ULL)));
    var_50 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_3))) + (var_11)));
    var_51 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_14))));
}
