/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102779
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
    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? ((~(((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_2)) : (-562578592))))))));
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((unsigned long long int) arr_0 [6U])))));
        var_20 -= ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_3) : (((/* implicit */unsigned long long int) 1754406768U))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) arr_1 [i_0])) : (arr_0 [i_0])))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52432))) : (var_9))))) * (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_6))))))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_16))))))) : (((/* implicit */int) ((unsigned char) (-(var_5)))))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 1; i_2 < 7; i_2 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_3 = 2; i_3 < 8; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) var_4);
                            arr_16 [i_1 - 2] [i_2 + 1] [i_1] [i_4] [i_5] = ((/* implicit */unsigned int) (~(((int) max((((/* implicit */unsigned long long int) (signed char)90)), (var_11))))));
                        }
                    } 
                } 
            } 
            var_23 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((unsigned short) 0)))))) ? (((/* implicit */int) ((short) ((((/* implicit */unsigned int) 0)) / (3354966817U))))) : (((/* implicit */int) ((((((/* implicit */int) var_14)) > (var_13))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) + (var_3))))))));
            var_24 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_4 [8])) / (((/* implicit */int) arr_4 [8LL])))))));
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) 0)) : (0ULL)));
                        arr_23 [(short)10] [10LL] [i_6] [10LL] &= ((/* implicit */int) var_1);
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 2) 
        {
            for (int i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                {
                    var_26 = ((/* implicit */short) ((unsigned long long int) var_11));
                    arr_29 [i_1] [i_8] [i_1] [i_1] = ((/* implicit */unsigned long long int) (short)(-32767 - 1));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_10 = 1; i_10 < 10; i_10 += 4) 
                    {
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 - 2] [i_1 - 2])) ? (((/* implicit */unsigned long long int) arr_5 [i_1 + 1] [i_1 + 1])) : (var_7)))) ? (max((arr_5 [i_1 + 1] [i_1 - 1]), (((/* implicit */long long int) var_1)))) : ((+(arr_5 [i_1 - 1] [i_1 + 1])))));
                        var_28 = ((/* implicit */unsigned short) (-(max((((((/* implicit */_Bool) -1988810522)) ? (arr_1 [4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))), (arr_31 [i_1])))));
                        arr_32 [i_1 - 3] [i_1 - 3] [i_1] = ((/* implicit */unsigned char) var_15);
                        arr_33 [i_1] [i_1] [1ULL] [i_1] [(signed char)3] [i_1] = ((/* implicit */unsigned int) (_Bool)1);
                        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((((8414987935101262080ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) * (((/* implicit */unsigned long long int) (-(6436579066226908281LL)))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) (short)-28182)) ? (((/* implicit */int) arr_18 [i_1] [i_1] [i_9] [4])) : (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) (_Bool)1))))))))))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 11; i_11 += 2) 
                    {
                        arr_37 [i_8] [(unsigned short)9] [i_1] [i_11] [6U] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_1] [i_1 - 3] [i_1] [i_1] [4U] [(unsigned short)6] [i_1])) ? (((arr_4 [i_1]) ? (1541810874) : (var_13))) : (((((/* implicit */_Bool) arr_5 [(short)4] [8U])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)0))))));
                        var_30 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6184))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) + (var_15)))));
                    }
                    for (short i_12 = 0; i_12 < 11; i_12 += 1) 
                    {
                        var_31 = ((/* implicit */long long int) max((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)-29759)))), (((/* implicit */unsigned long long int) ((_Bool) var_4)))));
                        arr_41 [i_9] [i_1] [i_1] = ((/* implicit */unsigned char) (((-(((unsigned int) var_12)))) > (((/* implicit */unsigned int) ((/* implicit */int) var_16)))));
                        var_32 -= ((/* implicit */long long int) ((short) (-(((((/* implicit */_Bool) (short)32756)) ? (((/* implicit */int) (short)120)) : (arr_28 [i_8] [8U] [(_Bool)1] [i_12]))))));
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)37)) : (((/* implicit */int) (signed char)-44))));
                        var_34 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (18446744073709551591ULL) : (18446744073709551591ULL)))))) ? (((unsigned int) arr_9 [i_1] [i_1 - 1] [i_1 - 1] [i_12] [i_1])) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) 6010035565197073731LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_12))))))));
                    }
                }
            } 
        } 
        var_35 = ((((((((/* implicit */_Bool) var_2)) ? (2228149595U) : (4294967295U))) * (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_19 [(unsigned char)10])), (var_6))))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18ULL)) ? (((/* implicit */int) (short)10921)) : (((/* implicit */int) (signed char)-49))))));
        var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) var_10))) < (((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1] [(unsigned char)3])) ? (((/* implicit */int) var_14)) : (var_13)))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) : (((((/* implicit */_Bool) var_11)) ? (arr_25 [8ULL] [i_1 - 3]) : (arr_20 [(unsigned short)6] [(short)10] [10ULL]))))))))));
    }
    for (long long int i_13 = 2; i_13 < 16; i_13 += 3) 
    {
        var_37 = ((/* implicit */short) var_10);
        var_38 = ((/* implicit */unsigned int) min((var_38), ((-(((((/* implicit */_Bool) min((((/* implicit */short) (signed char)-21)), (arr_42 [i_13 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)32767), ((short)(-32767 - 1)))))) : (((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_43 [i_13 - 1])))))))));
    }
    var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) var_13))));
    var_40 |= ((/* implicit */unsigned char) var_7);
    var_41 = ((/* implicit */int) max((var_41), ((-2147483647 - 1))));
}
