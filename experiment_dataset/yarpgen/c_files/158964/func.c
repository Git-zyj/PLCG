/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158964
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 4; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 - 1] [i_3]))) | (var_7)))));
                                arr_12 [i_0] [i_3] [i_1] [i_1] [i_0] [i_0 + 2] = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-19987))) + (978395624U))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) var_2)))))));
                            }
                        } 
                    } 
                    arr_13 [i_1] = ((/* implicit */_Bool) (short)19989);
                    var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) ((((-7302848751267375177LL) + (9223372036854775807LL))) << (((((((/* implicit */int) (short)(-32767 - 1))) + (32788))) - (19))))))) | (((/* implicit */int) (((+(((/* implicit */int) var_13)))) != (((/* implicit */int) ((arr_6 [i_2] [2ULL]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19981)))))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) min((var_18), (var_8)));
    /* LoopSeq 2 */
    for (int i_5 = 0; i_5 < 17; i_5 += 2) /* same iter space */
    {
        /* LoopSeq 4 */
        for (short i_6 = 1; i_6 < 16; i_6 += 2) /* same iter space */
        {
            arr_18 [i_5] |= ((/* implicit */long long int) arr_15 [i_5]);
            var_19 *= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((short) var_13))) ? (arr_14 [i_6 - 1] [i_6 - 1]) : (var_9)))));
        }
        for (short i_7 = 1; i_7 < 16; i_7 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_7 + 1] [i_7 - 1]))) & (var_8))) | (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) (short)-19992))) >> ((((+(((/* implicit */int) (short)19996)))) - (19982))))))));
            var_21 |= ((/* implicit */long long int) ((_Bool) (~(((unsigned long long int) 24576U)))));
        }
        for (short i_8 = 1; i_8 < 16; i_8 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 2; i_9 < 15; i_9 += 2) 
            {
                for (long long int i_10 = 0; i_10 < 17; i_10 += 3) 
                {
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) -1330687645407977369LL)) ? (arr_7 [i_9] [i_8] [i_9] [i_8]) : (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_9])) + (((/* implicit */int) var_1)))))))) ? (((((/* implicit */_Bool) arr_11 [i_5] [i_9] [i_9] [i_9 - 1] [(signed char)18])) ? (var_8) : (arr_11 [i_5] [i_8] [i_8] [i_9 - 2] [i_10]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((5860428123851472567ULL) > (var_6)))))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 3) 
                        {
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_5] [i_8 - 1] [i_9 - 2] [i_10] [i_11] [i_9 - 2] [15LL]))) : (var_6)))))));
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) min((((long long int) arr_8 [i_9 + 1] [i_8 - 1])), (((/* implicit */long long int) ((((/* implicit */int) var_11)) > (((/* implicit */int) arr_24 [i_8 - 1] [i_8 + 1]))))))))));
                        }
                        for (unsigned int i_12 = 0; i_12 < 17; i_12 += 1) 
                        {
                            arr_34 [i_5] [i_5] [i_12] [i_8] [i_9] [i_10] [i_12] = ((/* implicit */unsigned short) (short)19994);
                            var_25 ^= ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5]))) / (((long long int) (short)19979)));
                            var_26 = ((/* implicit */long long int) ((signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_8] [i_8]))) > (5860428123851472582ULL))) ? (((/* implicit */int) ((((/* implicit */int) var_13)) != (2147483647)))) : (((/* implicit */int) ((short) arr_29 [i_10]))))));
                        }
                        arr_35 [(unsigned char)3] [i_8] [i_8] [i_8] [i_8 - 1] [i_8] = ((/* implicit */long long int) ((short) ((((5860428123851472567ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19991))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5860428123851472584ULL)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 3) 
            {
                for (signed char i_14 = 0; i_14 < 17; i_14 += 3) 
                {
                    for (short i_15 = 4; i_15 < 13; i_15 += 3) 
                    {
                        {
                            var_27 ^= ((/* implicit */unsigned long long int) ((long long int) ((long long int) (+(2726046641236934860LL)))));
                            var_28 = ((/* implicit */signed char) 2108719372779323843LL);
                            var_29 = ((/* implicit */signed char) ((((long long int) var_0)) > (((long long int) (-(((/* implicit */int) var_2)))))));
                        }
                    } 
                } 
            } 
            var_30 = ((/* implicit */long long int) (short)19995);
        }
        for (short i_16 = 1; i_16 < 16; i_16 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
            {
                for (unsigned long long int i_18 = 0; i_18 < 17; i_18 += 3) 
                {
                    {
                        arr_50 [i_5] [i_5] [9] = ((/* implicit */short) (((-(12586315949858079049ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) == (((((/* implicit */_Bool) (short)-19981)) ? (18446744073709551615ULL) : (12586315949858079033ULL)))))))));
                        var_31 = var_4;
                        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_2 [i_17 - 1] [i_17 - 1])) ? (((/* implicit */int) arr_2 [i_17 - 1] [i_17 - 1])) : (((/* implicit */int) var_11)))) * (((/* implicit */int) ((((/* implicit */int) arr_2 [i_17 - 1] [i_17 - 1])) >= (((/* implicit */int) (short)-19954))))))))));
                        /* LoopSeq 1 */
                        for (int i_19 = 0; i_19 < 17; i_19 += 4) 
                        {
                            var_33 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)19974))) == (((((/* implicit */long long int) ((/* implicit */int) arr_44 [i_5]))) | (-2108719372779323844LL))))))));
                            var_34 = ((/* implicit */short) ((((/* implicit */long long int) (~(((/* implicit */int) arr_43 [i_5] [i_16] [i_17 - 1]))))) * (((long long int) (short)7674))));
                            var_35 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) (short)20011)))));
                            var_36 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((int) arr_1 [i_16] [i_5]))), (((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-81)))))));
                        }
                    }
                } 
            } 
            var_37 ^= ((/* implicit */int) ((((/* implicit */_Bool) min((arr_15 [i_16 - 1]), ((-(((/* implicit */int) arr_3 [i_5] [i_16]))))))) ? (((/* implicit */unsigned long long int) ((int) arr_26 [i_16] [i_16 + 1] [i_16] [i_16 + 1] [i_16 - 1]))) : (((((/* implicit */_Bool) arr_23 [i_16 + 1] [i_16 + 1])) ? (arr_23 [i_16 + 1] [i_16 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)108)))))));
        }
        /* LoopNest 3 */
        for (long long int i_20 = 3; i_20 < 15; i_20 += 1) 
        {
            for (long long int i_21 = 0; i_21 < 17; i_21 += 1) 
            {
                for (long long int i_22 = 0; i_22 < 17; i_22 += 1) 
                {
                    {
                        var_38 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_9 [i_20 - 2]))) ? (((((/* implicit */_Bool) -2108719372779323845LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (arr_9 [i_20 - 1]))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)1)))))));
                        arr_64 [i_22] [i_5] [i_20 + 2] [i_21] [i_22] [i_20 + 2] = ((/* implicit */_Bool) arr_39 [i_20 - 2] [i_21] [i_22]);
                    }
                } 
            } 
        } 
        var_39 = ((/* implicit */int) ((long long int) (unsigned char)48));
        arr_65 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_62 [i_5]) ^ (arr_62 [i_5])))) ? (((((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))) | (min((var_14), (((/* implicit */unsigned int) arr_30 [i_5] [14ULL] [i_5] [4LL] [i_5])))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 5860428123851472586ULL))))));
        var_40 ^= ((/* implicit */unsigned char) (-(((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) << (((/* implicit */int) ((((/* implicit */int) (unsigned char)48)) == (((/* implicit */int) (_Bool)1)))))))));
    }
    for (int i_23 = 0; i_23 < 17; i_23 += 2) /* same iter space */
    {
        var_41 *= ((/* implicit */short) ((((-9223372036854775807LL) + (9223372036854775807LL))) << (((12586315949858079054ULL) - (12586315949858079054ULL)))));
        var_42 = ((/* implicit */long long int) max((var_42), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-19983))) / (arr_45 [i_23] [i_23])))) ? (min(((-(65535LL))), (max((var_4), (var_12))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)56)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_24 = 0; i_24 < 17; i_24 += 1) 
        {
            for (unsigned int i_25 = 0; i_25 < 17; i_25 += 3) 
            {
                for (unsigned short i_26 = 0; i_26 < 17; i_26 += 2) 
                {
                    {
                        arr_77 [i_25] [i_24] = ((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-19979))))))));
                        var_43 *= ((/* implicit */short) (-(136902082560LL)));
                        /* LoopSeq 1 */
                        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                        {
                            var_44 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 12586315949858079068ULL)) ? (((/* implicit */int) (signed char)-89)) : (((/* implicit */int) (short)-19990))));
                            var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */int) (short)20018)) : (((/* implicit */int) (short)32256))));
                        }
                        var_46 = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)1)) << (((1546552956) - (1546552948))))) / ((~((~(((/* implicit */int) (short)19980))))))));
                    }
                } 
            } 
        } 
    }
}
