/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164794
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_7) * (0U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_2)));
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        var_13 += var_0;
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */unsigned long long int) arr_1 [i_1 - 2]))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                for (unsigned int i_5 = 1; i_5 < 18; i_5 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) 0U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))));
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_5 + 1])) ? (arr_1 [i_5 - 1]) : (arr_1 [i_5 + 1])));
                            var_17 -= ((/* implicit */unsigned int) ((unsigned char) arr_5 [i_1] [i_1 + 2] [13U]));
                        }
                        /* LoopSeq 3 */
                        for (long long int i_7 = 4; i_7 < 15; i_7 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((short) (_Bool)1)))));
                            arr_23 [i_0] [(unsigned char)5] [(unsigned char)5] [i_5] [(_Bool)1] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_5 + 1] [i_5 + 1] [i_7] [i_7] [i_7] [i_7] [i_7 + 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 1] [i_5 - 1] [i_7 + 1]))) : (var_5)));
                            var_19 = ((/* implicit */_Bool) max((var_19), ((!(((/* implicit */_Bool) arr_20 [i_1] [i_1 - 1] [(unsigned char)9] [(unsigned char)3] [(unsigned char)3]))))));
                            var_20 = ((/* implicit */short) ((var_8) ? (arr_6 [i_4] [i_5 - 1] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                        }
                        for (signed char i_8 = 0; i_8 < 19; i_8 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) 2612118283U)) : (3435708410583176401ULL)));
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : ((+(((/* implicit */int) arr_22 [i_0] [i_1] [i_4])))))))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 19; i_9 += 4) 
                        {
                            var_23 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
                            var_24 = ((arr_18 [i_0] [i_0] [4ULL] [i_0 - 1] [i_1 + 1] [4ULL] [i_5 - 1]) << (((var_7) - (2421752491U))));
                            arr_31 [8ULL] [(signed char)6] [8ULL] [15ULL] = (~(6651330447305170621ULL));
                        }
                        var_25 = var_6;
                        var_26 = ((((_Bool) 18446744073709551615ULL)) ? (arr_24 [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0 - 3] [i_0 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0 - 1] [i_0]))));
                    }
                } 
            } 
        }
        var_27 = ((/* implicit */short) (!(((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_3))))));
        var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [6ULL] [i_0 - 2]))) : (var_5))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_10 = 0; i_10 < 23; i_10 += 2) 
    {
        arr_35 [i_10] [2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (var_5) : (var_11)));
        var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))));
        /* LoopSeq 2 */
        for (long long int i_11 = 0; i_11 < 23; i_11 += 2) 
        {
            arr_40 [i_10] [19U] [i_10] = ((/* implicit */signed char) var_5);
            var_30 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
            var_31 = ((/* implicit */unsigned int) ((arr_37 [i_10] [i_10] [i_11]) ? (((/* implicit */int) arr_37 [i_11] [i_10] [i_10])) : (((/* implicit */int) arr_37 [i_10] [i_11] [i_10]))));
        }
        for (unsigned long long int i_12 = 1; i_12 < 20; i_12 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 4) 
            {
                /* LoopSeq 1 */
                for (int i_14 = 0; i_14 < 23; i_14 += 2) 
                {
                    arr_49 [i_10] [i_13] [i_14] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [13ULL] [i_12 + 2]))) : (0U)));
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_48 [i_12] [i_12] [8U]))) ? (((/* implicit */unsigned long long int) var_0)) : (var_5)));
                    var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) 268435455ULL))))) | (((/* implicit */int) ((unsigned char) var_2)))));
                }
                /* LoopSeq 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_46 [i_10] [i_10] [i_10] [i_10]) ? (var_2) : (arr_45 [i_15] [i_13] [i_12 - 1] [i_10])))) ? ((~(((/* implicit */int) var_3)))) : (((/* implicit */int) arr_39 [i_10] [i_12 - 1]))));
                    var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) != (var_9))))) : (((((/* implicit */_Bool) -864066930)) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                    var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_12 + 3] [i_12 + 1] [i_12 - 1] [(unsigned char)5] [i_10] [i_10])))));
                    /* LoopSeq 2 */
                    for (int i_16 = 0; i_16 < 23; i_16 += 1) 
                    {
                        var_37 &= ((/* implicit */unsigned int) var_4);
                        var_38 -= (!(((/* implicit */_Bool) arr_48 [i_15] [i_12 + 2] [i_12])));
                    }
                    for (unsigned int i_17 = 0; i_17 < 23; i_17 += 4) 
                    {
                        arr_59 [1U] [i_10] [i_10] [i_10] [i_10] [9U] = ((/* implicit */_Bool) (+((~(var_7)))));
                        arr_60 [i_12] [i_12] [i_12] [i_15] [i_17] [i_17] [i_13] = (-(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))));
                    }
                }
                for (signed char i_18 = 0; i_18 < 23; i_18 += 2) 
                {
                    var_39 = ((/* implicit */_Bool) min((var_39), (var_8)));
                    var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1)))))));
                    var_41 *= ((/* implicit */unsigned long long int) (!(arr_39 [i_10] [i_10])));
                }
            }
            var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) var_11))));
            var_43 = ((/* implicit */int) min((var_43), ((+(((/* implicit */int) var_3))))));
            var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1107184470U)) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)79)))));
        }
    }
    var_45 = ((/* implicit */unsigned char) var_1);
}
