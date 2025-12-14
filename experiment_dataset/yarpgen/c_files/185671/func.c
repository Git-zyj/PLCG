/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185671
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [(short)3] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (18446744073709551599ULL))));
        var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) % (((unsigned long long int) (_Bool)1))));
        var_21 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)59913)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)81))));
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) (~(((/* implicit */int) var_8)))));
        arr_8 [i_1] = ((/* implicit */short) var_19);
        /* LoopSeq 1 */
        for (long long int i_2 = 1; i_2 < 12; i_2 += 3) 
        {
            var_22 ^= ((/* implicit */signed char) max(((~(max((((/* implicit */unsigned long long int) var_18)), (258040790868813575ULL))))), (((8656448504579516964ULL) & ((~(18446744073709551615ULL)))))));
            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (unsigned short)65535))));
        }
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_24 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((_Bool)0), ((_Bool)1))))));
            var_25 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_16)) : (8656448504579516964ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)249)) <= (((/* implicit */int) (unsigned char)134))))))));
            /* LoopSeq 2 */
            for (short i_4 = 1; i_4 < 13; i_4 += 4) 
            {
                arr_16 [i_4] [i_4] = ((/* implicit */unsigned short) ((13217592370514758092ULL) >> (((((/* implicit */int) (unsigned char)3)) * (((/* implicit */int) (_Bool)0))))));
                arr_17 [i_4] [i_3] [i_4] = ((/* implicit */unsigned short) var_1);
                arr_18 [i_3] [i_3] [i_4] [i_4] = ((/* implicit */unsigned long long int) var_13);
            }
            for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                var_26 *= ((/* implicit */_Bool) min(((-(((/* implicit */int) ((unsigned short) (_Bool)1))))), (((/* implicit */int) (_Bool)1))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 1) 
                {
                    arr_24 [i_5] = ((/* implicit */unsigned long long int) var_2);
                    arr_25 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10407227738862252495ULL)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) ((var_0) && ((_Bool)1)))))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_27 = ((/* implicit */_Bool) var_16);
                    arr_28 [0U] [i_5] &= ((/* implicit */unsigned long long int) (_Bool)1);
                    var_28 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (unsigned short)12060)) == (((/* implicit */int) (unsigned char)0)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)53476)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)(-32767 - 1)))))) : (0U)));
                }
                for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 4) 
                {
                    arr_31 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (9790295569130034651ULL))))) ? (((/* implicit */int) max((var_19), ((unsigned short)0)))) : (((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) max((var_2), (((/* implicit */unsigned char) var_11))))))))));
                    arr_32 [i_5] [9ULL] [i_3] [i_5] [i_8] = ((/* implicit */_Bool) (~(((unsigned int) (unsigned char)130))));
                    var_29 = ((/* implicit */short) (+(9790295569130034652ULL)));
                    arr_33 [i_5] = ((/* implicit */_Bool) var_15);
                }
                for (unsigned long long int i_9 = 4; i_9 < 11; i_9 += 1) 
                {
                    arr_36 [i_5] = ((/* implicit */unsigned long long int) ((signed char) ((var_0) ? (13241040815534572241ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
                    /* LoopSeq 3 */
                    for (signed char i_10 = 1; i_10 < 13; i_10 += 1) 
                    {
                        arr_39 [i_5] [i_1] [i_3] [i_5] [(signed char)13] [i_10 + 1] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)53476)) : (((/* implicit */int) (short)18691))));
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (var_10)));
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3541960528U)) ? (((/* implicit */int) (short)-18691)) : (((/* implicit */int) (unsigned short)0))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) (_Bool)1))));
                        var_33 ^= ((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (_Bool)0))))), (min((((/* implicit */unsigned long long int) var_2)), (var_6)))))));
                        arr_44 [i_5] [(_Bool)1] [i_5] [i_9 + 1] [i_11] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_18)) ? (18446744073709551615ULL) : (2835158840703179000ULL))), (((((/* implicit */_Bool) var_8)) ? (7292411436462348702ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)46)))))))) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((/* implicit */int) (unsigned char)130))));
                        arr_45 [i_1] [i_1] [i_5] [i_1] [i_1] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3300))) : (((((/* implicit */_Bool) min(((unsigned short)65535), ((unsigned short)0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((unsigned long long int) (short)255))))));
                    }
                    for (short i_12 = 0; i_12 < 14; i_12 += 3) 
                    {
                        var_34 ^= ((/* implicit */unsigned char) (unsigned short)65534);
                        arr_48 [i_5] = ((/* implicit */long long int) max((min((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)53475)))), (((/* implicit */unsigned long long int) (+(var_9)))))), (((/* implicit */unsigned long long int) min((3221225472U), (((/* implicit */unsigned int) max((var_18), (((/* implicit */signed char) var_0))))))))));
                    }
                    arr_49 [i_1] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) (short)-2132))))) ? ((~(((/* implicit */int) max((var_7), (var_0)))))) : (((/* implicit */int) ((unsigned short) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65533))) : ((-9223372036854775807LL - 1LL))))))));
                    arr_50 [i_1] [i_1] [i_5] [11ULL] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (unsigned short)8221))))));
                    var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) ((var_1) >> (((/* implicit */int) (signed char)63)))))));
                }
                arr_51 [i_5] = ((/* implicit */unsigned char) (_Bool)1);
                arr_52 [i_1] [i_5] [i_5] = ((/* implicit */signed char) max(((unsigned char)220), (((/* implicit */unsigned char) (_Bool)1))));
                var_36 *= ((((/* implicit */unsigned long long int) ((long long int) 11555060127779490495ULL))) != (14822918840864523488ULL));
            }
            arr_53 [i_1] [i_1] = ((/* implicit */_Bool) (-(1322471025U)));
        }
    }
    var_37 &= ((/* implicit */unsigned int) var_5);
    var_38 += ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (~(13067517316965813570ULL))))) << (((max((((/* implicit */long long int) ((((/* implicit */_Bool) 17557826306048LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)63))))), (var_1))) - (3993771753545622126LL)))));
}
