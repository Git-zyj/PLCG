/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165594
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
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 2; i_2 < 15; i_2 += 4) /* same iter space */
                {
                    arr_8 [i_0] [i_1] [i_2] = arr_2 [i_0] [i_0];
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) -1LL)), ((~(((var_16) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-70))))))))))));
                    var_18 = ((/* implicit */unsigned short) var_6);
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 3; i_3 < 15; i_3 += 4) 
                    {
                        arr_11 [i_0 + 1] [5ULL] [i_1] [i_1] [i_3] [i_3] = ((((/* implicit */_Bool) min(((-(var_12))), (((/* implicit */long long int) 2147483647))))) || (((/* implicit */_Bool) var_7)));
                        var_19 = ((/* implicit */unsigned short) var_0);
                    }
                }
                for (int i_4 = 2; i_4 < 15; i_4 += 4) /* same iter space */
                {
                    var_20 += ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_6 [i_4] [i_4])) ? (((/* implicit */int) arr_6 [i_4] [i_4])) : (var_3)))));
                    arr_15 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) var_11);
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 4) 
                    {
                        for (short i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            {
                                var_21 = (_Bool)0;
                                arr_21 [i_1] [i_1] [i_4] [i_4] [i_1] [i_5] [i_6] = ((/* implicit */signed char) (+(var_6)));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */signed char) max((var_16), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) -231757058)) >= (var_16)))), (-2396872838289839592LL))))));
                }
                /* LoopSeq 1 */
                for (int i_7 = 2; i_7 < 15; i_7 += 2) 
                {
                    var_23 *= ((/* implicit */_Bool) var_15);
                    /* LoopSeq 3 */
                    for (unsigned short i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        arr_27 [i_0] [i_1] [i_1] [i_7] [i_7] [i_8] = ((/* implicit */long long int) ((var_11) ^ (((/* implicit */unsigned int) var_13))));
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) var_11))));
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned char) ((max((((/* implicit */int) arr_25 [i_0 - 2] [i_1] [i_8] [i_9])), (655428177))) + ((+(((/* implicit */int) (unsigned char)123))))));
                            var_26 |= ((/* implicit */_Bool) var_10);
                        }
                    }
                    for (long long int i_10 = 0; i_10 < 17; i_10 += 2) 
                    {
                        var_27 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_1))))));
                        arr_33 [i_0] [i_1] [i_7 + 2] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (var_11) : (((/* implicit */unsigned int) var_9))))) / ((~(arr_1 [i_0]))))));
                        /* LoopSeq 1 */
                        for (long long int i_11 = 0; i_11 < 17; i_11 += 3) 
                        {
                            var_28 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_0 - 2])) ? (arr_23 [i_0 - 1]) : (((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_10] [i_7 + 2])) ? (arr_23 [i_0 - 1]) : (arr_23 [i_0 - 1])))));
                            var_29 |= ((/* implicit */short) min((var_5), (((/* implicit */unsigned short) arr_13 [i_7] [i_0 + 1] [i_7 - 1]))));
                            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) arr_12 [i_0] [16LL] [i_10] [i_11]))));
                        }
                        arr_36 [i_0] [i_0] [i_1] [i_7] [i_10] = ((/* implicit */signed char) (-(((/* implicit */int) arr_32 [i_10] [i_7 + 2] [i_7]))));
                        var_31 |= ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned short) (_Bool)0))))))))));
                    }
                    for (long long int i_12 = 0; i_12 < 17; i_12 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) min(((((_Bool)0) ? (((/* implicit */int) arr_38 [i_12] [i_0 - 2])) : (var_13))), (((/* implicit */int) ((short) arr_31 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_7 + 1]))))))));
                            var_33 = ((/* implicit */long long int) (-(((((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1])) % (((/* implicit */int) arr_0 [i_0 - 2] [i_0 + 1]))))));
                            arr_42 [12ULL] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) var_14);
                        }
                        for (short i_14 = 0; i_14 < 17; i_14 += 1) /* same iter space */
                        {
                            var_34 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) (unsigned short)59044)))));
                            var_35 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) ((long long int) arr_1 [i_0]))) ? ((+(var_8))) : (((/* implicit */long long int) var_11)))));
                            var_36 = ((/* implicit */unsigned short) (-(max((((/* implicit */long long int) var_5)), (var_12)))));
                        }
                        for (short i_15 = 0; i_15 < 17; i_15 += 1) /* same iter space */
                        {
                            arr_47 [i_0 - 1] [i_1] [i_7] [i_12] [i_15] = ((/* implicit */short) var_6);
                            var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) var_15))));
                            var_38 = max((((/* implicit */long long int) ((unsigned char) 16587004513331792231ULL))), (max((arr_1 [i_0 - 2]), (((/* implicit */long long int) var_5)))));
                            arr_48 [i_0] [i_0] [i_1] [i_7 + 2] [i_12] [i_15] [i_15] = ((/* implicit */int) max((((/* implicit */unsigned long long int) 655428177)), ((~(((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */unsigned long long int) arr_1 [i_0]))))))));
                        }
                        for (signed char i_16 = 0; i_16 < 17; i_16 += 4) 
                        {
                            arr_52 [i_0] [i_1] [i_1] [i_12] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_15)) != (((max((((/* implicit */unsigned long long int) var_0)), (var_2))) << (((((arr_20 [i_0] [3] [13ULL] [i_12] [i_16]) | (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) - (1042349994U)))))));
                            var_39 *= ((/* implicit */_Bool) max((((/* implicit */long long int) (-(var_3)))), ((((_Bool)1) ? (((/* implicit */long long int) 928124732)) : (6508340793039839088LL)))));
                        }
                        var_40 = ((/* implicit */unsigned long long int) var_1);
                        var_41 += max((max((((/* implicit */int) ((short) var_1))), (var_3))), (max((var_3), (((((/* implicit */int) arr_4 [i_0 - 1] [i_12] [0LL])) | (((/* implicit */int) var_0)))))));
                    }
                    arr_53 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (short)-21687)), (-5158510835906659806LL))))));
                }
                var_42 = ((/* implicit */unsigned long long int) ((short) arr_13 [i_1] [i_0] [i_0 - 2]));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (int i_17 = 2; i_17 < 23; i_17 += 1) 
    {
        arr_56 [i_17] = ((/* implicit */int) ((((_Bool) var_0)) ? (((5158510835906659809LL) ^ (((/* implicit */long long int) arr_55 [i_17])))) : (((/* implicit */long long int) var_14))));
        var_43 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (unsigned char)141)), ((unsigned short)65535)))), (((unsigned long long int) -5377476957389344787LL))));
        arr_57 [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? ((~(-2252899934506762136LL))) : (var_12)));
    }
    for (unsigned int i_18 = 1; i_18 < 16; i_18 += 1) 
    {
        arr_61 [i_18] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (signed char)19))))));
        var_44 = ((/* implicit */unsigned int) ((min((var_16), (((/* implicit */unsigned long long int) arr_54 [i_18 - 1])))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_60 [i_18 + 2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_60 [i_18 + 2])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_19 = 0; i_19 < 18; i_19 += 3) 
        {
            arr_66 [i_18] [i_19] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_63 [i_18] [i_18] [i_19]) ^ (arr_62 [(_Bool)1] [i_18 + 2] [i_19])))) ? (((/* implicit */int) ((var_9) >= (((/* implicit */int) var_0))))) : (arr_62 [i_18] [i_18] [i_18 - 1])));
            arr_67 [i_18] [i_19] = ((/* implicit */unsigned char) ((-2147483619) ^ (((var_13) >> (((((/* implicit */int) var_0)) + (3521)))))));
            arr_68 [i_19] = ((/* implicit */unsigned short) ((arr_58 [i_18 - 1] [i_18 - 1]) % (arr_58 [i_19] [i_19])));
            var_45 *= ((/* implicit */unsigned int) (~(arr_62 [i_18 + 1] [i_19] [(unsigned char)5])));
        }
        /* LoopSeq 2 */
        for (unsigned int i_20 = 0; i_20 < 18; i_20 += 4) 
        {
            arr_72 [i_20] [i_18] [i_18 + 2] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_5)) : (var_3)))));
            var_46 = ((/* implicit */_Bool) var_14);
            arr_73 [i_18] [i_18] = ((/* implicit */unsigned char) var_8);
            arr_74 [i_18 - 1] [i_20] = ((/* implicit */unsigned int) arr_71 [i_20]);
        }
        /* vectorizable */
        for (signed char i_21 = 0; i_21 < 18; i_21 += 4) 
        {
            arr_78 [i_18] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_76 [i_18] [i_18] [i_21])))))) / (((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */long long int) 634602639U))))));
            var_47 = ((/* implicit */short) max((var_47), (((/* implicit */short) var_14))));
            var_48 = ((((/* implicit */_Bool) arr_75 [i_18 - 1] [i_18 + 1])) ? (((int) var_10)) : (((/* implicit */int) ((_Bool) var_8))));
        }
    }
    for (short i_22 = 0; i_22 < 20; i_22 += 3) 
    {
        var_49 = (+(((((/* implicit */_Bool) -5377476957389344787LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -3200916328397153046LL)) ? (((/* implicit */int) (unsigned short)1097)) : (((/* implicit */int) (signed char)127))))) : (var_12))));
        arr_81 [(unsigned short)0] &= ((/* implicit */unsigned short) (~(((/* implicit */int) var_1))));
    }
    var_50 = ((/* implicit */int) max((((/* implicit */short) ((unsigned char) (!(((/* implicit */_Bool) var_2)))))), (var_0)));
    /* LoopSeq 1 */
    for (long long int i_23 = 3; i_23 < 11; i_23 += 3) 
    {
        arr_84 [10U] |= ((/* implicit */unsigned char) var_0);
        var_51 = ((/* implicit */_Bool) arr_13 [i_23] [i_23] [i_23]);
    }
}
