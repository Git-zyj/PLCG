/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139649
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
    var_14 = ((/* implicit */short) var_1);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_15 = min((((((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [11LL]))) + (var_10))) / (((/* implicit */long long int) ((((((/* implicit */int) var_6)) + (2147483647))) << (((arr_1 [i_0] [i_0]) - (4947393108467633242ULL)))))))), (((/* implicit */long long int) ((short) arr_0 [i_0]))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [(short)12])) % (((/* implicit */int) arr_2 [i_0] [i_0]))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
        {
            arr_5 [i_0] [i_0] [i_1] = arr_4 [i_0] [i_1];
            /* LoopSeq 1 */
            for (short i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                var_17 ^= ((/* implicit */long long int) arr_1 [i_1] [i_2]);
                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_2] [i_0] [i_2 + 2] [i_2 + 3])) ? (((/* implicit */int) arr_8 [i_2] [i_0] [i_2 - 1] [i_2 + 4])) : (((/* implicit */int) arr_8 [14ULL] [i_0] [i_2 + 1] [i_2 - 1])))))));
            }
        }
        for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (3672195861350218092ULL)))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_9 [i_0])))), (((/* implicit */unsigned long long int) var_10)))))));
            /* LoopSeq 1 */
            for (short i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                /* LoopSeq 1 */
                for (short i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        arr_22 [i_0] [i_3] [i_3] [i_5] [i_6] = ((/* implicit */long long int) arr_10 [i_5]);
                        var_20 ^= ((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_19 [12LL] [12LL] [i_4] [i_5] [i_5])))) ? (arr_1 [i_0] [i_3]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-1))))));
                        var_21 = ((/* implicit */short) ((arr_7 [i_3] [4LL] [i_5]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0])))));
                    }
                    for (short i_7 = 3; i_7 < 14; i_7 += 3) 
                    {
                        var_22 ^= ((/* implicit */short) ((((/* implicit */int) var_3)) << (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_5] [i_5]))) / (((arr_16 [i_0] [i_0] [4ULL] [1LL]) % (arr_15 [i_0] [(short)10] [i_7])))))));
                        var_23 ^= ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_14 [i_0] [i_4] [i_5] [(short)9])))) ? (((/* implicit */long long int) ((/* implicit */int) (((-9223372036854775807LL - 1LL)) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) == (var_10))))))))) : (((long long int) (~(-5340099356110277749LL))))));
                    }
                    for (short i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        arr_28 [4LL] [i_3] [i_4] [i_5] [1ULL] = ((/* implicit */long long int) arr_21 [1ULL] [i_5] [i_5] [i_4] [i_3] [i_0] [(short)5]);
                        var_24 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_3]))) : (arr_7 [i_3] [i_4] [i_0])))));
                    }
                    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_10 [i_4])), (4ULL)))) ? (((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) arr_10 [i_4])))) : (((/* implicit */int) max((arr_10 [i_0]), (arr_10 [i_0]))))));
                    var_26 += ((short) (((!(((/* implicit */_Bool) arr_25 [i_0] [8LL] [i_0] [i_0] [i_4])))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) arr_12 [i_0]))))))));
                }
                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-27274))))) ? (((((/* implicit */int) arr_25 [i_0] [i_3] [i_0] [(short)14] [i_4])) ^ (((/* implicit */int) arr_8 [(short)12] [i_0] [i_0] [10ULL])))) : (((/* implicit */int) min((arr_0 [i_3]), ((short)-21565))))));
                var_28 ^= ((/* implicit */unsigned long long int) (short)-2620);
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_9 = 1; i_9 < 15; i_9 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_10 = 0; i_10 < 16; i_10 += 3) 
                    {
                        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */_Bool) (+(140737488355327ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_9 + 1] [i_9 - 1]))) : (arr_6 [i_0] [i_3] [i_3] [i_10]))))));
                        var_30 ^= ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
                        var_31 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) * (arr_7 [i_0] [i_0] [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)2620)) && (((/* implicit */_Bool) var_9))))))));
                    }
                    /* LoopSeq 3 */
                    for (short i_11 = 0; i_11 < 16; i_11 += 3) 
                    {
                        arr_39 [i_9] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) 10789919029810667475ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) -6894662887388421212LL))))) : (((((/* implicit */int) (short)30697)) - (((/* implicit */int) var_7))))));
                        arr_40 [i_9] [i_9] [(short)6] [i_9] [(short)8] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_13 [i_11] [i_9] [i_3]))));
                    }
                    for (short i_12 = 0; i_12 < 16; i_12 += 1) 
                    {
                        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_9] [i_4] [13LL])) ? (arr_11 [i_3] [i_4] [i_4]) : (arr_11 [(short)5] [(short)5] [(short)7])));
                        var_33 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_9 - 1])) || (((/* implicit */_Bool) 6940972756237083408ULL))));
                        var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16262))) <= (var_0))))));
                        var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) (+(arr_38 [i_0] [(short)9] [(short)2] [i_0]))))));
                    }
                    for (short i_13 = 0; i_13 < 16; i_13 += 4) 
                    {
                        var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) ((unsigned long long int) arr_11 [i_4] [i_4] [i_4])))));
                        var_37 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_9 + 1] [4LL] [i_9 - 1] [0LL] [i_9 - 1] [i_9 + 1] [i_9])) > (((/* implicit */int) arr_21 [i_9 + 1] [7LL] [i_9 + 1] [i_9] [i_9 + 1] [i_9 - 1] [i_3]))));
                        arr_45 [i_0] [i_0] [(short)3] [i_4] [i_9] [i_9] [i_9] = ((unsigned long long int) arr_41 [i_9] [i_9 - 1]);
                        var_38 = arr_17 [i_0] [i_3] [i_3] [i_9] [i_13] [(short)13];
                    }
                    arr_46 [i_0] [i_9] [i_4] [9ULL] = ((/* implicit */short) (~(arr_23 [i_9 - 1] [i_4] [i_4] [i_4] [i_3] [i_0] [i_0])));
                    var_39 ^= ((/* implicit */short) (~(((((/* implicit */_Bool) 10789919029810667479ULL)) ? (((/* implicit */int) arr_32 [9LL] [i_3] [i_4] [i_9 + 1])) : (((/* implicit */int) (short)-26979))))));
                }
            }
        }
        var_40 ^= 2504364384357456338LL;
    }
    for (short i_14 = 0; i_14 < 22; i_14 += 3) 
    {
        arr_49 [3ULL] = ((/* implicit */long long int) arr_48 [(short)15]);
        var_41 = var_12;
        var_42 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_14])) ? (3672195861350218105ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_14])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_47 [(short)11]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_48 [i_14]))) & (var_11))))) | (((/* implicit */long long int) ((/* implicit */int) arr_47 [(short)19])))));
    }
}
