/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113011
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [i_0])), (arr_0 [i_0])))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) ((((unsigned long long int) -2882817361229442566LL)) | (((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) var_12)), (var_11))))))));
        var_14 = ((/* implicit */short) ((unsigned long long int) arr_3 [i_0]));
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (-(((((/* implicit */int) ((var_7) && (((/* implicit */_Bool) arr_3 [i_0]))))) ^ (((((((/* implicit */int) var_9)) + (2147483647))) << (((((var_11) + (7206660702052414514LL))) - (18LL))))))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 3; i_1 < 13; i_1 += 3) /* same iter space */
    {
        arr_10 [i_1] [i_1] = ((/* implicit */_Bool) arr_7 [(short)6]);
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 - 1]))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))) : (var_11)))));
            /* LoopSeq 2 */
            for (short i_3 = 2; i_3 < 13; i_3 += 2) /* same iter space */
            {
                var_17 = ((/* implicit */_Bool) ((unsigned char) arr_11 [i_3] [i_2] [i_1]));
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_13 [i_1 + 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((0U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(short)8]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_13)))))));
                /* LoopSeq 1 */
                for (unsigned char i_4 = 3; i_4 < 13; i_4 += 3) 
                {
                    arr_19 [i_4] = ((/* implicit */unsigned int) ((short) var_6));
                    arr_20 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_14 [i_3] [i_2] [i_1])) + (((/* implicit */int) var_7)))) + (((/* implicit */int) var_7))));
                }
                /* LoopSeq 3 */
                for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 525413101U)) + (arr_0 [i_5])));
                    var_20 = ((/* implicit */long long int) (~(arr_13 [i_1 - 1])));
                }
                for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 3) /* same iter space */
                {
                    var_21 = ((/* implicit */short) min((var_21), (((short) arr_3 [i_6]))));
                    var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_3 - 1] [i_1 + 1] [i_1 - 3] [i_1 - 1])) ? (arr_24 [i_3 - 2] [i_1 + 1] [i_1 - 3] [i_1 - 1]) : (var_2)));
                    arr_27 [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_1 - 1] [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_26 [i_1 - 3] [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) arr_26 [i_1 - 1] [i_1 - 1] [i_1 - 3]))));
                    var_23 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_16 [i_1] [i_2] [i_2] [i_6]))))) & (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) & (arr_22 [i_1] [i_2])))));
                }
                for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((arr_13 [i_2]) - (arr_0 [(_Bool)1])))));
                    /* LoopSeq 3 */
                    for (short i_8 = 0; i_8 < 14; i_8 += 1) 
                    {
                        arr_33 [i_7] [i_7] [i_3] [i_2] [i_7] = ((/* implicit */unsigned long long int) ((unsigned char) var_1));
                        var_25 = ((/* implicit */unsigned int) var_1);
                    }
                    for (long long int i_9 = 0; i_9 < 14; i_9 += 3) 
                    {
                        var_26 = ((unsigned int) ((((var_11) + (9223372036854775807LL))) << (((((/* implicit */int) arr_23 [i_1] [(short)6] [i_1 - 3] [i_1] [i_1] [i_1])) - (14000)))));
                        var_27 *= ((/* implicit */unsigned long long int) ((short) ((arr_13 [i_1]) & (((/* implicit */unsigned long long int) 1717475804U)))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 14; i_10 += 3) 
                    {
                        var_28 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1 - 1])) - (((/* implicit */int) arr_2 [i_1 - 3]))));
                        arr_38 [i_1] [i_2] [i_7] [i_3] [i_10] = ((/* implicit */unsigned int) ((short) arr_31 [i_10] [i_1] [i_7] [i_7] [i_1] [i_1]));
                        arr_39 [i_7] [i_7] [i_3] [i_2] [i_2] [i_7] = ((short) ((unsigned int) arr_29 [i_1] [i_7]));
                        var_29 = ((/* implicit */short) (~(((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_1 - 3]))));
                    }
                }
                arr_40 [i_1] [i_2] [i_2] [i_3] = ((/* implicit */long long int) ((_Bool) var_1));
            }
            for (short i_11 = 2; i_11 < 13; i_11 += 2) /* same iter space */
            {
                var_30 ^= ((/* implicit */short) arr_3 [i_11]);
                var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)12465)) ? (((/* implicit */unsigned long long int) 846741633U)) : (15547578130773889610ULL)));
            }
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
        {
            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [i_12] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_10)))) ? (((/* implicit */int) arr_2 [i_12])) : (((/* implicit */int) var_9))));
            arr_48 [i_1] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 - 2])) ? (arr_21 [i_1] [i_1] [i_12] [i_12] [i_12] [i_12]) : (((/* implicit */unsigned long long int) arr_29 [i_1 - 1] [(short)10]))));
            var_33 ^= ((/* implicit */unsigned int) (-(var_11)));
            var_34 = ((/* implicit */short) var_13);
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
        {
            arr_51 [i_13] [i_13] = ((/* implicit */unsigned int) ((arr_8 [i_1 - 2]) ? (((/* implicit */int) arr_8 [i_1 + 1])) : (((/* implicit */int) arr_8 [i_1 + 1]))));
            var_35 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))));
        }
        arr_52 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((var_12) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : (arr_7 [i_1 - 3]))) : (((/* implicit */unsigned long long int) var_10))));
    }
    for (long long int i_14 = 3; i_14 < 13; i_14 += 3) /* same iter space */
    {
        var_36 |= var_2;
        arr_56 [i_14] = ((/* implicit */unsigned int) min((((((0U) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) 6U))))))), (((((var_12) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_14] [i_14] [i_14] [i_14] [i_14]))) : (var_0))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_14] [i_14] [i_14] [i_14] [i_14 - 3])))))));
        var_37 = arr_9 [i_14];
    }
    /* LoopSeq 1 */
    for (unsigned int i_15 = 0; i_15 < 23; i_15 += 1) 
    {
        var_38 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_58 [i_15])) : (((/* implicit */int) arr_58 [i_15]))))));
        arr_59 [i_15] [i_15] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((3769554195U) >> (((7137879084702964604ULL) - (7137879084702964574ULL)))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_58 [i_15])) : (((/* implicit */int) var_12))))) : (arr_57 [i_15]))), (((((_Bool) (short)18596)) ? (arr_57 [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
    }
}
