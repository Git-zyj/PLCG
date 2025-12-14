/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131612
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
    var_15 = ((/* implicit */_Bool) (short)17155);
    var_16 = ((/* implicit */_Bool) 8190);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2349531607338934155LL))));
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((max((arr_6 [i_0] [i_2]), (((/* implicit */long long int) max(((unsigned short)17089), (((/* implicit */unsigned short) var_14))))))) != (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_3 [i_2 + 2] [i_0 + 2])), ((signed char)-90))))))))));
            }
            /* vectorizable */
            for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-17153))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-7))) > (var_11))))));
                var_19 = ((/* implicit */unsigned short) ((int) ((short) 0LL)));
                arr_15 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_13) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0 + 1] [i_0 + 1] [12LL] [i_3]))) : (2349531607338934155LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)103)) > (((/* implicit */int) (_Bool)1)))))) : (arr_9 [i_1])));
                var_20 *= ((/* implicit */short) (!(((/* implicit */_Bool) var_14))));
                var_21 |= ((/* implicit */unsigned int) 5213967422141746526ULL);
            }
            var_22 -= ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)48447)) > (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [(unsigned char)21] [i_0 - 2] [(_Bool)1] [i_1 + 2])))))));
            var_23 = ((/* implicit */unsigned short) max((((/* implicit */int) min((arr_5 [i_0] [i_1 + 3]), ((unsigned short)48447)))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [(_Bool)1]))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_13))))));
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 2) 
        {
            var_24 ^= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0 + 2] [i_4 + 1]))) > (arr_6 [i_0 - 1] [i_4 + 2])));
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_11 [i_0 + 2] [i_0 - 2])) : (var_5)));
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_6 = 4; i_6 < 22; i_6 += 4) 
                {
                    var_26 = ((/* implicit */_Bool) ((unsigned short) (unsigned short)48478));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_7 = 3; i_7 < 23; i_7 += 1) 
                    {
                        arr_24 [i_0] [(_Bool)1] = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)(-127 - 1))) | (((/* implicit */int) (short)22453)))) - ((+(((/* implicit */int) (_Bool)1))))));
                        var_27 = ((/* implicit */short) (-((+(var_8)))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        var_28 *= ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) 4294967295U))));
                        var_29 |= ((/* implicit */short) var_5);
                        arr_27 [i_0] [i_0] [i_5] [i_6] [(_Bool)1] = arr_9 [i_8];
                        arr_28 [i_0] [i_4] [i_4] [i_4] [i_6 - 2] [i_0] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)221)) & (2059577059)));
                        var_30 *= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)48658))));
                    }
                    for (unsigned char i_9 = 1; i_9 < 22; i_9 += 3) 
                    {
                        var_31 = ((/* implicit */signed char) (((~(((/* implicit */int) arr_1 [7])))) == (((/* implicit */int) arr_7 [i_0] [i_0] [i_0 - 2] [i_0 + 1]))));
                        var_32 = ((/* implicit */int) (_Bool)1);
                        arr_32 [i_0] [i_0] [i_5] [i_0] [(_Bool)1] = ((/* implicit */long long int) (!(((_Bool) var_4))));
                        var_33 = ((/* implicit */unsigned short) arr_16 [i_4 + 1] [i_6 + 1] [i_0 - 2]);
                    }
                }
                for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 4) 
                {
                    var_34 = ((/* implicit */long long int) min((var_34), (((((/* implicit */_Bool) var_4)) ? ((+(-8555646421823741321LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_10] [i_10] [i_5] [i_10] [i_4 + 1])))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_11 = 1; i_11 < 23; i_11 += 2) 
                    {
                        var_35 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_22 [i_11 - 1] [i_10])) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_0] [i_4] [i_10] [i_0] [i_11]))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) var_11)) : (18446744073709551605ULL)))));
                        var_36 = ((/* implicit */long long int) ((unsigned long long int) ((unsigned int) (unsigned short)17088)));
                        var_37 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)48447)) ? (((/* implicit */int) (unsigned short)27804)) : (((/* implicit */int) (unsigned char)20))));
                    }
                    for (long long int i_12 = 0; i_12 < 24; i_12 += 1) /* same iter space */
                    {
                        var_38 = ((/* implicit */signed char) ((arr_4 [i_0] [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_4 + 1])))));
                        arr_44 [9LL] [i_0] [i_5] [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : ((~(var_3)))));
                    }
                    for (long long int i_13 = 0; i_13 < 24; i_13 += 1) /* same iter space */
                    {
                        var_39 &= ((/* implicit */long long int) arr_43 [i_0 + 1] [i_4] [i_4 + 2] [i_0 - 1] [i_13] [i_5]);
                        var_40 = ((/* implicit */unsigned char) arr_6 [i_0] [i_0]);
                        var_41 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17091))) : (var_0))));
                        var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0 + 2] [i_4] [i_5] [i_10])) ? (((unsigned int) arr_13 [i_0] [i_4 + 2] [i_5] [i_13])) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
                        var_43 &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) (short)-17156)) / (arr_0 [i_4 + 2])))) == (((((/* implicit */_Bool) var_0)) ? (3668538619305595059LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17105)))))));
                    }
                    var_44 = (!(arr_13 [i_0 - 1] [i_4] [i_4 + 2] [i_4 - 1]));
                }
                var_45 = ((/* implicit */long long int) ((unsigned long long int) arr_11 [i_0 + 2] [i_4 - 1]));
                var_46 ^= ((/* implicit */unsigned int) ((arr_13 [i_0] [i_4 + 2] [i_4 + 2] [i_5]) ? (((/* implicit */int) arr_13 [17ULL] [i_5] [i_5] [(signed char)4])) : (((/* implicit */int) arr_13 [i_0 + 1] [i_4 + 1] [i_5] [3LL]))));
                var_47 = ((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_4] [2] [i_5] [i_5] [i_5])) ? (((unsigned long long int) arr_2 [i_5] [i_5])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
                var_48 = ((/* implicit */unsigned int) ((unsigned long long int) (-9223372036854775807LL - 1LL)));
            }
            arr_47 [i_0] = ((/* implicit */int) arr_45 [i_0] [i_0] [i_0] [i_0] [i_4] [20ULL] [i_4]);
        }
        var_49 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)148)) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_0]))) : (arr_20 [i_0] [i_0 - 1] [15ULL] [15ULL])))) ? (((/* implicit */int) (short)-1)) : (((((/* implicit */_Bool) (signed char)-108)) ? (-225879275) : (((/* implicit */int) var_14))))))));
        var_50 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) (signed char)15)) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((_Bool) (unsigned char)107))))));
        var_51 = ((/* implicit */unsigned short) max((var_51), (((/* implicit */unsigned short) ((int) 978159597)))));
    }
    var_52 = ((/* implicit */int) -3668538619305595059LL);
    var_53 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 7085795386931031634ULL)) ? (((/* implicit */int) (unsigned short)17103)) : (-103779418)))) ? (((/* implicit */int) (unsigned short)17109)) : (((/* implicit */int) (unsigned short)65535)))) >> (((((((/* implicit */int) ((unsigned short) var_13))) ^ (-1))) + (22)))));
}
