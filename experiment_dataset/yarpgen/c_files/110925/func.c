/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110925
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
    var_14 += ((/* implicit */_Bool) var_13);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_3] = (!(((/* implicit */_Bool) max((var_13), (((/* implicit */long long int) (~(((/* implicit */int) var_5)))))))));
                        var_15 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8))))))) ? (min((min((arr_8 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_6 [i_1])))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))))))) : (((/* implicit */unsigned long long int) (~((~(var_13))))))));
                        /* LoopSeq 2 */
                        for (short i_4 = 3; i_4 < 9; i_4 += 3) /* same iter space */
                        {
                            var_16 = ((/* implicit */_Bool) var_10);
                            arr_16 [i_4] [i_3] [(unsigned char)3] [i_3] [i_4] [i_1] = (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12)))))))));
                        }
                        for (short i_5 = 3; i_5 < 9; i_5 += 3) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((max((arr_5 [i_1 - 1] [i_5 - 3]), (arr_5 [i_1 - 1] [i_5 - 3]))) - (((arr_5 [i_1 - 1] [i_5 - 3]) / (((/* implicit */long long int) ((/* implicit */int) var_4))))))))));
                            arr_20 [i_0] [(unsigned short)9] [i_5] [i_3] [i_5 + 1] = ((/* implicit */unsigned long long int) var_3);
                            var_18 |= ((/* implicit */short) var_0);
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */short) min((((/* implicit */unsigned short) max((arr_18 [(_Bool)1]), (((/* implicit */unsigned char) (_Bool)0))))), (((unsigned short) -2057998504))));
                            var_19 = ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_12)) - (((/* implicit */int) arr_2 [i_1 - 2])))));
                        }
                    }
                } 
            } 
            arr_22 [(_Bool)1] [i_1] = ((/* implicit */int) ((((arr_14 [i_1 + 2] [i_1 - 2] [i_1 - 2] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) + (((((/* implicit */long long int) ((/* implicit */int) var_3))) - (arr_14 [i_1 + 3] [i_1 - 2] [i_1 - 2] [i_0])))));
        }
        /* vectorizable */
        for (long long int i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            var_20 += ((/* implicit */signed char) (short)5054);
            var_21 *= ((/* implicit */signed char) (+(((/* implicit */int) var_1))));
        }
        for (short i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            arr_27 [i_0] [i_0] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) || (((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)47)), (((((/* implicit */_Bool) -756249392)) ? (-1950765612) : (((/* implicit */int) (_Bool)1)))))))));
            arr_28 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_7])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12))))) ? (((8388607) & (((/* implicit */int) (unsigned short)48973)))) : (min((((/* implicit */int) (unsigned char)51)), (798714564)))));
        }
        var_22 += ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)40))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_5)))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-38))) / (-1LL))));
        var_23 = ((/* implicit */long long int) ((unsigned char) var_0));
        /* LoopSeq 3 */
        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 1) 
        {
            var_24 += ((/* implicit */_Bool) (-(12739978093052102265ULL)));
            arr_32 [i_0] [i_0] [8] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)496))));
        }
        /* vectorizable */
        for (short i_9 = 0; i_9 < 11; i_9 += 1) 
        {
            arr_36 [i_9] = ((/* implicit */_Bool) ((short) (_Bool)1));
            var_25 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)72)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)43160))));
            /* LoopSeq 1 */
            for (int i_10 = 0; i_10 < 11; i_10 += 4) 
            {
                var_26 = ((/* implicit */short) var_11);
                /* LoopSeq 1 */
                for (int i_11 = 0; i_11 < 11; i_11 += 1) 
                {
                    var_27 = ((/* implicit */long long int) ((unsigned long long int) arr_18 [i_0]));
                    /* LoopSeq 1 */
                    for (unsigned char i_12 = 0; i_12 < 11; i_12 += 2) 
                    {
                        var_28 = ((((/* implicit */_Bool) arr_5 [i_0] [(unsigned short)9])) ? (((/* implicit */int) (signed char)-4)) : ((~(((/* implicit */int) var_5)))));
                        arr_46 [i_9] [i_11] [i_0] [i_9] [i_9] = var_7;
                        arr_47 [2] [i_10] [i_9] [i_12] = ((/* implicit */int) (!(arr_44 [i_9] [i_9] [i_11] [i_12])));
                        arr_48 [i_9] = ((/* implicit */unsigned char) ((arr_24 [i_9]) ^ (((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_12))))));
                        arr_49 [i_0] [0] [i_9] [5] [i_0] = ((/* implicit */unsigned int) (unsigned char)6);
                    }
                }
                arr_50 [i_9] [i_9] [5LL] [i_9] = ((/* implicit */unsigned char) arr_3 [(unsigned char)10]);
                var_29 = ((/* implicit */_Bool) ((arr_40 [i_10] [i_9] [i_0] [i_0]) ? (((/* implicit */int) arr_40 [7] [i_10] [i_10] [(signed char)8])) : (((/* implicit */int) arr_10 [i_0] [2LL] [i_0] [(unsigned char)4]))));
                var_30 = ((/* implicit */_Bool) ((unsigned char) arr_14 [2] [i_9] [i_9] [i_9]));
            }
            var_31 += ((/* implicit */unsigned char) ((arr_7 [i_0] [i_9] [i_9] [i_9]) & (arr_7 [i_0] [i_0] [i_0] [i_0])));
        }
        for (unsigned char i_13 = 0; i_13 < 11; i_13 += 1) 
        {
            arr_55 [6LL] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_9))) & (((((/* implicit */_Bool) var_6)) ? (arr_0 [i_13]) : (((/* implicit */int) max((var_12), (((/* implicit */unsigned char) arr_11 [i_0] [i_0] [7] [8U] [i_13] [i_13])))))))));
            var_32 = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_51 [i_0])) + (((/* implicit */int) arr_51 [i_13])))), ((+(((/* implicit */int) var_5))))));
            var_33 += ((/* implicit */_Bool) ((((/* implicit */int) (!(var_4)))) + (((/* implicit */int) var_0))));
        }
        var_34 *= ((/* implicit */short) (((~(((/* implicit */int) min((var_3), (((/* implicit */short) var_5))))))) | (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_52 [i_0] [i_0]))))));
    }
    for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 1) 
    {
        arr_58 [i_14] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_56 [i_14])) ? (var_7) : (((/* implicit */int) arr_56 [i_14]))))));
        /* LoopNest 2 */
        for (short i_15 = 0; i_15 < 25; i_15 += 4) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                {
                    var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (9) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)29864)) : (((/* implicit */int) (short)-22430))))))) ? (((/* implicit */int) var_10)) : ((-((-(((/* implicit */int) var_11))))))));
                    var_36 = (_Bool)1;
                    /* LoopNest 2 */
                    for (unsigned char i_17 = 2; i_17 < 23; i_17 += 4) 
                    {
                        for (int i_18 = 1; i_18 < 23; i_18 += 2) 
                        {
                            {
                                arr_68 [(_Bool)1] [(_Bool)1] [i_16] [i_16] [i_14] [i_18] = ((/* implicit */_Bool) min((((((arr_66 [(unsigned char)17] [9] [i_18 + 1] [i_17 - 2] [i_17 - 2] [i_17 + 2] [i_17 - 2]) + (9223372036854775807LL))) << ((((((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_64 [i_14] [i_14] [i_14] [24])))) - (25955))))), (((arr_65 [i_15] [i_15] [i_16] [i_17]) ? (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_14] [(_Bool)1] [i_18 + 1]))) : (((((/* implicit */long long int) var_7)) & (var_13)))))));
                                var_37 = ((/* implicit */unsigned int) ((unsigned short) ((((((/* implicit */int) arr_65 [i_14] [i_16] [i_17 + 2] [i_16])) / (((/* implicit */int) arr_63 [i_14] [i_15])))) * (((/* implicit */int) arr_61 [i_14] [i_14])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_19 = 2; i_19 < 21; i_19 += 1) 
                    {
                        for (long long int i_20 = 0; i_20 < 25; i_20 += 3) 
                        {
                            {
                                var_38 += ((/* implicit */long long int) arr_65 [i_20] [i_15] [i_14] [i_15]);
                                var_39 = ((/* implicit */unsigned char) var_4);
                                var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_67 [(unsigned short)13] [i_19] [i_19] [i_19 + 3] [i_19 - 1] [i_19]), (arr_67 [i_19] [i_19] [i_19 - 2] [i_19 + 3] [i_19] [i_19 + 2])))) ? (((/* implicit */int) ((unsigned char) arr_72 [i_14] [i_14] [i_15] [i_16] [(unsigned char)24] [i_20] [4ULL]))) : (-2057998521)));
                                var_41 = ((/* implicit */signed char) ((max(((+(((/* implicit */int) arr_59 [i_14] [i_15] [i_15])))), (((/* implicit */int) arr_72 [i_14] [i_14] [i_14] [i_16] [i_19 + 1] [i_19] [i_20])))) & ((-(((/* implicit */int) arr_64 [i_19] [i_19] [i_19 + 1] [i_14]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
