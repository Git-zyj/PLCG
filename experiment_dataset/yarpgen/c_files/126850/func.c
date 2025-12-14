/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126850
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
    var_14 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((7554303305310243591ULL), (((/* implicit */unsigned long long int) -3))))))))));
        arr_2 [i_0] [i_0] = ((((((/* implicit */_Bool) ((arr_1 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) || (((/* implicit */_Bool) var_8)))) ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 - 3]));
        arr_3 [i_0 + 3] = ((/* implicit */unsigned int) max((((long long int) var_3)), (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0 - 2] [i_0 + 2])))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 2) 
    {
        var_16 = ((/* implicit */short) min((min((((4278190080LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)84))))), (((/* implicit */long long int) arr_0 [i_1] [i_1])))), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)182))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_4 [i_1] [i_1 + 1]))))));
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)97)) ? (2072975471U) : (2837991418U)));
    }
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */int) ((arr_1 [i_2]) != (arr_6 [i_2])))), (((((/* implicit */_Bool) ((signed char) 16408300311391438600ULL))) ? (arr_7 [i_2]) : (((arr_7 [i_2]) / (1040187392)))))));
        var_18 -= ((/* implicit */unsigned int) (+((~(((/* implicit */int) ((arr_1 [i_2]) > (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
        /* LoopSeq 2 */
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            var_19 = ((/* implicit */_Bool) arr_9 [i_2]);
            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) -3195468603007274723LL))));
            /* LoopNest 2 */
            for (signed char i_4 = 2; i_4 < 16; i_4 += 2) 
            {
                for (short i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    {
                        var_21 += ((/* implicit */_Bool) (+((+((+(((/* implicit */int) arr_0 [(unsigned short)3] [i_4 + 1]))))))));
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_22 = arr_12 [i_2] [i_4 + 1] [i_4];
                            var_23 = ((/* implicit */unsigned int) ((arr_15 [(unsigned short)7] [i_5] [15U] [(_Bool)1]) <= (min((arr_15 [i_2] [i_3] [i_3] [i_6]), (arr_15 [i_2] [9ULL] [i_4 + 2] [(signed char)11])))));
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (_Bool)0))));
                        }
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_23 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */int) arr_21 [i_2] [i_3] [i_5] [i_7] [i_4 + 3] [i_5]);
                            var_25 = ((/* implicit */unsigned char) ((18446744073709551615ULL) % (((/* implicit */unsigned long long int) arr_14 [i_4 + 3]))));
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_7]))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2]))) - (7554303305310243594ULL)))));
                            arr_24 [i_5] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) (unsigned char)135))))));
                        }
                    }
                } 
            } 
        }
        for (int i_8 = 0; i_8 < 19; i_8 += 2) 
        {
            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_2] [i_8] [(signed char)6]))) - (((unsigned int) var_4)))))));
            /* LoopNest 2 */
            for (unsigned char i_9 = 3; i_9 < 15; i_9 += 2) 
            {
                for (unsigned char i_10 = 1; i_10 < 16; i_10 += 2) 
                {
                    {
                        arr_32 [i_10] [2ULL] [i_9 + 3] [(short)15] [i_8] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_20 [i_9 - 2] [i_9 - 2] [i_8] [i_9 - 2] [i_9 + 2]))) && ((((_Bool)1) || (((/* implicit */_Bool) 10892440768399308039ULL))))));
                        var_28 = ((/* implicit */unsigned short) ((min((((/* implicit */int) (short)32759)), (((((/* implicit */_Bool) arr_25 [i_10] [i_8] [i_2])) ? (arr_7 [i_2]) : (arr_12 [i_2] [i_8] [i_10]))))) != (((((/* implicit */_Bool) max((10892440768399308024ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? ((~(26))) : (max((arr_19 [i_2] [i_8] [i_2] [(unsigned char)4] [i_2]), (((/* implicit */int) (unsigned char)172))))))));
                        var_29 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)0)) >> (min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */unsigned long long int) var_5)) % (10892440768399308024ULL)))))));
                    }
                } 
            } 
        }
        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_26 [i_2] [i_2] [i_2]))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_0 [i_2] [i_2])), (arr_30 [i_2] [i_2] [i_2] [i_2])))) : (((((/* implicit */_Bool) (+(10892440768399308024ULL)))) ? (16945189749310851501ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32753)) / (((/* implicit */int) (short)-32758)))))))));
    }
    for (signed char i_11 = 0; i_11 < 14; i_11 += 4) 
    {
        arr_35 [i_11] = ((/* implicit */int) (unsigned short)978);
        arr_36 [i_11] [i_11] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 1886391364U)) ? (11553316348567237021ULL) : (((/* implicit */unsigned long long int) 4294967295U))))));
        arr_37 [i_11] = min((((/* implicit */unsigned int) (unsigned char)97)), (max((var_3), (((/* implicit */unsigned int) arr_31 [i_11])))));
        /* LoopSeq 2 */
        for (unsigned int i_12 = 0; i_12 < 14; i_12 += 2) 
        {
            var_31 = ((/* implicit */unsigned short) (signed char)10);
            var_32 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((min((((/* implicit */int) var_8)), (arr_7 [i_11]))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_11] [i_11] [i_11] [i_12]))))))))));
            arr_41 [i_12] [i_12] [i_11] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)10910)))))));
            arr_42 [i_11] [i_11] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) min((((/* implicit */short) arr_18 [i_11] [i_12] [i_12] [i_12])), ((short)32765))))) && (((/* implicit */_Bool) (-((+(arr_6 [i_12]))))))));
            var_33 = ((/* implicit */unsigned short) min((max((min((10892440768399308024ULL), (((/* implicit */unsigned long long int) (unsigned char)255)))), (min((13849460777772964239ULL), (((/* implicit */unsigned long long int) -1876256078)))))), (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
        }
        for (unsigned int i_13 = 0; i_13 < 14; i_13 += 1) 
        {
            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((10892440768399308024ULL), (((/* implicit */unsigned long long int) (+(2183866322U))))))) ? (((((/* implicit */int) (_Bool)1)) >> (((2111100974U) - (2111100952U))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (signed char)117)), (-1187083843)))))))));
            /* LoopNest 3 */
            for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 1) 
            {
                for (unsigned int i_15 = 0; i_15 < 14; i_15 += 1) 
                {
                    for (signed char i_16 = 0; i_16 < 14; i_16 += 2) 
                    {
                        {
                            arr_54 [i_13] = ((/* implicit */unsigned long long int) arr_38 [(unsigned short)5] [12] [12]);
                            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_9 [(_Bool)1])), (arr_46 [i_11])))) ? (((/* implicit */int) ((((/* implicit */int) (short)-3771)) != (((/* implicit */int) arr_9 [i_11]))))) : ((+(((/* implicit */int) (_Bool)0))))));
                            var_36 = ((((/* implicit */_Bool) ((arr_26 [i_16] [i_13] [i_13]) | (((/* implicit */unsigned long long int) arr_19 [i_13] [i_13] [i_14] [i_15] [i_14]))))) ? ((+(arr_44 [i_13]))) : (((/* implicit */unsigned long long int) min((min((-3640299850296600289LL), (((/* implicit */long long int) (short)-22262)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_11] [17] [i_14])) ? (((/* implicit */int) arr_34 [i_13])) : (var_13))))))));
                            var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)55)) ? (((/* implicit */int) (unsigned short)12291)) : (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            } 
        }
    }
}
