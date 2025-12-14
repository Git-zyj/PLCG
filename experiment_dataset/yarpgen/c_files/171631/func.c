/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171631
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
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                arr_4 [(short)5] = ((/* implicit */unsigned char) ((arr_3 [i_0 - 2]) ? (((/* implicit */int) ((short) -1761560176))) : ((~(((/* implicit */int) arr_3 [i_0 - 1]))))));
                arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0])) <= (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)58)) && (((/* implicit */_Bool) (unsigned char)32))))) == (((arr_3 [i_0]) ? (((/* implicit */int) arr_0 [(_Bool)1] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_1 + 3])))))))));
                var_10 = ((/* implicit */unsigned char) (+(max((((/* implicit */long long int) arr_1 [i_0 + 2] [i_0 + 1])), (min((var_2), (((/* implicit */long long int) arr_1 [i_1] [i_0 - 1]))))))));
                var_11 = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)83)) : (((/* implicit */int) var_6)))), (((/* implicit */int) (_Bool)0)))) ^ (((/* implicit */int) (short)10084))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            var_12 = min((2383402928U), (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0 + 1])) ^ (((((/* implicit */_Bool) var_8)) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) var_8))))))));
                            arr_10 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) arr_7 [i_3] [i_1] [i_2 + 2] [i_1]);
                            arr_11 [i_0] [i_0] [i_0] [i_0] [(signed char)2] [i_0] = ((/* implicit */unsigned short) max((((unsigned char) 5579895884765163749LL)), (((/* implicit */unsigned char) var_5))));
                            arr_12 [i_0] [i_1] [i_2] [i_2] [i_1] [i_0 - 2] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((_Bool)1) ? (arr_6 [i_0] [i_3] [i_1 + 3] [i_2 + 1]) : (arr_6 [0U] [i_1] [i_1 + 3] [i_2 + 1]))))));
                            arr_13 [i_0] [i_1] [i_2] [i_3] [(unsigned char)16] [(unsigned char)16] = ((/* implicit */unsigned char) ((unsigned long long int) max((arr_7 [i_2 + 2] [i_1 - 1] [i_0] [i_0 + 1]), (arr_7 [i_2 + 1] [i_1 + 3] [i_0 - 1] [i_0 - 1]))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        arr_16 [i_4] = ((arr_14 [i_4]) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_15 [i_4])))));
        /* LoopNest 3 */
        for (unsigned short i_5 = 2; i_5 < 22; i_5 += 3) 
        {
            for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) 
            {
                for (signed char i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    {
                        arr_23 [i_4] [i_4] [19ULL] [i_6] [i_7] = arr_17 [i_4] [i_5 + 2] [i_4];
                        arr_24 [i_4] [i_4] [i_6] [i_7] [i_6] [i_7] = ((/* implicit */int) var_4);
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_13 = ((/* implicit */short) ((arr_26 [i_8]) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_8] [i_8] [i_8] [i_8])) != (((/* implicit */int) var_5))))))));
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 12; i_10 += 4) 
            {
                for (unsigned char i_11 = 0; i_11 < 12; i_11 += 2) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) != (((/* implicit */int) ((unsigned short) arr_29 [i_8] [i_8] [i_8] [i_8])))));
                            arr_35 [i_8] [i_9] [i_8] [i_8] [i_11] |= ((/* implicit */signed char) arr_1 [i_8] [i_11]);
                        }
                    } 
                } 
            } 
            var_15 &= ((/* implicit */int) ((arr_14 [(short)20]) >> (((((/* implicit */int) arr_31 [i_9])) - (34)))));
            /* LoopNest 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (unsigned char i_14 = 0; i_14 < 12; i_14 += 4) 
                {
                    {
                        var_16 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_2 [i_9] [i_9]))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)59302)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (32736U))))));
                        arr_40 [i_9] [(_Bool)1] [i_9] = ((/* implicit */signed char) var_7);
                        arr_41 [i_8] [i_9] [i_13] [i_13] = ((/* implicit */int) ((((arr_20 [i_14]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_8]))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)23)) <= (((/* implicit */int) (_Bool)1))))))));
                        var_17 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_38 [i_8] [i_13] [i_14] [i_14] [i_8] [i_8]))));
                    }
                } 
            } 
        }
        var_18 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */int) arr_19 [i_8] [(unsigned short)8] [i_8] [22])), (arr_6 [i_8] [i_8] [i_8] [i_8]))) : (((/* implicit */int) max((arr_31 [i_8]), (arr_31 [i_8]))))));
    }
    /* LoopNest 3 */
    for (int i_15 = 0; i_15 < 15; i_15 += 3) 
    {
        for (unsigned char i_16 = 2; i_16 < 13; i_16 += 1) 
        {
            for (unsigned int i_17 = 1; i_17 < 14; i_17 += 2) 
            {
                {
                    arr_50 [i_17] [i_16] [i_16] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((-2868325011665357892LL) | (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_15])))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (6611349705272716583LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    arr_51 [i_15] [(unsigned char)12] [(_Bool)1] |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((var_5) || (((/* implicit */_Bool) var_9)))) ? (max((((/* implicit */unsigned int) arr_1 [i_15] [i_16])), (4075464668U))) : (((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)9))) : (var_0)))))) | (min((((((/* implicit */_Bool) (unsigned char)3)) ? (10392691841474157834ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((((/* implicit */_Bool) -7257478637717915876LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)188))) : (var_9)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_18 = 0; i_18 < 15; i_18 += 3) 
                    {
                        for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                        {
                            {
                                arr_59 [i_15] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_17] [i_18])) ? (((31LL) & ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_15] [i_17 + 1])))));
                                var_19 = ((/* implicit */short) (+(max((arr_21 [i_15] [i_17] [i_15] [i_18] [i_19]), ((+(((/* implicit */int) (_Bool)1))))))));
                                var_20 *= ((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_45 [1LL] [i_16]))))), (((((/* implicit */long long int) ((/* implicit */int) arr_46 [i_18]))) / (7110659152412225296LL))))) * (((/* implicit */long long int) ((1994438077U) / (((/* implicit */unsigned int) -1296074025))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
