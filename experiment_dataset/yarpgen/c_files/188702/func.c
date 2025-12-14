/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188702
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
    var_18 = ((/* implicit */int) ((((((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned long long int) var_3))))) ? (var_13) : (((/* implicit */unsigned long long int) ((1063626792) - (((/* implicit */int) (signed char)126))))))) % (((((((/* implicit */_Bool) var_7)) ? (3322388037231116099ULL) : (var_9))) << (((((((/* implicit */int) var_14)) % (var_8))) - (119)))))));
    var_19 += ((/* implicit */signed char) (+((~(((0ULL) ^ (((/* implicit */unsigned long long int) -1644771989))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_20 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (((-(var_6))) | (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)-10), ((signed char)-91)))))))) ? (((min((arr_3 [(signed char)0]), (((/* implicit */unsigned long long int) arr_4 [i_0] [8] [i_0])))) / (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)-10), (var_3))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((((/* implicit */int) (signed char)9)), (25)))) ? (min((((/* implicit */unsigned long long int) arr_14 [i_0] [i_1] [i_1] [i_3] [(signed char)8])), (arr_7 [i_0] [(signed char)1] [i_4]))) : (((var_9) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)9))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                                var_22 &= (-(((((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_0] [i_3]))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2])) ? (var_8) : (arr_4 [i_1] [i_3] [i_4]))) : (((/* implicit */int) max((var_3), (var_2)))))));
                                var_23 = ((int) ((((2360447360172307999ULL) >> (((((/* implicit */int) (signed char)-29)) + (88))))) << (((((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (var_9) : (((/* implicit */unsigned long long int) 821211002)))) - (14156169358993373058ULL)))));
                            }
                        } 
                    } 
                    var_24 = max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-33))) | (11ULL)))) ? (max((arr_5 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_1)))) : (((unsigned long long int) (signed char)15)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
    {
        for (int i_6 = 2; i_6 < 13; i_6 += 2) 
        {
            {
                var_25 &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) ((var_13) >= (arr_16 [i_5])))), ((signed char)9))))) + (((((/* implicit */_Bool) ((int) var_2))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (max((arr_16 [13ULL]), (((/* implicit */unsigned long long int) (signed char)-23))))))));
                /* LoopSeq 2 */
                for (signed char i_7 = 3; i_7 < 11; i_7 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 14; i_8 += 1) 
                    {
                        for (signed char i_9 = 1; i_9 < 11; i_9 += 1) 
                        {
                            {
                                arr_28 [i_5] = ((/* implicit */signed char) min((min((min((arr_16 [i_5]), (var_9))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)23))) : (arr_19 [i_5] [i_7] [i_8]))))), (((/* implicit */unsigned long long int) var_1))));
                                var_26 = ((/* implicit */signed char) var_7);
                            }
                        } 
                    } 
                    arr_29 [i_5] [i_7] = ((/* implicit */int) max((var_7), (min((max((arr_26 [i_6 - 2] [11ULL] [i_5] [i_6]), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((signed char) var_4)))))));
                }
                for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 2) 
                {
                    var_27 = ((/* implicit */signed char) arr_21 [i_5] [12]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 2) 
                    {
                        var_28 = (~(((/* implicit */int) var_3)));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_12 = 2; i_12 < 10; i_12 += 3) 
                        {
                            var_29 = ((/* implicit */int) ((((int) 821211002)) < (((/* implicit */int) ((signed char) var_9)))));
                            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((var_7) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-16)) % (-210566396))))))));
                            var_31 += ((/* implicit */unsigned long long int) ((signed char) (signed char)-33));
                            var_32 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_32 [i_11] [i_10])) : (((/* implicit */int) (signed char)0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-50)) % (((/* implicit */int) var_3))))) : ((-(arr_20 [i_5] [i_5] [1ULL] [13])))));
                            var_33 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) < (((unsigned long long int) 210566395))));
                        }
                        for (unsigned long long int i_13 = 1; i_13 < 13; i_13 += 3) 
                        {
                            var_34 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)27)) / (((/* implicit */int) (signed char)-56))));
                            var_35 = ((/* implicit */int) ((unsigned long long int) ((max((arr_21 [i_11] [i_13]), (6360526838630361124ULL))) ^ (((unsigned long long int) 5708374575566489621ULL)))));
                            var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((int) arr_32 [i_5] [i_5])))));
                        }
                        for (int i_14 = 0; i_14 < 14; i_14 += 4) 
                        {
                            arr_43 [i_5] [(signed char)8] [i_10] [i_5] [i_14] [i_11] = ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) arr_40 [i_5] [i_6])), (var_15))), (((/* implicit */unsigned long long int) 0))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-32))) + (min((1848044940609674969ULL), (12208580223438766311ULL))))) : (((((/* implicit */unsigned long long int) max((var_17), (var_10)))) & (var_9))));
                            var_37 = ((/* implicit */unsigned long long int) -747763167);
                        }
                        var_38 = ((/* implicit */int) ((unsigned long long int) (+(((/* implicit */int) ((-2) < (210566374)))))));
                        /* LoopSeq 4 */
                        for (int i_15 = 0; i_15 < 14; i_15 += 3) 
                        {
                            var_39 *= ((/* implicit */unsigned long long int) ((int) ((unsigned long long int) var_3)));
                            var_40 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-3)) + (((/* implicit */int) (signed char)27))));
                        }
                        for (int i_16 = 1; i_16 < 13; i_16 += 1) /* same iter space */
                        {
                            var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (0) : (-2062519161)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_5] [i_6] [i_10] [i_11] [i_16 + 1])) ? (var_10) : (((/* implicit */int) arr_23 [i_5] [i_5] [i_5])))))))))))));
                            var_42 = (-(((/* implicit */int) ((((/* implicit */_Bool) ((int) (signed char)10))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_12)))))))));
                            var_43 ^= var_11;
                        }
                        for (int i_17 = 1; i_17 < 13; i_17 += 1) /* same iter space */
                        {
                            arr_52 [i_5] [i_6] [3] [i_17] [i_10] [i_11] = ((/* implicit */int) ((unsigned long long int) max((((/* implicit */int) ((signed char) arr_51 [6ULL] [i_6 - 1] [6ULL] [i_11] [i_5] [i_6 - 1] [i_17 - 1]))), (((int) var_8)))));
                            arr_53 [i_5] [i_17] [i_5] [i_5] [i_5] = max((((/* implicit */unsigned long long int) (signed char)77)), (arr_26 [i_5] [i_5] [i_5] [i_5]));
                        }
                        for (int i_18 = 1; i_18 < 13; i_18 += 1) /* same iter space */
                        {
                            var_44 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) 3036650379902419550ULL))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 821211002)))) : (var_4))))));
                            var_45 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_5] [i_11] [i_10] [i_6] [i_5]))) / (var_15))))) < (var_7)));
                        }
                    }
                    arr_57 [i_5] [i_6] [i_10] = ((/* implicit */unsigned long long int) ((((unsigned long long int) var_14)) >= (var_15)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_19 = 0; i_19 < 14; i_19 += 2) 
                    {
                        for (unsigned long long int i_20 = 0; i_20 < 14; i_20 += 4) 
                        {
                            {
                                var_46 = ((/* implicit */int) max(((signed char)-94), ((signed char)-9)));
                                arr_62 [i_5] [i_5] [i_5] [(signed char)1] [i_5] [i_5] = ((/* implicit */signed char) min((((((0ULL) >> (((11332347982853079174ULL) - (11332347982853079139ULL))))) + (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) 245069797))));
                                var_47 = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)58))) + (arr_42 [i_20] [i_19] [i_6 - 2] [i_6 - 2] [i_5])))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
