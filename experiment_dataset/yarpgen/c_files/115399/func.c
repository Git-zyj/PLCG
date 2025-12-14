/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115399
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
    var_11 = ((/* implicit */unsigned long long int) (short)(-32767 - 1));
    var_12 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((unsigned short) var_6))) ? (var_3) : (max((((/* implicit */unsigned long long int) var_8)), (var_3))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */int) var_8))))) <= (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (var_3))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */_Bool) ((short) arr_4 [i_0]));
                /* LoopSeq 4 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_14 += ((/* implicit */unsigned short) ((((var_10) == (((/* implicit */unsigned int) (-2147483647 - 1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_4 [i_2])), ((short)18030))))) | (max((var_10), (2213064464U)))))) : ((~(9974430448458886610ULL)))));
                        arr_11 [i_0] [i_1 + 2] [i_2] [i_0] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) 9974430448458886610ULL)) ? (((/* implicit */int) (signed char)-12)) : (1731731062))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 18; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 2; i_5 < 18; i_5 += 4) 
                        {
                            {
                                var_15 += ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_1 [i_2]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_4 - 1] [i_5] [i_4] [i_5])))))) ? (((/* implicit */int) ((signed char) arr_17 [i_0] [i_5] [6U] [i_0] [10U]))) : (((/* implicit */int) arr_3 [i_5 + 1] [i_4 - 1] [i_4]))))), (min((max((8483568048663526228ULL), (((/* implicit */unsigned long long int) 837023950U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (-5370601409092937525LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))))));
                                var_16 = min((((/* implicit */unsigned long long int) (~(arr_10 [i_2] [i_0] [i_2] [i_2])))), (min((max((var_5), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_2] [(unsigned short)5])))), (((unsigned long long int) var_6)))));
                                arr_18 [i_0] [4ULL] [i_2] [i_4] [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) ((int) arr_6 [i_4 - 2] [i_0] [11] [i_1 + 2]))), (min((((/* implicit */long long int) ((unsigned int) arr_14 [0U] [i_4] [i_0] [i_0] [i_0]))), ((+(-5370601409092937525LL)))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_6 = 4; i_6 < 18; i_6 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_24 [i_0] [i_0] [i_6] [i_7] = ((/* implicit */_Bool) (~(min((((((/* implicit */_Bool) arr_10 [i_7] [i_0] [i_0] [i_7])) ? (((/* implicit */int) arr_20 [i_7] [i_1] [i_0] [i_6])) : (var_7))), (min((-1167894309), (((/* implicit */int) var_8))))))));
                        var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_23 [i_0] [i_6 - 3] [i_0] [i_7] [i_1 + 1] [3ULL])) ? (((/* implicit */int) arr_23 [i_0] [i_6 - 4] [i_0] [i_7] [i_1 + 1] [i_0])) : (((/* implicit */int) arr_23 [(signed char)17] [i_6 - 3] [i_0] [i_6 - 3] [i_1 + 1] [i_1])))) + (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */int) (signed char)38)) : (-1967687326)))) && (((/* implicit */_Bool) 2003629614U)))))));
                        arr_25 [15U] [i_1 + 2] [16] [i_1 + 1] [i_0] = ((/* implicit */short) (+(min((((14260102133320196733ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((7910835051207435614ULL) - (var_3)))))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        arr_29 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((unsigned int) var_10))));
                        var_18 = ((/* implicit */unsigned int) ((unsigned long long int) (short)(-32767 - 1)));
                    }
                }
                for (unsigned int i_9 = 0; i_9 < 19; i_9 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 19; i_10 += 3) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 19; i_11 += 3) 
                        {
                            {
                                arr_39 [i_0] [i_1] [i_0] [(short)8] [(unsigned short)8] = ((/* implicit */short) (~(min((((/* implicit */int) var_8)), (((((/* implicit */_Bool) arr_36 [i_0])) ? (((/* implicit */int) arr_2 [(unsigned short)18])) : (((/* implicit */int) (short)18030))))))));
                                arr_40 [i_11] [(_Bool)1] [i_0] [i_1 + 1] [i_0] = ((/* implicit */unsigned long long int) (((+(((arr_6 [i_1] [i_0] [(signed char)6] [i_10]) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))))) * (((((/* implicit */_Bool) ((536870908) / (((/* implicit */int) var_2))))) ? ((-(2540670245U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_0] [i_1 + 2] [i_9] [i_10])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)0)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 2; i_12 < 16; i_12 += 1) 
                    {
                        for (unsigned long long int i_13 = 4; i_13 < 15; i_13 += 4) 
                        {
                            {
                                var_19 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((arr_14 [i_9] [(short)7] [i_12 + 1] [i_13 - 3] [i_13]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_6 [i_12] [i_13] [i_12 + 2] [i_13 - 3])))), (((unsigned long long int) max(((unsigned short)61657), (((/* implicit */unsigned short) (signed char)-35)))))));
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18031)) ? (((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (short)(-32767 - 1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_9] [15ULL] [i_9] [7ULL])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))) : ((+(arr_19 [i_0] [i_1]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) var_5))) ^ (((int) var_4))))))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_14 = 1; i_14 < 18; i_14 += 3) 
                {
                    var_21 ^= ((/* implicit */unsigned short) (short)-7372);
                    var_22 ^= ((/* implicit */short) (((~(((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */unsigned long long int) 875783925U)))))) == ((~(min((((/* implicit */unsigned long long int) (unsigned short)15)), (var_3)))))));
                    arr_50 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_19 [i_1 + 2] [i_1 - 1]), (arr_19 [i_1 - 1] [i_1 + 1])))) ? (((var_10) << (((var_5) - (12317215061470349194ULL))))) : (max((((/* implicit */unsigned int) (unsigned short)22723)), (arr_19 [i_1 - 1] [i_1 - 1])))));
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (signed char i_16 = 1; i_16 < 18; i_16 += 2) 
                        {
                            {
                                arr_55 [i_0] [i_0] [i_16] [i_16 - 1] [i_16] [i_0] [i_16 - 1] = (((+(19ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(-841432965)))) ? ((+(841432964))) : (((/* implicit */int) (_Bool)1))))));
                                arr_56 [i_0] [i_1] [i_14] [i_15] [i_16] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_34 [i_0]), (var_2)))) ? (((/* implicit */unsigned long long int) ((min((var_7), (((/* implicit */int) var_8)))) / (((((/* implicit */int) var_0)) + (((/* implicit */int) (unsigned short)42818))))))) : (max((((/* implicit */unsigned long long int) arr_14 [i_1 + 2] [i_14] [i_14 + 1] [i_14] [i_16 - 1])), (arr_43 [i_1 + 2] [i_14 - 1] [i_14 - 1])))));
                                arr_57 [i_0] [i_0] [0U] [i_16] [i_16 + 1] = ((/* implicit */unsigned char) var_10);
                                var_23 = ((/* implicit */signed char) min((min((min((((/* implicit */unsigned long long int) arr_15 [i_0] [(unsigned short)10] [(short)15] [i_0] [i_14])), (arr_43 [i_0] [i_1] [(unsigned short)7]))), (((/* implicit */unsigned long long int) min((-1967687325), (((/* implicit */int) (short)1557))))))), (((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) arr_33 [i_0] [i_1 + 2] [i_14] [i_15])), (arr_15 [i_0] [i_0] [i_0] [i_0] [(unsigned short)10]))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_51 [i_15] [i_15] [i_15] [i_15] [i_15]))))))))));
                            }
                        } 
                    } 
                    arr_58 [(signed char)2] [i_0] [i_14 + 1] = ((/* implicit */short) ((((((/* implicit */int) arr_45 [i_14] [i_14 - 1] [i_0] [14U])) <= (((/* implicit */int) (short)-19999)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (min((((/* implicit */unsigned long long int) arr_45 [i_14 - 1] [i_14 - 1] [i_0] [i_14 - 1])), (var_5)))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */short) max((var_3), (var_3)));
    /* LoopNest 2 */
    for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 2) 
    {
        for (short i_18 = 0; i_18 < 16; i_18 += 1) 
        {
            {
                var_25 ^= ((/* implicit */unsigned int) max((((((/* implicit */int) min((arr_54 [i_17] [i_18] [i_17] [i_17] [i_17] [i_18]), (arr_47 [i_17] [(short)6] [i_17])))) <= (((/* implicit */int) ((var_7) >= (((/* implicit */int) (signed char)(-127 - 1)))))))), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)38987)) > (((/* implicit */int) (unsigned short)29631)))))) < (arr_28 [i_17] [i_18] [12U] [(unsigned short)4])))));
                arr_66 [0ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [(signed char)10] [i_18] [i_18] [i_18] [i_18])) + ((-(((/* implicit */int) (short)-1558))))))) ? (((long long int) ((int) 89921092U))) : (((/* implicit */long long int) ((((/* implicit */int) arr_26 [i_17])) - (((/* implicit */int) arr_26 [i_17])))))));
            }
        } 
    } 
}
