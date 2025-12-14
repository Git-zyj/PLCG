/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149471
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */_Bool) ((8585082137553259749LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)221)))))) ? ((+(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((signed char) (signed char)7)))))));
        var_12 = ((/* implicit */_Bool) arr_2 [i_0 + 1]);
        arr_4 [i_0] [i_0] = (!(((/* implicit */_Bool) (~(1522023152)))));
        var_13 -= ((/* implicit */long long int) min((min((((/* implicit */unsigned short) arr_0 [i_0 - 1])), (arr_2 [i_0 - 2]))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 8585082137553259771LL)))))));
        arr_5 [i_0] |= ((/* implicit */unsigned long long int) var_4);
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 18; i_1 += 4) 
    {
        var_14 |= ((/* implicit */long long int) (short)16490);
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [3LL])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1])))))) ? ((((_Bool)0) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_7 [i_1 + 1] [i_1]))))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            /* LoopSeq 3 */
            for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) arr_9 [i_2] [i_3])))));
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (3003458137808421957LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)104)))));
            }
            for (short i_4 = 1; i_4 < 18; i_4 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        {
                            arr_22 [0LL] [i_2] [i_4] [9U] [i_5] [i_5] [i_6] = ((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_1 - 2]))) - (var_9));
                            var_18 = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)151))))) ? (arr_19 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 + 1]) : (arr_11 [i_2]));
                        }
                    } 
                } 
                var_19 = (-9223372036854775807LL - 1LL);
            }
            for (short i_7 = 1; i_7 < 18; i_7 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_29 [i_1] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_18 [i_1] [i_1 - 2] [i_1] [i_7] [i_7 + 1] [i_7 - 1]))));
                    var_20 = ((((/* implicit */int) (_Bool)1)) > (977060200));
                    var_21 = ((/* implicit */long long int) (~((-(18446744073709551615ULL)))));
                    /* LoopSeq 3 */
                    for (signed char i_9 = 4; i_9 < 18; i_9 += 1) 
                    {
                        var_22 = ((/* implicit */_Bool) arr_12 [i_1] [i_1]);
                        var_23 |= ((/* implicit */_Bool) ((unsigned char) var_1));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_7 + 1]))) | (2631927291U)));
                        var_25 = ((/* implicit */unsigned char) -2486659569460126961LL);
                    }
                    for (unsigned short i_10 = 0; i_10 < 19; i_10 += 4) 
                    {
                        arr_35 [i_10] [i_2] |= ((/* implicit */unsigned long long int) arr_23 [i_1] [i_2] [i_10]);
                        arr_36 [i_1 - 2] [i_8] [i_7] [i_8] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 596885015U)) ? (((/* implicit */int) arr_33 [i_1 - 1] [i_2] [1LL] [i_2] [i_8] [i_10] [(unsigned char)6])) : (((/* implicit */int) arr_18 [i_10] [i_8] [0LL] [i_2] [i_1] [i_1 + 1]))));
                    }
                    for (unsigned int i_11 = 2; i_11 < 18; i_11 += 3) 
                    {
                        arr_39 [i_8] [i_2] [i_2] [i_2] [(unsigned short)10] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)43)) - (-1526585913)))) || (((/* implicit */_Bool) arr_15 [i_7 - 1] [i_1 + 1] [i_2] [i_11 + 1]))));
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) var_6))));
                        var_27 |= ((/* implicit */_Bool) (+(((/* implicit */int) (short)30035))));
                    }
                    var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -2482617891220444483LL))));
                }
                var_29 |= ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (11313381622698609136ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [1LL] [1LL] [i_7] [i_7] [i_7 - 1] [i_7 - 1])))));
                arr_40 [i_1] [i_1] [12LL] [i_7 + 1] = ((/* implicit */signed char) 9223372036854775801LL);
            }
            /* LoopNest 2 */
            for (long long int i_12 = 0; i_12 < 19; i_12 += 3) 
            {
                for (signed char i_13 = 1; i_13 < 18; i_13 += 3) 
                {
                    {
                        var_30 |= ((/* implicit */unsigned long long int) (+(-5531406820453068405LL)));
                        var_31 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_11 [i_13 + 1]))));
                        var_32 |= ((/* implicit */_Bool) (-(14ULL)));
                    }
                } 
            } 
            arr_47 [i_1] [(_Bool)1] [i_2] = -5102608893950656408LL;
        }
        arr_48 [i_1 + 1] = ((/* implicit */signed char) var_6);
    }
    /* vectorizable */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
    {
        arr_51 [(short)4] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_50 [i_14] [i_14])) ? (((/* implicit */unsigned long long int) arr_50 [i_14] [i_14])) : (17594952281723804718ULL)));
        var_33 = ((((/* implicit */_Bool) arr_49 [i_14] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1))) : (arr_50 [i_14] [i_14]));
        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_49 [i_14] [i_14])) ? (arr_50 [i_14] [i_14]) : (((((/* implicit */_Bool) (signed char)58)) ? (arr_50 [(_Bool)1] [(unsigned short)21]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-25872)))))));
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_16 = 2; i_16 < 21; i_16 += 2) 
        {
            for (signed char i_17 = 0; i_17 < 25; i_17 += 3) 
            {
                {
                    arr_60 [i_15] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 4398012956672ULL)) ? (((/* implicit */unsigned int) 1173152499)) : (arr_49 [i_16 + 4] [i_16 + 1]))));
                    arr_61 [i_15] [i_16 - 1] [i_15] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)10047)) || (((/* implicit */_Bool) arr_53 [i_17] [22LL]))))) / (((((/* implicit */int) arr_53 [i_16 + 1] [i_17])) >> (((((/* implicit */int) arr_55 [i_15])) + (83)))))));
                    var_35 = ((/* implicit */long long int) ((short) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_53 [i_17] [i_17])) : (((/* implicit */int) (unsigned char)249)))))));
                }
            } 
        } 
        var_36 = (unsigned short)11614;
        var_37 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_53 [i_15] [i_15]))));
        arr_62 [i_15] [i_15] = ((/* implicit */long long int) (+(((/* implicit */int) arr_59 [i_15] [(unsigned short)15] [(unsigned short)15] [i_15]))));
    }
    var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_7)) : (2305843009213693952ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */int) (short)-30350)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775807LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)14961))))) ? (min((var_6), (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)12527))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
}
