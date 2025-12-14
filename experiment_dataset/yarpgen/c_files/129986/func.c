/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129986
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) 840917447)) >= (arr_2 [i_0]))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) 840917444)))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_3 [i_0] [i_1]))) : (arr_2 [i_0])))));
                var_15 = ((/* implicit */unsigned char) (((!(((((/* implicit */_Bool) -840917448)) && (((/* implicit */_Bool) arr_0 [i_0])))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) && (((/* implicit */_Bool) arr_3 [i_0] [i_1])))))));
                var_16 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)14)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -9075289946969344553LL))))) ? (4219468836370171587LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)138))));
                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((unsigned short) arr_2 [i_1])))));
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (~((~(arr_2 [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) (unsigned char)99)))))) : ((~((-(arr_2 [i_0])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) (((+((-(840917447))))) / (var_4)));
    /* LoopSeq 3 */
    for (int i_2 = 1; i_2 < 22; i_2 += 4) /* same iter space */
    {
        arr_6 [i_2] = ((/* implicit */unsigned char) arr_4 [19]);
        arr_7 [i_2 + 2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)56)) & (((/* implicit */int) (unsigned char)245))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        var_20 *= ((/* implicit */_Bool) 840917447);
                        var_21 ^= (+(((((/* implicit */_Bool) 2150773798341325846LL)) ? (((/* implicit */long long int) 1968929540)) : (-2150773798341325833LL))));
                        var_22 = arr_5 [i_2] [9];
                        var_23 -= ((/* implicit */int) (((!(((/* implicit */_Bool) (-(((/* implicit */int) (short)12661))))))) && (((/* implicit */_Bool) (-(((long long int) arr_4 [i_2])))))));
                    }
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) arr_11 [i_3 + 1])) : (((/* implicit */int) arr_11 [i_3 + 1]))))) ? (((/* implicit */int) (short)28672)) : (((/* implicit */int) ((((((/* implicit */_Bool) 6537737141372996673LL)) && (((/* implicit */_Bool) arr_13 [i_2] [i_3] [i_3 + 1])))) && (((/* implicit */_Bool) (signed char)80)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) 
        {
            for (short i_7 = 1; i_7 < 22; i_7 += 2) 
            {
                {
                    var_25 |= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)24)))) ? (((((((/* implicit */long long int) ((/* implicit */int) (short)27148))) & (arr_9 [i_6] [(short)4] [i_7]))) << (((/* implicit */int) (!(((/* implicit */_Bool) (short)4095))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2])))));
                    arr_20 [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_2] [i_7] [i_2 + 2] [i_2])) ? (((((/* implicit */int) arr_19 [i_2] [i_7] [i_6] [i_7])) * (((/* implicit */int) arr_17 [20] [i_6] [i_2])))) : (((int) arr_10 [i_2] [i_7]))))) ? (4006260481381980540ULL) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_11 [i_7])) ? (((/* implicit */int) arr_18 [10LL] [i_6] [i_7] [10LL])) : (((/* implicit */int) arr_10 [i_7] [i_7])))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 1; i_9 < 22; i_9 += 2) 
                        {
                            {
                                arr_27 [i_2] [i_2] [i_2] [i_7] [i_2] = ((/* implicit */int) arr_17 [i_2 - 1] [i_7 + 1] [i_7 + 1]);
                                var_26 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)198))) <= ((~(15330178242555095964ULL))))) ? ((-(((((/* implicit */_Bool) arr_11 [i_6])) ? (((/* implicit */unsigned long long int) arr_9 [i_7] [i_7] [i_7])) : (arr_26 [5LL] [i_6] [5LL] [i_8] [i_6]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_7] [i_7])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 24; i_10 += 1) 
                    {
                        for (short i_11 = 2; i_11 < 22; i_11 += 4) 
                        {
                            {
                                var_27 = arr_12 [12ULL] [12ULL] [i_7];
                                arr_33 [i_11 - 1] [(unsigned short)16] [i_11] [i_6] [i_2] &= ((/* implicit */long long int) arr_19 [14ULL] [i_6] [i_7] [(unsigned char)14]);
                                arr_34 [i_7] [i_6] [i_7] [i_7] [i_6] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) ((short) arr_16 [i_2 - 1] [i_7 + 1]))) << (((/* implicit */int) ((((/* implicit */int) arr_16 [i_2 - 1] [i_7 - 1])) == (((/* implicit */int) arr_16 [i_2 + 2] [i_7 + 2])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (int i_12 = 1; i_12 < 22; i_12 += 4) /* same iter space */
    {
        arr_37 [i_12] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_17 [i_12 - 1] [i_12 - 1] [i_12 + 2])) ? (((/* implicit */int) arr_10 [i_12] [i_12])) : (((/* implicit */int) arr_10 [i_12] [i_12]))))));
        var_28 -= ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) (~(((/* implicit */int) arr_11 [i_12 + 1]))))))));
        /* LoopNest 3 */
        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
        {
            for (int i_14 = 0; i_14 < 24; i_14 += 1) 
            {
                for (unsigned short i_15 = 0; i_15 < 24; i_15 += 2) 
                {
                    {
                        arr_45 [i_15] [i_13 - 1] [i_12] [i_15] = (+(((((/* implicit */_Bool) arr_44 [i_12 + 1] [i_12 + 2] [i_12])) ? (((/* implicit */int) arr_44 [i_12 - 1] [i_12 + 2] [i_12 - 1])) : (((/* implicit */int) arr_44 [i_12 + 2] [i_12 - 1] [4ULL])))));
                        arr_46 [i_12] [i_14] [i_13] [i_12 - 1] [i_12 + 2] [i_12] = ((/* implicit */_Bool) (~(((((/* implicit */long long int) ((int) arr_26 [i_13] [i_13] [i_14] [i_15] [i_13 - 1]))) & (((((/* implicit */_Bool) arr_31 [i_12] [i_12] [i_12] [i_12] [i_12])) ? (2150773798341325868LL) : (arr_9 [i_12] [i_13] [i_12])))))));
                        arr_47 [i_12] [(signed char)20] [i_12] = ((/* implicit */int) arr_44 [(signed char)3] [i_13 - 1] [i_12 + 1]);
                    }
                } 
            } 
        } 
    }
    for (int i_16 = 1; i_16 < 22; i_16 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_17 = 0; i_17 < 24; i_17 += 2) 
        {
            var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (unsigned char)186)))))) * (((((/* implicit */int) ((arr_24 [i_16] [i_16] [i_16] [i_17]) == (((/* implicit */unsigned long long int) -8523026438119092424LL))))) % (((/* implicit */int) (unsigned char)2))))));
            var_30 ^= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_17 [i_16 - 1] [i_16 + 1] [i_16])) ? (arr_49 [i_16] [i_16 + 2]) : (((/* implicit */int) arr_17 [i_16 + 1] [i_16 + 1] [i_16]))))));
            arr_54 [i_17] [(unsigned short)4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((_Bool)1) ? (288230376151703552ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))))));
            var_31 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_36 [i_17])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_36 [i_17])))) : (68719476735ULL)));
        }
        arr_55 [i_16 - 1] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 134086656)) ? (((/* implicit */int) arr_28 [6] [i_16 + 1] [i_16 + 1] [i_16])) : (((/* implicit */int) (signed char)1))));
        var_32 ^= ((/* implicit */unsigned long long int) arr_43 [(unsigned char)18]);
    }
}
