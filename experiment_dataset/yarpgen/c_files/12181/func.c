/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12181
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_0))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_2 [i_0] [i_0]))))) - (-1851914395)));
        var_12 = ((/* implicit */long long int) ((var_5) ? (((((/* implicit */int) (unsigned short)55805)) & (((/* implicit */int) (short)23609)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)57)))))));
        var_13 = ((/* implicit */signed char) (-((~(var_8)))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            arr_9 [i_1] = arr_1 [i_0];
            /* LoopSeq 3 */
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                var_14 = ((((/* implicit */int) arr_7 [i_0])) * (((/* implicit */int) arr_11 [19U] [i_1] [i_2] [i_1])));
                var_15 = ((/* implicit */int) (unsigned short)9746);
            }
            for (unsigned short i_3 = 2; i_3 < 16; i_3 += 4) 
            {
                arr_14 [i_3] [(unsigned short)8] [(unsigned short)8] [11U] = ((/* implicit */unsigned long long int) ((signed char) arr_5 [i_0] [i_1] [i_3 - 1]));
                /* LoopSeq 2 */
                for (long long int i_4 = 0; i_4 < 20; i_4 += 4) /* same iter space */
                {
                    var_16 = (~(arr_12 [i_0] [13ULL] [i_3]));
                    arr_17 [i_0] [i_0] [i_3 + 2] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-6616141285980402845LL)));
                }
                for (long long int i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
                {
                    var_17 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [15LL])) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_3] [(unsigned char)18]))))));
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) arr_15 [i_3 + 2] [i_3] [i_3 - 2] [i_3 - 1] [i_3 + 1]))));
                }
                /* LoopSeq 4 */
                for (short i_6 = 1; i_6 < 17; i_6 += 4) 
                {
                    var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_8 [i_6])))) && (((/* implicit */_Bool) (unsigned char)238))));
                    var_20 ^= ((/* implicit */short) (+(((/* implicit */int) arr_6 [(unsigned short)11] [(unsigned char)3] [i_0]))));
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_13 [i_0] [i_1] [i_3] [i_6]) || (arr_19 [i_0] [i_1] [i_3 + 1] [i_6]))))) & (((arr_19 [i_0] [i_1] [i_3] [i_6]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_3] [i_1]))) : (arr_12 [i_0] [i_1] [i_1]))))))));
                    /* LoopSeq 2 */
                    for (signed char i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        arr_24 [i_6] = ((/* implicit */short) arr_15 [i_0] [i_1] [(unsigned char)16] [(_Bool)1] [i_7]);
                        var_22 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (3234119344U) : (((/* implicit */unsigned int) -1931278766))));
                        var_23 = (((~(12764592175734990301ULL))) % (((16455165450356636457ULL) % (((/* implicit */unsigned long long int) var_7)))));
                        var_24 = ((/* implicit */int) var_5);
                    }
                    for (unsigned int i_8 = 1; i_8 < 17; i_8 += 4) 
                    {
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)56346)) - (((/* implicit */int) (unsigned short)14062))));
                        arr_27 [i_0] [i_6] [7ULL] [i_6] [i_8] = ((/* implicit */long long int) (_Bool)0);
                    }
                }
                for (signed char i_9 = 3; i_9 < 16; i_9 += 4) 
                {
                    arr_32 [i_0] [(signed char)13] [17U] [i_9] = ((/* implicit */unsigned int) arr_30 [i_9] [7ULL] [i_3] [i_9]);
                    /* LoopSeq 1 */
                    for (int i_10 = 4; i_10 < 17; i_10 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1851914395)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9730))) : (arr_28 [i_9 - 1] [i_10] [i_10 + 2] [i_9])));
                        var_27 += ((/* implicit */unsigned long long int) (((_Bool)1) ? (arr_23 [i_3 + 3] [i_3] [8] [i_9 + 3] [i_10 - 4]) : (arr_23 [i_3 + 2] [i_10] [i_3 + 3] [i_9 + 3] [i_10 + 1])));
                    }
                    /* LoopSeq 3 */
                    for (short i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */int) (unsigned short)9730)) >= (-1851914402))))));
                        var_29 = ((/* implicit */unsigned long long int) max((var_29), (arr_31 [i_0] [i_1] [i_3] [i_9] [2ULL] [(short)12])));
                        var_30 -= ((/* implicit */short) ((((/* implicit */_Bool) -6814199300751219837LL)) ? (6631021786639318070ULL) : (((/* implicit */unsigned long long int) -1851914395))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 20; i_12 += 4) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) arr_37 [i_12] [i_9 + 4] [i_1] [i_0]))))))));
                        var_32 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_34 [i_0] [i_9] [i_12])) ? (931430885) : (-160139038)))));
                    }
                    for (unsigned int i_13 = 0; i_13 < 20; i_13 += 4) /* same iter space */
                    {
                        var_33 = ((/* implicit */_Bool) arr_34 [i_0] [i_9] [i_13]);
                        var_34 = ((/* implicit */_Bool) ((((/* implicit */int) arr_37 [14] [i_9 + 4] [i_9 - 3] [i_9])) | (((/* implicit */int) var_1))));
                    }
                    var_35 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)9730))));
                    var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(3654006056U)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_9 + 2] [i_9] [i_0]))) : ((-(6282791864201174912LL)))));
                }
                for (unsigned long long int i_14 = 3; i_14 < 18; i_14 += 4) 
                {
                    var_37 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_43 [i_1] [(_Bool)1]))));
                    /* LoopSeq 2 */
                    for (unsigned int i_15 = 2; i_15 < 18; i_15 += 4) 
                    {
                        arr_47 [2ULL] [(unsigned char)8] [(unsigned short)12] [17U] [i_0] = ((/* implicit */_Bool) arr_43 [i_15 - 2] [i_3 + 3]);
                        var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) ((unsigned short) arr_37 [i_14 - 2] [i_15 - 2] [14LL] [i_3 - 2])))));
                        arr_48 [i_0] [i_1] [14ULL] [i_14 + 1] [i_14 + 1] = ((/* implicit */unsigned long long int) arr_3 [9] [i_15]);
                    }
                    for (int i_16 = 4; i_16 < 18; i_16 += 4) 
                    {
                        var_39 = ((((/* implicit */int) arr_37 [i_3 - 1] [i_14 - 1] [i_14 - 1] [i_16 + 1])) ^ (((/* implicit */int) var_3)));
                        var_40 = ((/* implicit */unsigned short) (!(((((/* implicit */int) var_1)) > (var_10)))));
                        var_41 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_1] [i_1] [i_3] [i_3 + 4] [i_14 + 2] [i_16 + 2]))) + (var_8)));
                        var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)89)))))));
                        arr_51 [i_0] [i_1] [i_3 - 1] [i_14 + 2] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_3 - 2] [i_3] [16] [i_14 + 2] [i_16])) ? (((/* implicit */int) (short)21037)) : (((/* implicit */int) arr_37 [i_0] [i_1] [i_3 - 2] [i_14 - 1]))));
                    }
                }
                for (long long int i_17 = 0; i_17 < 20; i_17 += 4) 
                {
                    var_43 = ((/* implicit */short) ((long long int) arr_35 [i_3 - 2] [i_3 - 2] [i_1] [i_1] [i_1] [i_1]));
                    arr_55 [i_0] [i_0] [i_1] [i_3] [i_17] [i_3] = ((/* implicit */unsigned long long int) (unsigned short)55820);
                }
            }
            for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
            {
                var_44 = (-(((/* implicit */int) (unsigned short)9209)));
                arr_58 [i_0] [i_1] [i_18 - 1] = ((/* implicit */unsigned long long int) 1987262837U);
                var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) var_7))));
                var_46 = ((1060847951U) * (((/* implicit */unsigned int) 1851914394)));
                var_47 = ((/* implicit */unsigned short) ((arr_45 [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18] [i_18] [i_18] [i_18 - 1]) & (((/* implicit */int) arr_19 [i_0] [15LL] [i_18] [i_18 - 1]))));
            }
            var_48 = ((/* implicit */unsigned long long int) max((var_48), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_11 [i_0] [i_0] [i_1] [i_0]))) ? (var_10) : (((/* implicit */int) var_5)))))));
            /* LoopSeq 1 */
            for (short i_19 = 0; i_19 < 20; i_19 += 4) 
            {
                var_49 = (-(arr_39 [i_0] [i_19] [i_19]));
                arr_61 [i_1] = ((/* implicit */short) var_0);
            }
            var_50 = ((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_1] [i_1] [i_1]);
        }
    }
}
