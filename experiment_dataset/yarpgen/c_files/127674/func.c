/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127674
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
    var_14 = ((/* implicit */int) var_11);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) min(((-(min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) (unsigned char)164)))))), (((/* implicit */unsigned int) arr_1 [i_0]))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_15 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_5 [i_1] [i_0] [i_0])), (4294967295U)));
            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) 192U))));
        }
        for (int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            arr_10 [i_0] &= ((/* implicit */short) arr_6 [i_0]);
            arr_11 [i_2] = ((/* implicit */unsigned long long int) 439412336U);
        }
        arr_12 [8ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (14229763392101820362ULL) : (((/* implicit */unsigned long long int) 3458143179U))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned char) var_2);
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                var_18 -= ((/* implicit */unsigned char) ((arr_5 [i_3] [i_4] [i_4]) && (arr_5 [i_0] [i_0] [4ULL])));
                arr_20 [(unsigned char)0] [(short)3] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [7])) >> (((((/* implicit */int) arr_2 [i_4])) - (59)))));
                arr_21 [2U] = ((/* implicit */int) 3408122978U);
            }
        }
        for (long long int i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_13 [i_0] [1U]), (((/* implicit */long long int) ((3713749539U) / (arr_0 [i_0] [i_5]))))))) || (((/* implicit */_Bool) arr_1 [8U]))));
            arr_26 [2LL] [(unsigned char)7] [7ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((var_1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_18 [i_0]))) : (((/* implicit */long long int) (~((-(arr_0 [(unsigned char)4] [5ULL]))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                arr_29 [i_0] [i_5] [9ULL] = arr_22 [i_0] [9ULL] [i_6];
                var_20 = ((/* implicit */unsigned char) ((arr_5 [i_6] [i_5] [i_0]) || (((/* implicit */_Bool) arr_9 [i_0] [i_5]))));
            }
            arr_30 [7LL] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_27 [9LL] [i_5] [i_5])))))), (((((/* implicit */_Bool) arr_16 [i_0])) ? (arr_24 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-93)))))));
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                for (long long int i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) min((((unsigned long long int) (!(((/* implicit */_Bool) arr_31 [i_5] [i_7] [i_8]))))), (max((min((arr_8 [(unsigned char)1]), (((/* implicit */unsigned long long int) (short)-32607)))), (((/* implicit */unsigned long long int) arr_19 [i_0] [i_5] [i_7] [i_8]))))));
                        arr_35 [3LL] [(unsigned char)9] [i_7] = ((/* implicit */short) var_2);
                        arr_36 [0ULL] [i_5] = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)242)), ((((((~(((/* implicit */int) arr_33 [i_7] [i_5] [(unsigned char)2])))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) arr_33 [i_8] [i_8] [i_8])) > (((/* implicit */int) (unsigned char)96)))))))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 1) /* same iter space */
    {
        arr_39 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24270)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_9])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)117))) : (4294967295U)))) : (arr_8 [i_9])));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_9] [i_9] [i_9])) ? (arr_4 [i_9] [i_9] [(unsigned char)4]) : (arr_4 [i_9] [i_9] [5ULL])));
        arr_40 [i_9] = ((/* implicit */unsigned char) ((long long int) ((arr_8 [6LL]) / (((/* implicit */unsigned long long int) arr_18 [i_9])))));
        /* LoopNest 3 */
        for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            for (unsigned short i_11 = 0; i_11 < 10; i_11 += 3) 
            {
                for (unsigned short i_12 = 0; i_12 < 10; i_12 += 2) 
                {
                    {
                        arr_49 [4LL] [i_11] [(unsigned char)8] [i_9] [(unsigned short)9] = ((/* implicit */unsigned long long int) ((arr_47 [i_9] [3U] [i_11] [i_10] [i_10]) / (((/* implicit */long long int) (~(((/* implicit */int) arr_33 [7ULL] [i_11] [(short)2])))))));
                        var_23 = ((/* implicit */short) (~(arr_4 [i_12] [6LL] [2ULL])));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_14 = 0; i_14 < 10; i_14 += 4) 
        {
            arr_54 [i_13] [(short)9] |= ((/* implicit */long long int) arr_15 [9LL] [i_14] [i_14]);
            arr_55 [8LL] [i_14] = ((/* implicit */long long int) arr_52 [i_13] [i_14]);
            /* LoopSeq 1 */
            for (long long int i_15 = 0; i_15 < 10; i_15 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_16 = 0; i_16 < 10; i_16 += 3) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) var_5);
                            var_25 = ((/* implicit */unsigned long long int) (unsigned char)227);
                        }
                    } 
                } 
                arr_63 [9U] [i_13] = ((/* implicit */unsigned short) (unsigned char)119);
            }
            var_26 = ((/* implicit */signed char) (+(arr_7 [i_13] [(unsigned short)4] [5ULL])));
        }
        for (unsigned char i_18 = 0; i_18 < 10; i_18 += 3) 
        {
            arr_67 [i_18] = ((/* implicit */short) (!(((/* implicit */_Bool) 458752LL))));
            /* LoopNest 2 */
            for (signed char i_19 = 0; i_19 < 10; i_19 += 1) 
            {
                for (unsigned int i_20 = 0; i_20 < 10; i_20 += 2) 
                {
                    {
                        var_27 -= ((/* implicit */unsigned char) ((max((var_12), (((/* implicit */long long int) var_3)))) == (((((/* implicit */_Bool) ((0LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)10)))))) ? (min((((/* implicit */long long int) arr_37 [i_20])), (arr_13 [4ULL] [i_20]))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_9 [i_13] [(unsigned char)7]))))))));
                        arr_74 [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) max((2060156571U), (((/* implicit */unsigned int) arr_60 [i_13] [i_13] [i_13] [i_13] [(signed char)5]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_34 [8ULL] [i_19] [i_20]))) : (((((/* implicit */_Bool) arr_51 [i_13] [i_18])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_71 [i_20] [7ULL] [6ULL] [8ULL])) ? (arr_16 [i_19]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32756)))))) : (-4096824078393647570LL)))));
                        var_28 = ((/* implicit */unsigned char) ((short) arr_16 [i_13]));
                        arr_75 [i_13] [i_18] [(unsigned char)5] [i_18] [(signed char)9] = (-(((((/* implicit */_Bool) arr_34 [0U] [i_18] [i_19])) ? (((/* implicit */long long int) 65535)) : (-8035619556095401444LL))));
                        arr_76 [i_20] [i_20] [i_20] [i_13] |= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)240))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_21 = 0; i_21 < 10; i_21 += 2) 
            {
                for (unsigned long long int i_22 = 0; i_22 < 10; i_22 += 4) 
                {
                    for (long long int i_23 = 0; i_23 < 10; i_23 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((max((arr_50 [i_21] [i_18]), (arr_50 [i_13] [i_22]))) | (((/* implicit */long long int) var_3)))))));
                            arr_84 [(unsigned char)9] [i_18] [i_21] [1ULL] [(_Bool)1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [i_13] [i_13])) ? (((/* implicit */int) arr_52 [i_22] [i_23])) : (((/* implicit */int) arr_52 [i_13] [i_23])))))));
                            var_30 = ((/* implicit */unsigned int) min((var_30), (((((/* implicit */_Bool) max((arr_41 [i_21] [i_22] [i_22]), (arr_41 [i_21] [(unsigned char)0] [i_22])))) ? (((unsigned int) var_10)) : (((/* implicit */unsigned int) arr_41 [i_21] [0LL] [i_22]))))));
                            arr_85 [i_18] = ((/* implicit */unsigned long long int) max((-3683234385496114090LL), (((/* implicit */long long int) (unsigned short)65534))));
                        }
                    } 
                } 
            } 
            arr_86 [i_18] = ((((/* implicit */_Bool) ((long long int) 262143ULL))) ? (((((/* implicit */_Bool) max((-226277843274091573LL), (((/* implicit */long long int) arr_34 [i_13] [i_18] [i_18]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_73 [i_13] [(_Bool)1] [i_13] [(_Bool)1])))) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)234)))))) : (var_10));
            arr_87 [4LL] [i_18] [(short)9] = ((/* implicit */unsigned long long int) -1728027533256149076LL);
        }
        /* vectorizable */
        for (long long int i_24 = 0; i_24 < 10; i_24 += 3) 
        {
            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_33 [4ULL] [i_24] [i_24])))))));
            arr_91 [i_13] = ((/* implicit */unsigned long long int) arr_32 [i_24] [i_24] [i_24]);
            arr_92 [2] [i_24] = ((/* implicit */short) ((arr_65 [4ULL]) <= (((/* implicit */unsigned long long int) -4311331196352652651LL))));
        }
        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_31 [2U] [i_13] [i_13])), ((~(arr_47 [1LL] [i_13] [8LL] [i_13] [6LL])))))) ? (min((((/* implicit */unsigned long long int) 4026531840U)), (17451448556060672ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((arr_44 [i_13] [(unsigned short)6] [(unsigned short)6] [i_13]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_13] [i_13] [i_13]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_32 [i_13] [4LL] [i_13])))))))));
        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_73 [7LL] [i_13] [i_13] [i_13])) && (((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) (signed char)51)), (var_2))), (((/* implicit */unsigned long long int) max((arr_47 [5U] [i_13] [4U] [i_13] [i_13]), (arr_71 [i_13] [i_13] [i_13] [i_13])))))))));
        arr_93 [4ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_13] [i_13] [i_13])) ? (((var_4) * (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_31 [i_13] [i_13] [i_13]), (arr_31 [i_13] [i_13] [i_13])))))));
    }
}
