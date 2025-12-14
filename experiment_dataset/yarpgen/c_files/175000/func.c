/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175000
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) /* same iter space */
    {
        var_16 ^= ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) (_Bool)0)), (((arr_2 [10ULL]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (13144224782266664489ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)134))) : (arr_1 [2U])))) ? (((((/* implicit */_Bool) arr_0 [i_0] [2ULL])) ? (((/* implicit */int) arr_2 [10U])) : (((/* implicit */int) (short)-1)))) : (((/* implicit */int) arr_2 [(unsigned char)14])))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (short)25345))) < (var_15))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)232)) * (((/* implicit */int) var_8))))) : (min((((/* implicit */unsigned long long int) 0LL)), (var_0)))))) ? (((unsigned int) max((arr_5 [i_0] [i_0] [i_1]), (((/* implicit */unsigned int) var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_4 [i_0] [i_0]))))));
            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((_Bool) 3058660993U)) ? (((/* implicit */long long int) min((arr_0 [i_0] [i_1]), (((/* implicit */unsigned int) var_5))))) : (min((1163647604821122893LL), (((/* implicit */long long int) (signed char)-33))))))))))));
            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((_Bool) min((arr_3 [(short)8] [(short)8]), (((/* implicit */long long int) (-(((/* implicit */int) var_12)))))))))));
            var_19 = ((/* implicit */unsigned short) (_Bool)1);
        }
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) < (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_9 [0LL])))))), ((short)-1))))));
            arr_11 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) ((arr_2 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_4)))) ? (((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_1 [i_0]))) : (((/* implicit */long long int) arr_5 [i_0] [i_2] [i_0]))))));
            /* LoopSeq 1 */
            for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                var_21 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (max((((var_12) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0])) : (arr_7 [i_2] [i_2] [i_2]))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_8 [(_Bool)0])), (-9223372036854775787LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((var_0) + (((/* implicit */unsigned long long int) arr_1 [12ULL]))))) && (((/* implicit */_Bool) ((var_11) >> (((13716690749066263326ULL) - (13716690749066263307ULL))))))))))));
                var_22 ^= max((var_3), (((/* implicit */unsigned int) max((((unsigned char) (unsigned char)255)), (((/* implicit */unsigned char) ((_Bool) arr_12 [i_0] [i_3])))))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 2; i_4 < 15; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) arr_19 [i_4] [i_4 + 1] [i_4 - 2] [i_4 + 1] [i_0])), (arr_16 [i_4] [i_4 - 1] [i_4 - 2] [i_4 - 1] [i_4 - 2] [i_4 - 1]))), (((/* implicit */unsigned long long int) min((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-55)), ((unsigned short)26991)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-82)))))))));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) >> (((3058661013U) - (3058660962U)))))) ? (var_4) : (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) 7U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12)))))))));
                            var_25 = ((/* implicit */signed char) ((((unsigned long long int) max(((signed char)89), (((/* implicit */signed char) arr_20 [i_0] [i_2] [i_3]))))) * (((((/* implicit */_Bool) arr_0 [i_4 + 1] [i_4 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_16 [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_4 + 1] [i_4 - 1] [i_4 + 1])))));
                        }
                    } 
                } 
            }
        }
        arr_22 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned int) ((_Bool) max((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [(short)13] [i_0]), (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
    }
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_32 [6ULL] [i_7] [i_7] [i_8] |= ((/* implicit */unsigned char) arr_7 [7ULL] [i_7] [15ULL]);
                    var_26 = ((/* implicit */unsigned char) ((arr_12 [i_6] [i_6]) ? (((((arr_29 [i_6] [i_6] [i_7] [i_8]) + (9223372036854775807LL))) >> (((((/* implicit */int) var_6)) + (177))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_14 [i_8] [i_8] [i_6]))))));
                    arr_33 [0LL] &= ((/* implicit */signed char) 0);
                    arr_34 [i_6] = ((((/* implicit */_Bool) 4294967285U)) ? (arr_28 [i_8] [i_8]) : (arr_28 [i_7] [i_8]));
                    var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_17 [i_6] [i_7] [i_6])) > (arr_15 [2LL] [i_8] [i_6]))))));
                }
            } 
        } 
        arr_35 [i_6] = ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_6] [i_6]))) * (arr_23 [i_6] [15ULL])))));
        var_28 ^= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) -9214370581391621402LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))));
    }
    for (long long int i_9 = 0; i_9 < 10; i_9 += 1) 
    {
        arr_39 [i_9] [i_9] = ((/* implicit */long long int) (!(((((/* implicit */unsigned long long int) min((4294967289U), (((/* implicit */unsigned int) (unsigned char)0))))) < (var_0)))));
        var_29 ^= ((/* implicit */signed char) ((max((((_Bool) arr_5 [i_9] [i_9] [i_9])), ((_Bool)1))) ? (((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) (short)27317)))))) : (min((((/* implicit */unsigned long long int) ((var_3) == (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_9] [2U])))))), (arr_14 [i_9] [i_9] [(signed char)0])))));
        arr_40 [i_9] &= ((/* implicit */unsigned int) var_8);
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 3; i_10 < 16; i_10 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(8711282192570278561LL)))) ? (((/* implicit */unsigned long long int) arr_42 [i_10])) : (((unsigned long long int) arr_41 [i_10] [i_10]))));
            var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((arr_42 [(_Bool)1]) | (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
        }
        /* LoopNest 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_45 [(_Bool)1] [(_Bool)1]))) ? (((((/* implicit */_Bool) -446958732)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_13] [i_10 + 3] [i_10 + 3]))) : (arr_48 [6ULL] [i_12] [6ULL]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) 8U)))))))));
                    var_33 = arr_47 [i_10] [i_10] [i_12];
                    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_45 [i_10] [i_10 - 1])) ? (((/* implicit */long long int) arr_48 [i_10] [i_12] [i_13])) : (((long long int) arr_46 [i_10]))));
                    /* LoopSeq 1 */
                    for (long long int i_14 = 1; i_14 < 18; i_14 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_42 [i_10])) ? (arr_42 [i_10]) : (((/* implicit */long long int) arr_43 [i_10 + 1] [i_10 - 3]))));
                        var_36 ^= ((/* implicit */short) (+(6ULL)));
                        var_37 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_41 [i_10] [i_10])) / (((/* implicit */int) arr_41 [i_10] [i_10]))));
                    }
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned long long int i_15 = 1; i_15 < 9; i_15 += 1) 
    {
        for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 1) 
        {
            {
                arr_57 [i_15] [i_16] [i_15] = ((/* implicit */unsigned long long int) arr_38 [i_15]);
                /* LoopSeq 1 */
                for (signed char i_17 = 0; i_17 < 10; i_17 += 1) 
                {
                    var_38 &= ((/* implicit */signed char) min((min((arr_24 [i_15 - 1] [i_15 - 1]), (arr_24 [i_15 + 1] [i_15 + 1]))), (((((/* implicit */_Bool) arr_17 [i_15] [i_15 + 1] [i_15 - 1])) ? (arr_24 [i_15 + 1] [i_15 + 1]) : (arr_24 [i_15 + 1] [i_15 + 1])))));
                    arr_60 [i_16] [i_16] [i_16] [8LL] |= ((/* implicit */signed char) (-(var_15)));
                }
                var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (max((min((-8237755250664161909LL), (((/* implicit */long long int) (unsigned char)214)))), (((/* implicit */long long int) ((_Bool) 6ULL))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_15 - 1] [i_15 + 1] [i_15] [i_15 + 1] [i_15] [i_15 + 1] [i_15 - 1])) * (((/* implicit */int) arr_12 [i_15 - 1] [i_15 + 1])))))));
                arr_61 [i_15] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) arr_13 [i_15 + 1] [i_15 + 1] [i_15 + 1])) : (((/* implicit */int) (_Bool)0))))), (((unsigned long long int) arr_10 [i_15] [i_15] [i_15]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_15]))) : (((((unsigned long long int) 561040762U)) << (((arr_45 [i_15] [i_15 + 1]) - (9479208281539412566ULL))))));
                var_40 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_36 [i_15 - 1])) ? (((var_1) ? (arr_43 [i_15 + 1] [i_15 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_16] [8U] [i_15]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}
