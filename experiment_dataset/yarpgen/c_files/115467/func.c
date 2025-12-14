/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115467
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
    var_13 = ((/* implicit */_Bool) (unsigned short)55289);
    var_14 = ((((((/* implicit */int) var_3)) + (2147483647))) >> (((var_9) - (114480921U))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */_Bool) ((((var_5) < (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])))) ? (min((((/* implicit */long long int) (-(arr_3 [i_1])))), (arr_2 [i_0]))) : (-3505118056374756889LL)));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned int i_3 = 3; i_3 < 8; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (~((-(374709051271026841ULL))))))));
                            arr_12 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) min((arr_1 [i_2]), ((unsigned char)255)))) - (((((/* implicit */_Bool) arr_10 [i_1] [10LL] [i_1] [i_1 - 1] [10LL])) ? (arr_10 [(_Bool)1] [(unsigned short)6] [2U] [i_1 + 2] [i_1]) : (arr_10 [i_0] [i_1 + 3] [i_1 - 1] [i_1 - 1] [i_2])))));
                            /* LoopSeq 4 */
                            for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                            {
                                arr_16 [i_0] [i_0] [i_4] = ((/* implicit */_Bool) ((arr_0 [i_0]) + (((/* implicit */int) min((arr_7 [i_1 + 1]), (arr_7 [i_1 + 2]))))));
                                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) min((((((/* implicit */_Bool) -2412122816603550937LL)) ? (((/* implicit */unsigned long long int) var_6)) : (arr_13 [i_0] [i_0]))), (((min((((/* implicit */unsigned long long int) (_Bool)1)), (18072035022438524775ULL))) / (((((/* implicit */_Bool) -4822899185862488746LL)) ? (374709051271026851ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11642))))))))))));
                                arr_17 [i_0] [i_4] [i_3] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */long long int) (short)63);
                            }
                            for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) 
                            {
                                var_18 = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) min((((/* implicit */long long int) var_0)), ((((((-(2412122816603550937LL))) + (9223372036854775807LL))) << (((min((((/* implicit */int) arr_6 [i_0] [i_0])), (4194303))) - (24766)))))))) : (((/* implicit */unsigned short) min((((/* implicit */long long int) var_0)), ((((((-(2412122816603550937LL))) + (9223372036854775807LL))) << (((((min((((/* implicit */int) arr_6 [i_0] [i_0])), (4194303))) - (24766))) - (25800))))))));
                                arr_20 [0LL] [i_5] [i_2] [i_3 - 1] [i_0] [0LL] = ((/* implicit */int) (+(((((/* implicit */_Bool) ((arr_4 [i_0] [i_5]) >> (((((/* implicit */int) (unsigned short)55301)) - (55297)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_5) <= (((/* implicit */unsigned long long int) 3743220346U)))))) : (-1756623512700334709LL)))));
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))) == ((~(0U))))))) > (var_12)));
                            }
                            for (unsigned short i_6 = 2; i_6 < 10; i_6 += 1) 
                            {
                                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (-(min((5U), (arr_4 [(short)10] [i_1 + 2]))))))));
                                var_21 = ((/* implicit */unsigned short) (_Bool)0);
                            }
                            /* vectorizable */
                            for (long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                            {
                                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (-(var_6))))));
                                arr_25 [(unsigned short)5] [(unsigned short)5] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(1)))) ? (((/* implicit */long long int) ((/* implicit */int) ((374709051271026843ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18274))))))) : (((((/* implicit */_Bool) 5867235214607243377ULL)) ? (-2624716297885362290LL) : (((/* implicit */long long int) 20U))))));
                            }
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_8 = 2; i_8 < 9; i_8 += 2) /* same iter space */
                {
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((min((((/* implicit */unsigned long long int) (~(1345314465)))), (min((((/* implicit */unsigned long long int) (unsigned short)10246)), (var_5))))) ^ (((/* implicit */unsigned long long int) min((min((12LL), (((/* implicit */long long int) arr_22 [i_0] [i_0] [i_8])))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)10252)) % (((/* implicit */int) (unsigned short)12)))))))))))));
                    var_24 = ((/* implicit */long long int) ((min((1744952324), (((/* implicit */int) (short)-5868)))) - (-1345314477)));
                    arr_28 [4U] [(unsigned short)0] [i_8] [i_0] = ((/* implicit */unsigned char) ((min((((/* implicit */int) arr_6 [i_1 + 3] [i_0])), (min((1744952304), (((/* implicit */int) arr_1 [i_0])))))) != ((~(((/* implicit */int) var_1))))));
                }
                /* vectorizable */
                for (short i_9 = 2; i_9 < 9; i_9 += 2) /* same iter space */
                {
                    var_25 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_23 [i_1 + 3] [i_1 + 2] [i_0] [(unsigned short)9] [i_1 + 3]))));
                    var_26 = ((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_0] [i_9 - 2])) < (((/* implicit */int) arr_8 [i_0] [i_9 + 2]))));
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)-21357)) : (1284416095)));
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (long long int i_11 = 2; i_11 < 10; i_11 += 2) 
                        {
                            {
                                arr_38 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [i_0] [1] [i_1 + 2])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) var_7))))) : (((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_2)))))));
                                var_28 = ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_0] [i_9 + 1] [i_0] [i_11 + 1] [i_1 + 1])) || (((/* implicit */_Bool) arr_23 [i_1] [i_9 + 2] [i_0] [i_11 - 1] [i_1 + 1]))));
                                arr_39 [i_0] [(unsigned short)3] [i_0] [i_9] [i_0] [i_10] [4LL] = ((/* implicit */short) ((arr_33 [i_1 + 1] [i_11 - 2] [i_9 - 2]) < (((/* implicit */unsigned long long int) 2420589965U))));
                                var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4294967279U)) && (((/* implicit */_Bool) (unsigned short)56976)))))) | ((-(var_6))))))));
                            }
                        } 
                    } 
                }
                arr_40 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_2)), ((-(arr_21 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1])))));
                var_30 = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((min((2147483647), (1284416109))), (((/* implicit */int) ((1528497793955007328LL) > (((/* implicit */long long int) 551746949U)))))))), (min((((/* implicit */long long int) (~(var_9)))), (arr_5 [i_1 + 3] [i_0] [i_1 + 3])))));
            }
        } 
    } 
    var_31 = ((/* implicit */short) min((((0U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned int) (-((+(((/* implicit */int) (_Bool)1)))))))));
}
