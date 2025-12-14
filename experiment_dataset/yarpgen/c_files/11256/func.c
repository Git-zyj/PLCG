/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11256
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((arr_0 [i_0]) != ((-(1753366454)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_0 [i_0]) ^ (((/* implicit */int) arr_1 [i_0] [i_0]))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            var_16 = ((/* implicit */unsigned char) ((unsigned int) arr_4 [i_1] [i_1]));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
            {
                var_17 = ((/* implicit */unsigned short) ((short) arr_0 [i_0]));
                /* LoopNest 2 */
                for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1] [i_1])) >= (((/* implicit */int) var_9))));
                            arr_14 [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4] [i_4 + 1] [i_4 + 1] [i_1] [i_4 + 1] [i_4] [i_4])) ? (((/* implicit */int) (!((_Bool)0)))) : (arr_6 [i_1] [i_1] [i_3] [i_4 + 1])));
                        }
                    } 
                } 
                var_19 = (+(((/* implicit */int) ((_Bool) 9223372036854775807LL))));
                var_20 = ((/* implicit */unsigned long long int) (_Bool)1);
            }
            for (unsigned int i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
            {
                var_21 = (i_1 % 2 == zero) ? (((/* implicit */_Bool) ((arr_6 [i_5] [i_1] [i_5] [i_5]) >> (((arr_6 [i_5] [i_1] [i_1] [i_0]) - (1554563221)))))) : (((/* implicit */_Bool) ((((arr_6 [i_5] [i_1] [i_5] [i_5]) + (2147483647))) >> (((((arr_6 [i_5] [i_1] [i_1] [i_0]) - (1554563221))) + (1993432945))))));
                arr_17 [i_0] [(signed char)0] [i_1] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)110))) : (var_0)))) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_0])) : (((((/* implicit */int) var_6)) + (((/* implicit */int) (unsigned short)24380))))));
                /* LoopNest 2 */
                for (long long int i_6 = 2; i_6 < 15; i_6 += 2) 
                {
                    for (unsigned long long int i_7 = 2; i_7 < 14; i_7 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-1040368709748973303LL)))));
                            arr_22 [i_1] [i_1] [i_1] [i_6 + 1] [i_7 + 1] [i_1] [i_1] = ((/* implicit */unsigned short) ((long long int) var_14));
                            arr_23 [i_1] [i_1] [i_5] [i_7] [i_7] [i_5] [i_6] = (+((+(((/* implicit */int) arr_8 [i_0] [i_1] [i_5] [i_1])))));
                        }
                    } 
                } 
                arr_24 [i_1] = ((/* implicit */unsigned char) (+(-2906966503939874318LL)));
            }
        }
    }
    for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((signed char) var_10))), (((((/* implicit */_Bool) arr_15 [i_8] [i_8])) ? (arr_15 [i_8] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-26622)))))));
        arr_27 [i_8] = ((/* implicit */unsigned long long int) ((var_13) - (((/* implicit */int) max((((16745433079063243167ULL) <= (((/* implicit */unsigned long long int) var_1)))), (arr_26 [i_8] [i_8]))))));
    }
    for (int i_9 = 1; i_9 < 10; i_9 += 3) 
    {
        var_24 = ((/* implicit */_Bool) (-(var_1)));
        arr_30 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-(((/* implicit */int) arr_13 [(unsigned char)10] [(unsigned char)10] [i_9] [(unsigned short)16] [(signed char)4] [i_9] [i_9 + 2])))), (((/* implicit */int) arr_28 [i_9]))))) ? (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_28 [i_9])))) & (((((/* implicit */_Bool) arr_19 [i_9] [i_9] [i_9] [12] [i_9 - 1])) ? (((/* implicit */int) arr_16 [2] [i_9])) : (((/* implicit */int) (_Bool)1)))))) : ((~((-(((/* implicit */int) (short)32512))))))));
        /* LoopNest 3 */
        for (unsigned char i_10 = 0; i_10 < 12; i_10 += 1) 
        {
            for (unsigned char i_11 = 0; i_11 < 12; i_11 += 1) 
            {
                for (unsigned int i_12 = 0; i_12 < 12; i_12 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_13 = 0; i_13 < 12; i_13 += 2) 
                        {
                            arr_41 [i_9] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) (_Bool)0)))));
                            var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((_Bool)0) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
                        }
                        for (signed char i_14 = 0; i_14 < 12; i_14 += 3) 
                        {
                            arr_44 [i_9] [i_11] [i_9] = ((/* implicit */signed char) ((short) (!(((/* implicit */_Bool) arr_20 [i_9] [i_11] [i_9 + 2] [i_12] [i_11] [i_11])))));
                            arr_45 [i_11] [i_11] [i_10] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned char)48)) ? (-707985854313107244LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_14] [i_11] [i_11] [i_9])))))))) - (((long long int) ((((/* implicit */int) (short)16384)) << (((16745433079063243173ULL) - (16745433079063243173ULL))))))));
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_28 [i_11])))) : (((unsigned long long int) (unsigned short)28734))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_15 = 0; i_15 < 12; i_15 += 1) 
                        {
                            arr_50 [i_11] [(unsigned short)8] [i_12] [8LL] [i_11] [i_11] = ((/* implicit */long long int) (~(((((((/* implicit */_Bool) 4838485692101551631LL)) && (((/* implicit */_Bool) var_15)))) ? (((((-2138953285) + (2147483647))) << (((16745433079063243167ULL) - (16745433079063243167ULL))))) : (((/* implicit */int) arr_47 [i_15] [i_11] [i_11] [i_11] [i_9]))))));
                            var_27 = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (unsigned char)250)))), (((/* implicit */int) (unsigned short)36785))));
                        }
                        var_28 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)18078))));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */unsigned short) (!(((arr_15 [(signed char)2] [(signed char)2]) <= (arr_15 [(unsigned char)10] [(unsigned char)10])))));
    }
    /* vectorizable */
    for (unsigned long long int i_16 = 0; i_16 < 15; i_16 += 1) 
    {
        arr_53 [i_16] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_16] [i_16] [i_16] [i_16])) >> (((/* implicit */int) arr_8 [i_16] [i_16] [i_16] [i_16]))));
        arr_54 [i_16] = ((/* implicit */unsigned int) (signed char)0);
        arr_55 [i_16] = ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)-23621)) : (((/* implicit */int) arr_26 [i_16] [i_16])));
        var_30 = ((/* implicit */short) var_10);
    }
    /* LoopSeq 1 */
    for (int i_17 = 0; i_17 < 11; i_17 += 2) 
    {
        var_31 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((unsigned char) (unsigned char)71))))) > (max((((/* implicit */unsigned int) (~(((/* implicit */int) (short)16377))))), (((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
        arr_59 [i_17] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) (short)23618))))))));
    }
}
