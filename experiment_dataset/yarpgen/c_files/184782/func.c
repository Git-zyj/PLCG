/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184782
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
    var_17 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */short) var_16)), ((short)25349))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) 1338040935U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)110))))))) : (1125625028935680LL)));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11))));
        arr_4 [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)205)) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        var_19 = ((/* implicit */_Bool) (+(((-1125625028935681LL) - (((/* implicit */long long int) 2766298375U))))));
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_16))));
        var_21 = ((/* implicit */unsigned int) (signed char)-21);
        arr_8 [i_1] = ((((/* implicit */_Bool) var_6)) ? ((((_Bool)0) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_7 [i_1])))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) var_0))))));
        arr_9 [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) min(((_Bool)1), ((!(((/* implicit */_Bool) arr_7 [i_1]))))))), (var_3)));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_3 = 2; i_3 < 11; i_3 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                var_22 = ((/* implicit */unsigned char) var_8);
                /* LoopSeq 1 */
                for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    /* LoopSeq 4 */
                    for (short i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned char) max((var_23), ((unsigned char)77)));
                        var_24 = ((/* implicit */_Bool) (~((~(arr_6 [i_2])))));
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)18183))) : (var_15))))))));
                        var_26 *= ((/* implicit */unsigned char) (_Bool)1);
                    }
                    for (unsigned char i_7 = 2; i_7 < 12; i_7 += 4) /* same iter space */
                    {
                        arr_26 [i_2] [(_Bool)1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_4]))))) ? ((+(((/* implicit */int) (short)32763)))) : (((((/* implicit */int) arr_10 [(unsigned char)1])) >> (((((/* implicit */int) arr_23 [i_2] [i_4])) - (195)))))));
                        var_27 += ((/* implicit */unsigned char) -1125625028935681LL);
                        var_28 *= var_13;
                        arr_27 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) 0U))));
                        arr_28 [(unsigned char)2] [i_5] [i_5] [(unsigned char)2] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)18)) ? (-1605140024) : (((/* implicit */int) (unsigned char)195))));
                    }
                    for (unsigned char i_8 = 2; i_8 < 12; i_8 += 4) /* same iter space */
                    {
                        arr_31 [i_2] [3] [i_4] [i_5] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_8 + 2] [i_8] [i_4] [i_3 + 3]))));
                        var_29 = (~(arr_19 [i_8] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1]));
                        var_30 += ((/* implicit */short) ((((/* implicit */_Bool) (signed char)99)) ? (((((/* implicit */_Bool) 0U)) ? (arr_21 [i_2] [i_3 + 3] [i_3 + 3] [i_4] [i_5] [i_8]) : (arr_21 [i_2] [13U] [(signed char)8] [i_2] [i_2] [i_2]))) : (((/* implicit */int) (unsigned char)51))));
                    }
                    for (unsigned char i_9 = 2; i_9 < 12; i_9 += 1) 
                    {
                        var_31 -= ((/* implicit */unsigned char) (_Bool)1);
                        var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-11869))));
                    }
                    arr_35 [4U] [(unsigned char)6] [5U] [(unsigned char)6] [(unsigned char)6] = ((/* implicit */unsigned short) arr_34 [i_2] [13] [9ULL] [i_2] [i_2] [9ULL] [i_2]);
                    /* LoopSeq 3 */
                    for (unsigned int i_10 = 0; i_10 < 14; i_10 += 1) /* same iter space */
                    {
                        arr_39 [i_3] [i_3] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_2] [i_2])) ? (4890981465788922086LL) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
                        arr_40 [i_10] [1U] [(_Bool)1] [i_4] [(_Bool)1] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) (_Bool)1);
                        var_33 += ((/* implicit */_Bool) arr_21 [i_2] [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_2]);
                        arr_41 [(unsigned char)2] [6] [(unsigned char)2] [i_3] [(short)9] [i_3] [(_Bool)1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_15))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 14; i_11 += 1) /* same iter space */
                    {
                        arr_44 [(unsigned char)1] [(unsigned char)1] [2] = ((/* implicit */_Bool) 2847129698U);
                        var_34 ^= ((/* implicit */unsigned char) (_Bool)1);
                        arr_45 [i_2] [i_2] [i_3] [i_2] [i_4] [i_5] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (arr_34 [i_3] [i_3] [i_3] [i_3] [i_3 + 2] [i_3] [i_3 + 3]) : (arr_34 [(unsigned char)13] [(unsigned char)13] [(unsigned char)13] [i_3 - 2] [i_3 - 1] [(unsigned char)13] [i_3 + 2])));
                    }
                    for (int i_12 = 2; i_12 < 12; i_12 += 4) 
                    {
                        var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) (!((!((_Bool)1))))))));
                        var_36 ^= ((/* implicit */unsigned char) ((-2147483631) == (((/* implicit */int) arr_25 [i_2] [i_3 - 1] [i_4] [i_5] [i_5] [i_12 - 2]))));
                    }
                }
            }
            arr_50 [i_2] [i_2] [i_3 - 1] = ((/* implicit */signed char) ((arr_11 [4U] [4U]) >= (((/* implicit */unsigned int) (~(((/* implicit */int) var_16)))))));
            var_37 ^= (((_Bool)1) ? (((/* implicit */int) arr_25 [i_2] [i_2] [(unsigned char)12] [i_2] [i_3 + 1] [i_3 - 1])) : (((/* implicit */int) var_3)));
        }
        var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_2])))))));
    }
    /* vectorizable */
    for (signed char i_13 = 1; i_13 < 15; i_13 += 2) 
    {
        var_39 = ((/* implicit */unsigned short) (_Bool)1);
        arr_54 [i_13] = ((/* implicit */unsigned char) (_Bool)1);
        var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (1897116683))) : (((/* implicit */int) (signed char)113)))))));
    }
    var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) (-(-1897116684))))));
}
