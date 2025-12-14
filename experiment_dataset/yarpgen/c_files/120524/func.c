/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120524
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
    var_12 = ((((/* implicit */int) var_4)) < (((/* implicit */int) var_9)));
    var_13 += ((/* implicit */short) ((unsigned int) -1578793323));
    var_14 = ((/* implicit */long long int) max((((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) * (((/* implicit */int) ((_Bool) var_0))))), (max((((/* implicit */int) var_7)), (((((/* implicit */_Bool) var_4)) ? (1962769424) : (((/* implicit */int) var_3))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_15 = ((/* implicit */unsigned short) max((arr_1 [i_0] [i_1]), (((/* implicit */unsigned long long int) max((arr_3 [i_0] [i_0 + 1] [i_0 + 1]), (((/* implicit */unsigned int) (unsigned short)20294)))))));
            var_16 = min((((/* implicit */unsigned char) arr_4 [i_1] [i_0])), (min((var_3), (((/* implicit */unsigned char) arr_4 [i_0 + 2] [i_0 + 2])))));
            var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-117))));
            var_18 = ((/* implicit */long long int) (_Bool)1);
        }
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-59)))))));
        var_20 |= ((/* implicit */unsigned int) ((short) (~(min((((/* implicit */unsigned long long int) var_11)), (arr_1 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        var_21 = ((/* implicit */long long int) (_Bool)1);
        var_22 = ((/* implicit */short) (-(arr_5 [i_2])));
        var_23 = ((/* implicit */int) ((short) arr_6 [i_2]));
        /* LoopSeq 4 */
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned short) arr_0 [i_3] [i_2]);
            arr_10 [i_3] [i_3] [i_3] |= ((/* implicit */_Bool) ((int) (_Bool)1));
            arr_11 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (_Bool)1);
            var_25 = ((/* implicit */unsigned short) arr_2 [i_2] [i_2] [i_3]);
        }
        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
        {
            arr_14 [i_2] [i_2] = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_4] [i_4]))))) != ((~(((/* implicit */int) var_7)))));
            /* LoopSeq 1 */
            for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                var_26 *= ((/* implicit */_Bool) var_3);
                var_27 = ((/* implicit */unsigned short) arr_0 [i_2] [i_4]);
                var_28 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_2 [i_2] [i_4] [i_5])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) arr_2 [i_2] [i_2] [i_2]))));
            }
            var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18))) : (arr_8 [i_2] [i_4]))))));
        }
        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                /* LoopSeq 1 */
                for (int i_8 = 1; i_8 < 9; i_8 += 3) 
                {
                    var_31 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_22 [i_2] [i_6] [i_7] [i_6] [i_8 + 1]))));
                    var_32 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_7])) ? (var_2) : (((/* implicit */long long int) 966330307U))));
                    var_33 = (+(((/* implicit */int) arr_9 [i_7] [i_8 + 2])));
                    var_34 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) var_4))));
                    var_35 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8 + 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ (arr_8 [i_2] [i_7])))) : (12521230298871287830ULL)));
                }
                /* LoopSeq 3 */
                for (signed char i_9 = 2; i_9 < 10; i_9 += 2) 
                {
                    arr_28 [i_2] [i_2] [i_7] [i_7] [i_9] = ((/* implicit */int) arr_16 [i_9 - 2] [i_2] [i_9 - 2] [i_9 - 1]);
                    var_36 += ((/* implicit */signed char) (~(((/* implicit */int) var_4))));
                    var_37 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_9 - 1]))));
                }
                for (unsigned int i_10 = 0; i_10 < 11; i_10 += 3) 
                {
                    arr_32 [i_6] [i_2] = (~(arr_5 [i_6]));
                    var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) var_7))));
                    var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) arr_4 [i_2] [i_7]))));
                    var_40 = ((/* implicit */_Bool) ((((/* implicit */int) var_3)) - (((/* implicit */int) (_Bool)1))));
                    var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) ((_Bool) (_Bool)1)))));
                }
                for (signed char i_11 = 2; i_11 < 10; i_11 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_12 = 0; i_12 < 11; i_12 += 2) 
                    {
                        var_42 = ((/* implicit */short) (unsigned char)168);
                        var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) (+(arr_27 [i_2] [i_7]))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_13 = 1; i_13 < 10; i_13 += 4) 
                    {
                        arr_41 [i_2] [i_13] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(arr_24 [i_6] [i_6] [i_7] [i_13]))))));
                        arr_42 [i_2] [i_7] [i_11] = ((/* implicit */_Bool) (+(((/* implicit */int) ((short) 2081200438U)))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_14 = 0; i_14 < 11; i_14 += 4) 
                    {
                        var_44 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_36 [i_11 + 1] [i_11 + 1] [i_2] [i_2] [i_11 - 1] [i_11 - 2]))));
                        var_45 = ((/* implicit */int) ((unsigned int) (unsigned short)18));
                    }
                }
                var_46 = -1LL;
            }
            arr_46 [i_2] = ((/* implicit */unsigned long long int) var_0);
        }
        for (unsigned int i_15 = 0; i_15 < 11; i_15 += 4) /* same iter space */
        {
            var_47 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_21 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (short)16577))) : (var_2))));
            arr_50 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((-307717431) ^ (((/* implicit */int) arr_13 [i_15] [i_2])))) : (((/* implicit */int) (signed char)3))));
        }
        var_48 = ((/* implicit */_Bool) (~(((unsigned int) (short)-3544))));
    }
    /* LoopSeq 2 */
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
    {
        arr_53 [i_16] = min((((/* implicit */unsigned short) (signed char)7)), ((unsigned short)1));
        var_49 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_11)), (arr_36 [i_16] [i_16] [i_16] [(signed char)10] [i_16] [i_16])))) ? ((+(arr_18 [i_16]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 120U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_16]))) : (4294967145U)))))));
        /* LoopSeq 1 */
        for (short i_17 = 0; i_17 < 10; i_17 += 2) 
        {
            var_50 = ((/* implicit */_Bool) arr_19 [i_16]);
            var_51 = ((/* implicit */unsigned int) arr_39 [i_17] [i_17] [i_17] [i_17] [i_17] [i_16]);
        }
    }
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_19 = 0; i_19 < 10; i_19 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                arr_64 [i_18] [i_18] [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_15 [i_18] [i_19])), (var_3)))) && (((/* implicit */_Bool) ((long long int) max((arr_62 [i_18] [i_18] [i_19] [i_20]), (((/* implicit */unsigned short) (_Bool)1))))))));
                var_52 = ((/* implicit */unsigned short) max((var_52), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_52 [i_18])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_52 [i_18]))))) : ((~(var_8))))))));
                var_53 ^= ((/* implicit */_Bool) (signed char)-1);
                arr_65 [i_18] [i_18] [i_19] [i_20] = ((/* implicit */unsigned int) (unsigned short)65518);
            }
            /* vectorizable */
            for (signed char i_21 = 3; i_21 < 8; i_21 += 3) 
            {
                arr_68 [i_18] [i_19] [i_21] [i_21] = (!(((/* implicit */_Bool) (~(-1971036698261843015LL)))));
                var_54 = ((/* implicit */signed char) (unsigned short)43746);
                arr_69 [i_18] [i_19] [i_21] [i_21] = ((/* implicit */signed char) (-(arr_24 [i_18] [i_19] [i_21] [i_21 + 1])));
                var_55 = ((/* implicit */unsigned char) max((var_55), (((/* implicit */unsigned char) (_Bool)1))));
            }
            var_56 ^= ((/* implicit */signed char) (!((((~(arr_17 [i_19] [i_19]))) >= (((/* implicit */long long int) (+(((/* implicit */int) var_1)))))))));
            arr_70 [i_19] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_44 [i_18] [i_19]), (arr_44 [i_18] [i_19]))))));
            arr_71 [i_18] [i_19] = ((/* implicit */_Bool) max((((int) (-(((/* implicit */int) (unsigned char)155))))), (((((/* implicit */int) max((((/* implicit */unsigned short) (short)10851)), (var_7)))) - (((/* implicit */int) (unsigned char)199))))));
        }
        arr_72 [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (~(((/* implicit */int) arr_0 [i_18] [i_18])))))) ? (min(((-(((/* implicit */int) (unsigned short)28198)))), (((/* implicit */int) arr_44 [(short)8] [(short)8])))) : (((/* implicit */int) (signed char)69))));
        arr_73 [i_18] [i_18] = ((/* implicit */signed char) var_11);
    }
}
