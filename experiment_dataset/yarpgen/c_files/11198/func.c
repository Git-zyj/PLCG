/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11198
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
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_12 [i_3] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) var_18);
                                var_19 = arr_0 [i_1];
                                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) 12100863884426673527ULL))));
                            }
                            for (unsigned long long int i_5 = 1; i_5 < 19; i_5 += 4) 
                            {
                                var_21 = ((/* implicit */long long int) ((unsigned long long int) var_12));
                                var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_6) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_5)))))))));
                            }
                            /* vectorizable */
                            for (long long int i_6 = 1; i_6 < 16; i_6 += 3) 
                            {
                                arr_17 [i_0] [i_1] [i_3] [i_2] [i_3] [i_6 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_4 [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)8574)) && (((/* implicit */_Bool) var_17))))) : (((/* implicit */int) ((_Bool) var_14)))));
                                arr_18 [15LL] [i_3] = ((/* implicit */long long int) ((arr_10 [14ULL] [i_3] [i_6 + 1] [i_0 - 1] [i_3] [i_0]) / (var_6)));
                            }
                            for (unsigned long long int i_7 = 3; i_7 < 19; i_7 += 4) 
                            {
                                arr_21 [i_0] [i_3] [11ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)8574)) && (((/* implicit */_Bool) arr_2 [i_0] [10ULL]))));
                                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned short)56971))))))));
                                arr_22 [i_3] [i_1] [i_1] [i_3] [8ULL] |= ((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned short)8574)) << (((arr_5 [i_0 + 1]) - (11590452700132908916ULL))))), (((/* implicit */int) arr_11 [i_1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_1]))));
                                var_24 *= arr_4 [i_0 - 3];
                                var_25 |= ((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_7 - 2] [i_7 - 3] [i_7 - 3] [i_2] [i_1] [i_0 - 1]))) * (0U)))));
                            }
                            var_26 = ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_0 [i_0 - 3])), ((unsigned short)56963)))) ? ((~(((((/* implicit */_Bool) arr_19 [i_3] [i_1] [12ULL] [6LL] [(short)1] [i_0])) ? (arr_5 [i_0]) : (((/* implicit */unsigned long long int) arr_15 [i_0 - 2])))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)13897)), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-3LL)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 1; i_8 < 17; i_8 += 3) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        {
                            var_27 -= ((/* implicit */_Bool) max((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)27566))))) ? ((+(arr_14 [i_0 - 1] [i_1] [i_1] [i_8] [i_8] [i_9] [i_1]))) : (((/* implicit */unsigned long long int) min((var_18), (((/* implicit */long long int) var_13))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_12) ? (24LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44969)))))))))));
                            var_28 = ((/* implicit */short) (~(4949454364756312360ULL)));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_10 = 4; i_10 < 22; i_10 += 2) 
    {
        for (unsigned short i_11 = 2; i_11 < 23; i_11 += 2) 
        {
            {
                arr_34 [i_10] &= ((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [i_10 - 3] [i_11 - 2])) && (((/* implicit */_Bool) arr_33 [i_10 - 4] [i_11 + 1]))))), (arr_33 [i_11 - 2] [i_10 - 2])));
                var_29 = 4611686018427387903ULL;
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_12 = 1; i_12 < 14; i_12 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_13 = 1; i_13 < 14; i_13 += 2) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                {
                    arr_44 [i_14] [i_13 - 1] [11U] = ((/* implicit */_Bool) ((arr_42 [i_12] [(unsigned short)3] [(unsigned short)3] [(unsigned short)3]) ? (((/* implicit */unsigned long long int) (+((((_Bool)1) ? (((/* implicit */int) (unsigned short)56292)) : (((/* implicit */int) (_Bool)1))))))) : (((arr_0 [i_12]) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) & (4949454364756312349ULL))) : (((/* implicit */unsigned long long int) max((arr_38 [i_12] [i_13 + 2] [i_12]), (((/* implicit */long long int) (short)4316)))))))));
                    var_30 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_12 + 1] [i_13 + 1] [i_12 + 1] [i_13] [i_12 + 1])) && (((/* implicit */_Bool) arr_13 [i_12 - 1] [i_13 + 2] [i_14] [i_12] [i_12]))))), (max((288229276640083968ULL), (2549187521036250435ULL))));
                    arr_45 [i_12 + 1] [i_14] [i_12 - 1] [i_12] = ((unsigned long long int) arr_8 [i_12] [i_13] [(_Bool)1]);
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned short) ((13835058055282163712ULL) >= (0ULL)));
        /* LoopNest 2 */
        for (short i_15 = 0; i_15 < 16; i_15 += 2) 
        {
            for (unsigned int i_16 = 0; i_16 < 16; i_16 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 2) 
                    {
                        for (unsigned long long int i_18 = 1; i_18 < 15; i_18 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */long long int) min(((~((+(((/* implicit */int) (_Bool)1)))))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [10ULL] [i_16])))))))));
                                arr_57 [i_12 + 1] [i_12 + 1] [i_16] [10ULL] [i_18] [i_18 - 1] = arr_3 [(_Bool)1] [11ULL] [i_18];
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)39191))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_19 = 2; i_19 < 13; i_19 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_20 = 0; i_20 < 16; i_20 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_21 = 0; i_21 < 16; i_21 += 4) 
            {
                for (short i_22 = 0; i_22 < 16; i_22 += 2) 
                {
                    {
                        var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) var_6))));
                        arr_70 [i_19] = ((/* implicit */long long int) ((arr_54 [i_19 - 1] [i_19 + 3] [i_19 - 1] [i_19 + 3] [i_19 + 1] [i_19 - 1] [(unsigned short)15]) ? (arr_49 [i_19] [2ULL] [i_19]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7)))))));
                        var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_50 [i_19 + 1] [i_20])))))));
                        arr_71 [i_19] [i_21] [1U] [i_21] = ((((/* implicit */_Bool) 4611686018427387903ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (10809740806898980078ULL));
                        var_36 = var_8;
                    }
                } 
            } 
            var_37 -= ((/* implicit */_Bool) ((((/* implicit */long long int) arr_40 [i_19 + 3] [i_20])) | (max((((/* implicit */long long int) arr_9 [i_20] [i_19 + 1] [i_19 - 1])), (-20LL)))));
        }
        /* vectorizable */
        for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
        {
            var_38 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)8581)) << ((-(((/* implicit */int) (_Bool)0))))));
            var_39 = ((/* implicit */unsigned long long int) min((var_39), ((~(0ULL)))));
            arr_75 [i_19] = ((/* implicit */short) (-(((/* implicit */int) arr_59 [i_19 + 2]))));
            /* LoopNest 3 */
            for (unsigned short i_24 = 0; i_24 < 16; i_24 += 3) 
            {
                for (unsigned int i_25 = 1; i_25 < 13; i_25 += 3) 
                {
                    for (short i_26 = 2; i_26 < 15; i_26 += 2) 
                    {
                        {
                            arr_85 [i_19 - 2] [i_23] [i_19] = ((/* implicit */_Bool) (-(var_18)));
                            var_40 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) ((short) arr_31 [i_19] [i_26 - 2]))) : (((/* implicit */int) ((unsigned short) var_9)))));
                            arr_86 [i_19] [(unsigned short)5] = ((/* implicit */_Bool) (+(((11285183209915899962ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_27 = 1; i_27 < 14; i_27 += 3) 
        {
            var_41 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (19LL)))) ? (arr_7 [i_19 + 2]) : (((/* implicit */long long int) ((((unsigned int) var_13)) | (((/* implicit */unsigned int) ((var_7) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_52 [i_19] [i_19] [i_19]))))))))));
            var_42 = ((/* implicit */long long int) var_15);
        }
        var_43 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (((_Bool)0) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) * (min((arr_20 [14LL]), (arr_30 [(unsigned short)21] [i_19 - 1])))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) != (((((/* implicit */_Bool) (unsigned short)0)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_19] [i_19 - 1] [5ULL])))))))) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_82 [i_19 + 3] [i_19 + 2])) : (((/* implicit */int) arr_82 [i_19 + 3] [i_19 + 2]))))));
    }
}
