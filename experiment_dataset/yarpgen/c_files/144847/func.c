/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144847
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
    var_20 &= ((/* implicit */short) var_2);
    var_21 -= ((/* implicit */int) min(((-(max((((/* implicit */unsigned long long int) (signed char)7)), (12079816698266915730ULL))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)7)))))));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 16; i_0 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) max((min((((/* implicit */int) ((17179869183ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))), (-1435042700))), (((/* implicit */int) var_9))));
        var_23 += ((/* implicit */int) (_Bool)1);
        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3499482449U)) ? (((/* implicit */unsigned long long int) ((long long int) arr_1 [i_0 + 1]))) : (((((14156245818006958117ULL) & (((/* implicit */unsigned long long int) -1435042700)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-1)), ((unsigned short)40469)))))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            var_25 = ((/* implicit */int) ((signed char) max((14156245818006958117ULL), (((/* implicit */unsigned long long int) min((1435042699), (((/* implicit */int) (unsigned short)40489))))))));
            var_26 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((576460752303423487ULL) << (((8796093022207ULL) - (8796093022183ULL)))))) ? (max((4290498255702593487ULL), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 - 1] [i_1])))) : (((/* implicit */unsigned long long int) ((4294950912U) << (((((/* implicit */int) (short)3579)) - (3550))))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            arr_6 [i_2] [i_0] = arr_1 [i_2];
            arr_7 [(short)3] [(short)3] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) 14156245818006958127ULL))))) > (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 1] [i_0 - 1])) > (((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 2] [i_0 - 2])))))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_27 = ((unsigned long long int) (-(var_16)));
            /* LoopSeq 2 */
            for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    var_28 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_3] [2])) % (((/* implicit */int) arr_3 [i_3] [i_4] [(unsigned char)13]))));
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        var_29 = ((/* implicit */long long int) ((unsigned short) (-(((/* implicit */int) (short)22533)))));
                        var_30 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7)) ? (((/* implicit */int) arr_12 [i_0 + 1] [i_0 + 1] [i_4] [i_4])) : (((/* implicit */int) arr_12 [i_0 - 2] [i_3] [(signed char)6] [i_3]))));
                    }
                    for (int i_7 = 1; i_7 < 16; i_7 += 2) 
                    {
                        var_31 = ((/* implicit */short) (+(1986653498U)));
                        var_32 = ((/* implicit */_Bool) ((signed char) arr_0 [i_0 - 2]));
                        var_33 = ((/* implicit */short) 18113349411625692098ULL);
                        var_34 = ((/* implicit */unsigned int) ((long long int) (unsigned short)1164));
                        var_35 = ((/* implicit */unsigned int) ((14156245818006958117ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-46)))));
                    }
                }
                for (short i_8 = 4; i_8 < 14; i_8 += 2) 
                {
                    var_36 = ((/* implicit */unsigned int) (((+(arr_17 [i_0] [i_0 - 2] [i_4] [i_8] [i_8 - 4]))) == (((((/* implicit */_Bool) min((4971583284013540594LL), (((/* implicit */long long int) -1435042689))))) ? (-748690477) : (((/* implicit */int) min((((/* implicit */short) (signed char)55)), ((short)-7))))))));
                    var_37 = ((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */long long int) var_6)), (arr_18 [i_0 - 2]))));
                }
                var_38 = ((4290498255702593517ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))));
                var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)2047))) : (max((((/* implicit */unsigned int) (_Bool)0)), (4294967295U))))))))));
            }
            /* vectorizable */
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 17; i_10 += 4) 
                {
                    for (long long int i_11 = 0; i_11 < 17; i_11 += 3) 
                    {
                        {
                            var_40 = ((/* implicit */_Bool) ((unsigned long long int) arr_10 [i_0 - 2] [i_9 - 1] [i_9 - 1]));
                            var_41 = ((/* implicit */unsigned long long int) ((unsigned short) arr_16 [i_11]));
                            var_42 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [2ULL] [i_9 - 1] [i_11])) == ((+(((/* implicit */int) var_17))))));
                            arr_30 [i_0 + 1] [i_3] [i_11] [i_10] [i_11] [i_9] = ((/* implicit */signed char) ((((((/* implicit */_Bool) -1435042700)) ? (arr_20 [i_0] [i_0] [i_0] [i_10] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) -1435042700)) ? (((/* implicit */int) (unsigned short)510)) : (-1))))));
                        }
                    } 
                } 
                arr_31 [i_0] [i_3] [12ULL] [i_3] = (unsigned short)25066;
            }
        }
        /* vectorizable */
        for (long long int i_12 = 1; i_12 < 15; i_12 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (unsigned short i_14 = 0; i_14 < 17; i_14 += 4) 
                {
                    {
                        var_43 = ((/* implicit */signed char) (+(-1)));
                        var_44 = ((/* implicit */long long int) (+(((((/* implicit */int) arr_36 [i_12 + 2] [i_12 + 2] [i_12 + 2])) % (((/* implicit */int) arr_9 [i_0] [i_12 + 2] [i_14]))))));
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
            {
                var_45 = ((/* implicit */_Bool) (~(arr_25 [i_0] [5] [i_15])));
                var_46 = ((/* implicit */unsigned int) arr_36 [i_0 - 1] [i_0 + 1] [i_12 - 1]);
                /* LoopNest 2 */
                for (long long int i_16 = 0; i_16 < 17; i_16 += 2) 
                {
                    for (long long int i_17 = 0; i_17 < 17; i_17 += 2) 
                    {
                        {
                            arr_52 [i_0] [i_15] [i_0] [7ULL] [i_16] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */int) (short)11370)) : (1435042699)));
                            var_47 *= ((/* implicit */short) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_48 = -536870912;
                            arr_53 [i_15] [i_15] = ((/* implicit */_Bool) arr_17 [i_15] [i_12 + 2] [(_Bool)1] [i_12 + 2] [i_17]);
                        }
                    } 
                } 
            }
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
            {
                arr_56 [0U] [0U] [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_5 [i_0] [i_0 - 2] [i_0]) ? (1674181504U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 - 2] [i_0 - 1] [i_12])))));
                var_49 = ((/* implicit */unsigned char) arr_28 [i_0] [i_12 - 1] [i_12] [i_12 - 1] [i_12]);
                arr_57 [16] [(signed char)3] [10ULL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)8160))));
                var_50 = ((unsigned short) ((((/* implicit */_Bool) arr_33 [i_0] [i_0 - 1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [(_Bool)1])));
                arr_58 [i_18] [(short)6] [(short)6] [i_0] = ((/* implicit */unsigned short) (~(2620785792U)));
            }
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
            {
                var_51 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_48 [i_0] [i_0 + 1] [i_0] [i_0] [i_12] [i_0] [i_19]))));
                var_52 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_40 [i_12 + 2] [i_12 + 1] [i_12 - 1] [i_0 - 1] [i_0]))));
                /* LoopNest 2 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    for (signed char i_21 = 1; i_21 < 15; i_21 += 2) 
                    {
                        {
                            arr_65 [i_0 + 1] [i_12 + 1] [i_19] [i_19] [i_19] = ((/* implicit */signed char) ((_Bool) 4263990345U));
                            var_53 += arr_47 [i_0] [i_12] [i_20] [(signed char)0];
                            var_54 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))));
                        }
                    } 
                } 
            }
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
            {
                var_55 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_9))));
                /* LoopNest 2 */
                for (signed char i_23 = 0; i_23 < 17; i_23 += 4) 
                {
                    for (unsigned int i_24 = 4; i_24 < 13; i_24 += 3) 
                    {
                        {
                            var_56 = ((/* implicit */short) (~(((((/* implicit */unsigned int) 1435042699)) - (1804717233U)))));
                            var_57 = ((/* implicit */short) (+(((/* implicit */int) arr_48 [i_24 - 2] [i_12 + 1] [i_12] [4] [(short)7] [i_0 + 1] [i_0 - 1]))));
                        }
                    } 
                } 
            }
            var_58 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))));
            /* LoopNest 2 */
            for (short i_25 = 0; i_25 < 17; i_25 += 2) 
            {
                for (int i_26 = 0; i_26 < 17; i_26 += 3) 
                {
                    {
                        arr_79 [i_26] [11U] [i_0] = ((/* implicit */signed char) 2199023255551LL);
                        var_59 *= ((/* implicit */signed char) arr_2 [i_0] [14LL]);
                        var_60 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) -1435042700)))) && (((/* implicit */_Bool) ((short) var_16)))));
                    }
                } 
            } 
        }
        var_61 = ((/* implicit */unsigned long long int) ((((_Bool) ((long long int) arr_15 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0]))) ? (min((arr_78 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1]), (arr_78 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_0 - 1]))) : (((/* implicit */unsigned int) ((arr_26 [i_0] [i_0] [i_0 - 1] [i_0]) ? (((/* implicit */int) ((var_19) == (((/* implicit */unsigned long long int) 1435042699))))) : (((/* implicit */int) ((_Bool) arr_70 [i_0]))))))));
    }
    for (short i_27 = 2; i_27 < 16; i_27 += 2) /* same iter space */
    {
        var_62 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(arr_23 [i_27] [i_27 + 1] [i_27] [i_27])))), (3486913976338790671ULL)))) ? (max((((/* implicit */int) max(((unsigned short)40470), (((/* implicit */unsigned short) var_7))))), (max((var_16), (((/* implicit */int) (unsigned char)241)))))) : ((-(((/* implicit */int) (signed char)127))))));
        /* LoopSeq 1 */
        for (short i_28 = 0; i_28 < 17; i_28 += 3) 
        {
            var_63 *= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (+(161883621)))) || (((/* implicit */_Bool) arr_29 [i_27] [i_27 + 1] [i_27] [(_Bool)1] [i_27 + 1]))))) % (arr_60 [i_27])));
            var_64 = ((/* implicit */_Bool) max((var_64), (((/* implicit */_Bool) var_3))));
            var_65 ^= ((/* implicit */unsigned long long int) var_7);
        }
        var_66 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) ((4971583284013540594LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))), ((-(((unsigned long long int) var_14))))));
        /* LoopNest 3 */
        for (unsigned long long int i_29 = 0; i_29 < 17; i_29 += 4) 
        {
            for (unsigned int i_30 = 0; i_30 < 17; i_30 += 3) 
            {
                for (int i_31 = 0; i_31 < 17; i_31 += 4) 
                {
                    {
                        var_67 = ((/* implicit */signed char) arr_48 [i_27] [i_27] [i_29] [i_30] [i_30] [i_30] [(short)16]);
                        arr_94 [i_27] [i_27] [i_27] [i_30] [i_31] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) -726369743)) == (arr_44 [i_27 - 1] [i_27 + 1]))) && (((/* implicit */_Bool) var_14))));
                    }
                } 
            } 
        } 
    }
    var_68 = var_3;
}
