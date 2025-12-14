/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155249
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
    var_13 = ((/* implicit */signed char) var_3);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        var_14 *= ((/* implicit */short) var_7);
        arr_3 [i_0 - 2] [i_0 + 1] = ((/* implicit */unsigned int) ((int) ((unsigned long long int) ((unsigned short) var_1))));
    }
    /* LoopSeq 2 */
    for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 1; i_2 < 9; i_2 += 3) 
        {
            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_6)), ((unsigned short)31)))) / (((/* implicit */int) (unsigned char)255))));
            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (var_5))))) ? (((/* implicit */int) (unsigned char)247)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) >= (((/* implicit */int) (unsigned char)255))))) : (((((/* implicit */_Bool) (unsigned short)9199)) ? (var_1) : (((/* implicit */int) arr_5 [i_1]))))))));
        }
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned short)8), (((/* implicit */unsigned short) (unsigned char)8))))) || (((/* implicit */_Bool) ((unsigned short) 1561847224809592626ULL))))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)26)) ? (739964285U) : (4294967295U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [0] [i_1]))) : (var_10)))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            for (signed char i_4 = 3; i_4 < 8; i_4 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)8))) ? (((/* implicit */int) var_11)) : ((+(((/* implicit */int) arr_1 [i_1]))))))), (min((((/* implicit */unsigned long long int) 755855128U)), (((((/* implicit */_Bool) (signed char)-1)) ? (1410295275882298031ULL) : (((/* implicit */unsigned long long int) 1U))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            {
                                var_19 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)9188)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_2)))))));
                                arr_19 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) 1ULL))) >= (((/* implicit */int) ((((/* implicit */unsigned int) 262143)) == (arr_13 [i_4 + 2] [i_6] [(_Bool)1] [3ULL]))))));
                                var_20 += ((/* implicit */int) ((((/* implicit */unsigned long long int) 755855128U)) % (((unsigned long long int) (unsigned char)7))));
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) 4946932997185708072ULL))));
                            }
                        } 
                    } 
                    arr_20 [i_1] [i_3] [8ULL] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (var_1)))))))));
                    var_22 *= ((/* implicit */unsigned short) 0ULL);
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 1; i_7 < 9; i_7 += 1) 
                    {
                        var_23 |= ((/* implicit */int) 755855128U);
                        arr_24 [i_1] [i_1] = ((/* implicit */int) 4294967295U);
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((long long int) ((int) arr_21 [(signed char)4] [i_7 + 1] [i_4 + 1]))))));
                        var_25 = ((/* implicit */int) (_Bool)1);
                        var_26 = ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_4 - 2])) > (((/* implicit */int) (signed char)107))))) - ((+(((/* implicit */int) arr_2 [i_4 + 2])))));
                    }
                    for (short i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) % (((/* implicit */int) ((_Bool) arr_10 [i_4 + 2] [i_1] [i_4])))));
                        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (unsigned short)52858))));
                        arr_28 [i_8] [i_8] [i_1] [i_1] [i_3] [i_1] = ((signed char) var_3);
                        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)56323)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_18 [i_4 - 1] [i_4 + 2] [i_4 - 2] [i_4 + 1] [i_4] [i_4] [i_4 - 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -262144)) || (((/* implicit */_Bool) var_3)))))) : ((+(12902292615959458646ULL)))));
                    }
                }
            } 
        } 
        arr_29 [i_1] = ((/* implicit */unsigned short) var_9);
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 1; i_9 < 22; i_9 += 1) 
    {
        var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((unsigned char) (-2147483647 - 1))))));
        var_31 = ((/* implicit */unsigned long long int) (_Bool)1);
        /* LoopSeq 1 */
        for (unsigned short i_10 = 1; i_10 < 22; i_10 += 2) 
        {
            var_32 = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) - (((/* implicit */int) arr_35 [i_9 - 1] [3ULL] [i_10]))));
            /* LoopSeq 1 */
            for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 1) 
            {
                var_33 = ((/* implicit */signed char) ((_Bool) ((short) (_Bool)1)));
                arr_39 [i_9] = ((_Bool) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) arr_35 [i_11] [(_Bool)1] [i_9 - 1]))));
                var_34 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (short)-13434))) - (((/* implicit */int) ((_Bool) var_5)))));
                /* LoopSeq 3 */
                for (unsigned short i_12 = 0; i_12 < 23; i_12 += 3) 
                {
                    arr_42 [i_9] [i_9] [19ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((int) arr_37 [i_10 - 1] [i_10 - 1] [i_11]))) != (arr_31 [i_10 - 1])));
                    arr_43 [i_12] [i_11] [i_9] [i_9] [i_9] [3ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (59509238)));
                    var_35 = ((/* implicit */_Bool) ((-6317073067817899744LL) - (((/* implicit */long long int) (+(((/* implicit */int) var_0)))))));
                }
                for (unsigned char i_13 = 4; i_13 < 20; i_13 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_14 = 0; i_14 < 23; i_14 += 2) 
                    {
                        var_36 = ((/* implicit */unsigned long long int) -19);
                        var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) 262143)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_10 + 1] [i_10 + 1] [i_9 + 1] [i_9 + 1])))));
                        var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) (unsigned char)230))));
                    }
                    var_39 = ((/* implicit */int) ((unsigned int) (signed char)9));
                }
                for (short i_15 = 0; i_15 < 23; i_15 += 4) 
                {
                    var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_31 [i_9 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_0)))) : (arr_31 [i_9])));
                    arr_50 [i_9] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (var_9))));
                    /* LoopSeq 2 */
                    for (unsigned char i_16 = 0; i_16 < 23; i_16 += 2) 
                    {
                        arr_54 [i_9] [i_15] [i_11] [i_9 + 1] [i_9] = ((/* implicit */long long int) var_4);
                        arr_55 [i_16] [i_9] [i_16] [i_16] [i_16] = ((/* implicit */unsigned int) var_11);
                        var_41 = ((/* implicit */int) ((((/* implicit */_Bool) arr_53 [i_9] [i_9 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)107))) : (var_5)));
                        var_42 -= ((/* implicit */unsigned int) 18446744073709551615ULL);
                        arr_56 [i_16] [i_9] [i_9] [i_9 + 1] = ((/* implicit */unsigned char) 12734617680004674353ULL);
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 23; i_17 += 4) 
                    {
                        var_43 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6546961260795023964ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (3047638052809950627ULL)))) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) ((short) (_Bool)1)))));
                        arr_60 [i_9] [i_9] [i_9] [(unsigned char)6] [i_9] [1LL] = ((/* implicit */unsigned long long int) ((short) var_2));
                    }
                }
            }
        }
    }
    var_44 = ((/* implicit */long long int) var_0);
}
