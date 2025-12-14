/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169897
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
    var_16 = ((/* implicit */_Bool) max((131071ULL), (0ULL)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_17 = ((/* implicit */_Bool) min((var_17), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */_Bool) 5904012771539229221ULL)) ? (var_7) : (12542731302170322396ULL))) : (((unsigned long long int) arr_0 [(unsigned char)8])))))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0] [(unsigned char)4]);
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                /* LoopSeq 4 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12542731302170322394ULL)) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_2 [i_0] [i_2])))), (((/* implicit */int) var_14)))))));
                    var_19 -= ((/* implicit */_Bool) var_14);
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) max((15ULL), (12542731302170322394ULL))))));
                    arr_15 [i_0] [i_0] [i_2] [(_Bool)1] = arr_2 [i_0] [i_1];
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 4; i_5 < 18; i_5 += 3) 
                {
                    var_21 = ((/* implicit */unsigned char) var_1);
                    arr_18 [i_0] [0ULL] [i_0] [6ULL] = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_5] [(unsigned char)11] [i_2]);
                    var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 3865319450993198084ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (5904012771539229221ULL)));
                }
                for (unsigned long long int i_6 = 2; i_6 < 20; i_6 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_23 &= ((/* implicit */unsigned long long int) ((unsigned char) max((arr_8 [i_6] [20ULL] [20ULL] [i_6]), (arr_8 [8ULL] [16ULL] [16ULL] [16ULL]))));
                        arr_25 [(unsigned char)16] [(_Bool)1] [i_6 + 1] [i_6] [i_6] [(unsigned char)8] [i_6] |= ((/* implicit */unsigned long long int) ((((var_7) >= (((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) || (((/* implicit */_Bool) 18446744073709551615ULL))));
                    }
                    arr_26 [10ULL] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) (~(18446744073709551609ULL)));
                }
                arr_27 [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)16)) | (((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) arr_20 [i_0] [i_0] [(_Bool)1])))))));
            }
            for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 3) 
            {
                arr_31 [(unsigned char)0] [i_0] [(_Bool)1] = ((/* implicit */_Bool) (+(arr_13 [i_0] [(_Bool)1] [i_8] [i_8] [i_8] [(unsigned char)16])));
                arr_32 [i_0] [(_Bool)1] = ((/* implicit */_Bool) 6093198152313553493ULL);
            }
            arr_33 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) min(((!((_Bool)1))), (((5904012771539229221ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
            var_25 = ((/* implicit */unsigned long long int) min((var_25), (max((((/* implicit */unsigned long long int) (!(arr_23 [i_0] [(_Bool)1] [i_0] [i_0] [i_0])))), ((~(arr_0 [2ULL])))))));
        }
    }
    for (unsigned long long int i_9 = 2; i_9 < 12; i_9 += 1) 
    {
        var_26 -= ((/* implicit */unsigned long long int) max((arr_20 [i_9] [4ULL] [i_9 + 3]), (((_Bool) (unsigned char)246))));
        /* LoopSeq 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            arr_39 [i_9 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)247)))), (((/* implicit */int) arr_5 [i_9 - 1] [i_9 - 1]))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)146)), (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_20 [8ULL] [i_9] [(_Bool)1]))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_9 - 2] [i_10] [i_10]))) & (0ULL)))));
            var_27 = ((/* implicit */_Bool) arr_11 [i_9] [i_9 + 1] [(_Bool)1] [i_9]);
            /* LoopSeq 1 */
            for (unsigned char i_11 = 0; i_11 < 15; i_11 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 3) 
                {
                    arr_46 [(_Bool)1] [i_10] [i_10] [(_Bool)1] [i_10] = ((/* implicit */_Bool) arr_29 [i_9 + 2] [i_9 + 2]);
                    arr_47 [i_11] [(_Bool)1] [i_11] [i_12] [i_11] = ((/* implicit */unsigned char) ((var_15) << (((/* implicit */int) ((unsigned char) arr_17 [2ULL] [i_10] [i_10] [i_11] [(unsigned char)4] [i_10])))));
                    /* LoopSeq 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_28 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) max((((unsigned char) var_9)), (((/* implicit */unsigned char) arr_2 [i_11] [i_10])))))));
                        arr_51 [i_9] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_9]))));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 2) 
                    {
                        arr_54 [i_12] = var_12;
                        var_29 = ((/* implicit */unsigned long long int) min(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)132)))), (((/* implicit */int) arr_43 [7ULL]))));
                    }
                    var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                }
                /* vectorizable */
                for (unsigned char i_15 = 1; i_15 < 13; i_15 += 1) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) /* same iter space */
                    {
                        arr_60 [i_9] [i_10] [(unsigned char)7] [i_11] [i_16] = ((/* implicit */_Bool) (-((+(5904012771539229221ULL)))));
                        var_31 = ((((/* implicit */_Bool) arr_45 [i_16] [i_16] [i_16] [i_16 - 1] [12ULL] [i_16 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_17 [i_16] [i_16] [i_16] [i_11] [i_16] [i_16 - 1]));
                        arr_61 [(unsigned char)5] [i_10] [0ULL] [i_11] [3ULL] = arr_55 [14ULL] [i_9] [i_9] [i_10];
                    }
                    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) /* same iter space */
                    {
                        var_32 = ((15448863964171553843ULL) != (arr_3 [i_9 + 2]));
                        arr_64 [i_9] [i_10] [i_11] [i_15] [i_17] = ((((unsigned long long int) (_Bool)1)) >> (((arr_37 [i_17 - 1] [i_10] [i_11]) - (16923719158088673217ULL))));
                        var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)63)))))));
                        var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) (unsigned char)255))));
                    }
                    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) /* same iter space */
                    {
                        var_35 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 6ULL))));
                        var_36 = (~(0ULL));
                        var_37 = var_4;
                        var_38 = ((/* implicit */unsigned long long int) var_0);
                    }
                    var_39 = ((unsigned long long int) arr_41 [i_9] [i_9 + 3]);
                    arr_68 [i_9] [i_9 + 3] [i_9] [i_9] [i_9] = ((((/* implicit */_Bool) (((_Bool)1) ? (10115368053564053409ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_15] [i_15 + 2] [i_15 + 1] [i_15] [i_15 + 2]))));
                }
                arr_69 [i_9] [i_9 - 1] = ((_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_4 [10ULL]))));
            }
        }
        /* vectorizable */
        for (unsigned char i_19 = 0; i_19 < 15; i_19 += 2) 
        {
            var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 12655435253503546339ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [(_Bool)1] [i_9 - 1] [i_19]))) : (arr_16 [i_9] [1ULL] [i_19] [i_9] [19ULL] [i_9 + 2])));
            var_41 = ((/* implicit */_Bool) ((arr_52 [i_9] [i_19] [i_9 - 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)0)))))));
            arr_73 [i_9 + 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2199006478336ULL)) ? (arr_29 [i_9] [i_9 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
        }
    }
    var_43 = ((/* implicit */unsigned char) (~(((((var_15) * (18446744073709551609ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
}
