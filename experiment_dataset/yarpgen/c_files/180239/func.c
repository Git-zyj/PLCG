/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180239
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_16 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */_Bool) 7451587300750181220ULL)) && (((/* implicit */_Bool) (~(((/* implicit */int) var_10))))))))));
        var_17 = ((/* implicit */unsigned short) min(((-(((var_7) ? (((/* implicit */int) var_10)) : (var_0))))), (((/* implicit */int) ((short) (_Bool)1)))));
        arr_3 [i_0] = ((/* implicit */long long int) ((short) min((2936539654U), (((/* implicit */unsigned int) (_Bool)1)))));
    }
    for (int i_1 = 3; i_1 < 14; i_1 += 2) 
    {
        arr_7 [i_1] [i_1] = ((((/* implicit */int) var_13)) ^ ((((!(((/* implicit */_Bool) arr_0 [i_1] [i_1])))) ? (((/* implicit */int) ((var_5) > (arr_0 [i_1] [i_1 - 3])))) : (max((var_0), (((/* implicit */int) arr_2 [i_1])))))));
        /* LoopSeq 2 */
        for (int i_2 = 3; i_2 < 13; i_2 += 2) 
        {
            arr_11 [i_1] [(short)2] = ((/* implicit */short) min((((/* implicit */unsigned int) ((int) ((unsigned long long int) var_1)))), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (var_5) : (var_12)))), (((((/* implicit */unsigned int) ((/* implicit */int) var_15))) / (arr_6 [i_1] [i_2])))))));
            arr_12 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_2])) ? (arr_9 [i_1] [(signed char)6]) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32759)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_9)))) : (((var_7) ? (14094752314799723747ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))))));
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                for (int i_4 = 2; i_4 < 14; i_4 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4))))))))));
                            var_19 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_5] [i_5])) ? (((/* implicit */int) arr_2 [i_5])) : (((/* implicit */int) var_7)))))));
                        }
                        for (int i_6 = 0; i_6 < 15; i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_3] [i_1] [(signed char)12] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)3)) << (((/* implicit */int) (_Bool)1))));
                            var_20 = ((/* implicit */int) ((((/* implicit */unsigned int) 928633332)) / (3664277441U)));
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_19 [i_1])) : (((/* implicit */int) var_4))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (~(var_11)))))) : (var_3)));
                        }
                        for (int i_7 = 0; i_7 < 15; i_7 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) var_14))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) -3129500885016759133LL)) && (((/* implicit */_Bool) var_0)))))) : (((/* implicit */int) max((var_2), (((/* implicit */short) var_4)))))));
                            arr_27 [i_2 - 2] [i_1] [i_2 + 2] [i_2 - 2] [i_2] = ((/* implicit */unsigned int) (short)32758);
                        }
                        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) arr_5 [4U]))));
                        var_24 = ((/* implicit */long long int) min((var_24), (var_11)));
                        arr_28 [i_4] [i_3] [i_4 + 1] |= ((unsigned int) max((((/* implicit */short) (_Bool)1)), ((short)32755)));
                    }
                } 
            } 
        }
        for (long long int i_8 = 0; i_8 < 15; i_8 += 2) 
        {
            var_25 = (+(((unsigned int) (signed char)-14)));
            /* LoopSeq 4 */
            for (short i_9 = 4; i_9 < 13; i_9 += 2) 
            {
                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */int) (short)-32736)) - (((/* implicit */int) (_Bool)1)))))));
                arr_34 [i_1] = ((/* implicit */_Bool) ((short) -3608091511279300428LL));
            }
            for (signed char i_10 = 0; i_10 < 15; i_10 += 2) 
            {
                var_27 = ((/* implicit */short) max((((/* implicit */unsigned int) (short)-32758)), (2936539649U)));
                var_28 |= ((/* implicit */short) 14094752314799723745ULL);
                var_29 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_10))));
            }
            /* vectorizable */
            for (long long int i_11 = 3; i_11 < 14; i_11 += 3) 
            {
                var_30 = ((((/* implicit */_Bool) var_9)) ? ((-(arr_37 [i_1 + 1] [i_1 + 1] [i_11 - 2] [i_1 + 1]))) : ((((_Bool)1) ? (((/* implicit */int) (signed char)62)) : (((/* implicit */int) (short)12945)))));
                arr_40 [i_8] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) arr_15 [i_1] [i_8])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
            }
            for (int i_12 = 0; i_12 < 15; i_12 += 3) 
            {
                var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_13))))))) ? (((/* implicit */int) (short)32755)) : (((/* implicit */int) ((((/* implicit */int) ((_Bool) var_10))) < (((/* implicit */int) (short)32717)))))));
                arr_43 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_1] [i_8] [i_12] [i_12])) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14))))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((-3608091511279300431LL) <= (((/* implicit */long long int) min((var_3), (((/* implicit */unsigned int) (short)32755))))))))));
            }
        }
        arr_44 [i_1] = ((/* implicit */int) arr_8 [i_1] [i_1]);
        var_32 += ((/* implicit */_Bool) ((unsigned char) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_0 [i_1] [i_1 - 1])) : (var_8))), (((/* implicit */unsigned long long int) -953344428)))));
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_14 = 2; i_14 < 21; i_14 += 3) 
        {
            arr_50 [i_13] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) max((var_3), (var_3)))) || ((!(((/* implicit */_Bool) var_8))))))) < (max(((-(((/* implicit */int) arr_47 [i_13] [i_13] [i_13])))), (((/* implicit */int) var_10))))));
            /* LoopNest 2 */
            for (short i_15 = 1; i_15 < 24; i_15 += 3) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    {
                        var_33 += ((/* implicit */unsigned int) var_11);
                        var_34 += ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32736)) ? (630689852U) : (630689854U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : ((+(var_8))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (4292102562637787903ULL) : (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_51 [i_13])) : (((/* implicit */int) arr_52 [(signed char)4] [i_15] [(unsigned char)11] [i_13]))))) : (((unsigned int) arr_55 [i_13] [(unsigned char)22] [(unsigned char)0] [i_13] [i_13] [i_13])))))));
                    }
                } 
            } 
            arr_56 [(unsigned char)18] [i_13] = ((/* implicit */int) ((((/* implicit */int) arr_51 [i_14])) >= (((((/* implicit */_Bool) max((arr_45 [23LL]), (var_10)))) ? (1888919359) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (arr_55 [i_13] [i_13] [i_13] [i_13] [3LL] [i_13])))))));
            var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4351991758909827868ULL)) ? (((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) var_4)), (var_11))) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_1))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32732)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (short)-32763)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) var_2)), (var_0)))) : ((~(14154641511071763713ULL)))))));
            arr_57 [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned short)27902)))) * (((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */long long int) (-(((/* implicit */int) var_15))))) - (((((/* implicit */long long int) var_9)) / (var_11)))))));
        }
        arr_58 [i_13] [i_13] = ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_45 [0])) : (((/* implicit */int) var_14)));
        arr_59 [i_13] = ((/* implicit */_Bool) ((short) arr_54 [i_13] [i_13] [i_13] [i_13] [(short)9] [i_13]));
    }
    /* vectorizable */
    for (unsigned short i_17 = 0; i_17 < 21; i_17 += 1) 
    {
        var_36 = ((/* implicit */int) max((var_36), (((((/* implicit */_Bool) (+(258874370U)))) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) var_14))))));
        var_37 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) -6962577159823143973LL)) ? (var_0) : (((/* implicit */int) arr_61 [i_17])))));
        var_38 += ((/* implicit */unsigned char) var_10);
        arr_64 [(short)13] = ((/* implicit */_Bool) var_5);
    }
    var_39 |= ((/* implicit */long long int) (((((_Bool)1) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_15)) * (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_14)) ? (var_9) : (((/* implicit */unsigned int) var_12)))))) < (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
    var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */int) var_13)) : (((var_7) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))))) ? (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_1)))), (((/* implicit */int) ((short) var_10)))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (var_11)))) : (((unsigned long long int) var_12)))))))));
    var_41 = ((/* implicit */short) var_7);
}
