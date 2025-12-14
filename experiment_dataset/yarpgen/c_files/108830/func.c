/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108830
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
    var_12 = ((/* implicit */unsigned short) var_7);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((_Bool) ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (_Bool)0))))) ? (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)-2)), (3667078212U)))), (arr_9 [2] [i_3] [i_1] [i_1] [i_3 - 1] [i_2]))) : (var_2)));
                        arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1180844186U)) / (10614054003619014044ULL)))) ? (1101278094) : (((int) 237164372U))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 1; i_4 < 18; i_4 += 3) 
                    {
                        var_13 -= ((/* implicit */long long int) arr_3 [i_0] [(unsigned short)16] [i_1]);
                        arr_15 [(signed char)8] [i_1] [i_1] = ((/* implicit */unsigned int) (unsigned char)138);
                        arr_16 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))));
                        arr_17 [i_0] [(unsigned short)13] [i_1] [i_4 - 1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_9)) : (var_2)));
                        /* LoopSeq 2 */
                        for (short i_5 = 0; i_5 < 19; i_5 += 4) 
                        {
                            arr_22 [i_5] [i_4] [i_1] [i_1] [i_0] = ((/* implicit */short) var_0);
                            arr_23 [i_4] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned int) -1659813313)) : (3162661107U))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-22)) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) (signed char)1)))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) / (1083582921)))) : (((((/* implicit */_Bool) var_3)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))));
                            arr_26 [i_6] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1872635895U)) ? (arr_24 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4] [15U]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-40)))));
                            var_15 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14805)) ? (1659813312) : (var_4)));
                        }
                    }
                    for (unsigned int i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        arr_31 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_10))));
                        arr_32 [i_2] [i_0] [i_0] [16ULL] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_6))) ? (var_4) : ((+(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) <= ((+(var_5))))))) : (max((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [17LL]), (((/* implicit */unsigned int) arr_2 [i_0] [i_7]))))));
                        var_16 = ((/* implicit */unsigned short) ((unsigned int) (((-(((/* implicit */int) var_7)))) - ((-(((/* implicit */int) arr_2 [i_0] [i_1])))))));
                        arr_33 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((var_6) << (((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))))) >= (max((((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))) / (arr_8 [(signed char)10] [i_1] [0U] [i_1] [9ULL]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)49)))))))));
                        /* LoopSeq 3 */
                        for (signed char i_8 = 0; i_8 < 19; i_8 += 1) 
                        {
                            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))) ? (min(((~(((/* implicit */int) var_10)))), (((/* implicit */int) min(((unsigned char)133), (((/* implicit */unsigned char) (_Bool)1))))))) : (max((((/* implicit */int) (_Bool)1)), (min((24299755), (((/* implicit */int) (signed char)1)))))))))));
                            var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) max(((unsigned char)138), (((/* implicit */unsigned char) (_Bool)0)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_7] [12ULL] [i_7] [i_8])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1))))) : (arr_27 [i_0] [i_0])));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [18U])) ? (((/* implicit */int) var_3)) : (var_5)))) || (((/* implicit */_Bool) min((97327979U), (((/* implicit */unsigned int) (unsigned char)117))))))))) & (var_6)));
                            arr_36 [i_1] [i_0] [i_1] = ((/* implicit */signed char) ((((unsigned int) 6169385850567712851ULL)) / (var_6)));
                        }
                        /* vectorizable */
                        for (unsigned int i_9 = 0; i_9 < 19; i_9 += 3) 
                        {
                            var_20 += var_10;
                            arr_41 [i_0] [i_0] [i_1] [10ULL] [(signed char)4] [i_9] [i_0] = ((/* implicit */unsigned short) arr_4 [i_0] [i_1]);
                        }
                        for (unsigned int i_10 = 3; i_10 < 17; i_10 += 4) 
                        {
                            arr_44 [i_1] [i_1] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (min((arr_13 [i_1] [i_10 - 1] [i_10 - 3] [i_10 - 1] [i_10 + 2] [i_10 - 2]), (((/* implicit */unsigned int) arr_20 [i_10] [i_10 + 1] [i_1] [i_10] [i_10 - 2] [i_10 - 1] [i_10 - 2])))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_11))))) : (((unsigned int) var_0))))));
                            arr_45 [i_1] [i_1] [i_2] [(_Bool)1] [i_10] = ((/* implicit */_Bool) (-(((((/* implicit */int) arr_37 [i_10] [i_10] [(unsigned short)4] [i_1] [i_10] [i_10 - 1] [i_10])) * ((((_Bool)1) ? (var_4) : (((/* implicit */int) arr_4 [i_0] [i_1]))))))));
                        }
                    }
                    for (unsigned int i_11 = 0; i_11 < 19; i_11 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_12 = 2; i_12 < 16; i_12 += 3) 
                        {
                            var_21 = min((min(((-(3953285969U))), (((/* implicit */unsigned int) ((var_8) - (((/* implicit */int) var_10))))))), (((/* implicit */unsigned int) (~(((/* implicit */int) max((var_7), (var_7))))))));
                            var_22 = ((/* implicit */_Bool) (+((+(arr_38 [i_1] [i_1] [i_12 + 2] [i_1] [(_Bool)1] [i_12] [14ULL])))));
                        }
                        /* vectorizable */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            arr_54 [i_0] [i_1] [i_1] [i_2] [i_11] [i_1] = ((/* implicit */signed char) var_3);
                            var_23 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_0))));
                            arr_55 [i_0] [i_1] = ((((/* implicit */_Bool) arr_38 [i_1] [i_1] [i_2] [i_2] [i_13] [i_0] [i_2])) ? (arr_38 [i_1] [i_0] [i_0] [i_1] [i_1] [i_11] [i_13]) : (((/* implicit */int) (signed char)-40)));
                        }
                        for (unsigned int i_14 = 0; i_14 < 19; i_14 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_2))));
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) arr_20 [i_0] [i_1] [i_0] [i_2] [i_11] [i_14] [i_14]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2422331400U)))) ? (max((var_2), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)81)) || (((/* implicit */_Bool) (signed char)-86)))))) + (((((/* implicit */_Bool) var_7)) ? (1872635895U) : (((/* implicit */unsigned int) 2147483647))))))))))));
                            var_26 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_2) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))))))));
                            arr_59 [i_0] [i_1] [i_1] [(_Bool)0] [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [2U] [i_1] [i_2] [i_2] [i_2]))))) - (((/* implicit */int) ((unsigned short) (+(((/* implicit */int) (unsigned short)46150))))))));
                        }
                        arr_60 [i_0] [i_1] [i_2] [i_11] = ((/* implicit */_Bool) var_5);
                        arr_61 [3U] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */unsigned int) min((var_5), (var_5)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-75))) : (var_6)))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))));
                    }
                    var_27 = ((/* implicit */signed char) ((144115188075855871ULL) & (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)-32757)), (1827327327U))))));
                    var_28 += ((/* implicit */long long int) (+(((unsigned int) (-(144115188075855887ULL))))));
                    arr_62 [6] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) min((max((arr_8 [i_0] [i_1] [i_1] [i_2] [i_2]), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : ((+(3012051310U))))))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned int) var_8);
}
