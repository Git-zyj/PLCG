/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116101
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
    var_11 = (signed char)80;
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) var_5))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_8 [i_0] [i_0] = ((/* implicit */long long int) var_10);
                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) var_6))));
            }
            /* LoopNest 3 */
            for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (+(max((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) (signed char)-100)))))))));
                            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) min(((unsigned short)65535), (((/* implicit */unsigned short) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (min((((/* implicit */long long int) 4294967295U)), (43820359272926597LL)))))))));
                            arr_17 [i_0] [i_1] [i_1] [i_3] [i_4] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6661869843241037869LL)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)92)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)53788))))) : (max((((/* implicit */unsigned long long int) 3U)), (2246885624871298136ULL)))))) ? (max((((/* implicit */long long int) var_4)), (((((/* implicit */long long int) ((/* implicit */int) (signed char)60))) | (arr_14 [i_0] [i_1] [i_3] [i_4]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */int) var_10)) : ((-(((/* implicit */int) arr_7 [i_0] [i_1] [i_4]))))))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            var_16 *= ((/* implicit */unsigned char) (signed char)-100);
            arr_20 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_6 [i_6])), (arr_10 [i_0] [i_6] [i_6])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_6]))) : (arr_10 [i_0] [i_6] [i_6])));
            /* LoopSeq 1 */
            for (signed char i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (long long int i_9 = 0; i_9 < 24; i_9 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) arr_19 [i_6]))));
                            arr_28 [i_0] [i_8] [i_7] [i_6] [i_0] = ((/* implicit */signed char) ((int) 8448069650383466732LL));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 24; i_10 += 2) 
                {
                    for (int i_11 = 1; i_11 < 20; i_11 += 4) 
                    {
                        {
                            arr_35 [i_10] [i_11 + 2] [i_10] [i_7] [i_6] [i_0] [i_10] &= ((((/* implicit */_Bool) ((signed char) ((signed char) var_4)))) ? (((((/* implicit */_Bool) (signed char)-1)) ? (arr_11 [i_7] [i_11 + 3] [i_11 + 4] [i_11 + 2] [i_11 + 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_27 [i_0] [i_10] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) (_Bool)1)))))))) : (((((/* implicit */_Bool) arr_11 [i_11 - 1] [i_11 + 2] [i_11 - 1] [i_11 - 1] [i_11 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)32767), (((/* implicit */short) var_3)))))) : (arr_16 [i_10] [i_11 + 4] [i_11 + 4] [i_11 + 1] [i_11 + 3]))));
                            arr_36 [i_11 + 4] [i_10] [i_0] [i_7] [i_0] [i_6] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 6ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_0)), (-8448069650383466732LL)))) : (arr_16 [i_7] [i_11 + 2] [i_11 + 1] [i_11 + 3] [i_11 + 1]))), ((+((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_2)))))));
                        }
                    } 
                } 
            }
        }
        for (unsigned long long int i_12 = 1; i_12 < 20; i_12 += 3) 
        {
            arr_41 [i_0] [i_0] [i_12 + 3] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((4910352772876196639LL) == (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))))))) % (576460752303423486LL)));
            var_18 = ((/* implicit */long long int) max(((signed char)127), ((signed char)(-127 - 1))));
            arr_42 [i_0] [i_0] [i_12 + 2] = ((/* implicit */unsigned short) (+(min((7708952700118195064LL), (((/* implicit */long long int) (unsigned short)65510))))));
            arr_43 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4801)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) arr_6 [i_12 - 1]))))) || (((/* implicit */_Bool) var_1)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) (_Bool)1))))) ? (max((((/* implicit */unsigned int) var_5)), (4294967279U))) : (4294967293U)))));
        }
        /* LoopSeq 2 */
        for (short i_13 = 0; i_13 < 24; i_13 += 3) 
        {
            arr_46 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) - ((-(((/* implicit */int) var_6))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) | (arr_10 [i_0] [i_13] [i_13]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) ((short) 715415877U))))))));
            arr_47 [i_0] [i_13] = ((/* implicit */signed char) arr_18 [i_0] [i_13] [i_13]);
        }
        for (unsigned short i_14 = 2; i_14 < 21; i_14 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                arr_52 [i_0] [i_14 + 3] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 3544370635752692584LL)) ? ((~(var_9))) : (715415877U)))));
                /* LoopNest 2 */
                for (unsigned char i_16 = 0; i_16 < 24; i_16 += 4) 
                {
                    for (signed char i_17 = 0; i_17 < 24; i_17 += 2) 
                    {
                        {
                            arr_59 [i_0] [i_14 - 2] [i_0] [i_16] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_39 [i_0]))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_21 [i_0] [i_0] [i_16] [i_17]))))) : ((-(var_2)))));
                            arr_60 [i_0] [i_14 - 1] [i_0] [i_15] [i_16] [i_17] [i_17] = ((/* implicit */signed char) min((max((2271949543U), (((/* implicit */unsigned int) (signed char)-95)))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)27023)) <= (((((/* implicit */_Bool) arr_30 [i_17] [i_16] [i_0] [i_0] [i_14 - 1] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))))))));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_38 [i_16] [i_14 + 3])) + (22))))))) ? (((((/* implicit */_Bool) arr_24 [i_14 + 3] [i_14 - 1] [i_14 + 3] [i_14 + 1] [i_14 + 1] [i_14 - 1])) ? ((+(var_2))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)27023))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)63)) ? (((/* implicit */long long int) 3593235149U)) : (arr_14 [i_0] [i_14 + 2] [i_15] [i_16]))))));
                            arr_61 [i_0] [i_14 + 3] [i_15] [i_0] [i_17] = min((((/* implicit */long long int) (+(((unsigned int) var_1))))), (3544370635752692586LL));
                        }
                    } 
                } 
                arr_62 [i_0] [i_14 + 3] [i_15] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-6))))) ? (((/* implicit */int) ((signed char) 4294967295U))) : (((/* implicit */int) (short)255))));
            }
            arr_63 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0] [i_14 + 2] [i_14 - 2] [i_14 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)112))) : (2096448417U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) (unsigned short)38512))))))))) || (((/* implicit */_Bool) (unsigned char)3))));
            /* LoopSeq 1 */
            for (signed char i_18 = 0; i_18 < 24; i_18 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_19 = 0; i_19 < 24; i_19 += 4) 
                {
                    arr_71 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_14 - 2] [i_19])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (arr_18 [i_0] [i_18] [i_0])));
                    var_20 = (~(((/* implicit */int) arr_34 [i_0] [i_14 - 2] [i_14 - 2] [i_14 - 1] [i_18] [i_19])));
                    arr_72 [i_0] = ((((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_51 [i_19] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)9)))) % (((/* implicit */int) arr_7 [i_0] [i_14 + 2] [i_18])));
                    arr_73 [i_0] [i_14 - 1] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)9))));
                }
                var_21 = ((/* implicit */_Bool) ((((/* implicit */int) arr_70 [i_0] [i_0] [i_0] [i_14 - 1] [i_14 + 1] [i_18])) / (((((/* implicit */_Bool) (-(arr_66 [i_18] [i_14 - 1] [i_0] [i_0])))) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) var_3))))))));
            }
        }
        /* LoopNest 2 */
        for (unsigned char i_20 = 0; i_20 < 24; i_20 += 3) 
        {
            for (signed char i_21 = 0; i_21 < 24; i_21 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) (_Bool)1)))));
                    var_23 = arr_64 [i_21] [i_21] [i_20] [i_0];
                    arr_78 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */signed char) (((((+(((/* implicit */int) ((signed char) arr_12 [i_0]))))) + (2147483647))) >> (((((((/* implicit */_Bool) ((int) (signed char)109))) ? (arr_33 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))))) + (5642466126984406068LL)))))) : (((/* implicit */signed char) (((((((+(((/* implicit */int) ((signed char) arr_12 [i_0]))))) - (2147483647))) + (2147483647))) >> (((((((((/* implicit */_Bool) ((int) (signed char)109))) ? (arr_33 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))))) + (5642466126984406068LL))) - (1166920920473808722LL))))));
                    /* LoopNest 2 */
                    for (signed char i_22 = 1; i_22 < 20; i_22 += 2) 
                    {
                        for (signed char i_23 = 0; i_23 < 24; i_23 += 2) 
                        {
                            {
                                var_24 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_80 [i_23] [i_22 + 2] [i_21] [i_0]))))), (max((((/* implicit */unsigned int) (signed char)-32)), (701732147U)))));
                                var_25 = (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_76 [i_0] [i_20] [i_0] [i_22 - 1]))) == (arr_66 [i_21] [i_20] [i_20] [i_22 + 2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_83 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-122)), (min((((/* implicit */int) (unsigned short)37595)), (var_5)))))) ? (((((/* implicit */_Bool) 1394904008U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)9)), (var_1)))))) : (((/* implicit */int) (_Bool)1))));
    }
}
