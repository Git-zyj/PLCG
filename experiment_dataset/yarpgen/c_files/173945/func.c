/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173945
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) var_6))));
        var_14 = ((/* implicit */unsigned long long int) ((unsigned int) max((((1535186597U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56282))))), (((/* implicit */unsigned int) ((_Bool) 2143656861))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(arr_0 [i_0] [i_0])))) + (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)187))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56302))) : (max((((/* implicit */unsigned long long int) 4874899706876098099LL)), (var_6)))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    {
                        arr_9 [i_3] [i_1] = ((/* implicit */unsigned int) (~(min(((-(((/* implicit */int) (unsigned short)11985)))), (((/* implicit */int) var_10))))));
                        var_15 = ((/* implicit */unsigned short) max((3608550550688452715ULL), (((/* implicit */unsigned long long int) 1255399168))));
                        var_16 *= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) var_10)) * (((/* implicit */int) min(((unsigned short)56269), (((/* implicit */unsigned short) (unsigned char)194))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                for (int i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    {
                        arr_16 [i_0] [i_0] [i_1] [i_1] [i_4] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_5])))))));
                        var_17 -= ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((short) -3162566090292084750LL)))) <= (max((var_5), (((/* implicit */unsigned int) (short)-32766)))))) ? (min(((-(var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_5] [i_4] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7))) : (3616790398U)))))) : (((/* implicit */unsigned long long int) min((((unsigned int) arr_6 [i_0] [i_1] [i_5])), (((unsigned int) var_2)))))));
                        arr_17 [0U] [i_1] [i_1] [i_1] [i_1] [i_5] = max((((/* implicit */unsigned short) (short)-1690)), ((unsigned short)9271));
                    }
                } 
            } 
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_6 = 3; i_6 < 16; i_6 += 3) 
            {
                var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned char)3)))));
                /* LoopNest 2 */
                for (short i_7 = 1; i_7 < 16; i_7 += 1) 
                {
                    for (unsigned short i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) var_11);
                            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (arr_23 [(short)2] [i_0] [i_1] [(unsigned short)3] [i_6 - 2] [5LL] [i_8]) : (var_12))))));
                            var_21 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)9279))));
                            arr_25 [i_0] [i_0] [i_6 - 2] [i_7 - 1] [i_1] = (-(2373980302664936050ULL));
                        }
                    } 
                } 
            }
            for (unsigned short i_9 = 0; i_9 < 17; i_9 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 17; i_10 += 3) 
                {
                    for (unsigned char i_11 = 0; i_11 < 17; i_11 += 2) 
                    {
                        {
                            var_22 = ((unsigned int) (-(arr_35 [i_0] [i_11] [i_9])));
                            arr_37 [i_11] [i_1] [i_10] [i_9] [i_1] [i_0] = ((/* implicit */_Bool) ((unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)9260)) : (((/* implicit */int) var_8))))), (((-6607204996077088902LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56282))))))));
                        }
                    } 
                } 
                arr_38 [(unsigned char)13] [i_1] [i_9] = ((/* implicit */long long int) (unsigned short)9284);
            }
            for (int i_12 = 0; i_12 < 17; i_12 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_13 = 2; i_13 < 14; i_13 += 3) 
                {
                    for (unsigned int i_14 = 0; i_14 < 17; i_14 += 3) 
                    {
                        {
                            var_23 ^= ((/* implicit */unsigned char) ((long long int) (-(-235348931532842114LL))));
                            var_24 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) & (((/* implicit */int) (unsigned char)155))))) ? (((((/* implicit */int) ((short) (unsigned char)63))) + (((/* implicit */int) ((short) var_12))))) : (((int) arr_12 [i_12] [i_1] [i_1] [i_13]))));
                            var_25 = ((/* implicit */long long int) arr_35 [i_0] [i_0] [i_13 + 2]);
                        }
                    } 
                } 
                arr_49 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (-((-(((((/* implicit */int) (unsigned short)9279)) ^ (53887971)))))));
            }
        }
        arr_50 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((max((arr_10 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) -6607204996077088902LL)))) == (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)101))))))))));
    }
    var_26 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((-6801333099111234941LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44442)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)9260)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-13143))) : (var_2)))) : (((long long int) var_10))))) % (min((((/* implicit */unsigned long long int) min(((unsigned char)126), (((/* implicit */unsigned char) (signed char)92))))), (var_6)))));
    /* LoopNest 3 */
    for (signed char i_15 = 0; i_15 < 11; i_15 += 2) 
    {
        for (long long int i_16 = 2; i_16 < 10; i_16 += 2) 
        {
            for (unsigned char i_17 = 2; i_17 < 7; i_17 += 1) 
            {
                {
                    var_27 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3040266073U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_6)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)9245)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-79)), (var_0))))))), (((unsigned long long int) max((((/* implicit */unsigned long long int) 510863833634638443LL)), (var_12))))));
                    arr_59 [i_16] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_16 - 2] [i_16 + 1] [i_16])) ? (var_7) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) 10U)) != (3935285988690415994LL))) ? (arr_31 [i_16]) : (((/* implicit */int) ((53887976) > (((/* implicit */int) (unsigned char)66)))))))) : (((((/* implicit */_Bool) ((unsigned char) arr_48 [i_17 + 2] [i_15] [i_15] [i_15]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)174))) : (((((/* implicit */_Bool) (signed char)-18)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21093))))))));
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 11; i_18 += 2) 
                    {
                        for (unsigned char i_19 = 0; i_19 < 11; i_19 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((max((arr_34 [i_15] [9ULL] [4] [i_17] [i_18] [i_17] [i_17]), (arr_34 [i_17] [i_18] [i_15] [i_18] [i_15] [i_17 - 2] [i_15]))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)179))))) ? (((/* implicit */int) ((unsigned char) var_1))) : ((~(((/* implicit */int) (unsigned short)56248))))))))))));
                                arr_67 [i_19] [i_17] [i_15] [i_17] [5] [i_17] [i_15] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_15] [i_16 + 1] [i_17] [i_18])) ? (((/* implicit */int) var_0)) : (811141360)))) : (min((((/* implicit */unsigned long long int) var_10)), (17120451695897353383ULL))))), (((((/* implicit */_Bool) arr_36 [i_15] [14] [i_17 + 1] [i_15] [i_17])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_17] [i_17] [i_17]))) : (9502303558667720160ULL)))));
                                arr_68 [i_15] [i_17] [i_17] [i_19] = arr_46 [i_17] [(unsigned char)15];
                                arr_69 [i_17] [i_16 - 2] [i_17] [i_18] [i_19] = ((/* implicit */signed char) (-(((unsigned long long int) var_4))));
                                var_29 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (1U)))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_44 [i_15] [i_15] [i_17])) ? (var_4) : (((/* implicit */int) var_10))))) & (1906034104U)))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-76))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-13)) || (var_11))))) : ((-(17783927580146686826ULL))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)164)))))));
                }
            } 
        } 
    } 
}
