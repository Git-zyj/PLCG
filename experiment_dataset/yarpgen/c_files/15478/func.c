/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15478
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
    var_20 += ((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)131)), (((((/* implicit */_Bool) var_18)) ? ((~(((/* implicit */int) (unsigned char)131)))) : (((/* implicit */int) ((var_3) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] [(short)10] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [(unsigned char)7] [i_0])) % (((((/* implicit */int) var_2)) ^ (((/* implicit */int) (short)-15160))))));
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)10537))));
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) arr_4 [i_0] [i_1]);
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) var_2);
        }
        for (int i_2 = 0; i_2 < 14; i_2 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_3 = 2; i_3 < 11; i_3 += 3) 
            {
                for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        {
                            arr_20 [i_0] [i_2] [i_3] [i_4] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-10538)) ? (((/* implicit */int) (short)-2354)) : (((/* implicit */int) (unsigned char)0))));
                            var_22 = ((/* implicit */unsigned int) (+(((((/* implicit */int) (unsigned char)142)) | (((/* implicit */int) (short)-32763))))));
                        }
                    } 
                } 
            } 
            arr_21 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) var_9);
        }
        for (int i_6 = 0; i_6 < 14; i_6 += 1) /* same iter space */
        {
            arr_25 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((8751735491414245786ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_6] [6ULL] [i_6] [1ULL] [i_0])))))) * (((/* implicit */int) arr_13 [i_6] [i_6] [i_0]))));
            /* LoopSeq 1 */
            for (short i_7 = 0; i_7 < 14; i_7 += 1) 
            {
                arr_30 [i_0] = ((((/* implicit */_Bool) var_0)) ? (4696064166944770304LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29261))));
                arr_31 [0U] [i_0] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-10538)) - (((/* implicit */int) (unsigned char)132))));
                var_23 *= ((/* implicit */unsigned char) var_6);
                arr_32 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)214))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)202)) > (((/* implicit */int) arr_8 [i_0]))))) : (((((/* implicit */int) (unsigned char)32)) >> (((((/* implicit */int) (short)31191)) - (31175)))))));
                arr_33 [11ULL] [i_6] [i_0] [i_6] = ((/* implicit */signed char) arr_9 [(short)1] [i_6]);
            }
        }
        var_24 = ((/* implicit */long long int) (~(arr_1 [(unsigned short)10])));
        arr_34 [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)202))))) ? (((/* implicit */unsigned long long int) ((2152054708U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)54)))))) : (((unsigned long long int) var_4)));
        /* LoopSeq 3 */
        for (short i_8 = 0; i_8 < 14; i_8 += 3) 
        {
            arr_37 [i_0] [i_0] [3U] = ((/* implicit */unsigned short) arr_0 [i_0] [i_8]);
            var_25 = ((/* implicit */signed char) (unsigned char)60);
        }
        for (signed char i_9 = 2; i_9 < 11; i_9 += 1) 
        {
            var_26 += ((/* implicit */short) var_11);
            arr_40 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_15)) != (((/* implicit */int) (unsigned short)20977))))) & (((/* implicit */int) ((arr_1 [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)129))))))));
            arr_41 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_39 [i_9 + 3] [i_0])) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (unsigned char)133))))) : (arr_18 [i_0] [i_9 + 2] [i_9 - 2] [i_0] [i_9 + 2])));
            arr_42 [i_0] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_9 + 1] [i_9 + 3])) ? (arr_26 [i_0] [i_9 + 1] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
        }
        for (unsigned short i_10 = 3; i_10 < 12; i_10 += 1) 
        {
            arr_45 [(short)6] [i_10] [(_Bool)1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [5ULL])) ? (var_0) : (((/* implicit */unsigned long long int) -8027286106584244509LL))));
            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) 8027286106584244512LL))));
        }
    }
    for (signed char i_11 = 1; i_11 < 19; i_11 += 3) 
    {
        var_28 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) arr_46 [i_11 + 3] [i_11 + 4])))), ((-(((/* implicit */int) arr_46 [i_11 + 3] [i_11 + 1]))))));
        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((((unsigned int) var_9)) << (((((/* implicit */int) (unsigned char)61)) - (32))))))));
        arr_48 [i_11 + 1] = ((/* implicit */short) ((max((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) % (arr_47 [i_11]))), (arr_47 [i_11 + 1]))) * ((((_Bool)0) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (-2147483638)))) : (2441470244U)))));
    }
    for (unsigned int i_12 = 2; i_12 < 11; i_12 += 1) 
    {
        arr_52 [i_12] = ((/* implicit */unsigned short) ((var_15) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) : ((~(((int) arr_10 [i_12] [i_12] [i_12] [i_12]))))));
        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((unsigned short) (unsigned char)142)))));
    }
    var_31 = ((/* implicit */unsigned short) (unsigned char)146);
    /* LoopNest 2 */
    for (signed char i_13 = 3; i_13 < 11; i_13 += 1) 
    {
        for (long long int i_14 = 0; i_14 < 12; i_14 += 1) 
        {
            {
                var_32 -= ((/* implicit */signed char) ((((/* implicit */int) ((short) (signed char)-84))) < (2147483637)));
                var_33 = ((/* implicit */_Bool) (~(((4294950912ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)223)))))));
                arr_59 [i_13] = ((/* implicit */unsigned long long int) -1236774562);
                var_34 |= ((unsigned long long int) arr_18 [(unsigned short)12] [i_13] [7] [i_13] [i_13]);
                arr_60 [i_13] [i_13] = ((/* implicit */int) (((~(arr_27 [i_13 - 3] [i_13 + 1] [i_13 - 3]))) > (min((((/* implicit */long long int) (!(((/* implicit */_Bool) 4188026830085510108ULL))))), ((+(var_16)))))));
            }
        } 
    } 
}
