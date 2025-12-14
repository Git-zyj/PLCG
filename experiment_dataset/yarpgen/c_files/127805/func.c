/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127805
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
    var_16 = ((/* implicit */long long int) var_14);
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 3; i_2 < 12; i_2 += 1) /* same iter space */
                {
                    arr_9 [i_1] &= ((/* implicit */unsigned char) arr_8 [i_0] [i_0] [i_2]);
                    arr_10 [i_0] = ((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) ((signed char) 0U))))));
                }
                /* vectorizable */
                for (int i_3 = 3; i_3 < 12; i_3 += 1) /* same iter space */
                {
                    arr_14 [i_3] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_0])) ? (1627616748) : (((/* implicit */int) var_2))))) ? (1627616748) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) && (((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1] [i_3 - 2])))))));
                    /* LoopSeq 2 */
                    for (long long int i_4 = 1; i_4 < 11; i_4 += 1) 
                    {
                        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((unsigned short) arr_8 [i_0 - 3] [i_1 - 2] [i_3 - 3])))));
                        arr_18 [i_0] [i_3] [i_1] [i_0] = ((/* implicit */_Bool) arr_12 [i_3] [i_0]);
                        arr_19 [i_0 + 1] [7] [i_3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */_Bool) var_14)) ? (arr_15 [i_4]) : (arr_16 [i_1])))));
                    }
                    for (unsigned short i_5 = 3; i_5 < 12; i_5 += 3) 
                    {
                        arr_22 [i_0] [i_1] [12LL] [i_0] = ((/* implicit */int) arr_1 [i_0]);
                        /* LoopSeq 3 */
                        for (long long int i_6 = 1; i_6 < 11; i_6 += 1) /* same iter space */
                        {
                            arr_25 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_3] [i_3 - 2] [i_3 - 3] [i_3 - 1])) ? (((((/* implicit */_Bool) arr_23 [i_6 - 1] [i_5] [i_3] [i_1] [i_0])) ? (((/* implicit */int) arr_11 [9LL] [(unsigned short)12] [6] [(unsigned short)12])) : (((/* implicit */int) (unsigned char)42)))) : (((/* implicit */int) var_6))));
                            arr_26 [i_1] [(unsigned char)2] [i_5] [i_3] [i_1] [i_1] [i_1] |= ((/* implicit */int) ((long long int) (+(((/* implicit */int) arr_11 [5U] [i_1 + 1] [i_5 - 1] [i_6])))));
                            var_18 = ((/* implicit */_Bool) (signed char)-35);
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_12))));
                        }
                        for (long long int i_7 = 1; i_7 < 11; i_7 += 1) /* same iter space */
                        {
                            arr_31 [i_0] = ((/* implicit */unsigned int) var_2);
                            arr_32 [i_1 - 2] [i_1] [i_0] [11U] [i_1] [(unsigned char)7] = 1627616748;
                        }
                        for (long long int i_8 = 1; i_8 < 11; i_8 += 1) /* same iter space */
                        {
                            arr_35 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) -452686356)))))))));
                        }
                        var_21 = ((/* implicit */long long int) (unsigned char)219);
                    }
                    /* LoopSeq 2 */
                    for (long long int i_9 = 0; i_9 < 13; i_9 += 4) 
                    {
                        arr_38 [i_0] [i_1 + 1] [i_3 + 1] [i_3 + 1] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 2]))) & (-340935682055905869LL)));
                        var_22 |= ((/* implicit */unsigned int) arr_1 [i_1 - 1]);
                    }
                    for (short i_10 = 3; i_10 < 11; i_10 += 4) 
                    {
                        arr_41 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [(short)0] [i_1 + 1] [i_3] [i_3])) ? ((~(var_12))) : (((/* implicit */unsigned int) var_10))));
                        var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_30 [i_0 + 2] [i_1 - 1] [i_3 - 1]))));
                        /* LoopSeq 3 */
                        for (unsigned short i_11 = 1; i_11 < 11; i_11 += 2) /* same iter space */
                        {
                            arr_44 [i_11] [i_0] [i_0] [i_1] = ((/* implicit */long long int) arr_11 [i_1] [i_1] [i_3 - 2] [i_10]);
                            var_24 = arr_17 [6ULL] [6ULL] [6ULL] [i_10];
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)17328))))))))));
                        }
                        for (unsigned short i_12 = 1; i_12 < 11; i_12 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) 0U))));
                            arr_48 [i_12] [i_0] [i_3] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_6 [(_Bool)1]) : (((/* implicit */unsigned int) -1))))) ? ((+((-2147483647 - 1)))) : (var_8)));
                        }
                        for (unsigned short i_13 = 1; i_13 < 11; i_13 += 2) /* same iter space */
                        {
                            arr_51 [i_0 + 3] [i_0] [i_0 - 3] [i_1 - 2] [i_3] [i_0] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_23 [i_0] [i_1] [i_1] [i_10] [(unsigned short)0]) - (-4408147987203925593LL)))) ? (((int) arr_2 [i_0] [i_1])) : (((/* implicit */int) (unsigned char)205))));
                            arr_52 [(short)8] [(short)8] [i_3] [i_0] [i_13 + 1] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) var_7))) % (((((/* implicit */int) (unsigned char)193)) | (((/* implicit */int) arr_1 [i_3]))))));
                        }
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_9)) ? (-9223372036854775798LL) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))));
                        var_28 |= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)42852)) ^ (((/* implicit */int) arr_2 [i_1] [i_1]))));
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                    {
                        arr_58 [i_0] [i_0] [i_3] [i_3 + 1] [1] = ((/* implicit */long long int) ((((var_0) != (((/* implicit */int) var_7)))) ? (466803603U) : (((((/* implicit */_Bool) arr_6 [i_0])) ? (var_9) : (((/* implicit */unsigned int) 452686356))))));
                        arr_59 [i_0] [i_0] = ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_5)) ? (var_9) : (arr_37 [i_0] [i_0] [i_1] [i_0] [(_Bool)1]))) : (((/* implicit */unsigned int) 1627616764)));
                    }
                    for (int i_16 = 1; i_16 < 12; i_16 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned int) 524287LL);
                        arr_63 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-9223372036854775807LL - 1LL));
                        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (+(arr_40 [i_0 + 2] [i_1 - 2] [i_3] [i_16 - 1]))))));
                        arr_64 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_30 [(_Bool)1] [i_0 + 2] [i_0 - 2])) ? (((/* implicit */int) arr_30 [i_0] [i_0 + 2] [i_0 - 1])) : (((/* implicit */int) arr_30 [(unsigned char)6] [i_0 - 2] [i_0 + 1]))));
                    }
                }
                var_31 = ((/* implicit */unsigned char) (!(((((((/* implicit */_Bool) var_8)) ? (4408147987203925593LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0]))))) == (-4408147987203925573LL)))));
                var_32 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)39508)) : (((/* implicit */int) var_2))))) ? (arr_61 [i_1]) : ((+(((/* implicit */int) (unsigned char)153))))))));
                var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)42417)) ? (3796460640U) : (255U))))));
            }
        } 
    } 
    var_34 -= ((/* implicit */_Bool) var_8);
}
