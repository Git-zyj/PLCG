/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116276
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
    var_18 = ((/* implicit */short) var_16);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */signed char) arr_2 [i_0] [i_0]);
                var_20 = ((/* implicit */unsigned char) var_6);
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 4) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_12 [i_1 + 1] [i_1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1]))));
                            var_22 = ((/* implicit */unsigned long long int) ((signed char) (short)-32765));
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) ((signed char) var_10)))));
                            arr_14 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_12);
                            var_23 += ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) arr_7 [i_1 + 2] [i_1 - 1])) : (arr_5 [i_0] [i_0] [i_1 - 1]));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 2) 
                        {
                            var_24 -= ((/* implicit */unsigned long long int) arr_11 [i_5] [i_3] [i_0] [i_1] [i_0]);
                            var_25 -= ((/* implicit */signed char) (~(((/* implicit */int) var_4))));
                        }
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            arr_20 [3U] [i_1] [i_1 + 1] [3U] [i_1] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2192779609379040251LL)) ? (((/* implicit */int) ((_Bool) var_5))) : (((/* implicit */int) max((((/* implicit */signed char) var_10)), (var_6))))))) ? (((/* implicit */int) min((var_10), (arr_4 [(unsigned short)1] [i_1] [i_1 + 2])))) : (((int) ((int) (unsigned short)16128)))));
                            arr_21 [i_0] [i_1] [i_0] = var_8;
                        }
                        for (int i_7 = 0; i_7 < 14; i_7 += 4) 
                        {
                            arr_24 [i_0] [i_1] [(_Bool)1] [(signed char)8] [i_0] = max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49408))) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((_Bool) (unsigned short)16128))));
                            arr_25 [i_0] [i_0] [i_0] [i_1] = min((((/* implicit */long long int) (+(((/* implicit */int) ((short) var_16)))))), (((((/* implicit */_Bool) ((var_14) / (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_11)), (var_14)))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_7))))));
                        }
                        arr_26 [i_0] [0] [i_3] [i_2] |= ((/* implicit */unsigned short) min((((/* implicit */long long int) (short)20806)), (9223372036854775807LL)));
                        var_26 |= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_13)), (var_3)))) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned char)181)))))), (((/* implicit */unsigned int) (-(arr_23 [i_1] [i_1] [i_1] [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1 + 2]))))));
                        var_27 ^= ((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */signed char) var_8)), (var_2))))));
                    }
                    for (short i_8 = 1; i_8 < 13; i_8 += 1) 
                    {
                        arr_29 [i_2] [i_2] [i_1] [i_2] &= ((/* implicit */unsigned char) min((4294967295U), (((/* implicit */unsigned int) max((((/* implicit */int) ((short) (short)14515))), ((((_Bool)1) ? (((/* implicit */int) (short)20806)) : (((/* implicit */int) (_Bool)0)))))))));
                        var_28 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))) % (var_14))));
                    }
                    for (short i_9 = 2; i_9 < 13; i_9 += 3) 
                    {
                        arr_32 [i_1 + 2] [i_1] [i_2] [i_9 + 1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_12 [i_0] [i_9] [i_2] [9] [i_1] [i_1])), ((unsigned short)20893))))) : (18446744073709551615ULL)));
                        arr_33 [i_0] [i_0] [(unsigned short)2] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) 4294967266U))));
                        /* LoopSeq 3 */
                        for (long long int i_10 = 1; i_10 < 11; i_10 += 4) 
                        {
                            arr_36 [i_0] [i_1] [i_2] [i_9] [i_10] [i_9] = ((/* implicit */_Bool) var_17);
                            var_29 = ((/* implicit */unsigned long long int) ((((max((((/* implicit */unsigned long long int) var_7)), (var_12))) == (min((var_12), (((/* implicit */unsigned long long int) (short)32767)))))) && (((/* implicit */_Bool) ((((int) var_10)) - (((/* implicit */int) (_Bool)1)))))));
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_34 [i_0] [i_1] [i_2] [i_10 + 2] [i_1 + 2] [i_9] [(signed char)8]))))) * (((var_10) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)3))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_11 = 1; i_11 < 13; i_11 += 3) 
                        {
                            var_31 = ((/* implicit */short) ((int) ((988775053U) << (((arr_9 [(unsigned char)2] [i_2] [i_9] [i_11]) - (3077589614U))))));
                            var_32 = ((/* implicit */int) (!(((/* implicit */_Bool) var_4))));
                            var_33 = ((/* implicit */unsigned int) ((arr_34 [i_1 - 1] [i_1] [i_2] [i_9] [i_11 - 1] [i_11 - 1] [i_11]) < (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                        }
                        for (long long int i_12 = 0; i_12 < 14; i_12 += 1) 
                        {
                            arr_41 [i_0] [i_1] [(_Bool)1] [i_9] [5LL] [i_1] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)62)), (-2297881259952967381LL)));
                            var_34 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((9223372036854775807LL), (((/* implicit */long long int) (_Bool)1))))) ? (max((((arr_28 [i_0] [i_1] [12ULL] [i_9] [i_12]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_15 [i_12] [i_12] [i_12] [i_2] [i_12])))), (((var_10) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)126)))))) : (((/* implicit */int) ((signed char) var_4)))));
                            arr_42 [i_0] [1] [i_2] [i_9 - 2] [i_1] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) min(((short)-22970), (((/* implicit */short) arr_17 [i_1 + 1]))))), (((((/* implicit */int) arr_17 [i_1 + 1])) << (((((/* implicit */int) var_0)) - (31415)))))));
                            var_35 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)-4238), (((/* implicit */short) (unsigned char)192))))) ? (((var_12) >> (((/* implicit */int) var_8)))) : (((/* implicit */unsigned long long int) ((int) var_17)))))) ? (((/* implicit */int) min((var_17), (var_6)))) : (((/* implicit */int) var_11))));
                        }
                        var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)49407)) <= (((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_17))))))))))));
                    }
                    for (int i_13 = 0; i_13 < 14; i_13 += 4) 
                    {
                        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) min((max((-8390385420780830232LL), (((/* implicit */long long int) ((unsigned short) var_10))))), (((/* implicit */long long int) (+(((/* implicit */int) var_13))))))))));
                        var_38 = ((/* implicit */int) ((unsigned short) ((signed char) arr_4 [i_0] [i_1] [i_1 - 1])));
                        var_39 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_0] [i_1] [i_2] [i_2] [i_13]))) & (var_15)));
                    }
                    arr_45 [i_0] [i_0] [i_1] = ((/* implicit */signed char) min((min((((/* implicit */unsigned short) ((_Bool) -9223372036854775807LL))), ((unsigned short)4032))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11)))))));
                    arr_46 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) min((max((((/* implicit */int) (_Bool)0)), (201326592))), (((/* implicit */int) max((arr_4 [i_0] [i_1] [10]), (var_13))))));
                    arr_47 [i_1] [i_1] [i_1] [i_1 + 2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)40))) - (((9223372036854775807LL) | (((/* implicit */long long int) ((/* implicit */int) (short)20806)))))));
                }
                for (long long int i_14 = 0; i_14 < 14; i_14 += 4) /* same iter space */
                {
                    arr_50 [0] [i_1] [i_14] |= ((/* implicit */int) ((unsigned int) (_Bool)1));
                    var_40 = ((signed char) ((((((/* implicit */_Bool) var_9)) ? (18014398509481983LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) / (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                    arr_51 [(unsigned short)10] [i_1] [i_1] [i_14] = ((_Bool) -1);
                }
                /* LoopSeq 1 */
                for (short i_15 = 0; i_15 < 14; i_15 += 2) 
                {
                    var_41 = ((/* implicit */unsigned char) -1963151263);
                    var_42 = ((/* implicit */unsigned int) var_0);
                    arr_55 [6] [i_1] [0LL] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (unsigned char)4))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_7 [i_1 + 1] [i_1 - 1]) <= (arr_7 [i_1 + 1] [i_1 + 1]))))) : (((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1 + 2])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                }
            }
        } 
    } 
}
