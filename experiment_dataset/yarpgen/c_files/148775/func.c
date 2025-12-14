/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148775
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
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 2; i_2 < 15; i_2 += 2) /* same iter space */
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) -395736392);
                    var_10 ^= ((/* implicit */unsigned char) (!(((((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 1578992959U)) : (68718952448ULL))) > (((((/* implicit */_Bool) 1677419863)) ? (var_8) : (((/* implicit */unsigned long long int) 1628791357))))))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7804103250313331481ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) -1494392812)) ? (((/* implicit */unsigned int) -1628791353)) : (327585576U)))))) ? (((var_9) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 - 1] [(signed char)13]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 288230376151711744ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1 + 1] [i_2]))) : (9829537253685186564ULL)))) ? (0ULL) : (((/* implicit */unsigned long long int) (~(-1494392812))))))));
                }
                for (short i_3 = 2; i_3 < 15; i_3 += 2) /* same iter space */
                {
                    var_11 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) 2397532756U)))))) ? (((8820563012869609372ULL) >> (((/* implicit */int) (signed char)32)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) -8442721981755324395LL))))))));
                    var_12 = (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1] [(signed char)10])) ? (1677419863) : (1628791357))), (((/* implicit */int) (short)32229))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (-1628791353) : (-555748246)))) ? (max((((/* implicit */unsigned long long int) (short)23994)), (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
                    arr_11 [i_1] = ((((/* implicit */_Bool) var_9)) ? ((((-(((/* implicit */int) (short)-9347)))) % (((/* implicit */int) var_2)))) : (((/* implicit */int) (short)-11094)));
                }
                for (short i_4 = 2; i_4 < 15; i_4 += 2) /* same iter space */
                {
                    var_13 = ((/* implicit */unsigned int) ((int) var_8));
                    var_14 = ((/* implicit */unsigned long long int) 699055975);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 16; i_5 += 2) 
                    {
                        for (long long int i_6 = 1; i_6 < 14; i_6 += 2) 
                        {
                            {
                                arr_20 [i_0] [i_0] [i_1] = ((/* implicit */int) (short)18256);
                                arr_21 [i_0] [i_1] [3ULL] [i_1] [i_6 - 1] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)118)) || (((/* implicit */_Bool) 8820563012869609373ULL))))) - (((min((873017450), (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) % (((/* implicit */int) ((unsigned short) (short)15369)))))));
                                arr_22 [i_0] [i_0] [i_1] = ((/* implicit */int) (short)16384);
                            }
                        } 
                    } 
                }
                arr_23 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_19 [i_0] [i_0] [(unsigned char)13]) : (var_6)))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14279)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_7 = 2; i_7 < 16; i_7 += 1) 
    {
        for (long long int i_8 = 3; i_8 < 17; i_8 += 3) 
        {
            {
                var_15 ^= ((/* implicit */int) ((short) ((unsigned char) (short)18256)));
                /* LoopSeq 2 */
                for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 2) /* same iter space */
                {
                    var_16 = ((((/* implicit */_Bool) 8442721981755324379LL)) ? (((((((/* implicit */_Bool) var_3)) ? (677898968U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)16384))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_2)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)13052))));
                    arr_34 [i_7] [i_8] = ((/* implicit */signed char) ((unsigned char) max(((short)9346), (((/* implicit */short) (signed char)-7)))));
                    arr_35 [i_9] |= ((((int) (short)-4593)) % (((/* implicit */int) (signed char)-64)));
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        for (unsigned int i_11 = 1; i_11 < 15; i_11 += 4) 
                        {
                            {
                                arr_41 [i_8] = ((/* implicit */unsigned int) -1628791358);
                                var_17 = ((/* implicit */unsigned char) (short)-14279);
                                var_18 ^= ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_37 [10U] [i_9] [i_10] [i_11])) || (((/* implicit */_Bool) -1628791358)))) ? (var_0) : (max((var_0), (((/* implicit */long long int) var_5)))))) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))));
                                var_19 ^= ((/* implicit */short) ((((int) ((((/* implicit */int) (short)-24007)) * (((/* implicit */int) (short)31290))))) == (arr_28 [13ULL] [12])));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 2) /* same iter space */
                {
                    var_20 = ((/* implicit */short) 2147483647);
                    arr_45 [i_8] [i_8 - 3] = ((/* implicit */unsigned long long int) 1628791384);
                    var_21 -= max((min((((/* implicit */int) ((short) (unsigned char)24))), (((((/* implicit */_Bool) arr_28 [i_7] [i_7])) ? (((/* implicit */int) arr_43 [(signed char)3] [i_8] [1U] [i_8])) : (((/* implicit */int) (short)16383)))))), (((/* implicit */int) min((arr_43 [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]), (var_7)))));
                    /* LoopSeq 2 */
                    for (int i_13 = 0; i_13 < 18; i_13 += 1) 
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */int) (short)4574))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18256))) : (var_9))) : (((/* implicit */unsigned long long int) -1535103882))))) ? (((/* implicit */int) ((var_8) <= (((/* implicit */unsigned long long int) var_0))))) : (max((((/* implicit */int) ((short) -1628791358))), (((((/* implicit */_Bool) (unsigned short)34785)) ? (((/* implicit */int) arr_42 [i_7 - 2] [i_7] [i_7 - 1] [i_7 + 1])) : (((/* implicit */int) arr_44 [i_7] [i_7]))))))));
                        var_23 = ((/* implicit */unsigned int) ((long long int) ((var_1) - (((/* implicit */int) arr_33 [i_7 + 2] [(short)12] [i_7 + 2])))));
                    }
                    for (int i_14 = 0; i_14 < 18; i_14 += 3) 
                    {
                        arr_52 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)15692)) ^ (((/* implicit */int) (short)-24006))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_3)))) | (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) -8442721981755324395LL)) : (6070296258500658647ULL))))) : (((max((((/* implicit */unsigned long long int) (short)-14280)), (var_8))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_7] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_12] [i_8 - 1])))))));
                        var_24 *= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_4)))))) + ((-9223372036854775807LL - 1LL))));
                    }
                }
            }
        } 
    } 
}
