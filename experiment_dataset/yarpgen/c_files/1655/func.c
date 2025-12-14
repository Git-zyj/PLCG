/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1655
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (((~(((/* implicit */int) (_Bool)1)))) * ((((((-(((/* implicit */int) (unsigned short)38820)))) + (2147483647))) >> (((arr_6 [i_0 + 1]) - (3047996798U))))))))));
                arr_7 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (+(max((((((/* implicit */_Bool) (unsigned short)38820)) ? (-6503187719679782472LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))), (min((((/* implicit */long long int) (unsigned short)38820)), (-6503187719679782485LL)))))));
                arr_8 [i_0 - 1] [(unsigned char)4] |= ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((((/* implicit */_Bool) arr_3 [i_1 + 3])) ? (((/* implicit */unsigned long long int) arr_0 [i_1] [i_0])) : (5975230350263557484ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 - 1] [i_0 + 1]))))));
                var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_6 [i_1]))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_2 = 3; i_2 < 14; i_2 += 2) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 4) 
        {
            var_18 = ((/* implicit */unsigned char) arr_9 [(short)15] [i_3]);
            arr_13 [i_2] = ((/* implicit */unsigned long long int) 153139606);
        }
        for (int i_4 = 3; i_4 < 15; i_4 += 4) 
        {
            var_19 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(arr_15 [(unsigned char)16]))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                var_20 = ((/* implicit */long long int) arr_15 [i_2]);
                var_21 += ((/* implicit */unsigned short) arr_10 [i_2]);
                /* LoopSeq 4 */
                for (signed char i_6 = 2; i_6 < 15; i_6 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) arr_18 [i_6 - 2] [i_6 + 2] [i_5] [i_6]))));
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (~(((/* implicit */int) arr_18 [i_6 - 2] [i_6] [i_5] [i_6])))))));
                    var_24 += ((/* implicit */unsigned short) (signed char)-120);
                }
                for (signed char i_7 = 2; i_7 < 15; i_7 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */_Bool) (((((((_Bool)1) ? (-2119773865) : (((/* implicit */int) (unsigned short)38820)))) + (2147483647))) << (((((/* implicit */int) arr_22 [i_2] [i_4] [i_5] [i_5])) - (29748)))));
                    arr_23 [(unsigned short)2] [i_4] [i_2] [i_7] = ((/* implicit */unsigned long long int) arr_11 [i_2]);
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 2; i_8 < 16; i_8 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 6503187719679782484LL)) ? (6902442197905089613LL) : (-6503187719679782483LL)))));
                        var_27 = ((/* implicit */_Bool) min((var_27), (arr_9 [i_2] [i_2])));
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [(unsigned char)9] [i_4 - 3] [i_4] [i_4] [i_4 - 2])) ? (((/* implicit */int) (signed char)29)) : (((/* implicit */int) arr_14 [i_2] [i_4 + 1] [i_4]))));
                        arr_27 [i_2] [i_4] [i_5] [i_2] [i_7 - 2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_11 [i_2])) : (((/* implicit */int) (_Bool)1))))) >= (((((/* implicit */_Bool) var_5)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2] [i_5] [i_7 - 2] [i_8])))))));
                        arr_28 [i_2] [i_4 - 1] [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) (unsigned short)14177)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63850))) : (-6902442197905089614LL));
                    }
                    var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) -4315663090711331220LL))));
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8454595282399578207ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_4)))) ? (((((/* implicit */_Bool) 0ULL)) ? (-3951268581597883821LL) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_5] [i_2] [i_2]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_10 [i_2 + 1])) : (((/* implicit */int) var_1)))))));
                }
                for (signed char i_9 = 2; i_9 < 15; i_9 += 1) /* same iter space */
                {
                    var_31 *= ((unsigned long long int) arr_17 [i_2 - 2] [i_9 - 2] [i_4 - 1] [i_9 + 1]);
                    arr_33 [i_5] &= ((/* implicit */unsigned long long int) ((arr_29 [i_5] [i_4] [i_4] [i_5]) ? (((/* implicit */long long int) ((arr_9 [0] [0]) ? (((/* implicit */int) arr_9 [i_2 + 2] [(unsigned short)8])) : (arr_16 [i_2] [i_5] [i_9])))) : (((-6902442197905089613LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32470)))))));
                }
                for (int i_10 = 0; i_10 < 17; i_10 += 4) 
                {
                    var_32 = arr_24 [i_2] [i_4] [i_4] [i_4] [i_5] [i_10] [i_10];
                    arr_36 [i_2] = ((/* implicit */unsigned int) ((long long int) (_Bool)0));
                    arr_37 [i_2] [i_4] [(_Bool)1] = ((/* implicit */long long int) (-(((/* implicit */int) arr_35 [i_2 - 3] [i_2] [i_5] [5U] [i_10]))));
                }
                arr_38 [i_5] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)96)) == ((+(((/* implicit */int) var_14))))));
            }
            for (int i_11 = 2; i_11 < 14; i_11 += 1) 
            {
                var_33 |= ((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_22 [i_4 - 2] [i_4] [i_11 - 1] [i_2 - 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_4 - 2] [i_4] [i_11 - 1] [i_2 - 1])))))));
                var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (arr_25 [i_2] [i_4] [i_4] [i_11 + 3] [i_11])))) ? (min((((/* implicit */unsigned long long int) (unsigned short)8291)), (6057342361052839384ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))))));
            }
            /* LoopNest 2 */
            for (unsigned short i_12 = 0; i_12 < 17; i_12 += 3) 
            {
                for (long long int i_13 = 0; i_13 < 17; i_13 += 2) 
                {
                    {
                        var_35 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_2] [i_13] [i_12])) ? (2389559913U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))));
                        var_36 = ((/* implicit */_Bool) min((var_36), (((((/* implicit */int) arr_19 [i_13] [i_13] [i_2])) <= (((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)65533), (((/* implicit */unsigned short) (unsigned char)105))))))))))));
                    }
                } 
            } 
        }
        for (short i_14 = 1; i_14 < 15; i_14 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_15 = 0; i_15 < 17; i_15 += 4) 
            {
                for (signed char i_16 = 2; i_16 < 16; i_16 += 4) 
                {
                    {
                        var_37 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) arr_15 [i_2]))))));
                        var_38 ^= ((/* implicit */unsigned int) min((((/* implicit */int) arr_44 [3U] [i_15] [i_2])), ((-(((/* implicit */int) (!(arr_48 [6] [i_14] [(short)10]))))))));
                        var_39 &= (unsigned short)1684;
                        arr_53 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) arr_26 [i_2 + 2] [i_2 + 2] [(signed char)14] [i_14] [i_14]);
                    }
                } 
            } 
            var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) (!(((((/* implicit */long long int) ((/* implicit */int) arr_44 [i_2 - 2] [i_2] [i_2 - 3]))) == (((((/* implicit */_Bool) -6902442197905089614LL)) ? (-4315663090711331205LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))))));
            var_41 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_14 - 1])) ? (((/* implicit */int) (unsigned short)63834)) : (((/* implicit */int) (short)8018))))), (((((/* implicit */_Bool) arr_12 [i_14 - 1])) ? (3091403169U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [15ULL] [i_2] [i_2] [(signed char)12] [i_2 + 3]))))));
        }
        for (unsigned int i_17 = 3; i_17 < 15; i_17 += 2) 
        {
            arr_56 [i_2] [12LL] [i_17 - 3] = ((/* implicit */short) (((_Bool)1) ? (min((min((((/* implicit */unsigned int) (signed char)-46)), (arr_47 [(_Bool)1] [i_17]))), (((/* implicit */unsigned int) (unsigned short)65528)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)30720))))))));
            var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) min((3770385344U), (1687350353U))))));
        }
        var_43 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_45 [i_2] [i_2] [4U] [i_2])) ? (((/* implicit */unsigned long long int) (~((~(arr_47 [i_2] [14ULL])))))) : (((arr_52 [i_2 - 1] [i_2] [i_2 - 2] [7ULL] [i_2]) ? (((/* implicit */unsigned long long int) var_12)) : (min((arr_51 [i_2] [i_2 + 1] [i_2] [i_2] [i_2] [i_2]), (((/* implicit */unsigned long long int) arr_47 [i_2 - 2] [i_2 - 2]))))))));
        arr_57 [i_2] [i_2 - 3] = ((/* implicit */short) ((((((/* implicit */_Bool) ((2607616925U) & (((/* implicit */unsigned int) ((/* implicit */int) (short)15541)))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)0)), (1203564127U)))) : (arr_51 [i_2] [i_2] [i_2] [i_2] [i_2 + 2] [(_Bool)1]))) ^ (min((min((((/* implicit */unsigned long long int) -1363704417)), (9223372032559808512ULL))), (((/* implicit */unsigned long long int) arr_54 [i_2] [i_2]))))));
    }
    var_44 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1680672201)) ? (4315663090711331220LL) : (((/* implicit */long long int) -1630390272))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (max((((/* implicit */long long int) (_Bool)1)), (5383243061771378580LL)))))) ? (((((14959916471150963753ULL) == (15210792178706320650ULL))) ? (((((/* implicit */_Bool) var_3)) ? (6045075893103385196ULL) : (((/* implicit */unsigned long long int) 1680672200)))) : (((/* implicit */unsigned long long int) (-(var_0)))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)0)), ((+(3061320476U))))))));
}
