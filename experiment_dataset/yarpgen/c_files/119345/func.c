/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119345
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) arr_2 [i_0] [(unsigned char)12]))));
                                arr_15 [i_0] [i_0] [i_4] [i_4] [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) (_Bool)1);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 1; i_5 < 24; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_0] [(short)0] [i_5] [(unsigned char)18] [i_5] = ((/* implicit */signed char) max((min(((~(3585269066U))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_19 [i_6] [i_5 + 1] [i_1 + 1]))))))), (((/* implicit */unsigned int) (~((-(((/* implicit */int) var_2)))))))));
                                arr_22 [i_0] [8U] [(short)5] [i_0] [(signed char)3] = ((/* implicit */_Bool) ((long long int) arr_11 [i_0]));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 3; i_7 < 22; i_7 += 3) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 1) 
                        {
                            {
                                arr_27 [i_0] = ((/* implicit */unsigned long long int) var_6);
                                var_16 = (-(arr_5 [i_2 + 2]));
                                arr_28 [i_0] [i_0] [i_1 + 1] [i_0] [i_0] [i_8] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) min((arr_23 [i_0] [i_1] [i_7] [18LL]), ((_Bool)1)))) != ((~(((/* implicit */int) arr_14 [i_0] [i_1] [i_2 - 1] [i_2 - 1] [i_7] [i_8])))))))));
                                arr_29 [i_1] [i_0] [i_7 - 2] [i_0] = ((/* implicit */_Bool) (+((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2 + 1]))) : (-1055857522911933273LL)))));
                                var_17 -= ((/* implicit */int) (!(((/* implicit */_Bool) (~(-366928466244686098LL))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 25; i_9 += 1) 
                    {
                        for (unsigned short i_10 = 2; i_10 < 23; i_10 += 2) 
                        {
                            {
                                arr_35 [i_0] [i_1] [i_0] [i_1 + 2] = ((/* implicit */long long int) ((unsigned int) min((arr_13 [i_10 - 2] [i_2 + 1] [(_Bool)1] [i_1 - 1]), (arr_13 [i_10 - 1] [i_2 - 1] [i_1 - 1] [i_1 - 1]))));
                                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (+(1328513807))))));
                                arr_36 [(unsigned short)3] [(unsigned short)3] [i_2] [(short)2] [i_0] = ((/* implicit */unsigned long long int) (((-((~(((/* implicit */int) (_Bool)0)))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_0))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 25; i_11 += 1) 
                    {
                        for (long long int i_12 = 0; i_12 < 25; i_12 += 1) 
                        {
                            {
                                arr_44 [i_0] [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_0] [(_Bool)0] &= ((/* implicit */signed char) max(((-(arr_8 [i_2 + 1] [(unsigned char)24]))), (((/* implicit */long long int) var_10))));
                                var_19 += ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */long long int) arr_24 [(signed char)2])) | (arr_37 [2LL])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1070648195U))))) : (((/* implicit */int) var_4))))));
                                var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1 - 1] [6ULL])) ? (arr_18 [i_1] [i_1 - 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */int) var_13)) * (((/* implicit */int) var_11)))) : ((~(((/* implicit */int) arr_14 [(signed char)16] [i_1] [i_1] [i_1] [i_1 + 1] [i_12]))))));
                                arr_45 [(short)23] [i_1] [i_0] [i_11] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-((~(((/* implicit */int) arr_2 [i_0] [i_0]))))))) ^ (var_5)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_13 = 0; i_13 < 17; i_13 += 1) 
    {
        for (long long int i_14 = 3; i_14 < 15; i_14 += 2) 
        {
            for (unsigned short i_15 = 1; i_15 < 16; i_15 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 0; i_16 < 17; i_16 += 1) 
                    {
                        for (unsigned short i_17 = 0; i_17 < 17; i_17 += 1) 
                        {
                            {
                                arr_61 [i_14] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */signed char) var_14);
                                arr_62 [i_14] [10ULL] [i_15] [10ULL] [i_17] [i_13] &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_47 [i_14 - 1])) : (((/* implicit */int) arr_47 [i_17])))) | ((-(((/* implicit */int) arr_3 [i_14 + 1]))))));
                                arr_63 [i_13] [i_13] [i_13] [i_13] [i_13] [(unsigned short)8] &= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_26 [i_14 - 3] [i_13] [(unsigned short)15] [i_13] [i_13])) ? (((/* implicit */int) arr_26 [i_14 - 1] [i_14 - 2] [i_14] [i_13] [i_13])) : (((/* implicit */int) arr_26 [i_14 - 2] [(short)21] [i_14] [i_14 - 3] [i_13]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 17; i_18 += 1) 
                    {
                        for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                        {
                            {
                                var_21 -= ((/* implicit */unsigned short) (-(((((((/* implicit */int) var_0)) - (((/* implicit */int) var_0)))) - ((+(((/* implicit */int) var_11))))))));
                                var_22 -= (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)190)) | (((/* implicit */int) (unsigned short)56550))))));
                                var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)33414))));
                                var_24 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_19 [i_13] [i_14] [i_15])), (var_9)))))))));
                                arr_69 [i_14] [i_15] [i_19 - 1] = ((/* implicit */_Bool) max(((+(((/* implicit */int) (_Bool)1)))), (min((((/* implicit */int) arr_40 [i_13] [i_14 + 2] [i_15 + 1] [i_14])), ((+(((/* implicit */int) var_11))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_20 = 0; i_20 < 17; i_20 += 3) 
                    {
                        for (unsigned char i_21 = 0; i_21 < 17; i_21 += 1) 
                        {
                            {
                                var_25 += ((/* implicit */unsigned short) var_14);
                                arr_76 [i_13] [i_14] [i_15] [i_20] [i_21] = ((/* implicit */unsigned int) (+(min((0ULL), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (12214469709766762768ULL)))))));
                                arr_77 [i_21] [i_14] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_20 [i_14 - 1] [i_15] [i_15 - 1] [i_14] [i_15]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_22 = 0; i_22 < 17; i_22 += 1) 
                    {
                        for (unsigned long long int i_23 = 2; i_23 < 16; i_23 += 2) 
                        {
                            {
                                var_26 *= ((/* implicit */unsigned int) ((((arr_57 [i_15 - 1] [i_15 - 1] [i_23 + 1] [i_23]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((var_8) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_9 [i_13] [i_15 + 1] [(short)15] [i_23])) >= (((/* implicit */int) (_Bool)1))))) != (((/* implicit */int) var_1))))))));
                                var_27 = ((/* implicit */unsigned long long int) (-((-(arr_71 [i_14 - 3] [i_15] [i_23] [i_23] [i_23 + 1] [i_14])))));
                                arr_82 [i_23] [i_14] [i_15] [(unsigned char)12] [i_14] [(unsigned short)0] = ((unsigned char) (~(arr_31 [i_14] [i_15 + 1] [i_15] [i_15 + 1] [i_15] [i_15])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
    {
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_26 = 0; i_26 < 23; i_26 += 1) 
                {
                    for (long long int i_27 = 2; i_27 < 22; i_27 += 3) 
                    {
                        {
                            arr_94 [14ULL] [i_27] [i_27] [i_27] [i_27 + 1] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_31 [i_27] [i_25] [1LL] [i_27 - 2] [i_27] [i_27 + 1])) ? (arr_31 [i_27] [18U] [i_26] [18U] [i_24 + 1] [16LL]) : (((/* implicit */unsigned long long int) var_3))))));
                            arr_95 [i_24] [i_25] [i_26] [i_27] [i_27] = ((/* implicit */_Bool) min(((+(min((((/* implicit */unsigned long long int) arr_1 [i_24 + 1] [i_27])), (arr_31 [i_27] [i_27] [i_25] [7ULL] [i_26] [(_Bool)1]))))), (((/* implicit */unsigned long long int) var_5))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_28 = 2; i_28 < 20; i_28 += 3) 
                {
                    for (signed char i_29 = 4; i_29 < 19; i_29 += 1) 
                    {
                        {
                            arr_100 [(unsigned char)22] [(unsigned char)22] [i_28] [i_28] [i_29 - 4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_9)))))))));
                            var_28 = ((/* implicit */_Bool) 2512778681U);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_30 = 2; i_30 < 13; i_30 += 4) 
    {
        for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
        {
            for (_Bool i_32 = 1; i_32 < 1; i_32 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                    {
                        for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(var_3))))));
                                arr_118 [i_31] = ((/* implicit */int) (+(min((arr_91 [i_30] [i_30] [i_30] [i_30] [i_30 + 1]), (arr_43 [i_31] [i_34] [i_33] [i_33] [3LL] [(signed char)13] [i_31])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_35 = 1; i_35 < 15; i_35 += 4) 
                    {
                        for (long long int i_36 = 0; i_36 < 17; i_36 += 2) 
                        {
                            {
                                arr_126 [i_31] [12ULL] [(unsigned char)16] [i_35] = ((/* implicit */int) ((unsigned char) (-((+(arr_101 [i_35]))))));
                                var_30 = ((min((arr_50 [i_32 - 1] [i_31] [i_31]), (arr_50 [i_32 - 1] [i_31] [16ULL]))) % (((/* implicit */long long int) (-(((/* implicit */int) arr_79 [i_30 + 4]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_37 = 1; i_37 < 13; i_37 += 1) 
                    {
                        for (unsigned long long int i_38 = 0; i_38 < 17; i_38 += 4) 
                        {
                            {
                                arr_131 [i_30] [i_31] [i_32] [i_31] = ((/* implicit */_Bool) (~(15300907741210870557ULL)));
                                arr_132 [i_31] = ((/* implicit */unsigned int) (unsigned short)38550);
                                arr_133 [i_30] [i_32 - 1] [i_31] [i_37 + 4] [i_38] [i_31] [i_37] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (+((-(((/* implicit */int) var_8))))))) | ((~(arr_84 [i_30 + 4] [i_32 - 1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_39 = 1; i_39 < 14; i_39 += 1) 
                    {
                        for (_Bool i_40 = 0; i_40 < 1; i_40 += 1) 
                        {
                            {
                                arr_139 [i_31] [i_31] [i_31] [i_39] [i_39] [i_39] = ((/* implicit */short) ((signed char) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)104))))))));
                                arr_140 [i_30 + 2] [i_31] [i_31] [i_39 + 1] [i_40] = (+(((/* implicit */int) ((unsigned char) arr_84 [i_32] [i_40]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
