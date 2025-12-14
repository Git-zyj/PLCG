/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182770
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0])))) ? ((+(((/* implicit */int) arr_3 [i_0])))) : ((~(((/* implicit */int) arr_1 [i_0]))))));
        var_12 = ((/* implicit */short) ((long long int) (+(((/* implicit */int) arr_3 [i_0])))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            var_13 = ((/* implicit */short) ((arr_3 [i_0]) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))));
            var_14 = ((/* implicit */short) ((((/* implicit */int) arr_3 [i_0])) == (((/* implicit */int) arr_3 [i_0]))));
            arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (unsigned char)221))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1])) || (((/* implicit */_Bool) arr_2 [i_0])))))));
        }
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] [i_2] = ((/* implicit */long long int) arr_8 [i_2]);
        var_15 &= ((/* implicit */short) ((((/* implicit */_Bool) (short)-17586)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (_Bool)0))));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */short) (+((-(arr_13 [i_3])))));
        arr_14 [i_3] [i_3] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_13 [i_3]))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_3])) || (((/* implicit */_Bool) arr_13 [i_3]))))) : (((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */int) arr_12 [i_3])) : (((/* implicit */int) arr_12 [i_3]))))));
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)32766))));
        arr_17 [i_4] [(short)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_4])) ? (((/* implicit */int) arr_16 [i_4])) : (((/* implicit */int) arr_16 [i_4]))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
    {
        arr_21 [(_Bool)1] = ((short) arr_20 [i_5]);
        /* LoopSeq 1 */
        for (short i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_7 = 1; i_7 < 21; i_7 += 4) 
            {
                var_18 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) (short)-32741))))));
                arr_27 [i_7] [21LL] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)104)) == (((/* implicit */int) (signed char)105))));
                arr_28 [i_5] [i_6] [i_7] = ((/* implicit */_Bool) ((3485947638257695533LL) - (((/* implicit */long long int) ((/* implicit */int) (short)-16485)))));
            }
            arr_29 [i_5] [i_6] [(signed char)0] = ((/* implicit */short) arr_23 [i_6] [i_6] [i_5]);
        }
        var_19 &= ((/* implicit */short) (~(((((/* implicit */_Bool) arr_26 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_5] [i_5]))) : (arr_24 [i_5])))));
    }
    /* vectorizable */
    for (unsigned char i_8 = 0; i_8 < 24; i_8 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (short i_9 = 2; i_9 < 20; i_9 += 4) 
        {
            arr_35 [i_9 + 3] [i_8] = ((/* implicit */short) (-(((/* implicit */int) arr_32 [i_9 + 2]))));
            arr_36 [i_8] [i_9 + 2] = ((/* implicit */long long int) (+(((((/* implicit */int) arr_25 [i_8] [i_8] [i_8] [i_8])) / (((/* implicit */int) arr_18 [i_8] [(unsigned char)9]))))));
            var_20 = ((/* implicit */short) ((((long long int) arr_20 [i_9])) | (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_9 + 4] [i_9 + 4] [i_9 - 1])))));
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_8] [i_9] [i_9 - 1] [i_9 + 3])) ? (((/* implicit */int) arr_30 [i_9 + 3] [i_9 + 3])) : ((+(((/* implicit */int) arr_22 [i_8] [i_8] [i_9]))))));
        }
        for (short i_10 = 2; i_10 < 22; i_10 += 1) 
        {
            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [(short)9] [i_10])) ? (((/* implicit */int) arr_20 [i_8])) : (((/* implicit */int) arr_19 [i_8]))))) ? (((/* implicit */int) arr_25 [i_10] [i_10 + 1] [i_10 - 2] [i_10 + 2])) : ((+(((/* implicit */int) arr_26 [i_8]))))));
            var_23 *= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_39 [i_8] [i_8])) || (arr_32 [i_10]))));
        }
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
        {
            var_24 = ((/* implicit */signed char) ((((/* implicit */int) arr_39 [i_11 - 1] [i_11])) * ((+(((/* implicit */int) arr_25 [i_11] [i_11] [i_8] [i_11]))))));
            /* LoopSeq 2 */
            for (signed char i_12 = 0; i_12 < 24; i_12 += 4) 
            {
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(5647308901823550670LL)))) ? (((((/* implicit */_Bool) arr_19 [i_11 - 1])) ? (((/* implicit */int) arr_26 [i_8])) : (((/* implicit */int) arr_25 [i_11] [i_11 - 1] [i_8] [i_11])))) : ((+(((/* implicit */int) arr_41 [i_8]))))));
                var_26 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_12] [i_8] [i_8] [i_8])) - (((/* implicit */int) arr_22 [i_8] [i_8] [i_8]))))) ? (((/* implicit */int) ((arr_42 [i_12] [i_11 - 1] [(_Bool)1]) == (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_12])))))) : ((-(((/* implicit */int) (short)1892))))));
            }
            for (short i_13 = 0; i_13 < 24; i_13 += 1) 
            {
                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_44 [i_11 - 1] [i_11 - 1] [i_11 - 1] [(unsigned char)16])) ? (((/* implicit */int) arr_37 [i_11 - 1] [i_11 - 1])) : (((/* implicit */int) arr_33 [i_11 - 1]))));
                var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (((-(((/* implicit */int) arr_20 [i_13])))) != (((((/* implicit */_Bool) arr_19 [i_8])) ? (((/* implicit */int) arr_19 [i_8])) : (((/* implicit */int) arr_46 [i_8])))))))));
                var_29 &= ((/* implicit */unsigned char) ((signed char) arr_44 [i_8] [i_11 - 1] [i_11] [i_13]));
                var_30 = ((((/* implicit */int) (unsigned char)13)) <= (((/* implicit */int) (short)32767)));
            }
        }
        var_31 = ((/* implicit */unsigned char) (((-(-4019615677574542259LL))) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_8] [i_8])) ? (((/* implicit */int) arr_45 [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_44 [i_8] [i_8] [i_8] [i_8])))))));
        /* LoopSeq 3 */
        for (long long int i_14 = 2; i_14 < 22; i_14 += 1) 
        {
            var_32 += ((/* implicit */long long int) ((((/* implicit */int) arr_20 [i_14 + 1])) - (((((/* implicit */_Bool) arr_45 [i_8] [i_8] [i_8] [i_14])) ? (((/* implicit */int) arr_41 [i_14])) : (((/* implicit */int) arr_46 [i_8]))))));
            var_33 -= ((/* implicit */signed char) (+(((/* implicit */int) arr_38 [i_14 + 2] [i_14 - 2]))));
        }
        for (long long int i_15 = 1; i_15 < 22; i_15 += 3) 
        {
            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_41 [i_8]))))) ? (((/* implicit */int) arr_19 [i_8])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_8])))))));
            /* LoopSeq 1 */
            for (short i_16 = 2; i_16 < 20; i_16 += 1) 
            {
                var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (short)11430)) : (((/* implicit */int) (_Bool)0))));
                var_36 = ((/* implicit */short) (~(((/* implicit */int) arr_26 [i_15 + 1]))));
                arr_55 [i_8] [i_15] = ((/* implicit */short) (+(((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_15]))) & (2158563162112158455LL)))));
                var_37 ^= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_8] [i_8]))))) ? (((/* implicit */int) arr_44 [i_16 + 2] [i_15 - 1] [i_15 + 2] [i_15 - 1])) : (((((/* implicit */_Bool) arr_19 [i_16])) ? (((/* implicit */int) arr_34 [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_44 [i_16 + 2] [i_8] [(_Bool)1] [i_8]))))));
            }
            var_38 = arr_31 [i_8];
        }
        for (short i_17 = 2; i_17 < 22; i_17 += 1) 
        {
            var_39 = (+(arr_54 [i_17 - 2] [i_8] [i_17]));
            /* LoopSeq 1 */
            for (short i_18 = 0; i_18 < 24; i_18 += 3) 
            {
                arr_62 [i_18] = ((/* implicit */signed char) ((short) (!(arr_32 [(short)9]))));
                arr_63 [(unsigned char)16] [i_18] [i_18] [i_18] = ((/* implicit */_Bool) ((((/* implicit */int) arr_57 [i_17 - 1] [i_17 + 2] [i_17 - 1])) | (((/* implicit */int) arr_59 [i_8] [i_8] [11LL]))));
            }
        }
        var_40 = ((/* implicit */short) (~((+(((/* implicit */int) arr_32 [i_8]))))));
    }
    var_41 |= ((/* implicit */long long int) ((((/* implicit */int) ((short) max((var_2), (var_10))))) >= (((/* implicit */int) var_9))));
    var_42 |= ((/* implicit */signed char) var_4);
    var_43 = ((/* implicit */long long int) min((var_7), (var_10)));
}
