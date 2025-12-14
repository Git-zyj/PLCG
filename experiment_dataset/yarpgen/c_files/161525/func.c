/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161525
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
    var_11 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) min((var_0), ((unsigned short)0)))) ? (((((/* implicit */_Bool) (signed char)127)) ? (-2047757949) : (((/* implicit */int) (signed char)-68)))) : (((/* implicit */int) var_0))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) /* same iter space */
        {
            var_12 = var_7;
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
            arr_6 [i_0] [i_1] [i_1] &= ((/* implicit */signed char) var_4);
            var_13 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 2348173188U)))))));
        }
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
        {
            var_14 &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : ((~(((/* implicit */int) (unsigned short)65535)))))) & (((((/* implicit */int) (signed char)29)) & (((/* implicit */int) var_9))))));
            arr_10 [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) (unsigned short)65535)))))) : (min((3212899463633537012ULL), (((/* implicit */unsigned long long int) (signed char)(-127 - 1)))))));
        }
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) /* same iter space */
        {
            arr_13 [i_0 + 3] [i_0] [i_3] = ((/* implicit */short) (~(((3212899463633537005ULL) & (((/* implicit */unsigned long long int) var_8))))));
            /* LoopSeq 4 */
            for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                arr_16 [i_0] [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) min(((+(((/* implicit */int) (_Bool)1)))), (var_4)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((_Bool) min((5211734693036560366ULL), (((/* implicit */unsigned long long int) (unsigned char)56)))))));
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((unsigned long long int) var_10)) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1141625780180099853ULL)) ? (620591754) : (-620591755)))))))));
                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (+(3167184364U)))) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)1)) : (264241152)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)92))) - ((((_Bool)1) ? (705384586583318041ULL) : (((/* implicit */unsigned long long int) var_2))))))));
            }
            for (unsigned short i_5 = 1; i_5 < 22; i_5 += 4) 
            {
                /* LoopSeq 3 */
                for (signed char i_6 = 3; i_6 < 21; i_6 += 1) /* same iter space */
                {
                    arr_24 [i_0] [i_5 + 2] [i_5] [i_6] [i_6] = ((/* implicit */unsigned int) ((signed char) ((4294967284U) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 18446744073709551615ULL)))))));
                    var_17 *= ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? ((~(15233844610076014603ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) & (351910516U)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)92))))) ? (((/* implicit */int) ((var_4) == (((/* implicit */int) (unsigned short)65529))))) : (((/* implicit */int) var_6)))))));
                }
                for (signed char i_7 = 3; i_7 < 21; i_7 += 1) /* same iter space */
                {
                    arr_27 [i_3] [2] &= ((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)746)) + (((/* implicit */int) (unsigned char)10))))));
                    var_18 = ((/* implicit */_Bool) (unsigned short)746);
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)761)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)37))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)163)) ? (((/* implicit */int) var_6)) : (var_7)))) : (var_1)));
                }
                for (signed char i_8 = 3; i_8 < 21; i_8 += 1) /* same iter space */
                {
                    arr_30 [(_Bool)1] [(_Bool)1] [i_0] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((2088537356) != (((/* implicit */int) (signed char)127))))) | (((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) || (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)216))) == (3940451997U))))))));
                    arr_31 [i_0 - 1] [i_0] [i_0] [(unsigned short)6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (signed char)-90))) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) min((((/* implicit */short) var_5)), (var_10))))))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_6)))))));
                }
                var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)6)) ? (((/* implicit */unsigned long long int) -5627420683694727753LL)) : (281474976710655ULL))) != ((~(var_3)))));
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 22; i_9 += 2) 
                {
                    for (short i_10 = 0; i_10 < 24; i_10 += 1) 
                    {
                        {
                            var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2365835003914765421LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))))) : (((unsigned long long int) var_2))));
                            arr_38 [(unsigned short)5] [i_9] [i_0] [i_0 - 1] [i_0] [i_0 - 1] [(unsigned short)5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)23))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_8))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_11 = 3; i_11 < 23; i_11 += 2) /* same iter space */
            {
                arr_42 [i_0] [i_3] [i_3] [i_0] = min((min((((/* implicit */unsigned long long int) var_9)), (min((((/* implicit */unsigned long long int) (signed char)-14)), (var_3))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) - (4294967293U)))), ((-(2365835003914765421LL)))))));
                arr_43 [i_3] [i_3] [8ULL] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)14)), ((unsigned short)65535)))) / (((((/* implicit */_Bool) 6253077582220795764ULL)) ? (((/* implicit */int) var_9)) : (var_4)))))) ? (((unsigned long long int) var_2)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) & (14452613560396369905ULL)))));
                var_22 = ((/* implicit */int) min((var_22), (((((/* implicit */_Bool) 4294967293U)) ? (((/* implicit */int) ((((/* implicit */_Bool) (-(var_1)))) || (((/* implicit */_Bool) ((unsigned int) (_Bool)0)))))) : (((/* implicit */int) (unsigned char)71))))));
                arr_44 [i_0 - 2] [i_3] [i_3] |= ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((short) 1869167768))) || (((/* implicit */_Bool) -1869167769)))))));
            }
            for (unsigned short i_12 = 3; i_12 < 23; i_12 += 2) /* same iter space */
            {
                var_23 &= ((/* implicit */unsigned long long int) (_Bool)1);
                var_24 *= ((/* implicit */_Bool) (-(((max((var_1), (((/* implicit */unsigned long long int) var_0)))) - (((/* implicit */unsigned long long int) ((1336926748) - (var_7))))))));
            }
            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (-309008776)))) <= (((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)71))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-15)) ^ (((/* implicit */int) (signed char)-104))))) : (var_1))))))));
        }
        arr_48 [0ULL] &= ((/* implicit */unsigned long long int) var_6);
        var_26 = ((/* implicit */int) min(((-(3167184363U))), (((unsigned int) min((1869167768), (((/* implicit */int) var_5)))))));
        var_27 ^= (short)-5115;
    }
    for (signed char i_13 = 2; i_13 < 20; i_13 += 3) /* same iter space */
    {
        var_28 = ((/* implicit */long long int) (short)-5115);
        arr_51 [i_13 + 1] [i_13 + 1] = ((/* implicit */_Bool) (unsigned short)43463);
        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 722090611))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) ((unsigned int) -1336926748))) ? (((/* implicit */int) ((short) 0LL))) : (1362459137)))));
        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_8)))) ? (8774582494614592218LL) : (((/* implicit */long long int) (-(((/* implicit */int) var_5))))))))));
    }
    for (signed char i_14 = 2; i_14 < 20; i_14 += 3) /* same iter space */
    {
        var_31 = ((/* implicit */_Bool) (~(((/* implicit */int) ((7714400587096933504ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25546))))))));
        arr_56 [i_14] = ((/* implicit */unsigned char) ((unsigned short) var_8));
        /* LoopNest 3 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (signed char i_16 = 3; i_16 < 21; i_16 += 4) 
            {
                for (signed char i_17 = 0; i_17 < 24; i_17 += 4) 
                {
                    {
                        arr_65 [i_14 - 2] = ((/* implicit */_Bool) var_0);
                        /* LoopSeq 2 */
                        for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
                        {
                            var_32 = ((/* implicit */int) (-(((min((var_3), (((/* implicit */unsigned long long int) var_0)))) + (var_1)))));
                            var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-15)))))));
                            var_34 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)32767))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1336926748)) ? (((/* implicit */int) (unsigned char)82)) : (((/* implicit */int) (unsigned short)50436))))) ? (((/* implicit */unsigned long long int) 2161727821137838080LL)) : (18446744073709551615ULL)))));
                            var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((signed char) ((-5592362177291157127LL) != (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)66)))))))))));
                        }
                        for (unsigned char i_19 = 0; i_19 < 24; i_19 += 4) 
                        {
                            arr_72 [i_16] [i_16] [i_17] [i_17] [i_14] = (~(max((((/* implicit */unsigned long long int) 394357726U)), (16347254325204775165ULL))));
                            arr_73 [i_14] [i_15] [(unsigned char)7] [i_17] [i_19] = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_0)))));
                            arr_74 [i_14] [i_14] [(short)18] [i_17] [7U] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-((((_Bool)1) ? (3167184364U) : (((/* implicit */unsigned int) var_7))))))), (((((/* implicit */_Bool) max((var_7), (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned long long int) -1990989108422809111LL)) : (((((/* implicit */_Bool) (unsigned char)213)) ? (10110625227061428442ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
                            arr_75 [i_16] [i_16] [i_16] [i_16] [8] [i_16 + 1] [i_16 + 1] = ((/* implicit */_Bool) ((unsigned int) 469762048U));
                        }
                        arr_76 [i_14 + 1] [i_15] [i_16] [(unsigned short)11] &= ((/* implicit */unsigned int) var_1);
                    }
                } 
            } 
        } 
    }
}
