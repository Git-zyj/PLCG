/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186047
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
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) max((var_18), (((long long int) var_1))));
                            arr_8 [i_2] = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) var_8)), (arr_7 [i_3] [i_2 - 3] [i_3] [(short)13]))), ((-(var_9)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 1; i_4 < 12; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_14 [i_5] [(signed char)11] [i_4 + 3] [i_0] [i_0] [i_0] = ((unsigned char) (short)384);
                            var_19 -= ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) + (arr_10 [(short)12] [i_4 - 1] [i_4 + 2]))) >> (((((((/* implicit */unsigned int) ((/* implicit */int) var_16))) ^ (arr_10 [i_1] [i_4 - 1] [i_4 + 3]))) - (517882717U)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_6 = 0; i_6 < 14; i_6 += 2) 
    {
        for (int i_7 = 0; i_7 < 14; i_7 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_8 = 1; i_8 < 11; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 1) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 14; i_10 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */int) (((!(((/* implicit */_Bool) max((var_17), (((/* implicit */int) (short)21573))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 12755073080625853420ULL))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [(unsigned char)11] [i_7] [i_8 + 1] [i_8 - 1] [(unsigned short)5] [i_10])))))))))));
                                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned short)32223), (((/* implicit */unsigned short) (unsigned char)207))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) << (((7623620074040329534LL) - (7623620074040329533LL)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)12084))))) : (max((((/* implicit */long long int) arr_11 [i_6] [i_7] [i_6] [i_9] [i_10])), (3LL)))))) : ((-(min((((/* implicit */unsigned long long int) arr_23 [i_7] [i_7] [i_7])), (var_11)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 14; i_11 += 2) 
                {
                    for (long long int i_12 = 1; i_12 < 12; i_12 += 4) 
                    {
                        {
                            arr_36 [2U] [(unsigned short)2] [2U] [2U] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_19 [i_6] [i_7])) ? (((/* implicit */int) arr_33 [i_6] [i_6] [i_11] [i_12] [i_7] [i_11])) : (((/* implicit */int) arr_28 [i_6] [i_7] [i_12])))), (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) var_0)) + (((/* implicit */int) arr_28 [i_6] [i_7] [i_11]))))))) : (var_14)));
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) arr_18 [i_7]))));
                            arr_37 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_9 [8U] [i_11] [i_7] [i_6])))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((var_17) << (((arr_7 [i_6] [i_7] [i_6] [i_7]) - (654931479U)))))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_13 = 2; i_13 < 12; i_13 += 3) 
                {
                    for (unsigned char i_14 = 1; i_14 < 11; i_14 += 2) 
                    {
                        for (short i_15 = 0; i_15 < 14; i_15 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (15) : (((/* implicit */int) ((short) arr_9 [i_6] [i_13] [i_7] [i_14]))))))));
                                var_24 = ((/* implicit */unsigned int) (-((+(min((2147483647), (((/* implicit */int) (short)-21573))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_16 = 1; i_16 < 10; i_16 += 1) 
    {
        for (short i_17 = 0; i_17 < 13; i_17 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_18 = 0; i_18 < 13; i_18 += 1) 
                {
                    for (unsigned char i_19 = 0; i_19 < 13; i_19 += 4) 
                    {
                        for (short i_20 = 0; i_20 < 13; i_20 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */int) ((67108863U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)183)))));
                                var_26 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned short) var_2))) ? (var_1) : (((/* implicit */int) var_10)))) ^ ((((!(((/* implicit */_Bool) (signed char)29)))) ? (((((((/* implicit */int) (signed char)-35)) + (2147483647))) >> (((arr_30 [i_16] [i_17] [i_18] [i_19]) - (2472262834U))))) : (((/* implicit */int) var_10))))));
                                var_27 = ((/* implicit */short) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-31)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
                {
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        for (unsigned short i_23 = 3; i_23 < 11; i_23 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */int) max((((/* implicit */long long int) ((short) (unsigned short)127))), (max((((/* implicit */long long int) 4294967295U)), (4292717381909526754LL)))));
                                arr_63 [i_16 + 2] [9U] [i_16 + 2] [i_16 + 2] [i_17] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) (unsigned short)0)) >> (((((/* implicit */int) arr_33 [i_16] [i_16 + 1] [i_16 + 3] [i_16] [i_16 - 1] [i_17])) + (9360))))));
                                arr_64 [i_17] = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) arr_18 [i_23])), (max((var_11), (((/* implicit */unsigned long long int) (unsigned char)250)))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                                arr_65 [i_16 + 3] [i_16 + 3] [i_16] [i_16] [i_17] = ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)47))))), (var_4)))) - (66846720)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_24 = 2; i_24 < 9; i_24 += 4) 
                {
                    for (unsigned short i_25 = 2; i_25 < 11; i_25 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */int) arr_7 [i_25] [i_25 + 1] [i_24 + 2] [i_16 + 3]);
                            arr_70 [i_16 + 3] [i_17] [i_16 + 3] = ((/* implicit */unsigned int) max((((/* implicit */int) min((var_16), (((/* implicit */short) (signed char)-64))))), (((((/* implicit */_Bool) 3191861492U)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_3))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_26 = 1; i_26 < 10; i_26 += 4) 
                {
                    for (signed char i_27 = 0; i_27 < 13; i_27 += 3) 
                    {
                        for (unsigned short i_28 = 1; i_28 < 10; i_28 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */long long int) var_7);
                                arr_77 [i_17] [(signed char)12] [(signed char)12] [1LL] [i_17] = ((/* implicit */unsigned short) var_1);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_29 = 0; i_29 < 16; i_29 += 2) 
    {
        for (short i_30 = 0; i_30 < 16; i_30 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_31 = 0; i_31 < 16; i_31 += 2) 
                {
                    for (signed char i_32 = 0; i_32 < 16; i_32 += 1) 
                    {
                        for (short i_33 = 2; i_33 < 14; i_33 += 2) 
                        {
                            {
                                var_31 = (~(((/* implicit */int) arr_81 [i_31])));
                                arr_95 [i_29] [i_29] [i_30] [(short)7] [(short)7] [(unsigned short)15] [i_33] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (arr_90 [i_33] [i_33 - 1] [i_33 + 2] [i_33 - 2] [i_33 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_87 [i_33 + 2] [i_30])))))), ((~(7632960294707959134LL)))));
                                arr_96 [i_33] [(unsigned short)12] [i_31] [(signed char)7] [i_33] [i_31] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)127)) : (((/* implicit */int) (unsigned short)65535))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (int i_34 = 2; i_34 < 13; i_34 += 1) 
                {
                    for (short i_35 = 0; i_35 < 16; i_35 += 1) 
                    {
                        for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
                        {
                            {
                                arr_105 [(unsigned char)10] [(unsigned char)10] = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_94 [i_36] [i_34] [i_34] [i_29] [i_29])) < ((~(68652367872ULL)))))), (((((/* implicit */int) (short)-2088)) ^ (((/* implicit */int) (unsigned char)10))))));
                                arr_106 [i_36] [i_35] [i_30] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (((((((/* implicit */_Bool) (signed char)-80)) && (((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_8)), (arr_101 [(unsigned short)9])))) : (13334868567202500623ULL)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_37 = 0; i_37 < 20; i_37 += 4) 
    {
        for (short i_38 = 0; i_38 < 20; i_38 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_39 = 0; i_39 < 20; i_39 += 4) 
                {
                    for (_Bool i_40 = 1; i_40 < 1; i_40 += 1) 
                    {
                        {
                            arr_116 [i_37] [i_40] [(_Bool)1] [i_40 - 1] [(_Bool)1] [(signed char)2] = var_7;
                            arr_117 [i_40] [i_40 - 1] [i_38] [i_38] [i_38] [i_37] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_109 [i_38] [i_37])))) ? ((+(((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) arr_112 [i_38] [i_38] [(unsigned short)2])) ? (((/* implicit */int) var_10)) : (var_17)))))), (arr_108 [i_40 - 1])));
                            var_32 = ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) & (((/* implicit */int) var_7))))) && (((/* implicit */_Bool) ((arr_111 [i_40 - 1] [i_40 - 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                            arr_118 [i_37] [i_37] [i_37] [i_40] [i_40] [(short)13] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_115 [i_40 - 1] [i_40] [11U] [i_40] [i_40 - 1] [i_40 - 1])) ^ ((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)36))) < (arr_114 [i_37] [i_37] [i_38] [13] [i_40 - 1]))))))));
                            arr_119 [(short)16] [(short)1] [i_39] [i_40] = ((/* implicit */unsigned short) (short)-4096);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_41 = 0; i_41 < 1; i_41 += 1) 
                {
                    for (signed char i_42 = 1; i_42 < 16; i_42 += 2) 
                    {
                        {
                            arr_127 [i_41] [i_42] [i_41] [i_38] [i_41] = ((/* implicit */short) 1413907736);
                            arr_128 [i_37] [i_41] [i_37] [i_37] = ((/* implicit */int) ((((/* implicit */int) ((short) arr_120 [i_42 + 2] [i_41]))) < (((/* implicit */int) min((arr_120 [i_42 + 3] [i_41]), ((short)28))))));
                            var_33 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) (short)4096)))));
                            arr_129 [i_37] [i_37] [i_38] [i_37] [i_41] [i_41] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)0))));
                            arr_130 [i_41] [i_41] [i_38] [i_41] = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)80))))) : (((long long int) var_2)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
