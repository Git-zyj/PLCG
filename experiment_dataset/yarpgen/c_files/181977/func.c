/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181977
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_2 [i_0] [i_0])))))) / (((((/* implicit */_Bool) min(((short)-15638), ((short)8064)))) ? (((((/* implicit */_Bool) 1940208997)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))))) : (arr_0 [i_0] [i_0])))));
        var_15 = ((/* implicit */long long int) ((unsigned short) ((arr_0 [i_0] [i_0]) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)17))))))));
        var_16 ^= ((/* implicit */unsigned long long int) arr_1 [i_0]);
    }
    for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */long long int) min((((unsigned long long int) arr_1 [i_1])), (min((min((0ULL), (11545059856437733389ULL))), (max((arr_6 [i_1] [i_1] [i_2]), (((/* implicit */unsigned long long int) (unsigned short)4596))))))));
            var_18 = (+(max((((/* implicit */unsigned long long int) arr_3 [i_1])), (arr_6 [i_1] [i_1] [i_2]))));
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_19 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_1] [i_2]))));
                arr_10 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((int) arr_3 [i_1])))));
            }
            for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) arr_8 [i_1]))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_5 = 2; i_5 < 14; i_5 += 4) 
                {
                    var_21 = ((/* implicit */unsigned char) arr_14 [i_5 + 1] [i_5 + 2] [i_5 - 2] [i_5 + 1]);
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 1; i_6 < 15; i_6 += 4) 
                    {
                        arr_19 [i_6] = ((/* implicit */long long int) ((unsigned long long int) arr_4 [i_5 + 2] [i_5 + 1]));
                        arr_20 [i_1] [i_2] [i_4] [i_6] [i_6 - 1] [i_6 - 1] [i_6 + 1] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60933))) + (5553898821524059890ULL))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        var_22 = 6901684217271818233ULL;
                        arr_23 [i_2] [i_1] [i_1] [i_5 + 2] [i_5 - 1] [i_2] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_17 [i_2] [i_5 + 2] [i_4] [i_5 + 2] [i_7] [i_5 + 2]))));
                    }
                }
                for (long long int i_8 = 0; i_8 < 16; i_8 += 1) 
                {
                    var_23 = ((/* implicit */long long int) min((var_23), (((((((/* implicit */_Bool) ((((/* implicit */_Bool) 5553898821524059892ULL)) ? (var_7) : (((/* implicit */unsigned long long int) arr_24 [i_1] [i_2] [i_4] [i_8] [i_1]))))) || (((/* implicit */_Bool) arr_24 [i_4] [i_2] [i_4] [i_8] [i_4])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_2] [i_4]))) : (((((/* implicit */_Bool) arr_21 [i_1] [i_2] [i_4] [i_4] [i_8])) ? (min((-4750422189428715508LL), (1125898833100800LL))) : (((/* implicit */long long int) (~(-207052512))))))))));
                    var_24 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 4263606338U))))))))));
                    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_15 [i_4] [i_2] [i_4] [i_1] [i_8] [i_2])))))))));
                    arr_27 [i_4] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(min((((/* implicit */long long int) 391772396)), (arr_13 [i_1])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) 262144U))) ? ((~(((/* implicit */int) arr_22 [i_1])))) : (((/* implicit */int) (unsigned char)246))))) : (((arr_0 [i_2] [i_8]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [i_1])))))));
                }
                for (unsigned char i_9 = 2; i_9 < 13; i_9 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 0; i_10 < 16; i_10 += 2) 
                    {
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(636425776)))) && (min((arr_7 [i_9 + 1] [i_9 - 1] [i_9 + 3] [i_9 + 3]), (arr_7 [i_9 + 3] [i_9 + 2] [i_9 - 1] [i_9 - 1])))));
                        var_27 = ((((((((/* implicit */_Bool) 88894454U)) && (((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2] [i_9 + 1])) ? (5325763261705856556LL) : (((/* implicit */long long int) ((/* implicit */int) (short)17234)))))) : (max((arr_6 [i_1] [i_4] [i_10]), (((/* implicit */unsigned long long int) arr_29 [i_1] [i_1] [i_9] [i_1] [i_1])))))) < (((/* implicit */unsigned long long int) max((arr_18 [i_9]), (arr_18 [i_9])))));
                        var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((((/* implicit */int) arr_29 [i_1] [i_2] [i_9] [i_9 + 2] [i_10])) | (((/* implicit */int) (unsigned short)48337)))))))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 16; i_11 += 4) 
                    {
                        arr_35 [i_1] [i_1] [i_9] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (_Bool)1);
                        var_29 = ((/* implicit */long long int) (unsigned short)17198);
                    }
                    arr_36 [i_1] [i_1] [i_4] [i_9 + 1] &= ((/* implicit */unsigned char) var_9);
                    var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) min((max((arr_18 [i_4]), (arr_0 [i_9 - 1] [i_9 - 1]))), (((((/* implicit */_Bool) 2459128810U)) ? (arr_16 [i_9 + 1] [i_2] [i_4] [i_4] [i_2] [i_4]) : (arr_18 [i_4]))))))));
                    var_31 = arr_8 [i_4];
                }
                for (unsigned char i_12 = 2; i_12 < 13; i_12 += 3) /* same iter space */
                {
                    var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) (unsigned short)4578))));
                    var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) arr_21 [i_12 + 2] [i_12 + 3] [i_12 + 3] [i_12 - 1] [i_12 - 2])) & (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) != (391772408))))))))));
                    var_34 ^= ((/* implicit */_Bool) ((max((arr_30 [i_12 - 1] [i_12 - 2] [i_4] [i_1] [i_12 - 2]), (arr_30 [i_12 + 2] [i_2] [i_4] [i_12 + 3] [i_1]))) ? (min((12331448754346557337ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_12 + 2] [i_4] [i_2] [i_4] [i_1])) ? (((/* implicit */int) arr_34 [i_1] [i_2] [i_2] [i_4] [i_12 + 2])) : (((/* implicit */int) arr_3 [i_2]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                    var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) max((((arr_37 [i_1] [i_12 - 2] [i_12 + 1] [i_1]) & (arr_37 [i_1] [i_12 - 1] [i_12 + 1] [i_1]))), (((((/* implicit */_Bool) arr_37 [i_1] [i_12 - 1] [i_12 + 3] [i_1])) ? (((/* implicit */unsigned long long int) -2904874031774415550LL)) : (arr_37 [i_4] [i_12 + 1] [i_12 + 1] [i_4]))))))));
                }
            }
        }
        for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 1) /* same iter space */
        {
            var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)232)), (2451143848U)))) ? (((((/* implicit */_Bool) 391772408)) ? (((/* implicit */unsigned long long int) 360876118U)) : (17492613240380140387ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))), (min((var_10), (((/* implicit */unsigned int) (unsigned short)17586))))))) : (((((/* implicit */_Bool) (+(3089413508U)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_13]))) : (arr_13 [i_13])))));
            var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) (-(((/* implicit */int) arr_29 [i_1] [i_1] [i_1] [i_13] [i_13])))))));
        }
        arr_44 [i_1] = ((/* implicit */int) (~((~(11545059856437733389ULL)))));
    }
    for (signed char i_14 = 0; i_14 < 22; i_14 += 4) 
    {
        arr_48 [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_47 [i_14]), (arr_47 [i_14])))) ? (((/* implicit */int) ((short) arr_45 [i_14]))) : (((((((/* implicit */_Bool) arr_47 [i_14])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_47 [i_14])))) * (((/* implicit */int) ((((/* implicit */long long int) 1843823448U)) != (arr_46 [i_14] [i_14]))))))));
        var_38 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)32))))) ? (((/* implicit */int) (_Bool)1)) : (365672230))))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_15 = 0; i_15 < 18; i_15 += 3) 
    {
        arr_51 [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) var_9)), ((short)-23954)))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) (+(arr_46 [i_15] [i_15])))) ? (max((1888810619353080017LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((((/* implicit */int) arr_45 [i_15])) + (((/* implicit */int) arr_47 [i_15])))))))));
        var_39 &= ((/* implicit */short) arr_46 [i_15] [i_15]);
        arr_52 [i_15] [i_15] &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+((-(3747624123U)))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (18446744073709551615ULL)))) ? (((((/* implicit */_Bool) arr_47 [i_15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_15]))) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_15] [i_15])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_16 = 0; i_16 < 18; i_16 += 4) 
        {
            var_40 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1942888073)) ? (((/* implicit */long long int) -1942888068)) : (arr_46 [i_16] [i_15])));
            var_41 = ((/* implicit */long long int) (unsigned short)48322);
        }
    }
    var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)50)) ? (7793262778039152324ULL) : (((/* implicit */unsigned long long int) 88894454U)))) ^ (((/* implicit */unsigned long long int) (~(5536907500480695805LL))))))) || (((/* implicit */_Bool) var_13))));
    /* LoopSeq 1 */
    for (long long int i_17 = 0; i_17 < 19; i_17 += 4) 
    {
        /* LoopSeq 4 */
        for (short i_18 = 0; i_18 < 19; i_18 += 2) 
        {
            var_43 = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) (+(8793366566700131218ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_18])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_58 [i_17]))))))), ((+(-1328579271)))));
            var_44 = ((/* implicit */long long int) (((((~(12892845252185491700ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_13))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((signed char) (unsigned short)17199))) > (((int) var_2))))))));
        }
        for (short i_19 = 0; i_19 < 19; i_19 += 1) 
        {
            var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) arr_61 [i_19]))));
            var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_60 [i_17] [i_19] [i_19]), (arr_60 [i_17] [i_17] [i_17])))) ? ((~(arr_60 [i_19] [i_19] [i_17]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_60 [i_17] [i_17] [i_17]) == (arr_60 [i_17] [i_19] [i_19])))))));
        }
        for (unsigned int i_20 = 1; i_20 < 18; i_20 += 4) 
        {
            var_47 = ((/* implicit */unsigned short) max((var_47), (((/* implicit */unsigned short) ((signed char) ((long long int) ((int) arr_63 [i_17] [i_20 + 1])))))));
            var_48 = min((((/* implicit */unsigned long long int) ((arr_46 [i_20 + 1] [i_20 - 1]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (11545059856437733389ULL))), (((/* implicit */unsigned long long int) arr_60 [i_17] [i_17] [i_20 - 1])))));
            var_49 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 88894463U)) ? (arr_59 [i_17]) : (12892845252185491725ULL))) << (((((((((/* implicit */_Bool) arr_62 [i_20 + 1])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) - (-9223372036854775750LL))) + (116LL))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_21 = 1; i_21 < 18; i_21 += 4) 
        {
            arr_67 [i_21 - 1] [i_21 - 1] [i_17] = ((/* implicit */unsigned long long int) (_Bool)1);
            arr_68 [i_17] [i_21 - 1] &= ((/* implicit */long long int) ((arr_65 [i_17] [i_21 - 1] [i_21 + 1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_63 [i_21 - 1] [i_21 - 1])))));
        }
        var_50 = ((/* implicit */long long int) max((var_50), (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_0 [i_17] [i_17]), (arr_0 [i_17] [i_17])))) ? (((((/* implicit */_Bool) 91723926U)) ? (arr_0 [i_17] [i_17]) : (((/* implicit */unsigned int) 597007931)))) : ((-(arr_0 [i_17] [i_17]))))))));
    }
}
