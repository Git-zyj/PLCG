/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165748
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
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 |= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_3 [i_0])) ? ((~(((/* implicit */int) arr_2 [i_0] [i_1])))) : (((/* implicit */int) var_8)))), (((/* implicit */int) (short)-23160))));
                var_12 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_10), ((short)-23170))))) : (2641786271U))));
                var_13 |= ((/* implicit */unsigned long long int) (unsigned char)239);
                var_14 = ((/* implicit */_Bool) arr_1 [(unsigned char)10]);
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned short i_2 = 1; i_2 < 22; i_2 += 4) 
    {
        var_15 = (~(((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)14)), ((short)23166))))) / (max((((/* implicit */long long int) arr_8 [i_2] [i_2])), (arr_7 [i_2 + 1] [i_2]))))));
        arr_9 [i_2] = ((/* implicit */short) ((long long int) ((((/* implicit */int) arr_8 [i_2 - 1] [i_2 + 1])) / (arr_6 [i_2 + 1]))));
    }
    for (long long int i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
    {
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) <= (arr_3 [16LL])));
        var_16 += ((/* implicit */short) ((((/* implicit */_Bool) 397317613)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))) : ((+(9223372036854775789LL)))));
    }
    for (long long int i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) (short)3358);
        var_18 = min((max((((/* implicit */int) (signed char)-115)), (var_6))), (min((arr_6 [i_4]), (arr_6 [i_4]))));
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_5])) && (((/* implicit */_Bool) arr_20 [i_5] [i_5]))));
        /* LoopSeq 3 */
        for (signed char i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            var_20 &= -1789296711;
            arr_24 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_6] [i_6] [i_5])) ? (((/* implicit */int) arr_8 [i_5] [i_6])) : (((/* implicit */int) arr_19 [i_5]))))) : (arr_23 [i_6] [i_5] [i_5])));
            arr_25 [i_6] [i_5] [8ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) 637493010)) ? (((/* implicit */int) (short)-23179)) : (-898526241)));
            var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)17))));
        }
        for (signed char i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            var_22 ^= (+(((/* implicit */int) (short)-17)));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 20; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */short) var_6);
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_5])) ? (576460752269869056ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)0)) ? (6148313385978272719LL) : (((/* implicit */long long int) ((/* implicit */int) (short)12))))))));
                            var_25 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 697986301U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1555364986537701849ULL)))) ? (((478032133U) ^ (((/* implicit */unsigned int) -2147483645)))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [i_5])) / (235694308))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_11 = 0; i_11 < 20; i_11 += 4) 
        {
            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-1))) <= (var_3)))) : (arr_18 [i_5])));
            var_27 = ((/* implicit */unsigned short) (+(-1665514652)));
        }
    }
}
