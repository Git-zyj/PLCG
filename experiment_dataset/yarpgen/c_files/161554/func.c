/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161554
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
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) max((((/* implicit */short) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_9))))), (var_1))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_14 = ((/* implicit */short) var_6);
            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) * (((/* implicit */int) var_11))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))));
            arr_6 [i_0] [i_0] = ((/* implicit */short) ((31LL) - (((/* implicit */long long int) ((/* implicit */int) var_9)))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            var_16 -= ((/* implicit */short) var_12);
            /* LoopSeq 3 */
            for (unsigned char i_3 = 1; i_3 < 17; i_3 += 1) /* same iter space */
            {
                var_17 &= ((/* implicit */short) var_12);
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((unsigned int) var_11)))));
                            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)20503)) ? (((/* implicit */int) ((signed char) -4816261608036286472LL))) : (var_5))))));
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (-(var_6))))));
                        }
                    } 
                } 
                arr_18 [i_0] [(unsigned short)12] [i_3] = ((/* implicit */_Bool) ((var_3) / (var_6)));
            }
            for (unsigned char i_6 = 1; i_6 < 17; i_6 += 1) /* same iter space */
            {
                arr_21 [i_2] [i_0] = ((/* implicit */long long int) 1706806461);
                var_21 = ((/* implicit */short) max((var_21), (((short) var_10))));
            }
            for (unsigned char i_7 = 1; i_7 < 17; i_7 += 1) /* same iter space */
            {
                /* LoopSeq 4 */
                for (unsigned short i_8 = 2; i_8 < 19; i_8 += 1) 
                {
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((unsigned int) ((signed char) 4ULL))))));
                    var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -4556408786827956039LL)) && (((/* implicit */_Bool) 1668371707U))));
                    arr_27 [i_0] [i_0] [15ULL] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 2626595573U)) ? (((/* implicit */int) (unsigned short)55828)) : (1706806463)));
                }
                for (unsigned short i_9 = 0; i_9 < 21; i_9 += 3) 
                {
                    var_24 = ((/* implicit */long long int) ((unsigned long long int) -173994363893874740LL));
                    var_25 = ((/* implicit */unsigned char) ((short) var_1));
                    var_26 = ((/* implicit */signed char) ((short) var_4));
                }
                for (long long int i_10 = 4; i_10 < 19; i_10 += 3) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (signed char)53))) ? (((unsigned int) -173994363893874741LL)) : ((+(1668371726U))))))));
                    /* LoopSeq 1 */
                    for (short i_11 = 0; i_11 < 21; i_11 += 3) 
                    {
                        var_28 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) 28)) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) (unsigned short)34095)))));
                        var_29 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) != (4556408786827956039LL)))) << (((var_4) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) var_0))))));
                        var_30 += ((/* implicit */unsigned int) ((unsigned long long int) var_3));
                        arr_36 [i_0] [i_2] [i_7] [i_0] = ((/* implicit */short) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_12))));
                        var_31 = ((/* implicit */short) ((long long int) var_5));
                    }
                    var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) -4816261608036286445LL))));
                }
                for (long long int i_12 = 4; i_12 < 19; i_12 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_13 = 1; i_13 < 19; i_13 += 3) 
                    {
                        arr_44 [i_0] [(unsigned char)18] [i_2] [13ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)1565)) ? (((/* implicit */int) var_9)) : (63)));
                        var_33 = ((/* implicit */signed char) ((unsigned short) ((unsigned short) var_5)));
                    }
                    var_34 ^= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) / (var_3))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-102)) > (((/* implicit */int) var_0))))))));
                }
                var_35 = ((/* implicit */_Bool) min((var_35), (((((/* implicit */long long int) ((/* implicit */int) var_7))) != (((((/* implicit */_Bool) var_11)) ? (-4556408786827956033LL) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))));
                var_36 = ((/* implicit */long long int) var_12);
            }
            arr_45 [i_0] [i_2] = ((/* implicit */long long int) var_12);
            /* LoopNest 2 */
            for (long long int i_14 = 3; i_14 < 20; i_14 += 1) 
            {
                for (signed char i_15 = 2; i_15 < 20; i_15 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_16 = 0; i_16 < 21; i_16 += 1) 
                        {
                            arr_55 [i_0] [i_2] [i_14] [i_15] [i_16] [i_0] = ((/* implicit */short) ((var_6) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                            arr_56 [i_16] [i_15] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_2))))) - (((/* implicit */int) var_12))));
                        }
                        for (short i_17 = 0; i_17 < 21; i_17 += 2) 
                        {
                            var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) var_1))));
                            var_38 = ((/* implicit */short) ((_Bool) 1668371707U));
                        }
                        var_39 = ((/* implicit */short) ((var_4) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))));
                        var_40 = ((/* implicit */unsigned int) ((int) (_Bool)1));
                        /* LoopSeq 1 */
                        for (unsigned char i_18 = 0; i_18 < 21; i_18 += 1) 
                        {
                            var_41 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))));
                            var_42 &= ((long long int) (unsigned char)76);
                            var_43 = ((/* implicit */short) ((((/* implicit */int) var_2)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                            var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) ((short) var_7)))));
                        }
                    }
                } 
            } 
        }
        arr_61 [i_0] [i_0] = var_3;
        /* LoopNest 3 */
        for (unsigned char i_19 = 0; i_19 < 21; i_19 += 3) 
        {
            for (short i_20 = 0; i_20 < 21; i_20 += 2) 
            {
                for (unsigned short i_21 = 1; i_21 < 19; i_21 += 3) 
                {
                    {
                        var_45 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (var_5));
                        var_46 = ((/* implicit */signed char) max((var_46), (((/* implicit */signed char) ((unsigned char) var_2)))));
                        /* LoopSeq 3 */
                        for (unsigned int i_22 = 0; i_22 < 21; i_22 += 1) /* same iter space */
                        {
                            var_47 = ((/* implicit */short) var_7);
                            var_48 = ((/* implicit */unsigned short) 2304717109306851328LL);
                            var_49 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32761))) / (1668371723U)));
                            arr_72 [i_19] [i_20] [i_20] &= ((short) (short)511);
                            arr_73 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) / (3459575120U)));
                        }
                        for (unsigned int i_23 = 0; i_23 < 21; i_23 += 1) /* same iter space */
                        {
                            var_50 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_12))));
                            arr_76 [i_0] [i_0] = ((/* implicit */short) ((signed char) var_11));
                            var_51 = ((/* implicit */short) min((var_51), (((/* implicit */short) (!((_Bool)1))))));
                            var_52 = ((/* implicit */signed char) ((((/* implicit */int) (short)-12410)) <= (((/* implicit */int) var_0))));
                            var_53 = ((/* implicit */unsigned short) min((var_53), (((/* implicit */unsigned short) ((unsigned char) (unsigned short)21331)))));
                        }
                        for (unsigned int i_24 = 0; i_24 < 21; i_24 += 1) /* same iter space */
                        {
                            var_54 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)26)) : (((/* implicit */int) (_Bool)1)))))));
                            var_55 = ((/* implicit */signed char) ((int) var_12));
                            arr_79 [8U] [8U] [i_0] [i_0] [(unsigned short)12] = ((/* implicit */unsigned long long int) -4556408786827956015LL);
                        }
                        var_56 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
                    }
                } 
            } 
        } 
        var_57 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1706806469)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11))));
        /* LoopNest 3 */
        for (unsigned long long int i_25 = 3; i_25 < 18; i_25 += 3) 
        {
            for (signed char i_26 = 0; i_26 < 21; i_26 += 1) 
            {
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    {
                        var_58 = ((/* implicit */unsigned short) ((short) var_6));
                        var_59 = ((((/* implicit */int) ((4556408786827956056LL) >= (((/* implicit */long long int) 3177063903U))))) > (((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_8))))));
                        var_60 = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) ((unsigned short) (short)-26989)))));
                        var_61 = 2722995892243633750LL;
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_28 = 0; i_28 < 21; i_28 += 3) /* same iter space */
    {
        var_62 = ((/* implicit */unsigned int) min((((4816261608036286446LL) << (((((/* implicit */int) ((short) var_7))) - (1))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_12)))))));
        var_63 = ((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (var_12)))) & (((/* implicit */int) ((signed char) ((((/* implicit */int) var_0)) == (((/* implicit */int) (unsigned short)15302))))))));
        /* LoopNest 2 */
        for (unsigned short i_29 = 1; i_29 < 18; i_29 += 3) 
        {
            for (short i_30 = 0; i_30 < 21; i_30 += 2) 
            {
                {
                    var_64 = ((/* implicit */unsigned int) min((var_64), (((/* implicit */unsigned int) ((unsigned long long int) (+(var_3)))))));
                    /* LoopNest 2 */
                    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                    {
                        for (unsigned short i_32 = 2; i_32 < 18; i_32 += 3) 
                        {
                            {
                                arr_104 [i_32] [i_30] [i_30] [i_29] [i_28] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (5263242758491109040LL))));
                                var_65 = ((/* implicit */unsigned short) min((var_65), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)34)) : (((/* implicit */int) var_12)))) >= ((~(((/* implicit */int) (short)-5577)))))))));
                                arr_105 [i_29 + 2] [i_29] [i_30] [i_31] [15LL] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) var_9)))))), (max((((var_7) ? (2722995892243633742LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((/* implicit */long long int) var_9))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned long long int i_33 = 0; i_33 < 10; i_33 += 2) 
    {
        for (unsigned short i_34 = 0; i_34 < 10; i_34 += 1) 
        {
            for (long long int i_35 = 0; i_35 < 10; i_35 += 3) 
            {
                {
                    var_66 = ((/* implicit */unsigned int) max((var_66), (((/* implicit */unsigned int) max((((/* implicit */long long int) (unsigned char)175)), (9223372036854775807LL))))));
                    var_67 = ((/* implicit */unsigned char) 1980354889);
                }
            } 
        } 
    } 
}
