/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158303
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
    var_20 = var_18;
    var_21 = ((/* implicit */short) var_2);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_22 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) max((((/* implicit */int) var_8)), (742193940)))) ? (((/* implicit */unsigned long long int) (~(var_10)))) : (((((/* implicit */_Bool) var_7)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))))));
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) min((-742193946), ((-(((/* implicit */int) (unsigned char)99)))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 3; i_1 < 23; i_1 += 3) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */short) ((_Bool) 742193949));
        arr_9 [i_1] = ((long long int) var_11);
    }
    for (long long int i_2 = 1; i_2 < 14; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            var_24 = -742193913;
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((var_7), ((unsigned char)128))))));
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) (short)-15960)))))), ((~(var_9))))))));
                            var_27 = max((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))), (-5228905543383867010LL));
                        }
                    } 
                } 
                var_28 += ((/* implicit */unsigned char) var_2);
                arr_20 [i_2] [i_2] = ((/* implicit */unsigned int) var_4);
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    for (unsigned char i_8 = 2; i_8 < 13; i_8 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */int) (+(min(((+(5228905543383867019LL))), (var_12)))));
                            arr_28 [i_2] [i_2] [i_2] [i_2] [i_2] [15] [i_2] = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) (_Bool)1)), ((+(5228905543383867041LL))))), (max((((/* implicit */long long int) var_18)), (var_4)))));
                            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (+(((/* implicit */int) (short)-15966)))))));
                        }
                    } 
                } 
            }
            /* LoopSeq 2 */
            for (long long int i_9 = 4; i_9 < 13; i_9 += 2) 
            {
                /* LoopSeq 4 */
                for (int i_10 = 0; i_10 < 16; i_10 += 3) /* same iter space */
                {
                    arr_33 [i_2] [i_2] [i_9] [i_9] [i_2] [i_2] = ((/* implicit */unsigned char) var_8);
                    var_31 &= ((/* implicit */unsigned long long int) var_17);
                    var_32 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (+(742193939)))), (var_5)))) : (((((/* implicit */_Bool) var_17)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                }
                for (int i_11 = 0; i_11 < 16; i_11 += 3) /* same iter space */
                {
                    var_33 = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_7)) : (1422625593)))), (((long long int) (unsigned char)8)))), (((/* implicit */long long int) var_16))));
                    var_34 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)8)))))));
                }
                for (int i_12 = 0; i_12 < 16; i_12 += 3) /* same iter space */
                {
                    var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) (~((~(-8844771451563005009LL))))))));
                    var_36 = ((/* implicit */long long int) var_8);
                }
                /* vectorizable */
                for (unsigned long long int i_13 = 1; i_13 < 14; i_13 += 1) 
                {
                    var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) 1574030994))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))) : (var_5)));
                    var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (unsigned char)85))))))));
                }
                var_39 ^= ((/* implicit */unsigned int) var_6);
            }
            for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 1) 
            {
                var_40 *= ((/* implicit */unsigned long long int) var_19);
                arr_44 [i_2] [i_3] [i_14] = ((/* implicit */int) max((((((/* implicit */_Bool) (+(5228905543383867012LL)))) ? (((((/* implicit */_Bool) var_10)) ? (var_14) : (((/* implicit */unsigned long long int) 196034469)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)164)) ? (6536182563451987116LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128)))))))), (((/* implicit */unsigned long long int) (short)15962))));
                arr_45 [i_2] [i_3] [i_14] [i_2] = ((/* implicit */int) max((-5228905543383867015LL), (((/* implicit */long long int) (_Bool)1))));
            }
            var_41 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max(((+(var_15))), (((/* implicit */unsigned long long int) max(((unsigned char)86), (((/* implicit */unsigned char) (_Bool)1))))))))));
        }
        var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)189)) ? (1126863620566640083ULL) : (8678381461157381198ULL)));
        arr_46 [i_2] = min((((/* implicit */unsigned long long int) (+(274877905920LL)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_12)) : (9592283972241134962ULL))));
        /* LoopSeq 3 */
        for (unsigned short i_15 = 0; i_15 < 16; i_15 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned int i_16 = 0; i_16 < 16; i_16 += 1) 
            {
                for (int i_17 = 0; i_17 < 16; i_17 += 1) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            arr_58 [i_2] [i_15] [i_2] [i_17] [i_18] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) 5269422175277776690LL)) ? (((/* implicit */int) var_6)) : (-1255153869))));
                            var_43 = ((/* implicit */long long int) max((var_43), (((long long int) ((unsigned long long int) (unsigned char)143)))));
                        }
                    } 
                } 
            } 
            var_44 = ((/* implicit */_Bool) ((int) max((((/* implicit */unsigned long long int) -5829446846152982735LL)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))) : (var_9))))));
            var_45 &= 6186249432135767463LL;
        }
        for (unsigned short i_19 = 0; i_19 < 16; i_19 += 2) 
        {
            arr_63 [i_19] |= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_7)), (5829446846152982710LL)));
            arr_64 [i_19] [i_19] [i_2] = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)8)), (-742193965)))), (((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))), (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 144115188075847680LL)) : (var_9))), (((/* implicit */unsigned long long int) var_7))))));
        }
        /* vectorizable */
        for (unsigned long long int i_20 = 0; i_20 < 16; i_20 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_21 = 2; i_21 < 15; i_21 += 2) 
            {
                for (unsigned short i_22 = 0; i_22 < 16; i_22 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_23 = 0; i_23 < 16; i_23 += 2) /* same iter space */
                        {
                            var_46 = ((/* implicit */int) max((var_46), (((/* implicit */int) (-(1LL))))));
                            var_47 ^= ((/* implicit */unsigned char) 4ULL);
                        }
                        for (long long int i_24 = 0; i_24 < 16; i_24 += 2) /* same iter space */
                        {
                            var_48 ^= ((/* implicit */unsigned long long int) var_4);
                            var_49 = ((/* implicit */int) min((var_49), (((/* implicit */int) ((((/* implicit */_Bool) var_18)) ? (5269422175277776678LL) : (var_12))))));
                            arr_78 [i_24] [i_20] [i_2] [i_22] [4] = ((/* implicit */_Bool) -667516982);
                        }
                        for (long long int i_25 = 0; i_25 < 16; i_25 += 2) /* same iter space */
                        {
                            arr_81 [i_21] [6ULL] [i_21 - 1] [i_21] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
                            var_50 = ((/* implicit */long long int) var_2);
                            arr_82 [i_2] = ((/* implicit */int) (-(var_12)));
                            var_51 = ((/* implicit */unsigned short) max((var_51), (((/* implicit */unsigned short) ((long long int) 667516982)))));
                        }
                        var_52 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_7))));
                    }
                } 
            } 
            var_53 = ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) var_3)));
            var_54 = ((/* implicit */int) (~(var_15)));
            var_55 *= ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551613ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)117))) : (31ULL)));
            arr_83 [2] [i_2] = ((/* implicit */unsigned char) (((_Bool)1) ? (40ULL) : (((/* implicit */unsigned long long int) -1606496254))));
        }
    }
    var_56 += ((/* implicit */int) var_11);
}
