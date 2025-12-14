/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119635
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
    var_13 = ((/* implicit */signed char) (((~(((/* implicit */int) ((short) var_5))))) | (((/* implicit */int) var_0))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (1071644672) : (((((/* implicit */_Bool) (short)-10454)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_3))))));
        arr_4 [i_0] = ((/* implicit */int) arr_2 [i_0]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
    {
        var_14 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) max((arr_6 [(short)10]), (arr_6 [i_1]))))))) ? (((/* implicit */int) (short)-10462)) : (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1]))))));
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_1])) * (((/* implicit */int) arr_5 [i_1]))));
        var_15 = ((/* implicit */int) arr_6 [i_1]);
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) /* same iter space */
    {
        arr_12 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (arr_8 [i_2] [i_2]) : (arr_8 [i_2] [i_2])));
        var_16 = ((((/* implicit */int) var_10)) << (((((/* implicit */int) arr_6 [(short)0])) >> (((-1071644673) + (1071644685))))));
        var_17 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) -1071644665)) ? (((/* implicit */int) (short)10459)) : (((/* implicit */int) (short)-10460))))));
        arr_13 [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (short)10459)) * (((/* implicit */int) arr_10 [i_2]))));
        /* LoopSeq 3 */
        for (signed char i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
            {
                arr_19 [i_2] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_2] [i_2] [i_2])) ? ((~(((/* implicit */int) (short)-10459)))) : (((/* implicit */int) var_10))));
                var_18 -= ((/* implicit */short) (-(((((/* implicit */int) arr_18 [i_2] [i_2] [i_2])) - (((/* implicit */int) (short)-10460))))));
            }
            for (short i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_10 [i_2])))))));
                var_20 = ((/* implicit */signed char) arr_20 [i_3]);
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (signed char i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        {
                            var_21 = (-(((/* implicit */int) ((((/* implicit */int) (short)-10490)) == (((/* implicit */int) (short)10474))))));
                            arr_26 [(signed char)7] [i_3] [i_6] [i_7] = ((/* implicit */int) ((_Bool) arr_25 [i_7] [i_7] [i_5] [i_5] [i_3] [i_2]));
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((unsigned int) (unsigned short)31273)))));
                            arr_27 [i_2] [i_2] [i_2] [i_3] [1] [i_6] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7006)) ? (arr_8 [i_2] [i_2]) : (arr_8 [i_6] [i_3])));
                            var_23 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (short)-10474))))));
                        }
                    } 
                } 
            }
            arr_28 [i_2] [i_3] [i_3] = ((/* implicit */_Bool) arr_15 [i_3] [(_Bool)0]);
            var_24 = ((/* implicit */unsigned int) arr_8 [10ULL] [i_2]);
        }
        for (signed char i_8 = 0; i_8 < 11; i_8 += 1) /* same iter space */
        {
            var_25 = (~(((((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)64)))));
            var_26 = ((/* implicit */long long int) ((int) arr_11 [i_2] [i_8]));
            var_27 = ((/* implicit */unsigned short) var_8);
            arr_32 [i_2] = ((/* implicit */long long int) arr_21 [i_2] [(short)10] [(short)10] [(signed char)10]);
            var_28 = ((/* implicit */unsigned char) ((arr_24 [i_2] [i_2] [i_8] [i_8] [i_8] [i_8]) ? (((/* implicit */int) arr_24 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) var_3))));
        }
        for (unsigned long long int i_9 = 2; i_9 < 9; i_9 += 3) 
        {
            arr_35 [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_9 - 2]))) & (var_8)));
            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_9 - 1] [i_9 - 1] [i_9 + 2] [i_9])) && (((/* implicit */_Bool) var_5))));
            arr_36 [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) 2303549983U)))))) | (arr_15 [i_9 - 1] [i_2])));
            var_30 = ((/* implicit */int) (unsigned char)188);
        }
    }
    /* LoopSeq 1 */
    for (unsigned int i_10 = 0; i_10 < 15; i_10 += 4) 
    {
        arr_40 [i_10] = ((/* implicit */short) min(((-(((/* implicit */int) min((arr_37 [i_10]), (((/* implicit */short) (unsigned char)174))))))), ((~(((/* implicit */int) var_7))))));
        var_31 = ((/* implicit */unsigned long long int) min((max(((short)10465), ((short)10455))), (((/* implicit */short) (unsigned char)64))));
        arr_41 [(unsigned char)8] = min((((min((2397255305485359020ULL), (var_8))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)-10460)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_39 [i_10]))))));
    }
    var_32 = ((/* implicit */int) ((((unsigned long long int) var_3)) != (((/* implicit */unsigned long long int) min((((/* implicit */int) min((((/* implicit */short) (signed char)8)), (var_5)))), (var_2))))));
    var_33 = ((/* implicit */short) var_0);
}
