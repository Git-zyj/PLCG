/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131346
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
    var_12 = ((/* implicit */unsigned char) (-(((unsigned int) var_5))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_13 *= ((/* implicit */unsigned int) ((3422323413071623040ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1302536466U)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : ((+(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (signed char)-8)) : (-732803717)))))));
        var_15 = arr_0 [i_0] [i_0];
    }
    for (long long int i_1 = 1; i_1 < 10; i_1 += 3) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_2 [i_1 - 1]))) ? (((arr_0 [i_1 + 1] [i_1 + 1]) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) arr_0 [1] [i_1])))) : ((-(-1448928921)))))) ? (((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-71))) & (15024420660637928575ULL)))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1] [i_1])) * (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 1])))))))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (arr_10 [i_2]) : (((/* implicit */int) arr_0 [i_1] [i_1])))))));
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            arr_14 [i_1] [i_1] [8U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (3460078679019350950ULL)))) ? (((65535ULL) | (((/* implicit */unsigned long long int) -4671026575542895429LL)))) : (((/* implicit */unsigned long long int) ((3262761114U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))) ? (((((3770568251567737909ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) * (((arr_9 [i_1] [i_1] [i_1]) & (((/* implicit */unsigned long long int) var_7)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_8 [i_4] [i_1] [i_1] [i_1 + 1]))))));
                            var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(0)))) ? (((/* implicit */unsigned long long int) arr_3 [i_3])) : (((((/* implicit */_Bool) arr_6 [i_2] [0])) ? (arr_6 [i_2] [i_1 - 1]) : (var_1)))));
                            var_18 = ((/* implicit */unsigned long long int) var_11);
                        }
                        arr_15 [i_1] [i_2] [i_2] [9ULL] [i_1] = ((/* implicit */unsigned int) ((short) arr_3 [i_1]));
                        arr_16 [i_1] [i_2] [i_2] [i_1] [i_2] = ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_3] [i_4]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1]))) : (((((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (short)16120))) : (arr_8 [8] [i_1] [i_1] [i_1])))));
                        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) / (65535ULL))) | (5251081142294252407ULL))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        arr_20 [i_6] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_6] [i_6])) ? (arr_18 [(_Bool)1] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6] [i_6])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) 2679424251U)))) : (arr_18 [i_6] [(_Bool)1])))));
        var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_6] [i_6]))));
        arr_21 [i_6] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((arr_0 [19U] [i_6]) ? (((/* implicit */int) arr_19 [6ULL] [6ULL])) : (((/* implicit */int) arr_0 [12ULL] [12ULL]))))) ? (var_3) : (((arr_0 [5U] [i_6]) ? (1615543071U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-31049))))))) * (((/* implicit */unsigned int) (-(((/* implicit */int) arr_17 [i_6])))))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
    {
        var_21 = ((/* implicit */int) ((unsigned short) arr_1 [i_7] [i_7]));
        var_22 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (~(2679424209U)))) ? (((unsigned int) (_Bool)1)) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (1615543071U))))));
        var_23 = ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-31049)), (((unsigned short) arr_0 [i_7] [i_7]))))) ? (((((/* implicit */_Bool) ((short) arr_1 [i_7] [i_7]))) ? (((arr_0 [19LL] [19LL]) ? (((/* implicit */int) arr_23 [i_7])) : (((/* implicit */int) arr_0 [i_7] [i_7])))) : (((/* implicit */int) ((arr_24 [i_7] [i_7]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1019)))))))) : (((((/* implicit */_Bool) (short)10437)) ? (((/* implicit */int) (short)-24426)) : (((/* implicit */int) (unsigned short)18561)))));
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 4) 
        {
            for (unsigned long long int i_9 = 3; i_9 < 19; i_9 += 4) 
            {
                {
                    arr_33 [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_9 - 2] [i_9] [i_9])) ? (arr_31 [i_9 - 2] [i_9 - 2] [i_9 - 2]) : (arr_31 [i_9 + 3] [i_9 + 3] [i_9])))) ? (((/* implicit */unsigned int) arr_31 [i_9 + 1] [i_9 + 1] [i_9])) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) arr_31 [i_9 - 2] [i_8] [i_9])) : (var_9)))));
                    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 4283539367U)) ? (18446744073709551604ULL) : (((/* implicit */unsigned long long int) 3462554306U)))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_28 [i_8] [19ULL])) ? (arr_32 [i_8]) : (3262761133U))) >> (((/* implicit */int) ((_Bool) var_0)))))) : (arr_30 [i_7])));
                }
            } 
        } 
        var_25 *= ((unsigned int) (unsigned char)116);
    }
}
