/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125001
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)248)) ? (arr_3 [12U] [i_1] [i_0]) : (((/* implicit */long long int) 1096573347))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 17015302587444935526ULL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) : ((~(arr_2 [(unsigned char)19] [i_1])))));
            var_13 = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_1])) & (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)115))))));
        }
        for (int i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            arr_8 [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19306))))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2] [i_0])))));
            var_14 = ((/* implicit */unsigned short) ((unsigned char) (unsigned char)248));
            arr_9 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)248))) / (arr_2 [i_0] [i_2])));
        }
        /* LoopSeq 1 */
        for (unsigned int i_3 = 1; i_3 < 18; i_3 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_4 = 2; i_4 < 18; i_4 += 4) 
            {
                /* LoopSeq 1 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        arr_22 [i_0] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_0] [i_3 + 1] [i_4 + 2])) * (((/* implicit */int) (unsigned char)246))));
                        var_15 = (+(((/* implicit */int) var_8)));
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */int) arr_15 [i_4] [i_4] [i_4])) : (((/* implicit */int) var_2))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1096573347)) ? (-1096573368) : (((/* implicit */int) (unsigned char)7)))))));
                        var_17 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11))));
                    }
                    for (long long int i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        var_18 = ((/* implicit */_Bool) ((unsigned int) 17015302587444935526ULL));
                        arr_27 [i_3] [18U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)250)) - (((/* implicit */int) (unsigned short)26431))))) ? (1431441486264616089ULL) : (((/* implicit */unsigned long long int) arr_12 [i_3] [i_3 - 1] [i_4 + 3]))));
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)3)) ^ (((/* implicit */int) (unsigned short)65529))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58732))) : (arr_2 [i_0] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)27600)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)5))) : (193883304U))))));
                    }
                    for (int i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        var_20 += ((/* implicit */unsigned char) (+((-(arr_12 [i_8] [i_3 - 1] [i_3])))));
                        var_21 = ((/* implicit */unsigned char) ((unsigned int) ((unsigned long long int) var_3)));
                        var_22 = ((/* implicit */_Bool) ((long long int) 17015302587444935530ULL));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 13034430647713782114ULL)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) (short)-975))));
                    }
                    var_24 = ((/* implicit */unsigned short) var_12);
                }
                /* LoopSeq 3 */
                for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 3) 
                {
                    var_25 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (-1096573351) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)50795)) || (((/* implicit */_Bool) (short)21300)))))));
                    var_26 &= (unsigned short)65535;
                }
                for (short i_10 = 2; i_10 < 19; i_10 += 2) 
                {
                    var_27 = ((/* implicit */_Bool) var_11);
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 0; i_11 < 21; i_11 += 4) 
                    {
                        var_28 ^= ((/* implicit */unsigned short) (!(((var_3) > (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                        var_29 &= ((/* implicit */unsigned short) (+((~(((/* implicit */int) (unsigned short)65532))))));
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6))) < (1722410478U)))) <= (((/* implicit */int) ((unsigned short) (short)0)))));
                        var_31 = ((((/* implicit */_Bool) (unsigned short)24)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_7 [i_0] [i_4 + 2])));
                    }
                }
                for (unsigned char i_12 = 0; i_12 < 21; i_12 += 3) 
                {
                    var_32 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)137)) << (((((/* implicit */int) arr_23 [(unsigned char)1] [(unsigned char)1] [i_4] [i_4 - 2] [(unsigned short)11])) - (64))))))));
                    var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) (unsigned char)73)) : (((/* implicit */int) (unsigned char)137))));
                    /* LoopSeq 1 */
                    for (unsigned int i_13 = 3; i_13 < 20; i_13 += 1) 
                    {
                        var_34 = ((unsigned int) ((((/* implicit */_Bool) (unsigned char)2)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))));
                        arr_42 [i_3] [i_4 + 1] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)147)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (unsigned short)0)))));
                        var_35 = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_5)))) << (((/* implicit */int) ((arr_21 [i_3] [i_3 - 1] [i_0] [i_12] [i_13 - 1]) == (arr_12 [i_3] [i_3] [i_4 + 1]))))));
                        arr_43 [8U] [9U] [8U] [14] [i_13] [i_3] = ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned short)29)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))));
                    }
                }
            }
            for (short i_14 = 0; i_14 < 21; i_14 += 2) 
            {
                var_36 = ((unsigned char) ((var_0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)119))) : (var_3)));
                arr_48 [i_3] [i_3 + 2] [i_14] = ((/* implicit */unsigned char) (-(((var_12) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
            }
            for (short i_15 = 0; i_15 < 21; i_15 += 3) 
            {
                var_37 = ((/* implicit */short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4401))) | (var_12)))));
                /* LoopSeq 2 */
                for (unsigned long long int i_16 = 1; i_16 < 20; i_16 += 3) /* same iter space */
                {
                    var_38 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_10))));
                    arr_55 [i_0] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)11)) << (((((/* implicit */int) var_11)) - (28274))))) & (((((/* implicit */_Bool) arr_2 [i_0] [(unsigned short)3])) ? (((/* implicit */int) (short)4400)) : (((/* implicit */int) (unsigned char)3))))));
                    var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_3 + 1])) || (((/* implicit */_Bool) arr_1 [i_3 + 2]))));
                    var_40 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) + (arr_41 [i_0] [i_15] [i_15] [i_15] [i_15] [i_16 + 1])));
                }
                for (unsigned long long int i_17 = 1; i_17 < 20; i_17 += 3) /* same iter space */
                {
                    var_41 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)63))));
                    var_42 -= ((/* implicit */unsigned char) arr_39 [i_0] [i_0] [i_0] [i_0]);
                    var_43 = ((/* implicit */unsigned short) (-(14922264257273368136ULL)));
                    arr_58 [i_3] [i_3] [(short)2] [i_3] = ((/* implicit */unsigned char) (~((+(3647535106U)))));
                    var_44 = (+((-(arr_20 [(_Bool)1] [i_3]))));
                }
                var_45 = ((/* implicit */unsigned short) (short)20051);
            }
            arr_59 [i_3] [i_3] = ((/* implicit */_Bool) ((1733568896U) >> (((((((/* implicit */_Bool) arr_21 [i_3] [i_0] [i_3] [i_3] [i_3 + 3])) ? (arr_53 [i_3] [(unsigned char)5] [(unsigned short)18] [i_0] [i_0] [i_0]) : (((/* implicit */int) (unsigned short)51959)))) + (2041910431)))));
            var_46 = var_10;
            var_47 = ((/* implicit */unsigned int) ((3647535106U) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)233))))))));
        }
        var_48 = ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) * (((/* implicit */int) (short)-20052))));
    }
    for (unsigned short i_18 = 0; i_18 < 20; i_18 += 4) 
    {
        var_49 = ((/* implicit */unsigned char) max(((((+(((/* implicit */int) var_2)))) * (((/* implicit */int) var_7)))), (((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) 14922264257273368136ULL)))))));
        arr_62 [i_18] = ((/* implicit */unsigned char) 3731599649744893598LL);
    }
    var_50 = ((((/* implicit */_Bool) (unsigned short)32506)) ? (((/* implicit */int) (short)-4400)) : (((/* implicit */int) (unsigned short)13929)));
    var_51 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((var_3), (((/* implicit */long long int) (unsigned char)241))))), ((-(var_12))))))));
}
