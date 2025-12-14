/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152972
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
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) arr_3 [i_1] [i_2])))));
                    var_12 = ((/* implicit */unsigned long long int) (((~(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (7844494802785328652ULL))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_2])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_11 [i_4 + 1] [10ULL] [i_2] [i_0] [i_0] = ((/* implicit */int) (+(6333123354410570697ULL)));
                                var_13 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [4U] [i_1] [i_4] [11U] [i_1] [(short)9])) ? (((/* implicit */int) (!(arr_8 [(signed char)2] [i_3 + 2] [i_1] [i_1])))) : (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)3)) ? (17726254385928748526ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14616))))) >= (11867724941965754145ULL))))));
                                arr_12 [i_3] = ((/* implicit */int) (+(4294967295U)));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) (signed char)3))) == (((/* implicit */int) (short)-2709))));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 3; i_5 < 11; i_5 += 1) 
                    {
                        arr_15 [i_0] [i_5] [i_0] [i_5] [i_0] = ((/* implicit */_Bool) ((((((((/* implicit */int) (unsigned short)50920)) >> (((arr_13 [i_0] [i_0] [i_0]) - (2190196263U))))) * (((/* implicit */int) arr_8 [i_5] [i_2] [i_1] [i_0])))) >> (((arr_6 [i_0]) - (1806037159325897308ULL)))));
                        var_15 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((short) -1291800919))))) ? (((unsigned int) ((_Bool) arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 9355863357286423024ULL))))));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (unsigned short)14616)) ? (1005587547U) : (arr_13 [i_0] [i_6] [i_6]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) 1005587561U))) ^ (-1416057146)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_6] [i_6] [i_6] [i_0] [i_0] [i_0] [i_0]))) ^ (((((/* implicit */unsigned long long int) 4294967295U)) - (arr_1 [i_0] [i_6])))))));
            arr_18 [i_6] [6ULL] [6ULL] = ((_Bool) (signed char)-104);
            var_17 += ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_6] [i_0] [i_6]))) != (18446744073709551612ULL))) ? (((/* implicit */int) arr_17 [i_0] [(_Bool)1])) : (((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_13 [4ULL] [4ULL] [i_6]))) && ((!(((/* implicit */_Bool) (signed char)3)))))))));
        }
    }
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_8 = 2; i_8 < 12; i_8 += 1) 
        {
            for (unsigned char i_9 = 4; i_9 < 10; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_20 [i_9]))) ? ((~(((/* implicit */int) (unsigned short)16191)))) : ((+(arr_20 [i_8])))));
                        var_19 = ((/* implicit */unsigned int) (!((_Bool)1)));
                        var_20 = ((/* implicit */signed char) ((((arr_25 [i_8] [i_9] [i_10]) ^ (arr_25 [i_7] [i_7] [i_9 + 3]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 4284790906U))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (short i_11 = 0; i_11 < 14; i_11 += 1) 
        {
            var_21 -= (!(((/* implicit */_Bool) 5U)));
            /* LoopNest 2 */
            for (unsigned long long int i_12 = 2; i_12 < 13; i_12 += 1) 
            {
                for (int i_13 = 0; i_13 < 14; i_13 += 1) 
                {
                    {
                        var_22 = (_Bool)0;
                        var_23 -= arr_31 [i_13] [i_12] [i_11] [i_7];
                        var_24 = ((/* implicit */_Bool) (signed char)19);
                        /* LoopSeq 3 */
                        for (short i_14 = 2; i_14 < 13; i_14 += 4) 
                        {
                            var_25 = ((/* implicit */signed char) 6685586623455796895LL);
                            var_26 = ((/* implicit */unsigned long long int) (+(arr_21 [i_7] [12ULL] [i_12])));
                        }
                        for (unsigned int i_15 = 0; i_15 < 14; i_15 += 3) /* same iter space */
                        {
                            arr_42 [i_7] [i_7] [i_7] [i_7] [i_11] = (!(((8908930900715879423ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))));
                            var_27 = ((/* implicit */unsigned char) (unsigned short)51050);
                            var_28 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_40 [i_12] [i_13] [i_12] [i_7])) != ((~(((/* implicit */int) (unsigned char)9))))));
                        }
                        for (unsigned int i_16 = 0; i_16 < 14; i_16 += 3) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned long long int) (_Bool)1);
                            arr_45 [i_11] [i_11] = ((/* implicit */unsigned long long int) arr_30 [i_13] [i_7] [i_7]);
                            var_30 ^= ((/* implicit */unsigned char) (signed char)-13);
                        }
                    }
                } 
            } 
        }
        for (signed char i_17 = 0; i_17 < 14; i_17 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_18 = 1; i_18 < 13; i_18 += 3) 
            {
                for (unsigned long long int i_19 = 1; i_19 < 12; i_19 += 1) 
                {
                    {
                        var_31 |= ((/* implicit */unsigned int) ((unsigned long long int) 9355863357286423024ULL));
                        arr_52 [i_19] [i_17] [i_17] [i_17] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) (short)-934)) < (((/* implicit */int) (_Bool)0)))))));
                    }
                } 
            } 
            var_32 |= (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5993))) > (10569068674314832810ULL))));
            var_33 |= ((/* implicit */_Bool) ((unsigned long long int) arr_26 [i_17] [i_17] [i_17]));
        }
        for (int i_20 = 0; i_20 < 14; i_20 += 4) 
        {
            var_34 = ((((/* implicit */_Bool) -1452753352)) ? (((/* implicit */unsigned long long int) arr_29 [i_20] [i_20])) : (((arr_36 [(signed char)2] [i_7] [i_7] [i_20] [i_7] [i_7] [i_7]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)113))) : (10569068674314832825ULL))));
            var_35 = ((/* implicit */unsigned long long int) 4284790906U);
            /* LoopNest 3 */
            for (unsigned long long int i_21 = 0; i_21 < 14; i_21 += 1) 
            {
                for (unsigned long long int i_22 = 0; i_22 < 14; i_22 += 3) 
                {
                    for (int i_23 = 0; i_23 < 14; i_23 += 3) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned int) (short)-17116);
                            var_37 |= ((/* implicit */unsigned short) 322195970U);
                        }
                    } 
                } 
            } 
        }
        var_38 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 0U)) != (((((/* implicit */_Bool) arr_44 [i_7] [i_7] [10ULL] [i_7] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)13))) : (844983637976830124ULL)))));
    }
    var_39 |= ((/* implicit */short) ((((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) (signed char)-13)))))) ? (18446744073709551615ULL) : (844983637976830124ULL)));
}
