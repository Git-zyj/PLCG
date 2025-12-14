/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146969
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
    var_14 = var_8;
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_15 += ((/* implicit */short) (+((~(18446744073709551591ULL)))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((1881933419) % (-1881933421)));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) ((var_8) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (max((((/* implicit */long long int) var_2)), (max((-466972496926066237LL), (((/* implicit */long long int) var_12))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 3) 
    {
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) min((((/* implicit */int) var_5)), ((~(((/* implicit */int) arr_3 [i_2 - 2])))))))));
        arr_9 [i_2] &= ((/* implicit */short) ((-1615691106) > (-1881933445)));
        arr_10 [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1881933444)) ? (((/* implicit */unsigned long long int) 8128566876403115589LL)) : (18ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_7 [i_2] [i_2]), (arr_7 [i_2] [i_2]))))) : (arr_4 [i_2] [i_2 - 1]))) >= (((/* implicit */unsigned long long int) max((arr_5 [i_2 - 2]), (((/* implicit */unsigned int) var_8)))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_6 = 3; i_6 < 24; i_6 += 3) 
                {
                    arr_21 [i_5] [i_6] [i_5] [i_4] [i_3] = arr_20 [i_6];
                    arr_22 [i_3] [i_5] [i_4] [i_3] = ((/* implicit */unsigned long long int) (+(1881933444)));
                }
                /* LoopSeq 1 */
                for (short i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    arr_27 [i_3] [i_3] [i_5] [i_5] = ((/* implicit */long long int) var_9);
                    var_18 = ((/* implicit */_Bool) max((var_18), (var_2)));
                }
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (-((-(((/* implicit */int) (_Bool)1)))))))));
                arr_28 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) (~(-1881933438)));
            }
            var_20 = ((/* implicit */_Bool) ((158823763U) / (((/* implicit */unsigned int) 230197754))));
            /* LoopSeq 1 */
            for (unsigned int i_8 = 0; i_8 < 25; i_8 += 3) 
            {
                arr_31 [i_8] [i_4] [i_3] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) 443816703U)) ? (((/* implicit */unsigned long long int) var_4)) : (10193121129305879533ULL))), (((/* implicit */unsigned long long int) ((_Bool) 0U))))))));
                arr_32 [i_8] [i_8] [i_8] [i_8] &= (!(((/* implicit */_Bool) max((-1881933444), (((/* implicit */int) arr_13 [i_3]))))));
                /* LoopSeq 2 */
                for (signed char i_9 = 0; i_9 < 25; i_9 += 3) 
                {
                    arr_35 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) -1881933409)), (9223372036854775807LL)));
                    var_21 = ((/* implicit */_Bool) arr_23 [i_4] [i_4]);
                }
                /* vectorizable */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    arr_38 [i_8] [i_8] [i_8] [i_10] = var_10;
                    arr_39 [i_3] [i_8] [i_4] [i_3] [i_3] [i_3] = ((/* implicit */int) arr_20 [i_3]);
                    arr_40 [i_3] [i_4] [i_4] [i_8] [i_4] [i_10] = ((((/* implicit */_Bool) ((signed char) var_8))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_3]))) : (((arr_34 [i_4]) ? (arr_29 [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5047))))));
                    arr_41 [i_10] [i_8] [i_4] [i_4] [i_3] = ((/* implicit */_Bool) var_12);
                }
                var_22 |= ((/* implicit */long long int) var_9);
            }
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 3) 
        {
            /* LoopSeq 4 */
            for (short i_12 = 3; i_12 < 24; i_12 += 3) 
            {
                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_11] [i_11] [i_11] [i_12] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_1)))) ? ((+(arr_36 [i_11] [i_11] [i_11] [i_3]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))))))));
                var_24 ^= ((/* implicit */long long int) arr_46 [i_12 + 1] [i_12] [i_12 + 1]);
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_12] [i_12] [i_12] [i_12] [i_12 + 1])) ? (((((/* implicit */_Bool) (short)9905)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1881933409))))))));
                var_26 *= ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))));
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_14 = 0; i_14 < 25; i_14 += 3) 
                {
                    for (unsigned int i_15 = 0; i_15 < 25; i_15 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_11]))))) ? (((/* implicit */int) var_5)) : (1881933408)));
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))) : (var_1))))));
                            var_29 &= ((/* implicit */short) var_5);
                            arr_54 [i_11] [i_13] = ((/* implicit */signed char) (-(arr_48 [i_11])));
                        }
                    } 
                } 
                arr_55 [i_3] [i_3] [i_3] [i_3] = var_11;
            }
            for (short i_16 = 3; i_16 < 22; i_16 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) var_6))));
                            arr_64 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) (-(((/* implicit */int) var_13))));
                            arr_65 [i_3] [i_11] [i_17] [i_18] = ((/* implicit */short) ((((/* implicit */int) arr_37 [i_3] [i_11] [i_18 + 1] [i_11] [i_18] [i_16 - 1])) & (((/* implicit */int) arr_13 [i_3]))));
                        }
                    } 
                } 
                var_31 ^= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (1881933419) : (((/* implicit */int) var_6))))));
                var_32 = (((((_Bool)1) ? (((/* implicit */int) arr_59 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_43 [i_3])))) > (((/* implicit */int) ((arr_57 [i_3] [i_3]) != (((/* implicit */unsigned long long int) arr_26 [i_3] [i_3] [i_16] [i_3] [i_3]))))));
                var_33 = ((/* implicit */short) (+((+(((/* implicit */int) var_9))))));
            }
            for (unsigned int i_19 = 0; i_19 < 25; i_19 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        {
                            var_34 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_20] [i_20])))))));
                            arr_74 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_11 [i_19]);
                            var_35 = ((/* implicit */long long int) ((var_13) ? (arr_36 [i_19] [i_19] [i_19] [i_11]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) << (((31744) - (31737))))))));
                            arr_75 [i_3] [i_3] [i_3] [i_3] = ((unsigned long long int) arr_70 [i_19] [i_19]);
                            var_36 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_70 [i_3] [i_3])) ? (arr_70 [i_19] [i_11]) : (arr_70 [i_3] [i_11])));
                        }
                    } 
                } 
                var_37 = ((/* implicit */_Bool) min((var_37), ((!(((/* implicit */_Bool) arr_62 [i_19] [i_19] [i_11] [i_11] [i_3] [i_3] [i_3]))))));
            }
            arr_76 [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)1)) : (1881933444)));
        }
    }
}
