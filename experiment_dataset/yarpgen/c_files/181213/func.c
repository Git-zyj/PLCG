/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181213
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
    var_18 = ((/* implicit */int) ((unsigned int) var_13));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (unsigned char)89);
        arr_3 [i_0] = ((/* implicit */int) ((var_10) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) max((var_17), (((/* implicit */int) arr_1 [i_0])))))))));
    }
    for (long long int i_1 = 2; i_1 < 17; i_1 += 3) 
    {
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_12))));
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) 4611686018427387904LL);
        arr_9 [i_1] = arr_7 [i_1];
    }
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned char) -4611686018427387905LL);
        var_20 = ((/* implicit */long long int) -311970389);
        arr_13 [i_2] = ((/* implicit */long long int) ((signed char) ((min((arr_10 [i_2]), (((/* implicit */unsigned int) (short)16380)))) + (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)27243))))))));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        arr_16 [i_3] = ((/* implicit */unsigned char) ((((4611686018427387904LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) 311970389)) ? (((/* implicit */unsigned int) -1244600041)) : (arr_14 [i_3]))))));
        /* LoopSeq 1 */
        for (unsigned char i_4 = 1; i_4 < 22; i_4 += 3) 
        {
            var_21 = ((/* implicit */unsigned long long int) ((_Bool) ((1080074048) + (((/* implicit */int) var_14)))));
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                var_22 = ((/* implicit */unsigned int) ((((unsigned long long int) arr_18 [i_4])) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1179547539)) || (var_8)))))));
                /* LoopSeq 2 */
                for (unsigned int i_6 = 2; i_6 < 24; i_6 += 3) 
                {
                    arr_24 [i_4 - 1] [i_4 + 3] [i_4] [i_4 + 2] = ((((/* implicit */_Bool) (-(-387848717779992191LL)))) ? (((/* implicit */int) ((-567742532) > (((/* implicit */int) (_Bool)1))))) : ((+(((/* implicit */int) (short)7236)))));
                    /* LoopSeq 3 */
                    for (long long int i_7 = 0; i_7 < 25; i_7 += 3) 
                    {
                        var_23 ^= ((/* implicit */unsigned short) arr_19 [(short)0] [i_5]);
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (signed char)-72))) ? ((((_Bool)1) ? (arr_14 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_3] [i_6] [i_5] [i_6 - 1] [i_3]))) >= (2376667610929781366LL))))))))));
                        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_19 [i_5] [i_5]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 5)) ? (5) : (((/* implicit */int) var_8))))))))));
                    }
                    for (long long int i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        arr_31 [i_3] [i_4] [i_5] [i_4] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_30 [i_4])) : (-1588123472)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -2125901443))))) : (((/* implicit */int) ((signed char) 2081570501)))));
                        var_26 = ((/* implicit */unsigned char) 2192531418016605527LL);
                        var_27 = ((/* implicit */int) ((unsigned short) ((_Bool) var_6)));
                    }
                    for (signed char i_9 = 3; i_9 < 22; i_9 += 3) 
                    {
                        arr_36 [i_3] [i_4] [(signed char)23] [(_Bool)1] [i_4] = ((/* implicit */unsigned short) var_3);
                        arr_37 [i_3] [i_3] [i_4] [i_6 + 1] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -371519824)) ? (387848717779992190LL) : (((/* implicit */long long int) 311970384))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned char)154)))) : ((+(2376667610929781352LL)))));
                        var_28 = (-(((((/* implicit */_Bool) arr_34 [24] [24] [i_4] [6U] [i_5] [i_4 + 1])) ? (2147483647) : (((/* implicit */int) arr_25 [i_3] [i_4] [i_5] [i_6] [i_9 - 2])))));
                    }
                    var_29 = 4611686018427387904LL;
                    arr_38 [i_3] [i_3] [i_4] [i_5] [i_3] = ((/* implicit */unsigned short) (_Bool)1);
                    var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 1769089141)) ? (((/* implicit */unsigned int) ((int) arr_19 [i_3] [i_5]))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)126))) - (3569810463U))))))));
                }
                for (signed char i_10 = 0; i_10 < 25; i_10 += 3) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_11 = 2; i_11 < 24; i_11 += 3) 
                    {
                        var_31 -= var_14;
                        arr_45 [i_11 + 1] [i_10] [i_4] [i_3] [i_4] [(unsigned short)11] [i_3] = ((/* implicit */unsigned short) 4611686018427387916LL);
                        arr_46 [i_3] [i_4] [i_5] [i_4] [i_4] [i_11] [i_4] = ((/* implicit */long long int) (~(((int) arr_42 [i_4]))));
                    }
                    for (int i_12 = 0; i_12 < 25; i_12 += 4) 
                    {
                        var_32 = ((/* implicit */unsigned short) ((signed char) 3095729347U));
                        var_33 = ((/* implicit */int) min((var_33), (arr_26 [i_10] [i_10] [i_5] [i_10])));
                        var_34 = ((/* implicit */int) arr_30 [i_4]);
                        var_35 = ((((/* implicit */int) (!(((/* implicit */_Bool) 2022222237))))) << (((((((/* implicit */_Bool) (signed char)3)) ? (var_3) : (var_3))) - (1649877730730273894LL))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_36 ^= ((/* implicit */unsigned long long int) var_9);
                        var_37 -= ((/* implicit */short) ((5169806238870060772ULL) + (1282956952869557909ULL)));
                    }
                    for (short i_14 = 2; i_14 < 22; i_14 += 3) 
                    {
                        arr_54 [i_3] [i_3] [i_3] [i_3] [i_4] [i_4] [i_3] = 0;
                        arr_55 [(signed char)15] [i_5] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */unsigned int) arr_19 [i_4] [i_4])) % (var_7)))) == (((-770262732277626540LL) % (((/* implicit */long long int) -2022222238))))));
                        var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_4] [i_4] [13LL] [i_4])) << (((var_13) - (16453513186468323664ULL)))))) || (((/* implicit */_Bool) var_4))));
                    }
                    var_39 = ((/* implicit */signed char) 65011712U);
                    var_40 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_44 [i_10] [i_10] [i_4] [i_4] [i_4] [i_3])) ? (arr_19 [i_3] [i_4]) : (((/* implicit */int) arr_15 [i_10])))) % (((/* implicit */int) ((signed char) (unsigned short)21680)))));
                    arr_56 [i_3] [i_4] [i_5] [i_3] [i_5] [i_4] = ((/* implicit */unsigned long long int) ((2751806872896153771LL) / (((((/* implicit */_Bool) 7172211694598739005ULL)) ? (arr_47 [i_3] [i_4] [i_4] [i_10] [(short)9]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)15)))))));
                }
                var_41 = ((/* implicit */short) 1U);
                var_42 = ((/* implicit */long long int) (_Bool)1);
            }
            var_43 += ((/* implicit */signed char) ((short) (!(((/* implicit */_Bool) arr_53 [i_4 - 1] [22U] [i_3] [22U] [i_3])))));
            arr_57 [i_4] [(short)18] [(short)18] = ((/* implicit */signed char) (~(11039864730485325921ULL)));
        }
    }
}
