/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160306
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) ((var_10) < (((/* implicit */int) arr_0 [i_0] [i_0 + 1]))));
        var_16 |= ((/* implicit */int) ((((/* implicit */_Bool) (~(262143)))) ? (((((/* implicit */_Bool) (unsigned char)121)) ? (642507821U) : (((/* implicit */unsigned int) -1)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(short)4])))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_17 = ((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1]);
            var_18 = ((/* implicit */short) (((-(((/* implicit */int) (signed char)26)))) * (((/* implicit */int) (signed char)41))));
        }
        var_19 = ((/* implicit */unsigned char) ((7592717760181031113ULL) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3544359928083501646LL)) ? (68719476735LL) : (((/* implicit */long long int) ((/* implicit */int) (short)29335))))))));
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_3 = 2; i_3 < 17; i_3 += 1) 
        {
            for (int i_4 = 2; i_4 < 17; i_4 += 2) 
            {
                {
                    var_20 = ((/* implicit */_Bool) min((min((((/* implicit */short) ((-1383499084) >= (((/* implicit */int) var_6))))), (max((var_2), (arr_13 [i_2] [i_3] [(unsigned char)18] [i_4 + 1]))))), (((/* implicit */short) var_6))));
                    var_21 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) var_11)), (arr_7 [i_2 + 1])))) ? ((+(((/* implicit */int) arr_6 [i_2 + 1])))) : (min((((/* implicit */int) arr_6 [i_2 + 1])), (arr_7 [i_2 + 1])))));
                    var_22 = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_13 [i_2 + 1] [i_2] [i_3 - 1] [i_4 - 1]))))));
                }
            } 
        } 
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_7 [i_2 + 1])))) ? (((((/* implicit */long long int) ((/* implicit */int) var_1))) % (max((((/* implicit */long long int) arr_6 [i_2])), (5827915870583108939LL))))) : (((/* implicit */long long int) max((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)163)), (var_8)))), (arr_7 [i_2]))))));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
    {
        var_24 = ((((/* implicit */int) ((unsigned short) var_12))) != ((+(((/* implicit */int) var_1)))));
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            for (int i_7 = 1; i_7 < 17; i_7 += 1) 
            {
                {
                    var_25 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_5])))))));
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (short)13662)) ? (((/* implicit */int) (signed char)-26)) : (arr_7 [i_7 + 1])));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_8 = 0; i_8 < 15; i_8 += 2) 
    {
        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_8] [i_8] [i_8]))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_11 [i_8] [i_8] [i_8]))));
        var_28 = ((/* implicit */_Bool) arr_20 [i_8]);
    }
    var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) (unsigned short)36888))));
    /* LoopNest 2 */
    for (unsigned char i_9 = 2; i_9 < 23; i_9 += 1) 
    {
        for (int i_10 = 1; i_10 < 23; i_10 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned char i_12 = 0; i_12 < 24; i_12 += 2) 
                    {
                        for (short i_13 = 1; i_13 < 22; i_13 += 2) 
                        {
                            {
                                var_30 = ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) arr_39 [i_9])))));
                                var_31 |= ((/* implicit */unsigned int) min((((/* implicit */short) arr_36 [2LL] [2LL] [i_13 + 1] [i_13])), ((short)8449)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_14 = 0; i_14 < 24; i_14 += 4) 
                {
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        for (long long int i_16 = 1; i_16 < 20; i_16 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */long long int) (unsigned char)21);
                                var_33 = ((/* implicit */long long int) (~(((/* implicit */int) var_8))));
                                var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)100)) ? (((/* implicit */int) (signed char)26)) : (1646022480))) + (((/* implicit */int) (short)255))))) || (((/* implicit */_Bool) (unsigned char)3))));
                                var_35 = ((/* implicit */short) ((((/* implicit */_Bool) 889972534)) ? (((/* implicit */int) (signed char)-1)) : (1564749617)));
                                var_36 ^= ((/* implicit */unsigned int) (((_Bool)1) ? ((~(((/* implicit */int) arr_45 [i_14] [i_9] [i_9 - 1])))) : (((/* implicit */int) (!(arr_28 [i_10 - 1] [i_10 - 1]))))));
                            }
                        } 
                    } 
                } 
                var_37 = ((/* implicit */_Bool) (+((~(-1646022455)))));
                /* LoopNest 2 */
                for (unsigned int i_17 = 0; i_17 < 24; i_17 += 3) 
                {
                    for (unsigned char i_18 = 0; i_18 < 24; i_18 += 1) 
                    {
                        {
                            var_38 = ((/* implicit */short) ((((min((((/* implicit */long long int) (signed char)-1)), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39747))) : (5827915870583108939LL))))) + (9223372036854775807LL))) >> ((((~(((/* implicit */int) (_Bool)1)))) + (44)))));
                            /* LoopSeq 2 */
                            for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                            {
                                var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) (+(((((/* implicit */_Bool) arr_26 [10])) ? (((/* implicit */long long int) (+(((/* implicit */int) var_12))))) : (arr_37 [i_19 + 1] [i_19 + 1] [i_19] [i_19 + 1] [i_19 + 1]))))))));
                                var_40 = ((/* implicit */unsigned short) -1LL);
                            }
                            /* vectorizable */
                            for (unsigned char i_20 = 1; i_20 < 23; i_20 += 3) 
                            {
                                var_41 = ((/* implicit */long long int) arr_49 [i_9 + 1] [(unsigned char)15] [i_9 - 2]);
                                var_42 = ((/* implicit */unsigned char) (_Bool)1);
                                var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_42 [i_9 + 1] [i_9 + 1] [i_9] [i_20 + 1])) ? ((+(((/* implicit */int) arr_31 [10U] [10U] [i_17] [i_17])))) : ((+(((/* implicit */int) var_7))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
