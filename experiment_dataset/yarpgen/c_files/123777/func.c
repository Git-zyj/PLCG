/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123777
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
    var_14 = ((/* implicit */_Bool) var_11);
    var_15 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((var_1) ? (((/* implicit */unsigned long long int) 382046850)) : (11932404817854484410ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))) : (var_12)))));
    var_16 = ((/* implicit */unsigned int) ((int) var_3));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                /* LoopSeq 4 */
                for (short i_3 = 3; i_3 < 10; i_3 += 1) 
                {
                    var_17 = ((((/* implicit */_Bool) arr_3 [0LL] [(short)7] [i_2 - 1])) ? (((/* implicit */int) arr_3 [(_Bool)1] [9ULL] [i_2 - 1])) : (((/* implicit */int) arr_3 [10] [4] [i_2 - 1])));
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-5545)) ? (17974783542108512346ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)18974)) * (((/* implicit */int) (short)18969)))))));
                    var_19 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [11]))))) ? (((/* implicit */int) arr_1 [(short)8])) : (((int) 6514339255855067219ULL))));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_5) | (((/* implicit */int) (signed char)49))))) ? ((-(((/* implicit */int) (short)-18971)))) : (((/* implicit */int) arr_4 [i_2 + 1]))));
                    var_21 = ((/* implicit */long long int) ((((arr_6 [5] [(unsigned char)10]) << (((/* implicit */int) arr_0 [(short)9] [(signed char)11])))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_6 [1] [(unsigned char)2]) >= (6514339255855067205ULL)))))));
                    /* LoopSeq 1 */
                    for (short i_5 = 2; i_5 < 10; i_5 += 1) 
                    {
                        arr_13 [(unsigned char)3] [(unsigned short)6] [i_4] [(short)10] [0ULL] = (-(((/* implicit */int) arr_4 [i_2 + 1])));
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (~(((/* implicit */int) (!(arr_0 [(unsigned char)6] [1ULL])))))))));
                        var_23 = ((/* implicit */long long int) ((((((/* implicit */int) (short)19725)) >= (((/* implicit */int) arr_2 [2])))) ? (((/* implicit */int) arr_7 [3] [(_Bool)1] [(signed char)10])) : (((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) arr_11 [(unsigned char)7] [(short)6] [10U])) : (((/* implicit */int) (short)9369))))));
                    }
                    arr_14 [10] [3ULL] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */int) (short)-18971)) : (((/* implicit */int) (unsigned char)83))));
                    var_24 = ((/* implicit */unsigned char) ((arr_7 [i_1 + 3] [i_1 + 3] [i_2 + 1]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)151))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((((/* implicit */_Bool) arr_9 [6LL] [i_2 - 1] [(unsigned char)6] [9ULL] [4ULL] [i_1 + 2])) ? (11932404817854484417ULL) : (((/* implicit */unsigned long long int) -8982737311198944720LL))))));
                    arr_17 [9] [3LL] [(signed char)11] [(_Bool)1] [11] = ((/* implicit */short) (-(((/* implicit */int) arr_3 [(unsigned char)0] [i_1 + 3] [i_2 - 1]))));
                    var_26 ^= ((/* implicit */short) 8388607U);
                    var_27 -= (~(((/* implicit */int) arr_3 [i_1 + 4] [i_1 + 2] [i_2 - 1])));
                }
                for (long long int i_7 = 2; i_7 < 10; i_7 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        arr_24 [(unsigned char)6] [(short)9] [11ULL] [i_8] [(unsigned char)2] [2ULL] [5ULL] = (((!(((/* implicit */_Bool) arr_3 [0ULL] [5LL] [5])))) ? (((/* implicit */unsigned long long int) (-(arr_21 [11] [1] [(signed char)4] [(short)7] [(unsigned short)0] [7])))) : ((-(6514339255855067203ULL))));
                        var_28 &= ((/* implicit */long long int) 0);
                        var_29 = arr_20 [10ULL] [(short)5] [(unsigned char)7] [9ULL];
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 1; i_9 < 9; i_9 += 1) 
                    {
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_9 + 2])) ? (((/* implicit */int) arr_2 [i_9 + 3])) : (((/* implicit */int) arr_2 [i_9 - 1]))));
                        var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) (short)18963))));
                        arr_28 [i_9] [5] [(_Bool)1] [(unsigned char)0] [6U] = ((/* implicit */unsigned char) -1787479722);
                        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (1191634083) : (var_0)))) || (((11964313767506626384ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7476)))))));
                    }
                    arr_29 [(unsigned char)5] [2U] [(short)10] [(unsigned char)7] [10ULL] [(unsigned char)0] = ((/* implicit */long long int) arr_25 [(short)0] [i_2 - 1] [2ULL] [(unsigned char)11] [i_1 + 2]);
                }
                arr_30 [6LL] = ((/* implicit */short) ((arr_12 [8ULL] [6ULL] [i_1 - 1] [(short)0] [8ULL]) >> (((/* implicit */int) arr_25 [(short)4] [(short)11] [i_2 - 1] [i_1 - 1] [(unsigned char)2]))));
                var_33 = ((/* implicit */unsigned int) (~(2865254845163833298ULL)));
            }
            for (unsigned char i_10 = 2; i_10 < 9; i_10 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_11 = 0; i_11 < 12; i_11 += 1) 
                {
                    arr_37 [2] [i_10] [(_Bool)1] [(short)5] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)-18967)) ? (((/* implicit */int) (_Bool)1)) : (arr_36 [5LL] [(unsigned char)5] [6LL] [(signed char)4]))) >> (((12312375641257161498ULL) - (12312375641257161489ULL)))));
                    var_34 = (-(((/* implicit */int) (unsigned short)2139)));
                }
                var_35 = ((/* implicit */short) min((((((/* implicit */int) arr_33 [i_10] [(short)6] [i_1 + 3] [i_10])) & (((/* implicit */int) (short)18975)))), (((/* implicit */int) arr_33 [i_10] [(signed char)4] [i_1 + 3] [i_10]))));
            }
            var_36 = (-(((((/* implicit */_Bool) ((arr_7 [(unsigned char)8] [9] [4LL]) ? (((/* implicit */int) (_Bool)1)) : (139570391)))) ? (((6134368432452390118ULL) ^ (6514339255855067209ULL))) : (((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_25 [(unsigned short)4] [(short)7] [2] [(short)5] [11U]))))))));
            var_37 = ((/* implicit */unsigned long long int) (!(((arr_10 [4] [i_1 + 3] [i_1 + 4] [i_1 + 3]) || (arr_33 [i_1 - 1] [(short)2] [6LL] [0ULL])))));
        }
        for (long long int i_12 = 0; i_12 < 12; i_12 += 1) 
        {
            var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) (short)18970))));
            var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) arr_34 [8ULL] [10LL] [(unsigned char)4] [(signed char)7]))));
            arr_40 [9LL] [(unsigned char)4] = ((/* implicit */long long int) arr_35 [10U]);
            arr_41 [(_Bool)1] [3ULL] [3ULL] = ((/* implicit */short) -3974543836838396869LL);
        }
        for (signed char i_13 = 1; i_13 < 11; i_13 += 1) 
        {
            arr_45 [i_13] [1U] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(arr_25 [i_13 - 1] [(unsigned short)9] [i_13 + 1] [(signed char)4] [(unsigned short)4]))))));
            var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) (-((-(((((/* implicit */long long int) ((/* implicit */int) var_1))) * (131071LL))))))))));
            arr_46 [i_13] = max((((/* implicit */unsigned long long int) ((var_10) >> (((((/* implicit */int) (short)18963)) - (18957)))))), (arr_6 [10] [11LL]));
            arr_47 [i_13] [5] = ((((/* implicit */_Bool) arr_42 [i_13 - 1] [i_13 - 1])) ? ((((_Bool)1) ? (arr_42 [i_13 - 1] [i_13 + 1]) : (arr_42 [i_13 - 1] [i_13 - 1]))) : ((+(((/* implicit */int) (short)18970)))));
        }
        /* LoopSeq 1 */
        for (int i_14 = 0; i_14 < 12; i_14 += 1) 
        {
            arr_51 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) var_11);
            var_41 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))));
        }
        arr_52 [(_Bool)1] = ((/* implicit */unsigned int) arr_33 [8] [10ULL] [(_Bool)1] [0LL]);
        var_42 = ((((/* implicit */_Bool) arr_19 [(unsigned char)1] [6U] [3ULL] [(short)7])) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1703481177))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4724625392926085250LL)) ? (arr_18 [4ULL] [(unsigned char)0] [(short)2] [6] [9LL]) : (((/* implicit */unsigned long long int) 16106127360LL)))))))));
    }
}
