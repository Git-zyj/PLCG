/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129983
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
    var_19 = ((/* implicit */unsigned char) var_8);
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) max((min((((unsigned long long int) arr_0 [i_0] [i_0 - 1])), (((((/* implicit */unsigned long long int) arr_1 [i_0])) + (var_1))))), (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)65535)), (arr_1 [i_0 - 1])))), (((((/* implicit */_Bool) -1423112756)) ? (15607415877415970141ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32644)))))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (-(((((/* implicit */int) var_15)) / (arr_4 [i_0] [i_0 + 1] [i_0]))))))));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (unsigned short i_3 = 3; i_3 < 14; i_3 += 3) 
                {
                    {
                        var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_7 [i_3] [i_2] [i_1] [i_0]), (((/* implicit */unsigned long long int) (unsigned short)4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_11 [i_0] [i_1]) != (((/* implicit */long long int) ((/* implicit */int) (short)32640))))))) : (max((((/* implicit */unsigned long long int) arr_1 [i_2])), (2839328196293581474ULL)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) -2065970563)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_0])) ? (97104509U) : (var_8))))))) : (((((/* implicit */_Bool) -762583926)) ? ((-(((/* implicit */int) (unsigned short)25927)))) : (((/* implicit */int) (signed char)127))))));
                        arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) ((2454649633072138797ULL) & (min((max((((/* implicit */unsigned long long int) 0U)), (arr_7 [i_0] [10ULL] [i_2] [i_3]))), (((/* implicit */unsigned long long int) ((1098932999) >> (((4197862786U) - (4197862774U))))))))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (long long int i_4 = 1; i_4 < 11; i_4 += 3) 
        {
            for (unsigned char i_5 = 4; i_5 < 13; i_5 += 3) 
            {
                {
                    arr_22 [i_0] [i_4 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) min(((short)-32640), (((/* implicit */short) arr_3 [i_0 - 1] [i_4]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_5 - 2] [i_4 + 2] [i_0 + 2] [i_0])) ? (((/* implicit */int) arr_5 [i_5 + 2] [i_4 + 1] [i_0 - 1] [i_0])) : (762583925)))) : (((((var_0) == (-762583926))) ? (1657553575U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 7216504134064340237ULL))))))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-54)) ? (arr_6 [i_0] [i_4 - 1] [i_5 - 4] [i_5 + 2]) : (((/* implicit */int) (short)32644))))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_4 - 1] [i_0 + 2] [i_5] [i_0])))))));
                    arr_23 [i_5] [i_0 + 1] = (((~(min((((/* implicit */unsigned int) (signed char)0)), (arr_1 [i_5 - 4]))))) / (((/* implicit */unsigned int) (+(min((((/* implicit */int) (short)-32641)), ((-2147483647 - 1))))))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)18)) >= (((/* implicit */int) (short)32767))))), ((+(min((7930019662613295933LL), (((/* implicit */long long int) arr_6 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 2]))))))));
    }
    for (unsigned int i_6 = 0; i_6 < 23; i_6 += 3) 
    {
        arr_26 [i_6] &= ((/* implicit */int) arr_25 [i_6]);
        arr_27 [i_6] [i_6] = (unsigned char)224;
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_7 = 2; i_7 < 21; i_7 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_8 = 0; i_8 < 23; i_8 += 3) 
            {
                arr_33 [i_6] [i_7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_6])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_8])) ? (arr_31 [i_8] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_7])))))) : (13234350942011114831ULL)));
                arr_34 [6LL] [6LL] &= ((/* implicit */unsigned long long int) (+(var_0)));
                arr_35 [i_6] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_7 - 2])) ? (((/* implicit */int) arr_24 [i_7 - 2])) : (((/* implicit */int) (short)-13287))));
            }
            arr_36 [i_6] [i_7] [i_6] = ((unsigned char) 4197862786U);
            var_24 *= ((/* implicit */int) ((arr_28 [i_6] [i_7 - 2] [i_7 + 2]) == (arr_28 [i_6] [i_7 + 2] [i_6])));
        }
        var_25 = ((/* implicit */unsigned long long int) (short)32640);
        arr_37 [i_6] [i_6] = ((/* implicit */short) arr_24 [i_6]);
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 17; i_9 += 3) 
    {
        for (short i_10 = 2; i_10 < 13; i_10 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 17; i_11 += 3) 
                {
                    for (unsigned char i_12 = 1; i_12 < 16; i_12 += 3) 
                    {
                        {
                            var_26 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_46 [(unsigned short)12] [i_11] [i_12 - 1] [i_10 + 2])) && (((/* implicit */_Bool) max((((/* implicit */short) var_10)), ((short)-25580))))));
                            var_27 = min((((min((((/* implicit */unsigned long long int) (unsigned short)20751)), (arr_30 [i_9]))) + (max((var_7), (((/* implicit */unsigned long long int) arr_38 [i_9])))))), (max((((/* implicit */unsigned long long int) arr_38 [i_9])), (((((/* implicit */_Bool) (short)-10990)) ? (arr_30 [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16084))))))));
                            arr_47 [i_9] [i_9] [i_9] = max((((15738783541509466472ULL) % (10363728598430087983ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_44 [i_10 + 4])) % (((/* implicit */int) arr_44 [i_10 + 3]))))));
                            /* LoopSeq 1 */
                            for (unsigned char i_13 = 1; i_13 < 16; i_13 += 3) 
                            {
                                var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) min((arr_32 [i_9] [i_9] [20] [i_9]), (var_15))))));
                                arr_51 [i_9] [i_9] [i_11] [i_9] [i_13] [i_13] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((/* implicit */short) (unsigned char)40)), (arr_50 [i_9] [i_10 + 2] [i_9] [i_12] [i_13] [i_10])))), ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_13 + 1] [i_10] [i_13] [i_11] [i_10] [i_10 + 3] [i_12 + 1]))) : (571957152676052992ULL)))));
                                var_29 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_42 [i_10] [i_12 + 1] [i_13 - 1])) ? (((/* implicit */int) max((((/* implicit */short) (signed char)57)), (var_15)))) : (((/* implicit */int) arr_29 [i_10] [i_10])))) >> (((((/* implicit */int) max(((short)32666), ((short)-32643)))) - (32638)))));
                                var_30 = ((/* implicit */unsigned int) min((-7930019662613295915LL), (((/* implicit */long long int) -2))));
                            }
                        }
                    } 
                } 
                var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((int) ((9223372036854775807LL) == (((/* implicit */long long int) 781890143U))))))));
                var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) min(((unsigned short)58331), (((/* implicit */unsigned short) (unsigned char)70)))))));
            }
        } 
    } 
}
