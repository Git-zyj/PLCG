/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121896
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
    /* LoopSeq 4 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_11 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) var_6)), (arr_0 [0LL]))))))));
        arr_2 [i_0] = min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0))))), ((-(arr_1 [i_0]))));
        var_12 = ((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
        arr_3 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) (_Bool)1)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_13 = ((((-6045263011665356507LL) + (9223372036854775807LL))) << (((16ULL) - (16ULL))));
                                var_14 = ((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_1] [i_1]));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */unsigned long long int) arr_13 [i_1] [i_1] [i_2] [i_3] [i_3] [i_3]))))))) ? ((~(var_10))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_13 [11ULL] [i_2] [i_2] [(_Bool)1] [i_3] [i_3]) : (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1] [i_1] [i_2] [i_2] [i_2] [i_2] [(_Bool)1]))) : (var_4)))) ? (min(((~(arr_14 [i_1] [i_2] [i_3] [i_1] [i_2] [i_2] [(_Bool)1]))), (((((/* implicit */_Bool) var_6)) ? (arr_14 [i_1] [i_2] [i_1] [i_1] [i_2] [(_Bool)1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))) : (((/* implicit */long long int) ((/* implicit */int) max(((((_Bool)1) && ((_Bool)0))), (max((arr_10 [i_1] [(_Bool)1] [i_3]), ((_Bool)1))))))))))));
                }
            } 
        } 
        var_17 = (+(arr_5 [i_1]));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                {
                    var_18 = arr_20 [i_6] [i_6];
                    arr_23 [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_18 [i_1] [i_6] [i_1]);
                    arr_24 [i_6] [i_6] [6LL] = ((/* implicit */_Bool) (-(13124308063675922470ULL)));
                    arr_25 [i_6] [i_6] = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) ((long long int) var_9))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL)))))));
                }
            } 
        } 
        var_19 = ((/* implicit */_Bool) (~(108086391056891904LL)));
    }
    for (long long int i_8 = 0; i_8 < 24; i_8 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_31 [i_9] [i_8] [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
            arr_32 [i_9] = ((min(((+(var_5))), (((long long int) var_3)))) ^ (((((arr_30 [i_9] [i_8]) ? (9223372036854775807LL) : (arr_26 [i_9] [i_8]))) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
            var_20 *= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (_Bool)1)), ((~(18446744073709551614ULL)))));
        }
        var_21 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_28 [i_8] [i_8])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_30 [i_8] [i_8])))) == ((-(((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 1) 
    {
        arr_37 [i_10] = ((/* implicit */_Bool) 8026685382986381806ULL);
        arr_38 [i_10] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (arr_26 [i_10] [i_10]))))))), (var_4)));
    }
    var_22 = ((/* implicit */_Bool) var_5);
    /* LoopSeq 2 */
    for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 1) 
    {
        arr_42 [i_11] = ((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (-9223372036854775807LL)))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((long long int) 4606921582781284862ULL)) | ((~(739977921463870851LL)))))) ? (((((((/* implicit */int) var_2)) > (((/* implicit */int) var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_8)))) : (((((/* implicit */_Bool) arr_33 [i_11] [(_Bool)1])) ? (arr_41 [i_11]) : (arr_41 [1LL]))))) : (((long long int) (_Bool)1))));
    }
    for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_13 = 1; i_13 < 19; i_13 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_14 = 0; i_14 < 21; i_14 += 1) 
            {
                for (long long int i_15 = 1; i_15 < 18; i_15 += 1) 
                {
                    {
                        arr_53 [i_15] [i_12] [i_12] [i_12] |= ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_16 = 0; i_16 < 21; i_16 += 2) 
                        {
                            var_24 = arr_41 [i_15];
                            arr_56 [8LL] [i_13] [i_14] [i_15 + 2] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_13] [i_13])) ? (arr_28 [i_13] [i_13 + 2]) : (arr_28 [i_13] [i_13])));
                            arr_57 [i_12] [i_13] [i_13] [20ULL] [i_16] = ((/* implicit */unsigned long long int) ((-359910622788430723LL) == (17592186044415LL)));
                        }
                        /* vectorizable */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            var_25 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_54 [i_17] [i_15] [i_14] [i_13] [i_12]))) : (var_5))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_13 - 1])) ? ((~(-9197549057218946277LL))) : (arr_59 [i_15 - 1] [i_13 + 1] [i_14] [i_15] [i_13 + 2]))))));
                        }
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            arr_62 [i_13] [(_Bool)1] [(_Bool)1] [i_15] [i_18] = var_6;
                            arr_63 [i_18] [i_18] [(_Bool)1] [i_12] [6ULL] |= ((/* implicit */unsigned long long int) ((_Bool) min((max((-7827418241246054324LL), (-5847849462845304582LL))), (((/* implicit */long long int) arr_48 [(_Bool)1] [i_18] [i_18] [i_13 + 2])))));
                        }
                        var_27 ^= ((/* implicit */_Bool) max(((~((((_Bool)1) ? (arr_35 [i_12] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_14]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) var_8))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [i_12] [i_13] [i_14] [i_14] [i_15])) ? (arr_28 [i_12] [i_15 + 2]) : (var_9)))))))));
                        arr_64 [i_13] = ((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_58 [(_Bool)1] [i_13 - 1] [i_14] [i_13] [i_15] [6LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (11782789702747669297ULL))) : (((/* implicit */unsigned long long int) (~((-9223372036854775807LL - 1LL)))))));
                        arr_65 [(_Bool)1] [i_13] [i_14] [(_Bool)1] [i_14] = min((((/* implicit */unsigned long long int) max((arr_49 [i_13 + 2] [i_15 - 1] [i_15 + 2] [i_15 + 2]), (arr_49 [i_13 + 1] [i_15 + 2] [i_15 + 1] [i_15 + 1])))), (((((/* implicit */_Bool) arr_49 [i_13 - 1] [i_15 + 2] [i_15 + 2] [i_15 + 3])) ? (((/* implicit */unsigned long long int) arr_49 [i_13 - 1] [i_15 + 2] [i_15 + 2] [i_15 - 1])) : (var_3))));
                    }
                } 
            } 
            arr_66 [i_13] = max((-3315285019406927233LL), (((/* implicit */long long int) (_Bool)1)));
        }
        var_28 |= ((/* implicit */_Bool) max((12ULL), (13416356945959525546ULL)));
        var_29 = ((/* implicit */_Bool) arr_33 [i_12] [i_12]);
    }
}
