/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172836
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */_Bool) (+(max((min((((/* implicit */unsigned long long int) (unsigned short)509)), (14094019607061370189ULL))), (((/* implicit */unsigned long long int) ((signed char) (signed char)21)))))));
                var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (min((arr_2 [i_0] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_0)))) : (max((arr_2 [i_0] [i_0] [10LL]), (arr_2 [i_0] [i_1] [i_1]))))))));
                arr_5 [i_1] = ((/* implicit */short) ((1343048865) << (((((((/* implicit */long long int) 1343048866)) & (1125899906842623LL))) - (1343048866LL)))));
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            arr_11 [i_2] = ((/* implicit */unsigned short) arr_10 [i_2] [i_3] [i_2]);
            arr_12 [i_2] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_1))) ? (11063215180413643275ULL) : (((/* implicit */unsigned long long int) arr_8 [i_2] [i_2] [i_3]))));
        }
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */long long int) (-2147483647 - 1)))))) && (((_Bool) (signed char)-74)))))));
            arr_15 [i_4] |= ((/* implicit */_Bool) ((unsigned short) arr_14 [i_4 + 1] [i_4]));
            /* LoopNest 2 */
            for (long long int i_5 = 1; i_5 < 15; i_5 += 3) 
            {
                for (long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    {
                        var_13 ^= ((/* implicit */_Bool) var_7);
                        arr_21 [i_5] [i_4] [i_5] [i_4] = ((/* implicit */unsigned int) (-(var_10)));
                    }
                } 
            } 
            var_14 = ((((/* implicit */unsigned long long int) 1615827002U)) | (14467303896678622650ULL));
        }
        arr_22 [i_2] = ((/* implicit */_Bool) arr_16 [12LL] [i_2] [12LL] [i_2]);
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) arr_25 [(unsigned char)12] [(short)20]))));
        /* LoopNest 3 */
        for (unsigned long long int i_8 = 3; i_8 < 23; i_8 += 2) 
        {
            for (long long int i_9 = 0; i_9 < 25; i_9 += 4) 
            {
                for (long long int i_10 = 0; i_10 < 25; i_10 += 4) 
                {
                    {
                        var_16 = ((/* implicit */_Bool) max((var_16), (((_Bool) ((((/* implicit */_Bool) -1343048865)) ? (((/* implicit */int) (unsigned char)165)) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (short)9641)) : (((/* implicit */int) (signed char)3)))))))));
                        var_17 += ((/* implicit */signed char) ((unsigned int) 1343048865));
                        arr_34 [i_7] [i_8] [i_7] [i_10] [i_10] = ((/* implicit */unsigned int) 7544515277449381228LL);
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_11 = 2; i_11 < 16; i_11 += 3) 
    {
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_9)) != (13214231999904204549ULL))))));
        /* LoopNest 2 */
        for (unsigned int i_12 = 0; i_12 < 17; i_12 += 4) 
        {
            for (int i_13 = 3; i_13 < 16; i_13 += 1) 
            {
                {
                    arr_41 [i_13] [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) << (((var_3) - (13627147865271414957ULL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_12] [i_12])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-3))))) : ((~(arr_27 [i_12] [i_13 - 3])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 3; i_14 < 16; i_14 += 3) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 17; i_15 += 2) 
                        {
                            {
                                var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_13 - 1] [i_13 + 1] [i_13 - 2])) ? (arr_28 [i_11 - 1] [i_15] [i_11 - 2]) : (arr_28 [i_11 + 1] [i_15] [i_11 + 1])))) ? (min((((/* implicit */long long int) arr_43 [i_13] [i_13] [i_13 + 1])), (arr_28 [i_11 + 1] [i_12] [i_11 - 2]))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                                var_20 *= ((/* implicit */unsigned short) (unsigned char)214);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)7)) ? (5232512073805347066ULL) : (((/* implicit */unsigned long long int) arr_28 [i_11] [i_12] [i_13]))))))));
                    arr_48 [i_11] [i_12] [i_13] = ((/* implicit */long long int) (-(((((/* implicit */int) arr_45 [i_13 - 2] [i_13 + 1] [i_13 + 1] [i_13] [i_13])) >> (((((/* implicit */int) arr_45 [i_13 - 2] [i_13 - 2] [i_13 - 3] [i_13] [i_13 - 3])) - (130)))))));
                    /* LoopSeq 2 */
                    for (long long int i_16 = 1; i_16 < 16; i_16 += 4) 
                    {
                        var_22 *= ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (arr_43 [i_13] [i_13 - 1] [i_13])));
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (-(((((/* implicit */int) (unsigned char)42)) * (((((/* implicit */int) (unsigned char)97)) / (var_10))))))))));
                    }
                    for (unsigned char i_17 = 1; i_17 < 16; i_17 += 4) 
                    {
                        var_24 = ((/* implicit */long long int) max((((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_7))) + (var_6))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_13] [i_13] [i_12])) ? (arr_29 [i_11 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) arr_25 [i_17] [i_17])) : ((-(((/* implicit */int) (unsigned short)7741))))))));
                        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) var_6))));
                        arr_53 [i_11] [i_17] [8ULL] [i_17] [i_17 - 1] = ((/* implicit */int) max(((~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_11]))) | (4036741295928157188ULL))))), (((/* implicit */unsigned long long int) (_Bool)1))));
                        var_26 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((arr_47 [i_11 - 2] [i_12] [i_13 - 2] [i_13 + 1] [i_17] [i_17 + 1]), (arr_47 [i_11] [i_12] [i_13] [i_17] [i_13] [i_12])))) == (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))))), (12430676955506132854ULL)))));
                        /* LoopSeq 4 */
                        for (int i_18 = 4; i_18 < 16; i_18 += 2) 
                        {
                            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_42 [i_18] [i_12] [i_18 - 4]))) >> (((((min((422233202071105725LL), (((/* implicit */long long int) arr_51 [i_12] [i_12] [i_11])))) ^ (((/* implicit */long long int) ((arr_43 [i_18] [i_12] [i_11]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)93)))))))) + (3558387498LL))))))));
                            var_28 = ((/* implicit */unsigned char) max((((((/* implicit */int) var_8)) < ((~(((/* implicit */int) arr_44 [i_11 + 1] [i_11])))))), ((_Bool)1)));
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) / (arr_28 [i_11] [i_12] [i_17]))))));
                            arr_56 [i_17] [i_12] [i_13 - 3] [i_17] [i_12] = ((/* implicit */long long int) arr_31 [i_11] [i_12] [i_17] [i_17 + 1]);
                            arr_57 [i_17] [i_17] [i_13] [i_12] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_26 [i_17] [i_11 - 1]), (arr_26 [i_17] [i_18])))) && (((/* implicit */_Bool) arr_26 [i_17] [6]))));
                        }
                        for (signed char i_19 = 0; i_19 < 17; i_19 += 2) 
                        {
                            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((((((/* implicit */_Bool) ((long long int) arr_30 [(_Bool)1] [i_13 + 1] [i_17]))) ? (((long long int) var_8)) : (((((/* implicit */_Bool) (unsigned char)163)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_51 [(_Bool)1] [i_12] [i_13]))))))) < (((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_11]))))))))));
                            var_31 = ((/* implicit */unsigned char) ((((arr_30 [i_17 + 1] [i_11 + 1] [i_13 - 2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) << (((((/* implicit */_Bool) arr_36 [i_11])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned char)121)))))))));
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (-3537234911444453536LL) : (((/* implicit */long long int) ((/* implicit */int) max((arr_26 [i_17] [i_17]), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)95)))))))))));
                            var_33 = ((/* implicit */signed char) (-(arr_29 [i_19])));
                        }
                        for (signed char i_20 = 0; i_20 < 17; i_20 += 4) 
                        {
                            arr_63 [i_11] [i_11] [i_17] [i_11 - 1] [i_11 + 1] [i_11 + 1] [i_11 - 1] = ((/* implicit */long long int) (signed char)-2);
                            var_34 += ((/* implicit */long long int) (unsigned short)25479);
                            var_35 *= ((/* implicit */int) min(((!(((/* implicit */_Bool) arr_49 [i_20] [i_20] [i_20] [i_20] [i_17 + 1] [i_13 - 2])))), ((!(((/* implicit */_Bool) (unsigned char)6))))));
                            arr_64 [i_17] [(signed char)10] = (i_17 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */int) (signed char)2)) >> (((((/* implicit */int) arr_25 [i_17] [i_13 - 2])) + (117)))))) : (((/* implicit */unsigned short) ((((/* implicit */int) (signed char)2)) >> (((((((/* implicit */int) arr_25 [i_17] [i_13 - 2])) + (117))) - (19))))));
                            var_36 = ((/* implicit */unsigned long long int) max((var_36), (((unsigned long long int) ((((/* implicit */_Bool) arr_51 [i_13 - 1] [i_13] [i_17 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (arr_59 [i_20] [i_20] [i_20] [i_11]))))))));
                        }
                        for (unsigned char i_21 = 4; i_21 < 13; i_21 += 2) 
                        {
                            arr_69 [i_11] [i_17] = ((/* implicit */int) max(((-(4317328374310025578LL))), (((/* implicit */long long int) ((arr_40 [i_12] [i_12]) < (((int) (unsigned short)46377)))))));
                            arr_70 [i_12] [i_17] [i_13] [i_12] [i_12] [i_11] [i_12] &= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) (short)29629)) != (1343048865))))), (max((((/* implicit */unsigned long long int) ((_Bool) 3639511083514456053ULL))), (arr_29 [i_21])))));
                            var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) (((!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65280))))))) ? (((/* implicit */int) ((arr_40 [i_13 - 2] [i_11 - 1]) >= (arr_40 [i_13 - 3] [i_11 + 1])))) : ((+(((/* implicit */int) (_Bool)1)))))))));
                        }
                    }
                }
            } 
        } 
        var_38 = arr_65 [i_11 - 2];
        arr_71 [i_11] [i_11] = ((/* implicit */short) arr_50 [i_11] [i_11] [i_11] [i_11 - 1]);
        arr_72 [i_11] = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) (+(3LL)))), (var_3))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((signed char) var_10))), (var_1))))));
    }
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_23 = 0; i_23 < 10; i_23 += 4) 
        {
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                {
                    var_39 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)115)) ^ (((/* implicit */int) (unsigned char)145))))) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */int) arr_36 [i_22])) / (((/* implicit */int) arr_36 [i_23]))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_25 = 1; i_25 < 7; i_25 += 3) 
                    {
                        arr_82 [i_22] [i_23] [i_24] [i_25] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2917926583698049142LL)) ? (((/* implicit */long long int) 1618027437U)) : (-914553391125597685LL)));
                        var_40 -= ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_39 [i_25 + 2] [i_25 + 3] [i_25 + 2] [i_25])) ? ((((_Bool)1) ? (6507252934922614070ULL) : (15706878449147217148ULL))) : ((~(16786671897331112134ULL))))));
                    }
                    var_41 |= ((/* implicit */unsigned char) ((long long int) max((arr_40 [15] [i_24]), (((/* implicit */int) (_Bool)0)))));
                    arr_83 [i_23] [(_Bool)1] [i_23] [i_23] = ((/* implicit */long long int) ((signed char) 2739865624562334468ULL));
                }
            } 
        } 
        var_42 = ((/* implicit */unsigned int) arr_17 [i_22] [i_22] [i_22]);
        arr_84 [i_22] |= ((unsigned char) ((short) ((((/* implicit */int) var_4)) << (((arr_9 [i_22] [i_22]) + (580385590012658048LL))))));
    }
}
