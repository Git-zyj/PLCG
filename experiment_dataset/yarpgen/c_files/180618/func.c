/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180618
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_10 = ((/* implicit */signed char) ((max((((/* implicit */unsigned int) (unsigned short)16256)), (0U))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
        var_11 *= ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))), (((unsigned long long int) var_9)))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) -1717166435)), (4294967295U)))) ? (1717166416) : (((((/* implicit */_Bool) -2LL)) ? ((-2147483647 - 1)) : (var_5))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [i_1] = max((((/* implicit */unsigned long long int) (unsigned char)245)), (((max((((/* implicit */unsigned long long int) 12U)), (806640567103492888ULL))) % (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 1592055195U)), (var_9)))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        arr_12 [i_1] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((max(((_Bool)1), ((_Bool)1))) ? (max((arr_3 [i_3 - 1] [i_3 - 1]), (arr_3 [i_3 - 1] [i_3 - 1]))) : (((((/* implicit */_Bool) 4722348229847879577ULL)) ? (1572864LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                        arr_13 [i_1] [i_1] [i_1] [i_3] [i_3] [i_2] = ((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */unsigned long long int) -18LL)), (18446744073709551615ULL))));
                        var_12 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_5 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 + 1])) ? (((((/* implicit */_Bool) 249242699U)) ? (17580180840261461051ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4045724605U)))))))) % (((/* implicit */unsigned long long int) ((((4294967295U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16208))))) ? (((/* implicit */int) (unsigned short)57839)) : (-1717166442))))));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] &= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : (var_3))));
                            var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_10 [i_0] [i_1] [i_2] [i_4] [i_2] [i_5]))))))));
                            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) var_5))))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_2] [i_5] [i_2] [i_4])) && (((/* implicit */_Bool) var_8))))))))));
                        }
                        var_15 = ((/* implicit */unsigned char) ((1020) < (((((/* implicit */int) (unsigned short)16208)) / (((/* implicit */int) (unsigned short)32768))))));
                        arr_21 [i_1] [i_2] [(_Bool)1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_4])) ? (23U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))));
                    }
                }
            } 
        } 
        arr_22 [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65512)) ? (0U) : (267911168U)))) ? (var_4) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))));
        var_16 = ((/* implicit */signed char) var_9);
    }
    for (signed char i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_7 = 0; i_7 < 20; i_7 += 4) 
        {
            arr_31 [(_Bool)1] [i_7] = ((/* implicit */_Bool) max((max((0U), (((/* implicit */unsigned int) (_Bool)1)))), (arr_4 [i_6])));
            arr_32 [i_7] [i_6] [i_6] = ((/* implicit */unsigned char) (_Bool)1);
            var_17 = ((/* implicit */long long int) 4294967276U);
        }
        for (unsigned char i_8 = 0; i_8 < 20; i_8 += 4) 
        {
            var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_23 [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_3))) >> (((((((/* implicit */_Bool) 1275164895U)) ? (((127LL) % (var_9))) : (((/* implicit */long long int) -1835303292)))) - (82LL)))));
            arr_35 [i_6] [i_8] [i_6] = ((/* implicit */_Bool) var_4);
        }
        var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (_Bool)1)), (max((max((((/* implicit */unsigned long long int) (_Bool)1)), (var_2))), (((((/* implicit */_Bool) arr_23 [i_6])) ? (((/* implicit */unsigned long long int) arr_25 [i_6] [i_6])) : (12071705644052663611ULL)))))));
        /* LoopSeq 1 */
        for (int i_9 = 1; i_9 < 18; i_9 += 1) 
        {
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (unsigned char)37)), (((max((((/* implicit */unsigned long long int) var_1)), (var_4))) << (((var_6) - (7459331302585638869LL))))))))));
            var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 806640567103492906ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)192))) : (8895445633801187414LL)));
            var_22 = ((/* implicit */_Bool) max(((+(max((-6700606862568507108LL), (((/* implicit */long long int) 1850995920U)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (var_3)))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) 1697818249)) : (943755328U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_33 [i_6])))))))));
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 4045724613U)) || (((/* implicit */_Bool) 4045724613U)))))) % ((~(((((/* implicit */_Bool) -3401702194455022877LL)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (_Bool)1)))))))))));
        }
        arr_39 [i_6] [i_6] = ((((arr_26 [i_6]) % (((/* implicit */int) arr_9 [i_6] [i_6] [i_6] [(signed char)14] [i_6] [i_6])))) | (arr_36 [i_6] [i_6] [i_6]));
    }
    for (unsigned char i_10 = 0; i_10 < 21; i_10 += 1) 
    {
        arr_44 [i_10] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (unsigned char)72)) / (1964260671)))));
        arr_45 [i_10] = ((unsigned long long int) (((+(var_3))) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    }
    var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4045724613U)) ? (-1208732313236972371LL) : (var_3)))) >= (15232445674993719961ULL))) || (((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned int) (signed char)1))), (((((/* implicit */long long int) -1697818235)) - (var_6))))))));
}
