/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17524
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
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) var_2))));
    var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)15676)) > (((((/* implicit */_Bool) (signed char)29)) ? (((/* implicit */int) (unsigned short)15681)) : (((/* implicit */int) (unsigned char)3)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15676))) : (0U)))) && (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)68)))))))) : ((~(((/* implicit */int) ((var_11) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)29))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49860))) : (var_6)))) ? (((/* implicit */unsigned long long int) ((var_13) ? (((/* implicit */int) var_15)) : (var_2)))) : (var_9))))));
        arr_3 [i_0] = ((/* implicit */_Bool) var_17);
        arr_4 [i_0] = ((/* implicit */_Bool) (unsigned short)15676);
        var_23 = ((/* implicit */unsigned int) 140737488355327LL);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                {
                    arr_11 [i_1] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((-140737488355340LL) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)-29))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))))) : (((var_14) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49882))) : (3141466884U))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            arr_17 [i_1] [(unsigned short)10] [i_3] [(unsigned short)10] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((0U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49859))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) (unsigned short)15668)))))) : (9223372036854775791LL)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) (signed char)-72)) + (77)))))) & (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (0U))))))));
                            arr_18 [8ULL] [i_2] [(short)10] [i_4] [i_4] [i_4] [i_5] = ((/* implicit */unsigned short) var_7);
                            var_24 &= ((((/* implicit */_Bool) 140737488355329LL)) ? (7315617486333899000ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)49881))))) ? (((((/* implicit */int) (unsigned char)221)) / (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_15))))))));
                            arr_19 [i_1] [i_1] [(unsigned char)6] [i_3] [i_4] [i_1] [(short)6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_15) ? (3036063068189414719LL) : (140737488355327LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) < (var_12))))) : (((9223372036854775791LL) + (-9223372036854775791LL)))))) * (((((/* implicit */_Bool) ((var_1) ? (((/* implicit */unsigned long long int) -140737488355340LL)) : (var_11)))) ? (((((/* implicit */_Bool) (unsigned short)15676)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) 30U)) : (-140737488355340LL))))))));
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-121))))) : (2167536228U))))));
                        }
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (140737488355339LL))) + (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) -700909144)) : (0U)))) : (((((/* implicit */long long int) ((/* implicit */int) var_1))) & (((((/* implicit */_Bool) var_11)) ? (-140737488355310LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
                        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-1)) >= (((/* implicit */int) (signed char)0)))) ? (((/* implicit */long long int) ((/* implicit */int) ((9223372036854775793LL) >= (((/* implicit */long long int) var_2)))))) : (140737488355340LL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)-1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_7)))) : (((((/* implicit */unsigned long long int) 4294967295U)) & (18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) (unsigned char)48)))))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_28 = ((/* implicit */_Bool) max((var_28), (((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? ((-(var_7))) : (var_5)))) != (((((/* implicit */_Bool) (signed char)-35)) ? (((/* implicit */long long int) 2322954716U)) : ((((_Bool)0) ? (9223372036854775791LL) : (-9223372036854775791LL)))))))));
                            arr_22 [i_2] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */int) (unsigned char)186)) : (((/* implicit */int) (signed char)-42))));
                            arr_23 [i_1] [12U] [i_1] [i_2] |= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (((_Bool)1) ? (var_9) : (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) var_15))))));
                        }
                    }
                    arr_24 [i_1] = ((/* implicit */unsigned long long int) ((var_6) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) | (4261412864U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 0)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) 4294967289U)) ? (9223372036854775760LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27155))))))))));
                    arr_25 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (signed char)-27);
                }
            } 
        } 
        var_29 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((158381011U) | (((/* implicit */unsigned int) var_17)))) <= (((2958656925U) | (((/* implicit */unsigned int) 4194288)))))))));
        arr_26 [i_1] = var_18;
        /* LoopSeq 1 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            /* LoopSeq 3 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
            {
                var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-42))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) -7)) : (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((4136586285U) != (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))) : (((3693001815U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38396))))))))))));
                arr_34 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 36028795945222144ULL)) ? ((((_Bool)1) ? (-7) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (signed char)40)) + (((/* implicit */int) (unsigned short)38380))))))) > (((((((/* implicit */int) var_3)) >= (var_2))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)52679)) : (7)))) : (((((/* implicit */unsigned long long int) 2990445950U)) ^ (var_6)))))));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
            {
                arr_37 [i_1] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((2990445963U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38381)))))) : (((((/* implicit */_Bool) (unsigned short)61178)) ? (((/* implicit */long long int) 2990445962U)) : (((((/* implicit */_Bool) (unsigned char)186)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12857))) : (9223372036854775791LL)))))));
                var_31 = ((/* implicit */unsigned long long int) min((var_31), (((((/* implicit */_Bool) (signed char)-1)) ? (((((-1983847260) != (((/* implicit */int) var_1)))) ? (((((/* implicit */_Bool) 2990445963U)) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) - (-1679924115)))))) : (((/* implicit */unsigned long long int) 2939279902U))))));
                arr_38 [(unsigned short)1] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) -9223372036854775791LL);
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
            {
                var_32 = ((/* implicit */unsigned short) var_18);
                /* LoopNest 2 */
                for (unsigned int i_11 = 1; i_11 < 12; i_11 += 1) 
                {
                    for (unsigned int i_12 = 0; i_12 < 13; i_12 += 2) 
                    {
                        {
                            var_33 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_16))) | (9223372036854775791LL)))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27155))) - (var_8)))) ? (((var_11) | (var_9))) : (((/* implicit */unsigned long long int) ((2990445949U) - (var_8)))))) : (((/* implicit */unsigned long long int) var_17))));
                            var_34 &= ((((/* implicit */_Bool) (((_Bool)1) ? (9223372036854775778LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27149))) >= (1355687403U))))) : (((((/* implicit */_Bool) 2939279902U)) ? (2007385227U) : (2990445963U))));
                            var_35 = ((/* implicit */unsigned long long int) (signed char)-60);
                            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((-9223372036854775792LL) - (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -9223372036854775792LL)) ? (1304521332U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38399))))))))) ? (((9223372036854775791LL) / (-9223372036854775784LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_0)) - (((((/* implicit */int) var_0)) + (((/* implicit */int) (unsigned char)255)))))))));
                            var_37 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-91)) : (((/* implicit */int) (signed char)-71))))) ? (((((/* implicit */_Bool) (unsigned short)128)) ? (((/* implicit */unsigned long long int) -3444952377402054863LL)) : (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775783LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) - ((~(((/* implicit */int) var_1)))))))));
                        }
                    } 
                } 
                var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) ((-9223372036854775780LL) + (((/* implicit */long long int) 536870784U))))) ? ((-(((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (_Bool)1)))))));
                var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 15641342654531469803ULL)) ? (-9223372036854775780LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? ((-2147483647 - 1)) : (2147483647))))));
            }
            arr_46 [(_Bool)1] [i_7] [4U] |= ((/* implicit */unsigned int) (((_Bool)1) ? (((((/* implicit */int) (signed char)33)) - (((/* implicit */int) var_3)))) : (((/* implicit */int) ((((/* implicit */int) var_16)) != (((/* implicit */int) (_Bool)1)))))));
        }
    }
    for (unsigned char i_13 = 0; i_13 < 16; i_13 += 2) 
    {
        var_40 ^= ((/* implicit */_Bool) var_16);
        var_41 = ((/* implicit */unsigned long long int) (((((_Bool)1) ? (var_19) : (((/* implicit */unsigned int) 268435455)))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) -9223372036854775792LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
        arr_51 [i_13] [i_13] = ((/* implicit */unsigned char) (unsigned short)0);
        var_42 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65511))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) - (((/* implicit */int) (_Bool)1))))) ? (((4294967284U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)132))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (var_9)));
        arr_52 [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) + (((((/* implicit */_Bool) 2801857352U)) ? (1840490777U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-22164)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9))) + (2801857358U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (((1U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 137438920704ULL)) ? (2801857348U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */_Bool) (signed char)-1)) ? (1840490786U) : (4095U))) : (((((/* implicit */_Bool) (signed char)-1)) ? (4294963200U) : (4073U)))))));
    }
    var_43 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((var_11) - (var_11))) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
}
