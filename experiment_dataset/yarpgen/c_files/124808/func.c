/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124808
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
    var_16 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) >> (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_13)) : (var_4))) - (18446744072493390072ULL)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) <= (15634482838101837753ULL)))) : (((/* implicit */int) var_1))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 16; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(2862117943075161010LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) : (min((var_9), (((/* implicit */unsigned int) -836156165))))));
                                arr_13 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [3U] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) arr_10 [i_1] [i_0] [(unsigned char)2])) <= (var_13))))))) + (var_9)));
                                var_18 = ((/* implicit */long long int) (unsigned char)146);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 18; i_5 += 4) 
                    {
                        for (int i_6 = 1; i_6 < 16; i_6 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_6 [i_2] [i_2 - 2] [i_2] [i_2]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [1] [i_2 - 3] [i_2] [i_0])) ? (((/* implicit */int) arr_6 [i_5] [i_2 - 2] [i_2] [i_0])) : (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) -1904253813059562236LL)) ? (-1904253813059562236LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                                var_20 -= ((/* implicit */signed char) ((unsigned char) var_11));
                                arr_19 [i_0] [i_1] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)-14849), (((/* implicit */short) (_Bool)1)))))) : (arr_8 [i_0]))));
                                arr_20 [i_6 + 1] [i_0] [i_5] [1LL] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 9678680518727005279ULL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -8861051097739496185LL)) / (var_4)))) ? (((int) (unsigned short)65535)) : ((+(((/* implicit */int) (short)32750))))))) : (((arr_7 [i_0] [i_1 - 4] [i_0] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned int i_7 = 1; i_7 < 11; i_7 += 3) 
    {
        arr_24 [i_7] = ((/* implicit */unsigned int) (~(arr_16 [i_7] [i_7] [i_7] [i_7 + 3] [14])));
        var_21 = arr_2 [i_7] [i_7] [i_7 - 1];
        /* LoopNest 2 */
        for (long long int i_8 = 4; i_8 < 12; i_8 += 4) 
        {
            for (long long int i_9 = 2; i_9 < 11; i_9 += 2) 
            {
                {
                    arr_33 [i_7] [(unsigned char)10] [i_7] |= ((/* implicit */signed char) (~(((((/* implicit */_Bool) 3812548769593934785LL)) ? (-1354829844) : (1354829857)))));
                    arr_34 [i_9] [i_8 + 2] [i_7] = ((/* implicit */int) ((((var_11) ^ (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 1354829843)), (1904253813059562235LL)))))) | (((/* implicit */unsigned long long int) arr_15 [i_7] [i_7] [i_7] [(short)0]))));
                }
            } 
        } 
        var_22 = ((/* implicit */long long int) min((((/* implicit */int) (short)32750)), (1354829859)));
    }
    for (signed char i_10 = 3; i_10 < 20; i_10 += 4) 
    {
        arr_37 [i_10] [i_10] = ((/* implicit */unsigned char) (-((-((+(((/* implicit */int) arr_35 [i_10]))))))));
        arr_38 [i_10] = ((/* implicit */int) (((_Bool)1) ? (max((1904253813059562224LL), (-991781854966168326LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    }
    for (unsigned long long int i_11 = 2; i_11 < 20; i_11 += 3) 
    {
        arr_41 [i_11] &= ((/* implicit */signed char) (+(min((((/* implicit */long long int) var_9)), (arr_39 [i_11])))));
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((14LL), (((/* implicit */long long int) 1679605677))))) ? (((/* implicit */unsigned int) 300702993)) : (((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)83))))) | (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [20] [i_11]))) : (4026531840U)))))));
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 6917529027641081856ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_11 - 2] [i_11 - 2]))) : (((arr_40 [i_11] [i_11]) ? (arr_36 [(signed char)1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_11] [i_11])))))))) : (((((/* implicit */_Bool) arr_39 [i_11 - 2])) ? (arr_39 [i_11 - 2]) : (((/* implicit */long long int) min((1714512632U), (((/* implicit */unsigned int) -1354829834))))))))))));
        /* LoopSeq 1 */
        for (int i_12 = 1; i_12 < 17; i_12 += 4) 
        {
            arr_45 [20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_11 - 1])) ? (arr_36 [i_11 - 2]) : (arr_36 [i_11 + 1])))) ? (((((/* implicit */_Bool) arr_36 [i_11 - 2])) ? (arr_36 [i_11 - 1]) : (arr_36 [i_11 - 1]))) : ((-(arr_36 [i_11 - 2])))));
            var_25 |= ((/* implicit */signed char) (+(((/* implicit */int) (signed char)(-127 - 1)))));
        }
    }
    for (long long int i_13 = 3; i_13 < 17; i_13 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_14 = 1; i_14 < 18; i_14 += 1) 
        {
            for (signed char i_15 = 2; i_15 < 16; i_15 += 3) 
            {
                {
                    var_26 = var_5;
                    /* LoopSeq 1 */
                    for (signed char i_16 = 3; i_16 < 17; i_16 += 4) 
                    {
                        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-116)) ? (16835990687621545157ULL) : (8864672129732986150ULL)))) ? (16580112647606518341ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16580112647606518341ULL)) ? (-4164117510302760173LL) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))))));
                        var_28 = ((/* implicit */signed char) arr_44 [(unsigned char)9] [(unsigned char)9]);
                    }
                    arr_56 [i_14] [i_13] [i_13] [17LL] = ((/* implicit */signed char) var_14);
                    var_29 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_0 [i_13 + 2] [i_15 + 1]))) ? (arr_0 [i_13 + 1] [i_15 + 2]) : ((-(arr_0 [i_13 - 1] [i_15])))));
                }
            } 
        } 
        var_30 = ((/* implicit */_Bool) max((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_13] [(short)7])) : (((/* implicit */int) arr_3 [(short)2] [i_13])))) - (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_5 [(signed char)4] [i_13] [i_13] [(signed char)4])))))), ((((+(((/* implicit */int) var_14)))) << (((((((/* implicit */_Bool) arr_53 [4LL])) ? (((/* implicit */long long int) arr_52 [i_13] [i_13] [i_13] [i_13])) : (var_0))) - (3447766620LL)))))));
        arr_57 [i_13] [i_13] = ((/* implicit */short) ((max((((/* implicit */long long int) ((var_0) <= (((/* implicit */long long int) ((/* implicit */int) arr_40 [(unsigned char)10] [i_13])))))), (arr_39 [i_13 + 2]))) << (((((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)(-127 - 1))), (2580454667U)))) ? (((/* implicit */long long int) -827166182)) : (-1904253813059562236LL))) + (827166207LL))) - (25LL)))));
        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) arr_48 [0])), (var_7))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_47 [(short)14] [i_13])), (arr_36 [i_13]))))))) ? (((arr_11 [i_13 + 2] [i_13 - 2] [i_13] [(short)12] [i_13 + 1] [(unsigned short)8] [i_13 + 2]) ? (arr_43 [i_13] [i_13]) : (((/* implicit */long long int) (~(((/* implicit */int) var_2))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [(short)0])))));
        /* LoopNest 3 */
        for (signed char i_17 = 1; i_17 < 17; i_17 += 4) 
        {
            for (int i_18 = 4; i_18 < 16; i_18 += 4) 
            {
                for (unsigned char i_19 = 2; i_19 < 18; i_19 += 1) 
                {
                    {
                        arr_65 [i_13] [i_17] [i_13] [i_17 - 1] [i_18] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(1904253813059562224LL)))) ? (((/* implicit */int) (short)4426)) : (((/* implicit */int) (unsigned char)255))));
                        var_32 = ((/* implicit */unsigned int) max((var_32), (((unsigned int) arr_3 [i_17] [i_17]))));
                    }
                } 
            } 
        } 
    }
    var_33 = ((/* implicit */unsigned char) ((long long int) var_14));
}
