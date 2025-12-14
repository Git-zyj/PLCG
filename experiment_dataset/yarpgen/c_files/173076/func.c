/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173076
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_15 = ((/* implicit */short) (+(((/* implicit */int) ((min((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))) == (max((arr_1 [i_0]), (11534014374718719242ULL))))))));
        var_16 = ((/* implicit */int) ((min((arr_0 [i_0] [i_0]), (((/* implicit */long long int) var_6)))) + (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (13699200324425313102ULL) : (((/* implicit */unsigned long long int) 8596474488142974451LL))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */int) min(((+(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_10)) ^ (arr_0 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] = arr_8 [i_1] [i_1] [i_1];
                        var_17 = ((/* implicit */int) (~(arr_9 [i_0] [i_0])));
                        arr_12 [i_0] [i_1] = ((/* implicit */_Bool) ((long long int) ((unsigned long long int) arr_5 [i_1] [i_1])));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_20 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_4)))) ? (((long long int) arr_9 [i_1] [i_1])) : (((/* implicit */long long int) arr_5 [i_0] [i_1]))));
                        arr_21 [i_0] [i_1] [3] [i_1] = ((/* implicit */unsigned int) -5460904336390621391LL);
                        arr_22 [i_0] [i_0] [i_0] = (~(((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_5])));
                        var_18 = ((/* implicit */long long int) min((var_18), (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_5]))) % (arr_9 [i_5] [i_1])))));
                        arr_23 [i_0] [i_1] = ((/* implicit */_Bool) ((arr_8 [i_0] [i_4] [i_4]) ^ (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        }
    }
    for (int i_6 = 0; i_6 < 22; i_6 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 2) /* same iter space */
            {
                var_19 = ((((/* implicit */int) arr_29 [i_8] [i_6] [i_6])) | (((/* implicit */int) arr_29 [i_6] [i_6] [i_6])));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 22; i_9 += 3) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_20 *= ((/* implicit */_Bool) arr_32 [i_6] [i_10]);
                            var_21 = ((/* implicit */int) ((((/* implicit */int) arr_30 [i_9])) >= (((/* implicit */int) arr_30 [i_8]))));
                            var_22 = ((/* implicit */unsigned int) arr_33 [9]);
                            var_23 = ((/* implicit */unsigned int) ((_Bool) arr_27 [i_10]));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 2) /* same iter space */
            {
                arr_40 [i_6] [i_6] [i_11] = ((/* implicit */_Bool) 676756131);
                /* LoopSeq 4 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_24 = ((/* implicit */unsigned int) ((((int) ((((/* implicit */_Bool) arr_31 [i_6] [(_Bool)1] [3] [i_12])) ? (16384U) : (((/* implicit */unsigned int) arr_42 [i_12] [i_6] [i_6] [i_6] [i_6]))))) ^ (min((-602702776), ((-2147483647 - 1))))));
                    var_25 -= ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) min((((/* implicit */long long int) arr_34 [i_11])), (-2822934049622683075LL))))) / (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)20734)))) <= (((/* implicit */int) ((((/* implicit */_Bool) 341826561)) || (((/* implicit */_Bool) arr_25 [i_6] [i_7]))))))))));
                }
                /* vectorizable */
                for (int i_13 = 3; i_13 < 21; i_13 += 2) /* same iter space */
                {
                    arr_48 [i_6] [i_7] [i_11] [i_13] = ((/* implicit */unsigned long long int) arr_24 [10]);
                    arr_49 [i_13 + 1] = ((/* implicit */unsigned long long int) arr_30 [i_13 - 1]);
                    arr_50 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) (~(arr_28 [i_13 - 3])));
                    arr_51 [i_6] [i_6] [i_11] [10] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_44 [i_13] [i_7] [i_7] [i_13 - 2] [i_13 - 2] [i_11])) * (294277468)));
                }
                for (int i_14 = 3; i_14 < 21; i_14 += 2) /* same iter space */
                {
                    arr_55 [i_7] [i_7] [i_7] [i_7] [i_7] = (+((-(((/* implicit */int) (!(((/* implicit */_Bool) -671739367782168312LL))))))));
                    arr_56 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_34 [i_14 - 3])) >> (((/* implicit */int) arr_34 [i_14 - 2]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_53 [i_14 - 1])) + (((/* implicit */int) min((arr_41 [i_6] [i_7] [i_7] [i_6]), ((_Bool)1))))))) : ((-(2248322218U)))));
                    var_26 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-17788))))), (max((((/* implicit */unsigned int) (~(-25)))), (3U)))));
                    arr_57 [9U] [(short)9] [(short)9] [9U] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (((-2147483647 - 1)) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_11] [i_11])) ? (arr_32 [i_7] [i_14 - 3]) : (((/* implicit */unsigned int) var_12))))) : (arr_33 [i_7])))));
                    arr_58 [i_6] [(_Bool)1] [(_Bool)1] [i_14] [i_14] = ((/* implicit */long long int) var_9);
                }
                for (int i_15 = 1; i_15 < 20; i_15 += 3) 
                {
                    arr_62 [i_15] [i_11] [i_7] [i_7] [i_6] = min(((((!(((/* implicit */_Bool) arr_53 [i_6])))) ? (((((/* implicit */_Bool) arr_42 [i_15] [i_11] [3] [3] [i_6])) ? (var_6) : (arr_28 [i_6]))) : (((/* implicit */int) arr_54 [12] [i_7] [i_7] [i_7] [i_7] [i_7])))), ((+(((/* implicit */int) arr_53 [i_15 - 1])))));
                    /* LoopSeq 1 */
                    for (int i_16 = 0; i_16 < 22; i_16 += 2) 
                    {
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_41 [i_15] [i_15 + 2] [i_15] [i_15])), (arr_35 [i_15] [i_15] [(_Bool)1] [i_15] [i_7])))) - (max((arr_45 [i_15 - 1] [i_15]), (((/* implicit */unsigned long long int) max((arr_27 [i_11]), (((/* implicit */long long int) arr_64 [i_16])))))))));
                        var_28 = arr_25 [i_15] [i_15 + 2];
                        arr_67 [i_15 + 1] = arr_45 [i_6] [i_6];
                    }
                    arr_68 [6] [i_7] [i_7] [i_15] = (-(((/* implicit */int) arr_53 [i_6])));
                }
                arr_69 [i_6] [i_7] [i_11] = ((/* implicit */unsigned long long int) (-(arr_42 [i_6] [i_6] [i_7] [(short)21] [i_11])));
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((arr_36 [i_6] [i_7] [i_11] [i_7] [i_11] [i_6] [i_11]) << (((/* implicit */int) var_14)))))))) >> (((min((max((var_5), (((/* implicit */unsigned long long int) arr_32 [i_7] [i_11])))), ((~(arr_37 [i_6] [i_6] [i_6] [i_6]))))) - (9238846508600998438ULL)))));
            }
            arr_70 [i_6] [i_6] = ((/* implicit */int) max((((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_54 [i_7] [i_7] [i_7] [19ULL] [i_6] [i_6])) : (((/* implicit */int) arr_26 [i_6]))))))), (2U)));
            /* LoopNest 3 */
            for (unsigned long long int i_17 = 1; i_17 < 20; i_17 += 4) 
            {
                for (long long int i_18 = 0; i_18 < 22; i_18 += 4) 
                {
                    for (int i_19 = 2; i_19 < 19; i_19 += 3) 
                    {
                        {
                            arr_80 [i_6] [i_7] [14] [i_18] [i_6] = (((+(arr_74 [i_17 - 1] [i_17 - 1] [i_17 - 1]))) % ((~(((int) 1946110119U)))));
                            var_30 = ((/* implicit */int) (!(((arr_77 [i_19 + 1]) <= (arr_61 [i_17 + 2] [i_17 + 2] [i_17 + 2] [i_17 + 2] [i_17])))));
                        }
                    } 
                } 
            } 
        }
        arr_81 [i_6] [i_6] = ((((/* implicit */_Bool) arr_66 [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_44 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((13ULL) & (((/* implicit */unsigned long long int) -824464532)))))))));
    }
    var_31 |= ((int) min(((-(var_6))), (((/* implicit */int) ((_Bool) var_0)))));
}
