/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160157
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
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_12))))) ? (((var_4) / (((/* implicit */long long int) 2061883545)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (-2061883546) : (((/* implicit */int) var_0)))))))) ? (((((/* implicit */_Bool) ((signed char) var_16))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_11), (var_6))))) : (((((/* implicit */_Bool) -2061883518)) ? (-3419865501476662361LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)63))))))) : (((/* implicit */long long int) (((+(((/* implicit */int) var_16)))) * (((/* implicit */int) ((unsigned short) (unsigned char)255))))))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)59)) ? (2265958367U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65523))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)193)) - (((/* implicit */int) var_18)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((unsigned int) var_2)) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)65523)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                arr_5 [i_0] = (~(max((max((((/* implicit */int) (unsigned char)1)), ((-2147483647 - 1)))), ((-(((/* implicit */int) (unsigned char)248)))))));
                arr_6 [0LL] = ((/* implicit */signed char) (unsigned char)65);
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) var_3);
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_2 = 2; i_2 < 23; i_2 += 2) /* same iter space */
    {
        arr_10 [i_2 - 1] = ((/* implicit */signed char) ((((((/* implicit */int) arr_1 [i_2 + 1] [i_2 + 1])) + (2147483647))) << (((((((/* implicit */int) arr_1 [i_2 + 1] [i_2 - 1])) + (10553))) - (15)))));
        arr_11 [i_2] = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) arr_8 [i_2])) + (2147483647))) >> (((((/* implicit */int) var_0)) + (28))))) != (((/* implicit */int) arr_4 [i_2 - 1] [i_2]))));
        /* LoopSeq 3 */
        for (short i_3 = 1; i_3 < 21; i_3 += 4) 
        {
            arr_15 [21U] [i_3 + 2] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)104)) / (-2061883557)));
            arr_16 [21U] [i_2 - 2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_2 + 1] [i_3 - 1])) + ((+(((/* implicit */int) (unsigned char)186))))));
        }
        for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            arr_19 [i_2] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)50)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_12 [i_2 - 2] [i_2 - 2] [i_2 - 2]))))) : (((/* implicit */int) var_13))));
            arr_20 [i_2] [i_2 - 1] [i_4] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) var_1)) != (((/* implicit */int) (unsigned char)161)))));
            arr_21 [i_2 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)41)) ? (8990430422173459174ULL) : (((/* implicit */unsigned long long int) var_5))))) ? (((((/* implicit */int) (unsigned char)240)) | (((/* implicit */int) var_18)))) : (((((/* implicit */_Bool) 2478603100644859115LL)) ? (((/* implicit */int) arr_4 [(unsigned short)24] [(unsigned short)24])) : (((/* implicit */int) (short)-2454))))));
            arr_22 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) 7U))) >> (((((((/* implicit */_Bool) arr_17 [i_2] [i_4])) ? (-1799150177356949410LL) : (9223372036854775783LL))) + (1799150177356949414LL)))));
        }
        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            arr_26 [i_2] [i_5] [i_2 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)32768)) ? ((-(var_4))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2 - 1] [i_2 - 2] [i_2 - 1])))));
            /* LoopSeq 3 */
            for (signed char i_6 = 0; i_6 < 24; i_6 += 4) 
            {
                arr_31 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_2 - 1] [i_6])) / ((~(411844991)))));
                arr_32 [i_2] [i_5] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)123)) >> (((((/* implicit */int) (short)-2474)) + (2499)))))) ? (((((/* implicit */_Bool) arr_18 [(signed char)10] [(short)13] [3LL])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) ((unsigned char) (unsigned short)18797)))));
            }
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                arr_35 [i_5] [i_5] [(signed char)19] [i_2 + 1] = ((long long int) (~(((/* implicit */int) (unsigned char)27))));
                arr_36 [i_2] [i_5] [i_5] = ((/* implicit */unsigned short) ((arr_13 [i_2 - 1] [i_2 - 2] [(short)4]) ? (((((/* implicit */int) (unsigned char)212)) | (((/* implicit */int) var_7)))) : (((/* implicit */int) var_18))));
                arr_37 [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [i_2 - 2] [i_5] [i_2 - 2])) ? (3188793234U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-119))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_8))))));
                arr_38 [i_5] = ((/* implicit */unsigned short) (short)6813);
            }
            for (short i_8 = 1; i_8 < 23; i_8 += 3) 
            {
                arr_43 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_2] [i_8 - 1] [i_2 + 1])) ? (-2061883558) : (arr_12 [i_2] [i_8 + 1] [i_2 - 2])));
                arr_44 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((9456313651536092445ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) && (((/* implicit */_Bool) (unsigned short)65535))));
                arr_45 [i_5] [i_5] [i_8 - 1] [i_5] = ((/* implicit */int) ((arr_40 [i_2 - 1] [i_8 + 1] [i_8 - 1] [i_5]) * (arr_14 [i_2] [i_5] [i_5])));
                arr_46 [i_5] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_2] [i_2 + 1])) ? (1106174056U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (((/* implicit */int) var_7))));
                arr_47 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (unsigned short)32))) ? (arr_34 [i_2 - 1] [i_5] [i_8 + 1]) : ((+(((/* implicit */int) (unsigned char)21))))));
            }
            /* LoopNest 2 */
            for (unsigned short i_9 = 0; i_9 < 24; i_9 += 4) 
            {
                for (unsigned char i_10 = 0; i_10 < 24; i_10 += 2) 
                {
                    {
                        arr_55 [i_5] [i_5] [i_5] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_52 [i_2 - 1] [i_2] [i_2 - 1])))))));
                        arr_56 [i_2 + 1] [i_2 + 1] [(signed char)21] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_2 + 1])) ? (2469854022U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)2467)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -7797306825940693220LL)) ? (((/* implicit */int) (signed char)-1)) : (-861833773))))));
                        arr_57 [i_5] [i_9] [i_2] [i_5] = ((((/* implicit */_Bool) 6810461153027219206LL)) ? (((/* implicit */int) (short)10923)) : (((/* implicit */int) var_6)));
                    }
                } 
            } 
        }
        arr_58 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */int) (short)24589)) : (((/* implicit */int) (signed char)-6))))) && (((((/* implicit */int) var_11)) >= (((/* implicit */int) (signed char)-21))))));
        arr_59 [i_2] [i_2] = ((/* implicit */int) ((signed char) ((((/* implicit */int) arr_8 [i_2])) - (((/* implicit */int) var_7)))));
    }
    for (signed char i_11 = 2; i_11 < 23; i_11 += 2) /* same iter space */
    {
        arr_63 [(unsigned short)20] = arr_23 [i_11 - 2] [i_11] [i_11];
        /* LoopNest 2 */
        for (long long int i_12 = 3; i_12 < 23; i_12 += 3) 
        {
            for (unsigned short i_13 = 0; i_13 < 24; i_13 += 3) 
            {
                {
                    arr_70 [i_11] [i_12 - 1] [i_13] [i_13] = ((/* implicit */_Bool) max(((-(arr_33 [i_13]))), (((/* implicit */int) ((((/* implicit */int) ((unsigned char) 18446744073709551615ULL))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_66 [i_11] [i_11]))))))))));
                    arr_71 [i_11 - 1] [i_11 - 1] [i_12 - 2] [i_13] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) var_12)) / (((/* implicit */int) arr_41 [i_12 - 3] [i_12 - 3] [i_13])))));
                }
            } 
        } 
        arr_72 [i_11 - 2] = ((/* implicit */signed char) ((long long int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)2463)) : (((/* implicit */int) var_12)))) >> (((((/* implicit */int) max((((/* implicit */short) (unsigned char)35)), (var_11)))) - (16))))));
        arr_73 [i_11] [i_11] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned int) ((/* implicit */int) (short)-5391))) | (24858115U))), (((/* implicit */unsigned int) ((unsigned short) arr_67 [(short)17])))));
    }
}
