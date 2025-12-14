/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144921
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
    var_12 = ((/* implicit */short) var_11);
    var_13 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-27319)) ? (562949953421184LL) : (min((((/* implicit */long long int) var_2)), (-562949953421184LL))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? ((+(((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */_Bool) 4233040716209077520LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_2 [i_0]))))))) ? (((((/* implicit */_Bool) (short)-1)) ? (-562949953421184LL) : (((/* implicit */long long int) 4044297884U)))) : (min((min((-562949953421192LL), (562949953421192LL))), (562949953421184LL))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] = ((signed char) -4959385787453611536LL);
            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_1]))) & ((-(arr_0 [i_0]))))))));
            var_16 = ((/* implicit */unsigned short) arr_0 [i_0]);
        }
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */signed char) (+(-562949953421192LL)));
            arr_8 [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) (+(var_9)));
            arr_9 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_3 [i_0]) : (arr_3 [i_0]))))));
        }
    }
    for (long long int i_3 = 0; i_3 < 18; i_3 += 2) /* same iter space */
    {
        arr_14 [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : ((-(562949953421178LL)))))) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) ((signed char) var_3))))));
        var_18 ^= ((/* implicit */int) (~(562949953421192LL)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            var_19 = ((/* implicit */_Bool) min((var_19), (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) != (var_9)))));
            arr_18 [13LL] [i_3] = arr_17 [i_3];
        }
        for (short i_5 = 1; i_5 < 17; i_5 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_6 = 1; i_6 < 15; i_6 += 2) 
            {
                arr_26 [i_5 - 1] [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [(signed char)8] [i_5] [i_5] [i_5]))) != (((((/* implicit */_Bool) var_5)) ? (-562949953421185LL) : (-562949953421189LL))))))));
                var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) arr_19 [i_5 + 1] [i_6 + 3])))));
            }
            for (unsigned int i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 562949953421183LL)) ? (-562949953421204LL) : (((/* implicit */long long int) 3000272449U))));
                arr_29 [i_5] [i_5] [i_7] [i_3] = ((/* implicit */unsigned int) var_7);
            }
            /* LoopNest 2 */
            for (unsigned int i_8 = 0; i_8 < 18; i_8 += 3) 
            {
                for (unsigned long long int i_9 = 4; i_9 < 17; i_9 += 3) 
                {
                    {
                        arr_34 [i_9] [i_3] [i_8] [i_9] [i_9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) var_10))));
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) min((min((-8098873621693648376LL), (7242971981407398162LL))), (((/* implicit */long long int) ((var_1) != (min((((/* implicit */unsigned int) arr_2 [i_9])), (var_0)))))))))));
                        var_24 = var_4;
                    }
                } 
            } 
            var_25 = ((/* implicit */short) ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_4))))))) - (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_15 [i_3])), (var_1)))) ? (((/* implicit */int) arr_15 [i_5 + 1])) : ((-(((/* implicit */int) arr_2 [i_3]))))))));
        }
        var_26 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_27 [i_3] [i_3] [i_3])) | (((/* implicit */int) var_10))))))) ? ((+(((/* implicit */int) arr_19 [i_3] [i_3])))) : (((/* implicit */int) ((unsigned short) min(((unsigned char)157), (((/* implicit */unsigned char) var_11))))))));
        var_27 |= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_23 [i_3] [i_3] [i_3] [i_3]), (((/* implicit */short) var_10)))))) / (min((((/* implicit */unsigned int) arr_27 [i_3] [i_3] [i_3])), (var_9)))));
    }
    for (long long int i_10 = 0; i_10 < 18; i_10 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_11 = 4; i_11 < 17; i_11 += 1) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    arr_45 [i_10] [i_10] &= ((/* implicit */unsigned char) var_2);
                    var_28 = ((/* implicit */signed char) (~(((/* implicit */int) ((short) max((((/* implicit */unsigned int) arr_31 [i_12] [i_12] [i_12])), (var_1)))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_29 = min((((/* implicit */long long int) (-(((/* implicit */int) var_5))))), (arr_7 [i_13]));
            /* LoopSeq 3 */
            for (short i_14 = 1; i_14 < 16; i_14 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_15 = 0; i_15 < 18; i_15 += 4) 
                {
                    var_30 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned int) (short)-29062))), (arr_6 [i_15] [i_14] [i_10])))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_10])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))))) % (max((((/* implicit */unsigned long long int) 562949953421178LL)), (4368668668506152044ULL)))))));
                    arr_54 [i_10] [i_13] [i_13] [i_15] = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))), (((int) arr_35 [i_14 - 1] [i_14 + 1]))));
                    arr_55 [i_14] [i_14] [i_14] [i_13] = ((/* implicit */long long int) (unsigned char)254);
                    var_31 = ((/* implicit */int) var_7);
                }
                var_32 = ((/* implicit */unsigned char) min((562949953421196LL), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_13 [i_10])))))))));
                arr_56 [10LL] [i_13] [i_13] = ((/* implicit */signed char) (+(((min((14078075405203399542ULL), (((/* implicit */unsigned long long int) var_3)))) + (((/* implicit */unsigned long long int) ((long long int) (signed char)-20)))))));
                /* LoopSeq 2 */
                for (unsigned int i_16 = 0; i_16 < 18; i_16 += 3) 
                {
                    arr_61 [i_16] [i_13] = (i_13 % 2 == 0) ? (((/* implicit */long long int) ((int) (((+(((/* implicit */int) arr_51 [i_10] [i_10] [i_10] [i_10] [i_14 - 1] [i_16])))) % (((/* implicit */int) min(((unsigned short)12398), (((/* implicit */unsigned short) arr_48 [i_13]))))))))) : (((/* implicit */long long int) ((int) (((+(((/* implicit */int) arr_51 [i_10] [i_10] [i_10] [i_10] [i_14 - 1] [i_16])))) * (((/* implicit */int) min(((unsigned short)12398), (((/* implicit */unsigned short) arr_48 [i_13])))))))));
                    arr_62 [i_13] [i_16] [i_14] [i_16] [i_14] = ((/* implicit */int) -67108864LL);
                    var_33 = ((/* implicit */signed char) (!(((/* implicit */_Bool) -562949953421172LL))));
                    var_34 = var_3;
                }
                for (signed char i_17 = 4; i_17 < 17; i_17 += 1) 
                {
                    arr_65 [i_14] [i_13] [i_14 - 1] = ((/* implicit */long long int) min((-510805958), (((/* implicit */int) (_Bool)1))));
                    var_35 = ((/* implicit */long long int) (+((+(((/* implicit */int) min((var_3), (var_10))))))));
                    arr_66 [i_10] [i_10] [i_14] [i_10] &= ((/* implicit */unsigned short) max((((int) arr_40 [i_10])), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_13] [i_13]))))) - (arr_33 [i_10])))));
                    arr_67 [i_14] [17LL] [i_13] [i_14] = ((/* implicit */int) (+(var_0)));
                }
            }
            for (signed char i_18 = 0; i_18 < 18; i_18 += 1) 
            {
                var_36 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -510805957)) + (13779020758845812326ULL))))));
                var_37 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_17 [i_10]))))), ((~(var_0)))));
                var_38 = ((/* implicit */unsigned short) var_11);
            }
            for (unsigned char i_19 = 0; i_19 < 18; i_19 += 1) 
            {
                var_39 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-122))));
                var_40 &= ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_72 [i_19] [i_13] [i_10])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))));
                var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) var_3))));
            }
        }
        for (unsigned long long int i_20 = 0; i_20 < 18; i_20 += 4) 
        {
            var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 67108887LL)))))));
            arr_78 [i_10] [i_20] [i_20] = ((/* implicit */int) (~(4959385787453611535LL)));
            var_43 += ((/* implicit */unsigned int) -389529894);
            arr_79 [i_10] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_44 [i_10] [i_10] [i_10] [i_10]))));
            var_44 = ((/* implicit */long long int) ((unsigned short) var_5));
        }
        /* LoopNest 2 */
        for (signed char i_21 = 0; i_21 < 18; i_21 += 2) 
        {
            for (unsigned int i_22 = 0; i_22 < 18; i_22 += 2) 
            {
                {
                    var_45 = arr_3 [i_21];
                    var_46 = ((/* implicit */int) min((var_46), (((/* implicit */int) var_0))));
                    var_47 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 1858671834U)) ? (((/* implicit */int) (short)8766)) : (((/* implicit */int) (signed char)-7)))) ^ (510805957))))));
                    /* LoopNest 2 */
                    for (short i_23 = 2; i_23 < 15; i_23 += 2) 
                    {
                        for (unsigned char i_24 = 0; i_24 < 18; i_24 += 2) 
                        {
                            {
                                var_48 = ((/* implicit */unsigned short) (short)-1031);
                                arr_89 [i_23] = ((/* implicit */signed char) var_8);
                                var_49 = ((unsigned int) ((unsigned int) (-(((/* implicit */int) (unsigned short)25921)))));
                                var_50 = ((/* implicit */unsigned long long int) arr_31 [i_24] [i_24] [i_22]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
