/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143954
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_0)) - (((/* implicit */int) var_11)))) | (((/* implicit */int) max((var_0), (var_7))))))) ? ((+(((var_2) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_13)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) (_Bool)0)), ((short)-1)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */short) max((var_21), (max(((short)7), (((/* implicit */short) (_Bool)1))))));
                    var_22 = ((/* implicit */short) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (2213372917740646080ULL)))));
                    /* LoopSeq 1 */
                    for (short i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) 13548286191716210731ULL)) ? ((+(((/* implicit */int) arr_12 [i_2 + 3] [(short)6] [i_3] [i_3 - 2] [i_3 - 2])))) : (((/* implicit */int) arr_10 [(_Bool)1])))))));
                        var_24 = ((/* implicit */short) (!(((_Bool) (((_Bool)1) || (((/* implicit */_Bool) var_15)))))));
                        var_25 = (!((!((!(arr_6 [i_1] [i_2] [i_3]))))));
                    }
                    var_26 &= ((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (arr_8 [(short)6] [i_0] [(short)16])))))));
                }
            } 
        } 
        arr_13 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) max((var_17), (((/* implicit */short) var_19))))) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) (short)-18044)), (arr_1 [i_0] [i_0]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0]))))))) : (var_4));
        /* LoopSeq 2 */
        for (short i_4 = 2; i_4 < 17; i_4 += 2) 
        {
            var_27 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_14)) | (((/* implicit */int) var_2))))))) ? (((/* implicit */int) max(((short)1), (var_9)))) : (((/* implicit */int) arr_2 [i_0]))));
            var_28 = (short)465;
        }
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            var_29 = ((unsigned long long int) (short)-32741);
            /* LoopSeq 3 */
            for (short i_6 = 0; i_6 < 19; i_6 += 2) 
            {
                /* LoopSeq 3 */
                for (short i_7 = 1; i_7 < 17; i_7 += 4) 
                {
                    var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 2])))))));
                    arr_23 [i_0] [(short)9] [i_6] [(short)3] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_5] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (2213372917740646080ULL)))) ? (((/* implicit */int) (short)22656)) : (((/* implicit */int) (!((_Bool)1))))));
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_7 + 2] [i_7] [(_Bool)1] [i_7] [i_7])) ^ (((/* implicit */int) arr_12 [i_7 + 2] [i_7] [i_7] [i_7] [i_7]))));
                    var_32 *= (!(((/* implicit */_Bool) arr_15 [i_0] [i_7 + 1] [i_7 + 1])));
                    var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_7 + 2] [i_7 + 1] [(_Bool)1] [i_7 + 2])))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 2) 
                    {
                        var_34 *= ((/* implicit */short) arr_24 [i_9] [i_8] [i_0] [12ULL] [i_0]);
                        var_35 = ((/* implicit */short) (!(arr_12 [i_0] [i_5] [(short)12] [13ULL] [(short)12])));
                        var_36 = ((unsigned long long int) arr_12 [i_0] [i_5] [i_6] [i_8] [i_9]);
                        arr_29 [(short)18] [(short)16] [i_6] [1ULL] = ((/* implicit */_Bool) ((short) ((short) var_6)));
                    }
                    arr_30 [i_0] [i_5] [i_6] [i_6] [(short)6] &= ((/* implicit */_Bool) (~(((/* implicit */int) ((short) (_Bool)1)))));
                    arr_31 [i_0] [i_5] [i_6] [i_8] = (short)3;
                }
                for (short i_10 = 0; i_10 < 19; i_10 += 2) 
                {
                    arr_34 [i_0] [i_5] [(short)4] [i_5] = (!((_Bool)1));
                    var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_5]))))) >> (17ULL)));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 4) 
                    {
                        var_38 *= ((/* implicit */_Bool) (+(arr_36 [(_Bool)1] [i_5] [i_6] [i_10] [i_11])));
                        var_39 &= ((/* implicit */short) arr_28 [i_0] [i_0] [i_5] [i_6] [i_10] [i_11]);
                        var_40 = ((/* implicit */unsigned long long int) ((arr_28 [(short)9] [i_5] [i_5] [i_6] [i_10] [i_11]) >= (arr_28 [i_0] [i_0] [i_5] [i_6] [i_10] [(short)15])));
                        var_41 = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) == (arr_26 [i_11]))))));
                    }
                    for (short i_12 = 0; i_12 < 19; i_12 += 4) 
                    {
                        var_43 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                        var_44 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0] [i_5]))));
                        arr_40 [i_0] [i_5] [i_6] [i_10] [i_12] = ((/* implicit */short) ((_Bool) arr_9 [i_0] [i_6] [i_10] [i_12]));
                    }
                    arr_41 [i_10] [16ULL] [i_5] [i_5] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_12 [i_0] [i_0] [i_5] [i_0] [i_10]))));
                }
                /* LoopSeq 1 */
                for (short i_13 = 0; i_13 < 19; i_13 += 4) 
                {
                    arr_44 [(_Bool)1] [i_5] [i_6] [i_13] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_6)) - (31263))))))));
                    arr_45 [i_0] [(short)14] [i_6] [i_13] [i_13] = ((/* implicit */_Bool) ((short) arr_1 [i_0] [i_13]));
                }
                var_45 = ((/* implicit */unsigned long long int) ((short) (_Bool)1));
                var_46 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_15)) ? (5557594729086336147ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                arr_46 [i_0] [(short)12] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0])) | (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_21 [i_0] [i_6]))))));
            }
            for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) /* same iter space */
            {
                var_47 *= ((/* implicit */short) arr_28 [i_0] [i_5] [i_5] [i_5] [i_5] [i_14]);
                var_48 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_42 [i_0] [i_5] [i_5] [i_14 + 1]))));
                arr_50 [i_0] [i_0] [i_5] [i_0] = arr_8 [i_0] [i_14 + 1] [i_14 + 1];
            }
            for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) /* same iter space */
            {
                arr_55 [i_0] [i_0] [i_5] [5ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-30219)) ? (22ULL) : (16233371155968905518ULL)));
                var_49 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_15 + 1] [i_5]))));
                arr_56 [(_Bool)1] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-32758)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)26003))));
            }
        }
        /* LoopNest 2 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (unsigned long long int i_17 = 0; i_17 < 19; i_17 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            {
                                var_50 = arr_52 [i_0] [i_17] [i_18];
                                var_51 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_28 [i_0] [i_0] [2ULL] [i_17] [i_18] [i_19])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-9436))))));
                                arr_71 [i_0] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9422)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8102))) : (2005751885471457163ULL)))) ? ((+(arr_68 [(short)5] [i_16] [i_17] [i_18] [i_19]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))));
                            }
                        } 
                    } 
                    var_52 |= ((/* implicit */short) (~((~(max((((/* implicit */unsigned long long int) (short)-9405)), (0ULL)))))));
                    var_53 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */_Bool) var_6)) && (var_2)))), (var_3)))) ? ((((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 2213372917740646073ULL)) && (((/* implicit */_Bool) arr_54 [i_17] [i_16] [i_0]))))) : (((/* implicit */int) var_7)))) : (max(((((_Bool)1) ? (((/* implicit */int) (short)32763)) : (((/* implicit */int) var_14)))), (((((/* implicit */_Bool) arr_9 [(short)7] [i_16] [(short)7] [i_0])) ? (((/* implicit */int) arr_8 [i_17] [i_16] [i_0])) : (((/* implicit */int) (short)-32760))))))));
                    var_54 -= ((/* implicit */_Bool) ((((_Bool) max((16233371155968905518ULL), (((/* implicit */unsigned long long int) arr_18 [i_0] [i_16]))))) ? (max((((/* implicit */unsigned long long int) max((arr_67 [i_17] [i_16] [(_Bool)1] [i_0]), (arr_48 [(short)8] [i_16] [i_16] [i_17])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)29385))) | (arr_36 [i_0] [i_0] [i_0] [i_16] [i_17]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_16] [i_17])))));
                }
            } 
        } 
    }
    var_55 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-6)) : (((/* implicit */int) (!((_Bool)0)))))));
}
