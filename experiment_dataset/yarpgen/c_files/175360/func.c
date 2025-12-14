/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175360
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 3; i_2 < 16; i_2 += 3) 
                {
                    arr_7 [(short)3] [i_1] &= (((!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [i_0] [i_1])), (721191344U)))))) ? (((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)243)) != (((/* implicit */int) arr_0 [11U] [11U])))) ? (max((var_14), (3573775952U))) : (var_14)))) : (min((((((/* implicit */long long int) var_11)) ^ (var_3))), (((/* implicit */long long int) (unsigned char)153)))));
                    arr_8 [i_0] = ((/* implicit */unsigned int) arr_3 [i_2]);
                    arr_9 [i_0] [i_0] [(unsigned char)18] = ((/* implicit */int) (-(6098056585341625143LL)));
                }
                for (short i_3 = 1; i_3 < 17; i_3 += 1) /* same iter space */
                {
                    var_15 = ((/* implicit */_Bool) (+((-(((/* implicit */int) (signed char)52))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned char)12] = ((/* implicit */signed char) arr_5 [i_3] [i_3 + 1] [i_3]);
                        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */long long int) 400481049U)) : (((((/* implicit */_Bool) var_10)) ? (2698401436837934828LL) : (arr_1 [i_0] [i_0])))));
                        var_17 += ((/* implicit */long long int) ((((/* implicit */int) var_10)) - (var_12)));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned char) 0LL);
                            var_19 &= max((6408045U), (3573775978U));
                            var_20 = ((((/* implicit */_Bool) (~(min((arr_11 [i_6]), (var_0)))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) * (3573775973U)))));
                            arr_20 [i_0] [i_1] [i_3] [i_5] [i_6] = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) var_13)) * (((/* implicit */int) var_2))))), (3573775978U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-8758)) / (((/* implicit */int) (unsigned char)102))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [6U] [6U]))))) : (((((/* implicit */_Bool) (unsigned char)153)) ? (3573775948U) : (arr_10 [i_6] [6] [i_1])))))) : (max((((/* implicit */long long int) var_5)), (arr_1 [i_0] [i_0]))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 19; i_7 += 1) 
                        {
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_23 [i_0] [i_3 + 2] [i_5]))))), (max((max((721191348U), (((/* implicit */unsigned int) (unsigned char)31)))), (((/* implicit */unsigned int) ((_Bool) var_8)))))));
                            var_21 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (721191350U) : (var_6))))) ? (((((/* implicit */_Bool) var_0)) ? (max((3233511972U), (((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0] [i_0])))) : (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)18)))));
                        }
                        for (signed char i_8 = 0; i_8 < 19; i_8 += 4) 
                        {
                            var_22 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (6291456) : (((/* implicit */int) arr_22 [11U] [(unsigned char)10] [i_3] [i_1] [i_0]))))) : (var_6))), (((/* implicit */unsigned int) var_10))));
                            arr_28 [i_0] [i_0] [i_0] = 2978686220U;
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 0; i_9 < 19; i_9 += 4) 
                        {
                            var_23 &= ((/* implicit */unsigned char) ((short) arr_6 [i_0] [i_0] [i_3] [i_3 + 1]));
                            var_24 = ((/* implicit */short) arr_1 [i_0] [i_9]);
                        }
                        for (unsigned int i_10 = 0; i_10 < 19; i_10 += 2) 
                        {
                            arr_33 [i_5] [i_3] [i_5] [i_0] [i_10] [i_0] [i_1] = ((/* implicit */short) 721191344U);
                            arr_34 [i_10] [i_5] [i_3 - 1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) var_5)) - (arr_27 [i_3 + 1] [i_3 + 1] [i_3 - 1])))));
                        }
                        arr_35 [i_0] [i_1] [i_3 + 1] [i_5] [(short)4] [i_0] &= ((/* implicit */short) var_8);
                        var_25 = (unsigned char)231;
                    }
                    for (unsigned char i_11 = 0; i_11 < 19; i_11 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned char) arr_16 [i_0] [i_1] [i_1] [i_11] [i_1] [i_1]);
                        var_27 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-8762))) : (1940968779U)))) ? ((+(var_6))) : (min((2994943442U), (((/* implicit */unsigned int) (signed char)0)))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_12 = 0; i_12 < 19; i_12 += 1) 
                        {
                            var_28 = (((_Bool)0) ? (((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_3 + 2] [(_Bool)1] [i_12] [i_11])) ? (3573775957U) : (((/* implicit */unsigned int) -23536831)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))));
                            var_29 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]))) : (-3158183156732736150LL)));
                            var_30 = ((/* implicit */unsigned int) arr_40 [i_12] [i_3 + 2] [i_3 + 2] [i_3 - 1] [i_3]);
                        }
                    }
                    var_31 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_22 [i_0] [i_0] [13] [i_0] [i_3])) ? (((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */int) (_Bool)0)) : (arr_27 [i_0] [i_1] [i_0]))) : (((((/* implicit */_Bool) arr_41 [i_0] [i_3 - 1])) ? (((/* implicit */int) (signed char)36)) : (((/* implicit */int) (unsigned char)134)))))), (((/* implicit */int) (!(((/* implicit */_Bool) 1468597551U)))))));
                }
                for (short i_13 = 1; i_13 < 17; i_13 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (int i_14 = 0; i_14 < 19; i_14 += 4) 
                    {
                        arr_49 [i_0] [i_1] [(unsigned char)3] [15] [i_13 + 2] [11LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)58)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 721191349U)) && (((/* implicit */_Bool) (signed char)-51))))) : (((((/* implicit */int) (short)25569)) + (var_12)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        var_32 ^= max(((+((+(var_9))))), ((+(3573775948U))));
                        arr_50 [i_0] [i_0] [i_0] [3U] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 721191356U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)32640))))))))));
                        arr_51 [(signed char)13] [i_13] [i_13] [(signed char)13] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (signed char)-51)) + (((/* implicit */int) (unsigned char)57)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) / (1289224456)))) ? (min((((/* implicit */long long int) var_2)), (var_3))) : (((((/* implicit */_Bool) var_6)) ? (4104988395301054816LL) : (var_3))))) : (((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_1] [i_13 - 1] [i_14])) ? (arr_3 [i_1]) : (arr_3 [i_0])))));
                        var_33 = ((/* implicit */unsigned char) var_4);
                    }
                    for (unsigned char i_15 = 2; i_15 < 15; i_15 += 1) 
                    {
                        arr_54 [i_15] [i_0] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */int) (~(4104988395301054816LL)));
                        var_34 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)71)) ? (721191347U) : (2217237062U)))) ? (min((((/* implicit */long long int) 3573775998U)), (8761004742140720639LL))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)15)) >> (((343350614U) - (343350610U)))))))), (((((/* implicit */_Bool) (short)8746)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2822849637139905231LL)) ? (arr_32 [i_0] [i_0] [10LL] [i_0] [i_0] [i_15] [i_15]) : (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) (signed char)89)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))));
                    }
                    arr_55 [i_13] [i_1] [i_1] [i_0] = min((((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) (short)-32661)) >= (((/* implicit */int) (signed char)-34)))))))), (((var_4) ? (((((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_0] [i_0] [i_1] [i_13])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (short)6605))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))))));
                    arr_56 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) max((((arr_44 [i_0] [i_1]) | (((/* implicit */int) var_1)))), (((/* implicit */int) ((((/* implicit */int) arr_52 [i_0] [i_1] [i_13 + 1] [i_13 - 1])) < (arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))))) < ((-(var_9)))));
                }
                arr_57 [(_Bool)1] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) (((-(var_6))) + (((/* implicit */unsigned int) (-(((/* implicit */int) arr_41 [i_0] [i_0])))))));
            }
        } 
    } 
    var_35 = ((/* implicit */short) var_7);
}
