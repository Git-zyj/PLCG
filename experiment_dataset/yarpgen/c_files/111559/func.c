/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111559
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
    var_11 = max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2048))) - (14411683525865595385ULL))), (((/* implicit */unsigned long long int) (short)23356)));
    var_12 += ((/* implicit */unsigned char) var_7);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (short)2048);
        var_13 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_1 [i_0 + 1])) << (((((/* implicit */int) var_5)) - (4700))))) == (((/* implicit */int) ((short) var_10)))));
    }
    for (int i_1 = 1; i_1 < 22; i_1 += 4) 
    {
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) var_2))));
        var_15 -= ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-23806)) : (((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */int) var_5))))) ? (((((/* implicit */int) var_5)) + (-398512930))) : (max((((/* implicit */int) var_2)), (var_6))))) : (((/* implicit */int) ((_Bool) ((var_0) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3)))))));
    }
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) /* same iter space */
    {
        var_16 *= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) max(((short)23806), (((/* implicit */short) var_0))))) > (((/* implicit */int) ((var_6) > (((/* implicit */int) var_10)))))))), (max((((/* implicit */unsigned int) arr_8 [i_2] [i_2])), (((var_8) % (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 2) 
        {
            var_17 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 398512929)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23448))) : (1951184156506660ULL)))) ? (((/* implicit */int) max(((short)23727), (((/* implicit */short) var_2))))) : (((/* implicit */int) var_9))))));
            var_18 = ((/* implicit */int) ((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))))) != (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-23800)) < (((/* implicit */int) var_0)))))) * (min((var_8), (((/* implicit */unsigned int) var_2))))))));
            arr_13 [9U] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */int) ((short) min((arr_10 [i_2] [i_2]), (((/* implicit */int) (short)(-32767 - 1))))))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) 10537331844312932532ULL)))))));
            var_19 = ((/* implicit */unsigned int) ((min((arr_10 [i_3 - 1] [i_3 + 1]), (var_6))) / ((~(((/* implicit */int) (short)(-32767 - 1)))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
        {
            var_20 = min((((/* implicit */int) min(((short)32767), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) != (arr_15 [i_2]))))))), ((+(((/* implicit */int) arr_7 [i_2])))));
            arr_18 [i_2] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_10), (((/* implicit */short) var_0))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */int) arr_7 [i_4])) : (((/* implicit */int) var_9))))))) ? (((((arr_6 [i_2]) != (((/* implicit */unsigned long long int) var_8)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_17 [i_2] [i_4]))))))) : (max((((/* implicit */int) var_3)), (min((var_7), (var_1)))))));
            arr_19 [i_4] [i_2] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_0)), (var_4))))) * (((((/* implicit */unsigned int) ((/* implicit */int) (short)-2448))) * (0U)))))), (min((((unsigned long long int) 8U)), (((/* implicit */unsigned long long int) var_9))))));
            arr_20 [i_2] [i_2] [(short)4] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) (_Bool)1)))));
            var_21 = ((/* implicit */unsigned char) (-(max((var_6), (((/* implicit */int) var_4))))));
        }
        for (unsigned long long int i_5 = 3; i_5 < 12; i_5 += 4) 
        {
            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) ((var_8) == (((/* implicit */unsigned int) var_1)))))))) ? (((((/* implicit */_Bool) min((((/* implicit */int) (short)23806)), (var_7)))) ? (((/* implicit */int) var_10)) : (min((((/* implicit */int) var_5)), (var_6))))) : (max((arr_8 [i_5 + 1] [i_5 - 2]), (((/* implicit */int) var_9)))))))));
            var_23 = ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) / (arr_6 [i_5 + 2]))), (arr_6 [i_2])));
            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((unsigned short) ((short) var_7))))));
        }
        /* vectorizable */
        for (short i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            var_25 = ((((/* implicit */_Bool) arr_24 [i_2] [i_6])) ? (((/* implicit */int) var_4)) : (var_6));
            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_9)))))));
            /* LoopSeq 4 */
            for (unsigned char i_7 = 0; i_7 < 14; i_7 += 2) /* same iter space */
            {
                var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) var_0)) : ((~(((/* implicit */int) var_9)))))))));
                arr_29 [i_2] [i_6] [i_6] &= ((int) ((((/* implicit */_Bool) 4119457173603415860ULL)) ? (((/* implicit */int) (unsigned short)14)) : (((/* implicit */int) var_5))));
                arr_30 [i_7] [i_6] [i_2] [i_2] = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_17 [(short)0] [i_6])) : (((/* implicit */int) var_2)));
                arr_31 [i_7] [i_6] &= ((/* implicit */_Bool) ((short) ((var_6) ^ (var_1))));
                var_28 = ((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */int) ((unsigned char) arr_6 [i_6]))) : ((+(((/* implicit */int) var_3)))));
            }
            for (unsigned char i_8 = 0; i_8 < 14; i_8 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                for (int i_9 = 0; i_9 < 14; i_9 += 1) 
                {
                    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) 10694815114303204335ULL)) ? (((/* implicit */unsigned int) var_7)) : (arr_23 [i_2] [i_8])));
                    var_30 = ((/* implicit */short) var_1);
                    var_31 = var_10;
                }
                for (unsigned short i_10 = 0; i_10 < 14; i_10 += 4) 
                {
                    var_32 = ((short) var_8);
                    /* LoopSeq 3 */
                    for (short i_11 = 1; i_11 < 11; i_11 += 3) 
                    {
                        var_33 = ((/* implicit */short) ((arr_33 [i_11 + 2] [i_8] [i_8] [i_6]) > (((/* implicit */int) var_9))));
                        var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) ((arr_14 [i_2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32730))))))));
                    }
                    for (unsigned int i_12 = 1; i_12 < 13; i_12 += 3) 
                    {
                        arr_44 [i_2] [i_6] [i_8] [i_10] [i_2] = ((/* implicit */_Bool) var_7);
                        arr_45 [i_2] [i_6] [i_6] [i_6] [i_12] = (+(((/* implicit */int) (short)-11394)));
                    }
                    for (int i_13 = 1; i_13 < 12; i_13 += 1) 
                    {
                        var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) ((((/* implicit */int) arr_21 [i_2] [i_2])) ^ (var_7))))));
                        var_36 = ((/* implicit */short) ((arr_34 [i_6] [i_6]) != (var_8)));
                        var_37 *= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_2] [i_6] [i_6] [i_2]))) < (var_8)));
                        arr_49 [i_2] [i_6] [i_8] [(unsigned short)9] [i_13 + 2] = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) * (((/* implicit */int) ((((/* implicit */int) (short)23807)) <= (((/* implicit */int) (short)13157)))))));
                    }
                    var_38 ^= ((/* implicit */long long int) ((arr_46 [i_2] [(_Bool)0] [i_8] [i_2] [i_10] [i_10]) ? (((/* implicit */int) (short)19495)) : (var_1)));
                }
                var_39 = ((/* implicit */short) ((var_7) + (((/* implicit */int) arr_27 [i_2] [i_6] [i_6] [i_8]))));
            }
            for (short i_14 = 0; i_14 < 14; i_14 += 3) /* same iter space */
            {
                arr_52 [i_2] [i_2] [i_6] [i_14] = ((/* implicit */unsigned char) var_1);
                var_40 = ((/* implicit */unsigned long long int) ((439742306400925073LL) + (((/* implicit */long long int) ((/* implicit */int) (short)-23807)))));
                arr_53 [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((var_6) - (((/* implicit */int) var_4))));
            }
            for (short i_15 = 0; i_15 < 14; i_15 += 3) /* same iter space */
            {
                arr_57 [i_15] = ((/* implicit */unsigned char) (~((-(8191)))));
                arr_58 [i_2] [i_2] [i_2] [i_15] = ((/* implicit */unsigned long long int) ((var_7) != (((/* implicit */int) arr_22 [i_2]))));
                var_41 *= ((/* implicit */unsigned int) var_0);
                arr_59 [i_15] = ((/* implicit */long long int) ((short) 13585058874471456366ULL));
                /* LoopSeq 1 */
                for (short i_16 = 0; i_16 < 14; i_16 += 4) 
                {
                    var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) (((+(var_7))) | (((/* implicit */int) var_9)))))));
                    arr_62 [i_6] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (var_6)));
                }
            }
            arr_63 [i_2] [i_2] [i_2] = ((short) var_1);
        }
        var_43 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((short) ((var_0) ? (((/* implicit */unsigned long long int) var_8)) : (137438953471ULL)))))) & (((((/* implicit */long long int) ((/* implicit */int) var_3))) | (arr_11 [i_2] [i_2] [i_2])))));
    }
    for (unsigned int i_17 = 0; i_17 < 14; i_17 += 2) /* same iter space */
    {
        arr_66 [i_17] [i_17] = ((/* implicit */short) arr_4 [i_17]);
        var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (short)-15004)))))))));
    }
}
