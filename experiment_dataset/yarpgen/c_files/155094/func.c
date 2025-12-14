/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155094
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) 3893950286U);
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
        {
            var_18 = ((/* implicit */signed char) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_0))))), (((((/* implicit */_Bool) var_5)) ? (3953215647607106081ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))));
            arr_6 [i_0] [i_0] [(_Bool)1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */int) (short)-14070)) + (2147483647))) >> (((17396032599984565647ULL) - (17396032599984565618ULL))))))));
        }
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((int) arr_8 [i_0])) >> ((+(((/* implicit */int) (signed char)1)))))))));
            arr_9 [i_0] [i_2] = ((/* implicit */short) (-(((/* implicit */int) (short)-23177))));
        }
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_2 [i_0] [i_3])) ? (((/* implicit */int) arr_11 [(unsigned char)17])) : (((/* implicit */int) (short)(-32767 - 1)))))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)116)), (142384039U))))));
            arr_12 [(_Bool)1] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_3])) & (((/* implicit */int) arr_2 [i_0] [i_3]))))) || (((/* implicit */_Bool) arr_4 [17LL] [i_3] [i_3]))));
            var_21 = ((((/* implicit */_Bool) ((((/* implicit */int) max((var_6), (((/* implicit */unsigned char) arr_8 [i_3]))))) % (((((/* implicit */_Bool) -1295574052)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (signed char)92))))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)1))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_3] [i_3] [i_3]))))) ? ((-9223372036854775807LL - 1LL)) : ((~(var_3))))));
        }
        var_22 = ((/* implicit */unsigned char) arr_4 [i_0] [i_0] [i_0]);
    }
    var_23 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-14781)) && (((/* implicit */_Bool) ((signed char) ((((/* implicit */unsigned long long int) var_8)) == (var_2)))))));
    /* LoopSeq 4 */
    for (signed char i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)24))) : ((-((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (short)-29205))) : (3345282392863595693LL)))))));
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (_Bool)1))));
        arr_15 [i_4] = ((/* implicit */_Bool) ((((((((_Bool) -992830631)) ? (((((/* implicit */_Bool) (signed char)-98)) ? (-670433718) : (arr_13 [i_4]))) : (((/* implicit */int) ((short) (unsigned char)93))))) + (2147483647))) >> ((((((!(((/* implicit */_Bool) 3559243434U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_14 [i_4]))))) : (((/* implicit */int) arr_14 [i_4])))) - (18200)))));
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 23; i_5 += 4) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) 2147483647))));
        var_27 += 67108863U;
        var_28 = ((/* implicit */unsigned long long int) arr_16 [i_5]);
    }
    for (int i_6 = 0; i_6 < 20; i_6 += 4) 
    {
        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [5] [i_6])) ? (((/* implicit */int) arr_19 [i_6] [i_6])) : (arr_18 [i_6])))) ? ((((_Bool)0) ? (10724357758218112881ULL) : (11954201139682346108ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21839))))), (((/* implicit */unsigned long long int) (~(arr_13 [i_6])))))))));
        arr_20 [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_6])) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) arr_14 [i_6]))))) ? (((((/* implicit */int) arr_14 [i_6])) + (((/* implicit */int) (unsigned char)254)))) : ((~(((/* implicit */int) arr_14 [i_6]))))));
        arr_21 [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_6] [i_6])) ? (((/* implicit */int) var_14)) : (arr_17 [i_6] [i_6])))) / (((((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)11)), (2879305974U)))) + (((((/* implicit */_Bool) arr_13 [i_6])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))))));
        var_30 = ((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)-99)))) + (((/* implicit */int) ((unsigned char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)8912))))))));
    }
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 1) 
    {
        /* LoopSeq 4 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_31 = ((/* implicit */int) min((var_31), ((-(arr_23 [i_8])))));
            arr_27 [i_8] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 72349586)) ? (-1) : (((/* implicit */int) (signed char)-72))))) != (((((/* implicit */_Bool) 2879305974U)) ? (7722386315491438734ULL) : (((/* implicit */unsigned long long int) 515080764))))));
            var_32 &= ((/* implicit */unsigned char) ((((int) (unsigned short)1536)) * (((/* implicit */int) arr_22 [i_7]))));
            arr_28 [i_7] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */int) (short)-29492)) != (((arr_24 [(unsigned short)16] [i_7]) ? (((/* implicit */int) (unsigned short)12607)) : (((/* implicit */int) (signed char)-105))))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_32 [i_7] [i_7] [i_9] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) arr_22 [i_7])) != (-8349324))))));
            var_33 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_7] [i_9]))) < (((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned long long int) arr_30 [i_7]))))));
        }
        for (long long int i_10 = 0; i_10 < 25; i_10 += 4) 
        {
            var_34 = ((/* implicit */unsigned char) ((signed char) arr_22 [i_7]));
            arr_35 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)201))))) ? (((((/* implicit */_Bool) 2040126122809475031ULL)) ? (((/* implicit */long long int) arr_30 [i_7])) : (9223372036854775807LL))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)13)))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_11 = 2; i_11 < 24; i_11 += 2) /* same iter space */
            {
                arr_38 [i_7] [i_7] [i_7] [i_11] = ((/* implicit */unsigned int) (-(var_2)));
                var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (short)10482)) : (1599271805)))))));
            }
            for (unsigned long long int i_12 = 2; i_12 < 24; i_12 += 2) /* same iter space */
            {
                arr_41 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) 726358677)) || (((/* implicit */_Bool) arr_26 [i_12] [i_10] [i_7]))))));
                var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) ((6338495294238907580LL) ^ (var_1))))));
            }
        }
        for (signed char i_13 = 2; i_13 < 21; i_13 += 4) 
        {
            /* LoopNest 2 */
            for (short i_14 = 1; i_14 < 22; i_14 += 4) 
            {
                for (unsigned char i_15 = 0; i_15 < 25; i_15 += 2) 
                {
                    {
                        var_37 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_37 [(short)11] [i_13 + 1] [i_13 + 1] [i_13 + 2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-32753)))) >= (((/* implicit */int) arr_50 [i_14 + 2]))));
                        var_38 ^= ((/* implicit */unsigned short) ((arr_37 [16] [i_13 + 2] [i_15] [16]) <= (((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */int) var_16)) : (arr_23 [i_7])))));
                        var_39 -= ((/* implicit */short) ((((/* implicit */int) arr_43 [i_14 + 2] [i_14 + 2] [i_14])) + (((/* implicit */int) (unsigned short)1536))));
                    }
                } 
            } 
            arr_51 [i_7] [i_7] = ((/* implicit */int) ((unsigned short) (unsigned char)230));
            var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)11)) / (((/* implicit */int) (signed char)(-127 - 1))))))));
        }
        var_41 -= ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)7))));
    }
    var_42 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (11U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)71)))));
}
