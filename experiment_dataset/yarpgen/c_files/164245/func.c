/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164245
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) + (0ULL)));
            var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (arr_1 [i_0])));
        }
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            var_22 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_2])) ? (-7276535363800080083LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2])))));
            var_23 = ((/* implicit */unsigned short) var_18);
            var_24 = ((/* implicit */_Bool) (+(18446744073709551615ULL)));
            var_25 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (short)0))))));
        }
        for (short i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            /* LoopSeq 4 */
            for (int i_4 = 0; i_4 < 12; i_4 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_5 = 3; i_5 < 11; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        {
                            var_26 ^= ((/* implicit */unsigned int) var_2);
                            var_27 = ((/* implicit */signed char) (-(var_18)));
                            var_28 = ((/* implicit */int) (unsigned short)65532);
                        }
                    } 
                } 
                arr_19 [i_0] [i_3] [i_4] &= ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)172))) : (var_8));
                var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) arr_9 [i_0]))));
            }
            for (int i_7 = 0; i_7 < 12; i_7 += 2) /* same iter space */
            {
                arr_22 [i_7] [6U] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_4 [i_7])) : (((/* implicit */int) var_5))));
                var_30 = ((/* implicit */unsigned long long int) (unsigned char)150);
            }
            for (int i_8 = 0; i_8 < 12; i_8 += 2) /* same iter space */
            {
                arr_26 [i_0] [(_Bool)0] [i_8] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_8])) ? (((/* implicit */int) arr_8 [i_8] [i_3])) : (((/* implicit */int) var_4))));
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    for (unsigned char i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */short) ((((/* implicit */int) arr_29 [i_0] [i_3] [i_8] [i_9] [i_10])) * (((/* implicit */int) arr_4 [i_0]))));
                            var_32 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)196)) & (((/* implicit */int) (unsigned char)90))));
                            var_33 = ((/* implicit */int) min((var_33), ((+(((/* implicit */int) (unsigned char)245))))));
                        }
                    } 
                } 
                var_34 -= ((/* implicit */unsigned short) 8653388089212140826ULL);
            }
            for (int i_11 = 0; i_11 < 12; i_11 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                for (signed char i_12 = 3; i_12 < 11; i_12 += 2) 
                {
                    arr_39 [i_0] [i_3] [i_12] [i_11] [(signed char)0] = ((/* implicit */unsigned long long int) ((((((-794162687000910206LL) + (9223372036854775807LL))) >> (((arr_1 [i_0]) + (5073544995960078885LL))))) << (((25769803776ULL) - (25769803755ULL)))));
                    arr_40 [i_0] [i_12] [i_0] [(signed char)2] = ((/* implicit */signed char) arr_1 [i_0]);
                    var_35 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)43)) ? (((/* implicit */int) (short)23358)) : (((/* implicit */int) (unsigned short)37568))));
                    arr_41 [i_12] [10LL] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) (unsigned char)140))) ? (arr_20 [i_12 - 1] [i_12 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_12 - 2] [i_12 + 1])))));
                    var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_3] [i_11] [5U] [i_12])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_13 [8])))))));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    arr_45 [i_0] [i_13] [i_13] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_0] [i_3] [i_11] [(_Bool)1])) ? (((/* implicit */int) arr_25 [i_0] [(unsigned char)9] [(short)6] [i_13])) : (((/* implicit */int) (signed char)(-127 - 1)))));
                    var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (short)432)) : (((/* implicit */int) var_14))));
                    var_38 ^= ((/* implicit */unsigned char) var_8);
                    arr_46 [i_0] [i_3] [i_11] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_0] [i_3])) ? (((/* implicit */int) (unsigned short)0)) : (596840434)));
                }
                arr_47 [9U] [i_0] [i_3] [(_Bool)1] |= ((((/* implicit */_Bool) 0LL)) ? (arr_33 [i_0] [i_3] [i_3] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)105)) || (((/* implicit */_Bool) var_14)))))));
                var_39 *= ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) -4437595314492621531LL)))));
                var_40 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_35 [(unsigned char)5] [i_3] [(unsigned short)3] [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_3] [i_11]))));
            }
            var_41 = ((/* implicit */int) ((2602680132U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_0] [i_0] [i_3] [i_3])))));
        }
        var_42 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_11 [i_0] [0U] [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_0] [(unsigned short)0])))) + (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
        var_43 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
        var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) ((arr_33 [i_0] [(_Bool)1] [i_0] [i_0]) >> (((((/* implicit */int) var_12)) - (49))))))));
    }
    var_45 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)))), (((/* implicit */int) var_6))))) - (((((/* implicit */_Bool) max((var_7), (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) 2462861597U)) : (var_8)))));
    var_46 = ((var_19) << (max((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (1832105718U))), (((/* implicit */unsigned int) var_1)))));
    var_47 = ((/* implicit */unsigned long long int) var_10);
}
