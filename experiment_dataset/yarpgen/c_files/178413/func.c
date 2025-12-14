/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178413
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
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-91))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_3 [i_0 - 2] [i_0 - 2]), (arr_3 [i_0 - 1] [i_0 - 1]))))) : (((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 + 1])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        var_17 += ((/* implicit */_Bool) (-(max((arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]), (((/* implicit */int) arr_1 [i_0] [i_0 - 1]))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
                        {
                            arr_16 [i_2] [i_3] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (var_4)))) ? (((/* implicit */long long int) arr_12 [i_0 - 1] [i_0] [i_1] [i_2] [i_3] [i_4] [i_4])) : ((~(arr_2 [i_0 + 2])))));
                            arr_17 [i_0] [i_0] [i_0] [5ULL] [i_3] [i_3] [i_4] = var_6;
                        }
                        for (int i_5 = 0; i_5 < 15; i_5 += 4) /* same iter space */
                        {
                            var_18 = ((/* implicit */_Bool) min((((/* implicit */int) var_8)), (var_13)));
                            var_19 = ((/* implicit */unsigned char) var_13);
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_13 [i_0 - 2]) - (((/* implicit */int) arr_15 [i_0 + 1]))))) ? (((arr_14 [i_0] [i_0] [i_2] [i_3] [i_2]) % (((/* implicit */long long int) max((-109075104), (((/* implicit */int) (unsigned char)54))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_13), (((/* implicit */int) var_10))))) ? (((((/* implicit */unsigned int) var_9)) + (arr_12 [i_0 - 2] [i_1] [i_1] [i_2] [i_2] [i_3] [i_2]))) : (((/* implicit */unsigned int) var_13)))))));
                            var_21 = 1;
                        }
                        arr_21 [i_0] [i_0] [i_0] [i_0] [i_0 + 2] [11ULL] = ((/* implicit */int) ((var_9) == (arr_7 [i_0 + 2])));
                        arr_22 [(signed char)12] [i_1] [(signed char)12] [i_1] = ((/* implicit */unsigned int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 13; i_6 += 4) 
                    {
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((int) 109075094)))));
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_23 = ((/* implicit */int) ((var_11) <= (arr_25 [i_6] [i_6 - 3] [i_0 + 1] [i_0 + 1] [i_0])));
                            var_24 = ((((/* implicit */int) (!(((/* implicit */_Bool) -295965961))))) | (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_7])));
                            arr_29 [i_7] [i_7] [i_6 + 1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) -109075094);
                        }
                        for (signed char i_8 = 3; i_8 < 14; i_8 += 4) 
                        {
                            arr_33 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (short)15))))) ? (((/* implicit */int) var_1)) : ((-(var_13)))));
                            arr_34 [i_0] [i_1] [i_2] [i_6 + 1] [i_8 - 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [(signed char)3] [i_8 + 1] [i_6 - 2] [(signed char)3] [i_2])) ? (arr_14 [10ULL] [i_8 + 1] [i_6 - 2] [i_6 + 2] [i_6 - 3]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((2192268669143650330ULL) << (((/* implicit */int) (_Bool)1))))) || ((!(((/* implicit */_Bool) 9))))));
                        }
                        var_26 = ((/* implicit */signed char) (+(((var_0) ? (-559932712) : (((/* implicit */int) var_1))))));
                    }
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */int) arr_23 [i_9] [i_9] [(_Bool)1] [i_9] [i_9])) % ((+(12))))))));
                        var_28 = ((/* implicit */_Bool) ((arr_25 [i_0] [i_0] [i_0] [i_0 + 2] [i_2]) / (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (15) : (-2097152)))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 15; i_10 += 4) 
                    {
                        var_29 = ((/* implicit */int) ((((unsigned int) arr_20 [i_2] [i_10] [i_2] [i_1] [i_1] [(signed char)10] [i_0])) >> (((4294967293U) - (4294967293U)))));
                        var_30 *= ((/* implicit */_Bool) (+(((/* implicit */int) (short)-11511))));
                    }
                    for (unsigned int i_11 = 2; i_11 < 12; i_11 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_12 = 1; i_12 < 13; i_12 += 4) 
                        {
                            var_31 = ((/* implicit */_Bool) ((signed char) ((((((/* implicit */int) (unsigned char)64)) - (109075097))) == (var_9))));
                            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (signed char)77))));
                            var_33 = ((/* implicit */_Bool) min((var_33), (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_2] [i_11] [i_12])) || (((/* implicit */_Bool) (unsigned char)53))))));
                            var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) arr_36 [i_0 + 1] [i_0] [i_0 - 2] [i_0] [i_0]))));
                            arr_48 [i_11] [i_11] = min(((~(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))), (((/* implicit */int) var_3)));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_35 = ((/* implicit */_Bool) var_13);
                            arr_51 [i_13] [i_11 + 3] [i_2] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_24 [i_2] [i_2] [i_2] [i_11 + 3] [i_2] [i_11]), (arr_24 [i_1] [i_1] [i_1] [i_11 + 3] [i_1] [i_13]))))));
                        }
                        for (int i_14 = 3; i_14 < 14; i_14 += 4) 
                        {
                            var_36 = ((((/* implicit */_Bool) -1835077103)) ? (-423532821) : (-109075128));
                            var_37 = ((/* implicit */int) ((_Bool) arr_1 [i_0] [i_0]));
                        }
                        var_38 *= ((/* implicit */_Bool) ((max((min((1229618408), (-783574244))), (((/* implicit */int) var_14)))) - (((/* implicit */int) (!(var_0))))));
                    }
                    arr_55 [i_1] [i_1] = (_Bool)1;
                }
            } 
        } 
    } 
    var_39 = var_3;
    var_40 = ((((/* implicit */int) var_14)) % ((+(((/* implicit */int) (unsigned char)95)))));
    var_41 = ((/* implicit */unsigned int) var_4);
    var_42 -= ((/* implicit */short) 4294967277U);
}
