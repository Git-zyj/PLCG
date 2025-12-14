/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102499
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned short) ((short) arr_4 [i_0] [i_0]))), (arr_2 [i_0] [6U])));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 4; i_2 < 15; i_2 += 3) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 2; i_4 < 13; i_4 += 4) 
                        {
                            arr_12 [i_0] [i_1] = ((/* implicit */signed char) (+((((!(((/* implicit */_Bool) 2199181089U)))) ? (((/* implicit */int) (_Bool)1)) : (arr_9 [9LL] [i_2 - 4] [9LL] [i_0] [i_4])))));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) 601804210)) ? (max((max((((/* implicit */long long int) (short)19338)), (1816995382980197647LL))), (((/* implicit */long long int) min((-601804215), (601804207)))))) : (((((((/* implicit */_Bool) arr_9 [(signed char)1] [(signed char)1] [i_2] [i_0] [i_2])) || (((/* implicit */_Bool) -1356364099)))) ? (arr_11 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((-506342548) == (((/* implicit */int) arr_0 [9U]))))))))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((4170222220U), (((/* implicit */unsigned int) -1694590245))))) ? (max((max((((/* implicit */unsigned int) 601804214)), (4170222212U))), (max((((/* implicit */unsigned int) arr_3 [i_0])), (4170222220U))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [9] [i_0] [i_0])))));
                        }
                        for (unsigned short i_5 = 3; i_5 < 13; i_5 += 4) 
                        {
                            var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) -601804216)) ? (601804214) : (((/* implicit */int) arr_15 [i_0] [i_0] [10ULL] [i_0] [i_3] [(short)14])))), (((/* implicit */int) arr_6 [i_2 - 2] [i_2] [(_Bool)1]))))) | (15224687321695167495ULL)));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [4] [i_0] [i_0] = ((/* implicit */signed char) max((((unsigned long long int) max((arr_5 [7] [i_2 + 1]), (((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_1] [i_0] [i_5 - 1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((4039074721U), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */int) (short)239)) : ((((_Bool)1) ? (((/* implicit */int) arr_13 [(signed char)13] [(signed char)13] [(signed char)13] [i_3] [i_3])) : (arr_9 [(short)11] [i_0] [8U] [i_0] [i_0]))))))));
                            arr_17 [i_0] [i_1] [7LL] [i_1] [11] [i_0] [i_5] = ((/* implicit */short) max((((/* implicit */unsigned long long int) 1498987221)), (max((((/* implicit */unsigned long long int) (unsigned short)64511)), ((~(9613230538396890536ULL)))))));
                        }
                        var_23 = ((/* implicit */short) 1049255421);
                    }
                    for (unsigned short i_6 = 1; i_6 < 14; i_6 += 3) 
                    {
                        arr_22 [i_0] [i_1] [i_2] [i_6] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_0] [i_0] [i_2] [8U] [i_0]))));
                        var_24 = ((/* implicit */int) min((var_24), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_2 - 3] [i_1] [i_2 - 3] [i_6 + 1] [i_6 + 1] [i_2])) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)0)), (-213617667)))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (13911834864463048489ULL)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)0) ? (arr_5 [i_1] [i_2 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-114)))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [0LL] [0LL])), (8833513535312661062ULL))))))) : (((/* implicit */int) (short)-7598))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            arr_25 [i_0] [i_1] [i_1] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */int) (short)-7598)) : (((/* implicit */int) (_Bool)1))));
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */int) (short)8755)) : (1187583768)))) / (331355028960094850LL)));
                        }
                    }
                    for (int i_8 = 3; i_8 < 15; i_8 += 1) 
                    {
                        var_26 = ((((arr_20 [i_0] [i_2 - 4] [i_8 + 1] [i_8 + 1] [i_1]) ? (601804216) : (((/* implicit */int) (_Bool)1)))) + (((arr_20 [i_0] [i_2 - 4] [i_8 + 1] [i_8 + 1] [i_8 - 2]) ? (((/* implicit */int) arr_20 [i_0] [i_2 - 4] [i_8 + 1] [i_8 + 1] [6ULL])) : (((/* implicit */int) arr_20 [i_0] [i_2 - 4] [i_8 + 1] [i_2 - 4] [i_0])))));
                        var_27 = (~(601804216));
                        arr_28 [i_0] [(short)6] [i_0] [i_0] = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) max((316006501U), (((/* implicit */unsigned int) (short)1024))))), (max((((/* implicit */unsigned long long int) (short)-1025)), (arr_18 [i_2] [i_2] [i_2] [i_8]))))) & (((2576833871533454890ULL) | (((/* implicit */unsigned long long int) 1663041883))))));
                        arr_29 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((int) max((((/* implicit */unsigned short) (short)32757)), ((unsigned short)63522))))), (max((((/* implicit */long long int) min(((_Bool)0), ((_Bool)0)))), (((long long int) arr_7 [0U] [0U] [i_2] [i_8]))))));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        arr_32 [i_0] [i_1] [i_2 - 2] [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) arr_1 [i_9 - 1]))) ? ((-(((/* implicit */int) (_Bool)1)))) : (max((((/* implicit */int) (unsigned char)182)), (((((/* implicit */_Bool) 2808571721398058429LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                        var_28 = min((-679731870), (min((((/* implicit */int) (_Bool)0)), (max((arr_21 [i_0] [i_0] [i_0] [i_0]), (0))))));
                    }
                    for (short i_10 = 3; i_10 < 15; i_10 += 1) 
                    {
                        arr_35 [6] [i_1] [i_2] [i_1] [i_1] [6] |= ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1985)) ? (((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [(short)12])) : (((/* implicit */int) (_Bool)1))))) ? ((+(3477083412U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_10] [i_1] [i_1] [i_1] [11])))))));
                        arr_36 [i_0] [i_0] = max((((/* implicit */unsigned short) arr_6 [i_0] [i_2] [i_2])), (arr_2 [i_0] [i_0]));
                    }
                    for (short i_11 = 2; i_11 < 14; i_11 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)24), (((/* implicit */signed char) (_Bool)0)))))) ^ (max((1ULL), (((/* implicit */unsigned long long int) arr_19 [i_11] [i_0] [i_1] [i_0]))))))) ? (((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [i_0])) : (arr_21 [i_11] [i_11] [i_11] [i_0])))) : (max((((/* implicit */long long int) arr_1 [i_11])), (140737488355296LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_38 [i_0] [i_1] [(_Bool)1] [(signed char)0])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max((((/* implicit */signed char) arr_26 [i_0] [i_1] [i_11] [i_0])), ((signed char)27)))) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_2 - 2] [i_11 - 1] [i_2 - 2])))))));
                        var_30 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [(_Bool)1])) ? (((/* implicit */unsigned long long int) -7663272389054961028LL)) : (7420741023042807797ULL)))) ? (((/* implicit */int) arr_27 [i_11] [i_2 - 1] [0U] [i_0] [i_0])) : (((/* implicit */int) arr_39 [i_0] [i_0] [(unsigned short)2] [i_0])));
                        var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) min((5342055076045826802ULL), (arr_18 [i_0] [(short)13] [i_2] [(_Bool)1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14488))) : (((unsigned long long int) -5650258222938457164LL))))))));
                    }
                    var_32 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (min((2120898707U), (((/* implicit */unsigned int) (short)-16937)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) arr_4 [4LL] [12U])), ((signed char)-48))))))))));
                }
                for (long long int i_12 = 2; i_12 < 14; i_12 += 3) 
                {
                    arr_42 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 11026003050666743819ULL)) ? (((long long int) max((arr_20 [i_0] [i_12] [i_1] [15] [i_0]), ((_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), (max((((/* implicit */unsigned short) (_Bool)1)), (arr_2 [i_0] [2U])))))))));
                    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) 3133403571U)) && ((_Bool)1)));
                }
                /* LoopSeq 1 */
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    arr_45 [i_0] [(short)3] [i_13] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) 601804216)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (274877906942LL))));
                    var_34 = ((/* implicit */_Bool) max((arr_6 [3] [i_1] [i_1]), (arr_13 [i_0] [i_1] [i_1] [i_1] [13])));
                }
                var_35 = ((/* implicit */short) max((max((7420741023042807796ULL), (10080054048983252253ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
            }
        } 
    } 
    var_36 = ((/* implicit */short) var_1);
}
