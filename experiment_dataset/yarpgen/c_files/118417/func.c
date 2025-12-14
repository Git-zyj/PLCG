/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118417
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
    var_11 &= ((/* implicit */_Bool) var_8);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_12 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15007454264387705155ULL)) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [(unsigned char)0] [(unsigned char)0])))))));
        arr_2 [i_0] = ((14647323309922629727ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-30))));
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)94)) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) (signed char)121))));
    }
    /* LoopSeq 2 */
    for (short i_1 = 3; i_1 < 20; i_1 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)63912)) && (((/* implicit */_Bool) (signed char)87))))) << (((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) arr_4 [3] [3]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1 + 3])) * (((/* implicit */int) arr_3 [i_1 - 2]))))) : (var_1))) - (1168067309ULL))))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 22; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 4; i_5 < 23; i_5 += 2) 
                        {
                            {
                                var_15 = min((((((/* implicit */_Bool) arr_7 [i_4 + 2] [i_4 + 2] [i_5 - 2] [i_5])) && (((/* implicit */_Bool) arr_8 [i_1 - 2])))), (arr_12 [i_1] [i_1] [i_1] [i_1]));
                                var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24121)) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) var_0))))) ? (((7320825099620968956ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))))) : (min((12550700664116679360ULL), (((/* implicit */unsigned long long int) (signed char)-99)))));
                                var_17 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (unsigned short)58423)), (5659078122608298616ULL)));
                                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_5 [i_5 - 3] [i_4 - 3] [i_1 - 2]), (arr_5 [i_5 - 2] [i_4 + 2] [i_1 + 2])))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (15985879359372849187ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) arr_7 [i_1] [i_3] [i_1] [i_1]))))) * (((/* implicit */int) var_0)))))));
                            }
                        } 
                    } 
                    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)0), (((/* implicit */short) var_4))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_10 [i_1 + 3] [i_1 + 2] [i_1] [i_1] [i_1] [i_1 + 1]))))) ? (((arr_6 [i_1 + 4]) & (arr_6 [i_1 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1 + 1] [10ULL]))));
                }
            } 
        } 
    }
    for (short i_6 = 3; i_6 < 20; i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 1) 
        {
            for (signed char i_8 = 0; i_8 < 24; i_8 += 4) 
            {
                {
                    var_20 = ((_Bool) min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_12 [i_6] [i_6] [i_7] [i_8]))))), (((unsigned long long int) (signed char)-90))));
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (~((-(arr_14 [i_8] [i_7]))))))));
                }
            } 
        } 
        arr_20 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (max((15985879359372849181ULL), (((/* implicit */unsigned long long int) 565517774U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)30)))));
        var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_11 [i_6 + 1] [i_6] [i_6 + 1] [i_6] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (((unsigned int) (_Bool)1)))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) arr_12 [i_6] [i_6] [i_6 + 3] [i_6])))))));
    }
    var_23 = ((/* implicit */unsigned int) 355816791);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_9 = 1; i_9 < 18; i_9 += 2) 
    {
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_9] [i_9] [i_9])) ? (1371806337465061162ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))))))))));
        var_25 = ((/* implicit */_Bool) arr_8 [i_9]);
    }
    for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 1) 
    {
        var_26 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) 4294967291U)) ? (((/* implicit */int) arr_17 [i_10] [i_10])) : (((/* implicit */int) arr_5 [i_10] [i_10] [i_10])))));
        arr_25 [i_10] [i_10] = min((1874202579), (-671140825));
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) - (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_7 [i_10] [i_10] [i_10] [i_10])) : (((/* implicit */int) var_0))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_6 [i_10]), (((/* implicit */unsigned long long int) var_6))))) ? (max((8145490200238995526ULL), (((/* implicit */unsigned long long int) 205426992U)))) : (8145490200238995524ULL))))));
        arr_26 [(_Bool)1] [i_10] = ((/* implicit */unsigned int) arr_7 [i_10] [i_10] [i_10] [i_10]);
        var_28 = ((/* implicit */unsigned int) var_1);
    }
    /* vectorizable */
    for (signed char i_11 = 0; i_11 < 18; i_11 += 2) 
    {
        /* LoopSeq 4 */
        for (int i_12 = 2; i_12 < 17; i_12 += 4) 
        {
            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9))) : (17940818767968021232ULL)));
            /* LoopNest 2 */
            for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 2) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        arr_39 [i_14] [i_13] [i_13] [i_12] [i_11] = ((/* implicit */int) (+(arr_14 [i_12 + 1] [i_12])));
                        arr_40 [i_14] = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)116))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 3) 
        {
            arr_45 [i_11] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_19 [i_11] [i_11] [i_11]) && (((/* implicit */_Bool) (unsigned char)188)))))) & (18006390560365958928ULL)));
            var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
            var_31 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)255))));
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            arr_48 [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)95)) ? (((/* implicit */int) arr_21 [i_16])) : (((/* implicit */int) arr_8 [i_16]))))) ? (((/* implicit */int) arr_0 [(unsigned short)1] [i_16])) : (((/* implicit */int) (signed char)90))));
            var_32 = 671140829;
            var_33 ^= ((/* implicit */_Bool) var_4);
        }
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            arr_52 [i_11] [i_17] [i_17] = ((/* implicit */signed char) 7526280408324994894ULL);
            var_34 = ((/* implicit */signed char) (-(var_1)));
            /* LoopNest 3 */
            for (unsigned long long int i_18 = 0; i_18 < 18; i_18 += 4) 
            {
                for (int i_19 = 2; i_19 < 16; i_19 += 1) 
                {
                    for (unsigned char i_20 = 3; i_20 < 14; i_20 += 4) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)148))));
                            arr_63 [i_11] [i_19] [i_19 + 1] = (~(((/* implicit */int) (_Bool)1)));
                            var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(unsigned short)3] [(unsigned short)3] [i_18] [i_20 + 2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)6009))))) : (((/* implicit */int) (unsigned char)62)))))));
                            arr_64 [i_19] [i_17] [i_18] [i_19] [i_20] [i_19] = ((/* implicit */unsigned long long int) var_5);
                            arr_65 [i_19] [i_17] = ((short) (signed char)77);
                        }
                    } 
                } 
            } 
        }
        arr_66 [i_11] = ((((_Bool) (unsigned char)186)) ? ((((_Bool)0) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))));
    }
}
