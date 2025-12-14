/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113031
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) var_3);
                    arr_6 [i_2] [i_0] [i_0] [i_2] = ((/* implicit */long long int) max(((_Bool)0), ((_Bool)1)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((_Bool) var_1))), ((((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) var_2)), (134217727)))) : (max((((/* implicit */unsigned long long int) arr_8 [i_2] [i_0] [i_0])), (var_5))))))))));
                                arr_12 [i_4] [i_4] [i_3] [i_2] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((2147483647), (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (~(548682072064ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)-23)))) : (arr_8 [i_2 - 1] [i_3 + 3] [i_2 - 2]))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_3 + 1] [i_4] [i_3 + 2])) ? (((/* implicit */long long int) arr_11 [i_0] [i_1] [i_1] [i_3] [i_1] [i_3])) : (arr_8 [i_3 - 3] [i_2 - 2] [i_1])))));
                                var_17 *= ((/* implicit */signed char) -2147483647);
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_2] [i_0] [i_2 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((int) var_10))) : (min((314932807U), (((/* implicit */unsigned int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) var_9);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 2) 
    {
        var_19 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)118)) << (18ULL)));
        /* LoopSeq 3 */
        for (int i_6 = 2; i_6 < 14; i_6 += 4) /* same iter space */
        {
            var_20 *= ((/* implicit */unsigned short) ((signed char) arr_2 [i_6 + 1] [i_5]));
            var_21 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_5 [i_5] [i_6 + 1] [i_6 - 1] [i_5])) : (((/* implicit */int) (short)24393))));
            var_22 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((6373441430336374984LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            /* LoopNest 2 */
            for (unsigned short i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                for (short i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                        arr_25 [i_8] [i_6 - 2] [i_6] &= ((/* implicit */unsigned short) 1244188867);
                        var_24 |= ((/* implicit */_Bool) arr_8 [i_5] [i_6] [i_7]);
                        arr_26 [i_8] [i_7] [i_6] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32643)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)56))) : (15243863926213430057ULL)));
                    }
                } 
            } 
        }
        for (int i_9 = 2; i_9 < 14; i_9 += 4) /* same iter space */
        {
            arr_29 [i_5] &= ((/* implicit */signed char) arr_27 [i_9 - 2]);
            var_25 = ((/* implicit */short) (+(((/* implicit */int) arr_28 [i_9 + 1] [i_9 - 2] [i_9 + 1]))));
            /* LoopSeq 4 */
            for (unsigned int i_10 = 0; i_10 < 15; i_10 += 3) /* same iter space */
            {
                arr_33 [i_10] [i_10] [i_9] [i_5] = (((_Bool)1) ? (((/* implicit */int) (unsigned short)25474)) : ((-(((/* implicit */int) (short)-2796)))));
                var_26 = ((/* implicit */unsigned int) (_Bool)1);
            }
            for (unsigned int i_11 = 0; i_11 < 15; i_11 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned int i_12 = 3; i_12 < 12; i_12 += 2) /* same iter space */
                {
                    var_27 = ((((/* implicit */_Bool) 4294967295U)) ? (262143U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
                    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2147483647)) ? (((((/* implicit */int) var_12)) | (((/* implicit */int) (unsigned short)32073)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (var_8))))));
                    var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
                    var_30 = ((/* implicit */_Bool) (unsigned short)32073);
                }
                for (unsigned int i_13 = 3; i_13 < 12; i_13 += 2) /* same iter space */
                {
                    var_31 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 340015791U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (7526869347546799602ULL)))));
                    var_32 = ((/* implicit */unsigned long long int) max((var_32), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_13 - 3] [i_13 - 3] [i_9 - 1] [i_5]))) / (((((/* implicit */_Bool) 124576920U)) ? (11035220358618728843ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
                    var_33 = ((/* implicit */_Bool) var_9);
                    var_34 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_2 [i_13 + 1] [i_9 - 1]))));
                }
                /* LoopNest 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (signed char i_15 = 1; i_15 < 14; i_15 += 4) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned short) (short)32767);
                            var_36 |= ((/* implicit */unsigned short) 2147483647);
                            var_37 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 9428854923823778057ULL)) ? (968449917U) : (((/* implicit */unsigned int) var_14))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (short i_17 = 0; i_17 < 15; i_17 += 1) 
                    {
                        {
                            arr_52 [i_5] [i_9] [i_11] [i_11] [i_11] [i_16] [i_17] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) != (var_5)));
                            arr_53 [i_5] [i_9] [i_11] [i_16] [i_5] [i_11] [i_11] = ((/* implicit */unsigned int) var_14);
                        }
                    } 
                } 
                var_38 = ((/* implicit */_Bool) ((unsigned long long int) var_10));
                arr_54 [i_11] [i_11] [i_9] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_11] [i_9 + 1] [i_9 - 1] [i_5] [i_5])) <= (((/* implicit */int) (signed char)-57))));
            }
            for (unsigned int i_18 = 0; i_18 < 15; i_18 += 3) /* same iter space */
            {
                var_39 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)56121)) : (var_1)));
                /* LoopNest 2 */
                for (unsigned int i_19 = 0; i_19 < 15; i_19 += 3) 
                {
                    for (unsigned char i_20 = 0; i_20 < 15; i_20 += 2) 
                    {
                        {
                            arr_62 [i_20] [i_5] [i_5] [i_19] [i_5] [i_5] [i_5] = (-(((/* implicit */int) var_9)));
                            var_40 = ((int) ((((/* implicit */_Bool) (signed char)29)) ? (10676920170175010734ULL) : (((/* implicit */unsigned long long int) var_14))));
                        }
                    } 
                } 
            }
            for (signed char i_21 = 0; i_21 < 15; i_21 += 2) 
            {
                var_41 = ((/* implicit */unsigned int) ((int) (unsigned short)10991));
                arr_65 [i_9 + 1] = ((/* implicit */unsigned char) (-(var_10)));
            }
            var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) (+((((_Bool)1) ? (((/* implicit */int) (signed char)-65)) : (((/* implicit */int) var_8)))))))));
            /* LoopSeq 1 */
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                var_43 = ((/* implicit */signed char) (+(var_13)));
                var_44 = ((/* implicit */unsigned short) ((var_8) ? (((((/* implicit */_Bool) 970245522U)) ? (((/* implicit */int) (unsigned short)33448)) : (((/* implicit */int) arr_43 [i_5])))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)19)) : (((/* implicit */int) (short)32748))))));
            }
        }
        for (signed char i_23 = 0; i_23 < 15; i_23 += 1) 
        {
            arr_72 [i_23] = ((/* implicit */short) (signed char)-42);
            var_45 = ((/* implicit */unsigned short) var_3);
            var_46 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(-2147483630)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) : (((unsigned long long int) (unsigned short)64709))));
        }
        var_47 = ((/* implicit */_Bool) var_2);
        var_48 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (((((/* implicit */_Bool) arr_59 [i_5] [i_5] [i_5])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32073)))))));
    }
}
