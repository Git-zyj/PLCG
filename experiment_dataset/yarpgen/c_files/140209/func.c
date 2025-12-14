/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140209
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1])))))) ? (((/* implicit */int) ((unsigned short) arr_2 [i_1] [i_0]))) : (((/* implicit */int) arr_2 [i_0] [i_1]))));
                arr_8 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((arr_3 [i_1] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) < (var_10))))))) % (((unsigned long long int) (unsigned char)128))));
                arr_9 [i_1] [i_1] = (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))));
                var_18 -= ((/* implicit */long long int) (unsigned char)0);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_2 = 2; i_2 < 16; i_2 += 3) 
    {
        var_19 ^= ((/* implicit */short) var_2);
        var_20 = ((/* implicit */short) ((unsigned char) var_6));
        var_21 *= ((/* implicit */unsigned char) (-(((/* implicit */int) var_12))));
        var_22 = ((/* implicit */_Bool) ((unsigned int) arr_4 [2ULL] [i_2]));
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) min((((long long int) (-(((/* implicit */int) arr_2 [i_2] [i_2]))))), (((/* implicit */long long int) (-(((((/* implicit */int) (unsigned char)127)) + (((/* implicit */int) arr_11 [i_2] [i_2]))))))))))));
    }
    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            arr_17 [i_3] [i_3] [i_4] = ((/* implicit */unsigned int) min((-6232142732847074519LL), (((/* implicit */long long int) ((((/* implicit */_Bool) max((1338448683261850909ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL))))) ? (((/* implicit */int) arr_15 [i_3 + 3] [i_4])) : (-490812047))))));
            var_24 = ((long long int) max((arr_13 [i_3] [i_3 + 1]), (arr_13 [i_3] [i_3 + 2])));
        }
        for (unsigned char i_5 = 1; i_5 < 19; i_5 += 1) 
        {
            var_25 = ((/* implicit */_Bool) max((max((-833772762), (((((/* implicit */_Bool) 5499501514469288318LL)) ? (((/* implicit */int) arr_20 [i_5] [i_3])) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) var_12))));
            var_26 ^= ((/* implicit */_Bool) ((long long int) var_5));
            arr_21 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (unsigned short)23504)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42032))) : (-4909771801676392512LL))));
            var_27 ^= ((/* implicit */unsigned int) var_11);
        }
        arr_22 [i_3] = ((/* implicit */signed char) arr_2 [i_3 + 4] [i_3 + 2]);
        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) var_10))));
        arr_23 [i_3] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : ((-9223372036854775807LL - 1LL))))));
        /* LoopSeq 3 */
        for (signed char i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_7 = 0; i_7 < 20; i_7 += 3) 
            {
                var_29 = ((/* implicit */unsigned char) max((((unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_6])) ? (((/* implicit */int) arr_19 [i_3] [i_6] [i_6])) : (((/* implicit */int) var_12))))), (((/* implicit */unsigned long long int) var_6))));
                var_30 ^= ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) min((1266548222849569827LL), (((/* implicit */long long int) (signed char)-119)))))) << (((min((min((((/* implicit */unsigned int) (signed char)-16)), (984846288U))), (((/* implicit */unsigned int) arr_12 [i_3])))) - (58U)))));
                arr_28 [i_3] [i_6] [i_6] = ((/* implicit */_Bool) ((short) -8579472815164709006LL));
            }
            /* LoopSeq 1 */
            for (short i_8 = 2; i_8 < 19; i_8 += 3) 
            {
                arr_32 [i_3] [i_6] [i_8] = ((/* implicit */unsigned char) arr_30 [i_6] [i_8 - 2] [i_8] [i_3]);
                var_31 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_29 [i_3] [i_3] [i_6])))))));
            }
            /* LoopSeq 1 */
            for (unsigned int i_9 = 2; i_9 < 18; i_9 += 4) 
            {
                arr_36 [i_6] [i_6] = ((/* implicit */short) max((((/* implicit */unsigned int) ((unsigned short) (~(((/* implicit */int) var_12)))))), (min((min((arr_33 [i_3] [i_3] [i_3]), (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_15)))))))));
                arr_37 [i_3] [i_3] [i_6] [i_3] = ((/* implicit */unsigned char) (_Bool)0);
            }
            arr_38 [i_6] [i_6] = ((/* implicit */unsigned int) var_10);
            var_32 = ((/* implicit */unsigned char) 1910147361);
        }
        for (long long int i_10 = 0; i_10 < 20; i_10 += 2) 
        {
            arr_41 [i_3] [i_3] [i_10] = ((/* implicit */_Bool) ((((arr_3 [i_3 + 4] [i_3 + 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) max((var_9), (((/* implicit */signed char) arr_1 [i_3])))))))) ? ((+(((/* implicit */int) arr_16 [i_3 + 3])))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_31 [i_3 - 1])) : (((/* implicit */int) (unsigned char)102))))));
            /* LoopNest 2 */
            for (long long int i_11 = 0; i_11 < 20; i_11 += 3) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_13 = 2; i_13 < 19; i_13 += 1) 
                        {
                            arr_49 [i_13] [i_12] = (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)23503))))));
                            arr_50 [i_3] [i_12] [i_12] = ((/* implicit */short) max((-8739123185274705587LL), (((/* implicit */long long int) ((unsigned char) (unsigned char)253)))));
                            arr_51 [i_3] [i_10] [i_11] [i_12] [i_13] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1687168855)))))) >= ((-(((unsigned long long int) arr_48 [i_3] [i_10] [i_12] [i_12]))))));
                            var_33 = min((((/* implicit */short) ((unsigned char) (unsigned char)251))), (arr_29 [i_3] [i_3] [i_12]));
                        }
                        for (unsigned int i_14 = 2; i_14 < 19; i_14 += 3) 
                        {
                            arr_54 [i_12] [i_12] [i_11] [i_10] [i_12] = ((/* implicit */_Bool) arr_18 [i_3]);
                            var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_45 [i_3] [i_3] [i_3] [i_12]))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((arr_45 [i_3 + 3] [i_10] [i_11] [i_12]) ? (((/* implicit */int) arr_45 [i_3] [i_3 + 2] [i_11] [i_12])) : (((/* implicit */int) var_4))))));
                            arr_55 [i_12] = ((/* implicit */long long int) ((int) min((arr_43 [i_14 - 1] [i_11] [i_3 + 1]), (arr_43 [i_14 - 2] [i_3 + 4] [i_3 + 4]))));
                        }
                        for (int i_15 = 0; i_15 < 20; i_15 += 1) 
                        {
                            var_35 -= ((/* implicit */_Bool) arr_12 [i_3 + 4]);
                            arr_60 [i_15] [i_12] [i_12] [i_3] = ((/* implicit */_Bool) max((((unsigned long long int) (unsigned char)255)), (((/* implicit */unsigned long long int) ((short) ((signed char) (short)-4156))))));
                        }
                        for (short i_16 = 0; i_16 < 20; i_16 += 3) 
                        {
                            var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 140737488355324ULL))))))))));
                            arr_63 [i_3] [i_12] = ((/* implicit */unsigned short) -5783080142515655221LL);
                            arr_64 [i_11] [i_11] [i_11] [i_12] [i_12] = ((/* implicit */_Bool) ((unsigned char) min((arr_48 [i_3] [i_3] [i_3] [i_12]), (((/* implicit */unsigned int) var_7)))));
                        }
                        /* LoopSeq 3 */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            arr_68 [i_10] [i_10] [i_11] [i_12] [i_12] = ((/* implicit */signed char) (((+(-7034631967715438487LL))) + ((+(arr_0 [i_3])))));
                            arr_69 [i_12] [i_10] [i_11] [i_10] [i_12] = ((/* implicit */unsigned char) min((arr_34 [i_3 + 4]), (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                            arr_70 [i_3] [i_3] [i_10] [i_12] [i_17] = ((((/* implicit */_Bool) min((9223372036854775792LL), (((/* implicit */long long int) arr_24 [i_12]))))) ? (min((((/* implicit */long long int) arr_39 [i_3 - 1])), (202007276506189375LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                            var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) (~(-1892171116))))));
                        }
                        for (short i_18 = 0; i_18 < 20; i_18 += 3) 
                        {
                            arr_74 [i_3] [i_10] [i_3] [i_12] [i_12] = ((/* implicit */signed char) -1892171116);
                            var_38 = ((/* implicit */unsigned int) var_4);
                            var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) (signed char)56))));
                        }
                        for (long long int i_19 = 3; i_19 < 17; i_19 += 2) 
                        {
                            arr_78 [i_19] [i_12] [i_12] [i_11] [i_11] [i_12] [i_3] = (_Bool)1;
                            arr_79 [i_19] [i_12] [i_12] [i_11] [i_12] [i_3] = ((/* implicit */unsigned char) -9223372036854775807LL);
                            var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) (~(((/* implicit */int) min((arr_45 [i_3] [i_3] [i_3 + 1] [i_10]), ((_Bool)0)))))))));
                        }
                    }
                } 
            } 
            var_41 = 9970222225281172179ULL;
            /* LoopNest 3 */
            for (int i_20 = 1; i_20 < 18; i_20 += 3) 
            {
                for (unsigned short i_21 = 1; i_21 < 18; i_21 += 1) 
                {
                    for (long long int i_22 = 1; i_22 < 16; i_22 += 3) 
                    {
                        {
                            var_42 = ((/* implicit */int) 0LL);
                            arr_88 [i_20] [i_21] [i_20] [i_10] [i_20] = ((/* implicit */unsigned int) (unsigned char)193);
                            arr_89 [i_20] [i_21] [i_21] [i_20] [i_21] [i_21] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) -9223372036854775807LL)))));
                            var_43 -= ((/* implicit */_Bool) min((min((((/* implicit */int) (unsigned char)12)), ((-(((/* implicit */int) (unsigned short)63249)))))), ((~(((/* implicit */int) arr_40 [i_3 + 3] [i_21 - 1]))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_23 = 0; i_23 < 20; i_23 += 2) 
        {
            var_44 = ((/* implicit */int) arr_20 [i_3] [i_23]);
            arr_93 [i_23] [i_23] [i_23] = ((/* implicit */unsigned long long int) ((unsigned short) (~(399095968U))));
        }
    }
    var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) min((var_8), (var_17))))) ? (max((((/* implicit */long long int) var_7)), (min((var_10), (((/* implicit */long long int) var_13)))))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_5)))))))));
}
