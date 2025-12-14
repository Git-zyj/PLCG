/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110254
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
    var_18 = ((/* implicit */unsigned char) var_5);
    var_19 = ((/* implicit */long long int) (unsigned char)125);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) arr_1 [i_0]);
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? (((var_3) / (((/* implicit */long long int) ((/* implicit */int) var_17))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_6 [i_0] [i_0] [i_1] [i_0]))))));
                }
            } 
        } 
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)15))))) ? (((/* implicit */unsigned long long int) var_12)) : (var_10)));
        arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-105))) & (-4110027918588163499LL)));
    }
    for (long long int i_3 = 1; i_3 < 22; i_3 += 3) 
    {
        /* LoopSeq 4 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_5 = 3; i_5 < 22; i_5 += 2) 
            {
                for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) var_17);
                            var_24 *= ((/* implicit */short) ((((/* implicit */int) (signed char)0)) ^ (((/* implicit */int) (unsigned char)36))));
                        }
                    } 
                } 
            } 
            var_25 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_18 [12] [12])))) ? (max((arr_18 [(short)20] [(short)20]), (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) arr_18 [(signed char)8] [(signed char)8])) ? (arr_18 [(unsigned short)2] [(unsigned short)2]) : (arr_18 [(short)10] [(short)10])))));
            var_26 ^= ((/* implicit */unsigned long long int) var_11);
        }
        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            var_27 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((var_4), (((/* implicit */short) arr_13 [i_3] [i_3] [i_8]))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)220)) <= (((/* implicit */int) (unsigned short)43949))))) : (((/* implicit */int) var_5)))), (((((/* implicit */_Bool) arr_23 [i_3 + 1] [i_3 + 1] [(signed char)0])) ? (((/* implicit */int) arr_23 [i_3 + 1] [i_3 - 1] [i_8])) : (((/* implicit */int) arr_23 [i_3 + 2] [i_3 + 1] [10ULL]))))));
            var_28 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)36)));
        }
        for (signed char i_9 = 1; i_9 < 23; i_9 += 3) 
        {
            var_29 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (short)0)) % (((/* implicit */int) (unsigned short)15920)))));
            /* LoopSeq 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_30 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_16 [i_9 - 1])), (((((/* implicit */int) arr_12 [(_Bool)1] [(_Bool)1])) & (((/* implicit */int) arr_12 [20] [20]))))));
                /* LoopNest 2 */
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    for (short i_12 = 1; i_12 < 23; i_12 += 2) 
                    {
                        {
                            arr_34 [i_3] [i_3] [i_10] [i_11 - 1] = ((/* implicit */unsigned int) ((unsigned short) ((var_10) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_10] [i_11 - 1] [(unsigned short)22]))))));
                            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [(unsigned short)22] [(unsigned short)22] [(unsigned short)18]))))) ? (min((((long long int) arr_29 [i_3] [i_3] [i_3] [i_3])), (((/* implicit */long long int) arr_31 [i_3 + 1] [i_9] [i_3 + 1] [i_3 + 1] [i_12 + 1] [i_3] [(unsigned short)7])))) : (((/* implicit */long long int) ((((/* implicit */int) (short)0)) * (((/* implicit */int) (short)0)))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_13 = 0; i_13 < 24; i_13 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_14 = 0; i_14 < 24; i_14 += 2) 
                {
                    for (long long int i_15 = 0; i_15 < 24; i_15 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */short) var_14);
                            var_33 ^= ((/* implicit */unsigned char) arr_33 [i_3] [i_3] [i_9] [i_13] [i_14] [i_15]);
                            arr_41 [i_3 + 1] [i_9] [i_13] [i_14] [i_15] = ((/* implicit */short) max((((/* implicit */int) arr_27 [i_3 - 1] [i_13])), (((((((/* implicit */_Bool) (unsigned short)5656)) ? (((/* implicit */int) (unsigned short)1085)) : (((/* implicit */int) arr_16 [i_15])))) >> ((((~(((/* implicit */int) (short)0)))) + (27)))))));
                        }
                    } 
                } 
                arr_42 [i_3] = ((/* implicit */long long int) min(((~(((/* implicit */int) var_2)))), (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_0))))))));
            }
        }
        for (unsigned char i_16 = 0; i_16 < 24; i_16 += 2) 
        {
            arr_45 [i_3 + 1] = ((/* implicit */short) min((((/* implicit */long long int) (-(((/* implicit */int) var_2))))), (arr_44 [i_3 + 2] [i_3 + 1])));
            /* LoopSeq 3 */
            for (unsigned short i_17 = 1; i_17 < 21; i_17 += 2) 
            {
                arr_49 [i_3] [i_3] [i_17] [i_16] = ((/* implicit */signed char) arr_11 [(signed char)4] [i_16] [i_16]);
                var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (short)0)))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-40)), ((unsigned short)56425))))));
                arr_50 [i_3] [i_17] |= ((/* implicit */int) var_8);
            }
            for (signed char i_18 = 0; i_18 < 24; i_18 += 2) 
            {
                arr_54 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) (short)0)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (arr_21 [i_3 + 2] [i_3 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)27523))))))));
                var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) -69809883))));
            }
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_20 = 0; i_20 < 24; i_20 += 2) 
                {
                    arr_61 [i_3] [i_19] = ((/* implicit */signed char) max((473213142948026855LL), (((/* implicit */long long int) ((short) ((((/* implicit */int) (short)-1)) ^ (((/* implicit */int) (unsigned short)64450))))))));
                    var_36 = ((/* implicit */unsigned short) arr_16 [12ULL]);
                }
                arr_62 [i_19] [i_16] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (short)-1)))))))) ? (((/* implicit */int) (unsigned short)35992)) : (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))));
                var_37 = ((/* implicit */long long int) ((((/* implicit */int) min((arr_30 [i_3 + 1] [i_3 + 2] [i_3 + 2] [i_3 - 1]), (((/* implicit */unsigned short) var_17))))) == (((/* implicit */int) ((((/* implicit */_Bool) (short)-13187)) && (((/* implicit */_Bool) (unsigned short)21152)))))));
                arr_63 [i_19] = ((/* implicit */long long int) ((unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)64450)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_15))))), (arr_29 [i_3] [i_16] [19U] [i_19]))));
            }
            var_38 = ((/* implicit */signed char) var_5);
        }
        var_39 ^= ((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_46 [i_3] [i_3 + 2])), ((short)-1)))) ? (((/* implicit */int) arr_59 [i_3 + 2] [i_3 + 1] [i_3] [i_3] [i_3 + 2] [i_3])) : (((/* implicit */int) arr_9 [i_3 + 2]))))) * (((long long int) (short)13415)));
        var_40 -= ((/* implicit */signed char) 5242253770345487848LL);
        var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) var_7))));
    }
}
