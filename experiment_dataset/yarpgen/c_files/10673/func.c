/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10673
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_10 |= ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-1))))) & (var_7)));
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */unsigned short) (((-(-1621942935521856359LL))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58621)))));
                    arr_9 [i_1] [i_1] = (~(565279947U));
                    var_11 -= ((int) (signed char)-1);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        for (signed char i_4 = 4; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) ((unsigned short) arr_6 [(unsigned short)1] [10LL] [10LL]));
                                arr_16 [i_4] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_11 [i_0] [i_1 - 1] [i_0] [i_3 - 1])) | (arr_0 [i_3] [i_1]))))));
                                arr_17 [i_0] [i_1 - 2] [i_0] [i_0] [i_3] [i_3] [i_4] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_10 [i_1] [i_1] [i_1])), ((-((-(((/* implicit */int) arr_6 [i_0] [i_2] [i_2]))))))));
                                var_13 *= ((/* implicit */unsigned short) var_3);
                                var_14 += ((/* implicit */long long int) arr_1 [i_4]);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) arr_3 [i_0] [i_0]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (long long int i_6 = 1; i_6 < 11; i_6 += 4) 
            {
                {
                    var_16 *= ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [4] [i_6 + 2] [i_6])))))));
                    var_17 += ((/* implicit */unsigned short) arr_7 [i_0]);
                    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_6 [i_0] [i_5] [i_6])), ((+(((/* implicit */int) (_Bool)0)))))))));
                    var_19 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_18 [i_6])) > (((/* implicit */int) arr_13 [i_0] [i_5] [i_6]))))) == (var_6))))) - (max((((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [4U] [i_5] [i_5])) + (((/* implicit */int) arr_5 [i_6] [i_6] [i_6]))))), (min((arr_0 [i_0] [i_5]), (((/* implicit */unsigned int) var_1)))))));
                }
            } 
        } 
        arr_23 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) (!((_Bool)0)))))));
    }
    for (long long int i_7 = 1; i_7 < 23; i_7 += 4) 
    {
        var_20 = ((((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_26 [i_7]))))))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_7 - 1]))) ^ (arr_25 [i_7] [i_7]))));
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned short)58092)))))));
        var_22 = ((/* implicit */unsigned int) arr_25 [i_7] [i_7]);
        /* LoopNest 2 */
        for (long long int i_8 = 1; i_8 < 21; i_8 += 4) 
        {
            for (signed char i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                {
                    arr_34 [i_7] [i_7] [i_7] = (i_7 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((arr_33 [i_7] [i_7] [i_7] [i_8]) << (((((arr_29 [i_8] [i_7]) + (715984948))) - (27)))))) & (arr_32 [i_7])))) : (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((arr_33 [i_7] [i_7] [i_7] [i_8]) << (((((((((arr_29 [i_8] [i_7]) + (715984948))) - (27))) + (197904674))) - (21)))))) & (arr_32 [i_7]))));
                    arr_35 [i_7] [i_7] [i_7] [i_9] = ((/* implicit */unsigned char) (-(((((/* implicit */long long int) ((arr_30 [i_7] [i_8] [i_7]) * (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) | (var_7)))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 3 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        for (signed char i_11 = 2; i_11 < 24; i_11 += 3) 
        {
            for (unsigned short i_12 = 2; i_12 < 22; i_12 += 2) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) arr_39 [i_10] [i_10] [i_10]);
                    arr_43 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */long long int) var_2);
                    arr_44 [(_Bool)1] = ((/* implicit */unsigned short) (~(9223372036854775807LL)));
                    /* LoopNest 2 */
                    for (long long int i_13 = 2; i_13 < 22; i_13 += 1) 
                    {
                        for (unsigned short i_14 = 2; i_14 < 22; i_14 += 4) 
                        {
                            {
                                arr_50 [i_14] [i_13] [i_12] [i_10] [i_10] = ((/* implicit */signed char) arr_36 [i_10] [i_11]);
                                var_25 *= ((/* implicit */unsigned int) ((_Bool) arr_40 [i_10] [i_11]));
                                arr_51 [i_10] [i_10] [i_12] [i_13] [i_10] = ((/* implicit */_Bool) (-(var_0)));
                                var_26 = ((/* implicit */_Bool) arr_48 [i_10] [i_10]);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_15 = 1; i_15 < 23; i_15 += 2) 
                    {
                        arr_54 [i_12] &= ((/* implicit */long long int) (-((~(963002984)))));
                        var_27 = ((/* implicit */long long int) (+(2625231418U)));
                        arr_55 [i_10] [i_11] [i_12 - 2] [i_15] = min((((/* implicit */unsigned int) (!(var_2)))), ((-(min((((/* implicit */unsigned int) (_Bool)0)), (1284366095U))))));
                        arr_56 [i_15] [i_11] [i_15] [i_15] = ((unsigned short) (~(262143ULL)));
                        arr_57 [i_10] [(_Bool)1] [(_Bool)1] [i_10] [i_12] |= ((/* implicit */unsigned short) ((3010601200U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33321)))));
                    }
                    for (unsigned short i_16 = 0; i_16 < 25; i_16 += 3) 
                    {
                        arr_60 [i_10] [i_11] [i_12] [i_16] = ((/* implicit */unsigned short) (~(var_7)));
                        arr_61 [i_10] [i_10] [i_10] = ((/* implicit */long long int) (+(((/* implicit */int) max((min(((unsigned short)4088), ((unsigned short)47276))), (((/* implicit */unsigned short) (_Bool)1)))))));
                        var_28 = ((/* implicit */signed char) (+(((/* implicit */int) ((short) ((unsigned short) arr_37 [i_10]))))));
                    }
                }
            } 
        } 
    } 
}
