/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116911
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
    var_14 = ((/* implicit */short) var_8);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1998137565)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)8446)))))) ? (((((/* implicit */_Bool) 4345808273577828177LL)) ? (12U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24238))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 3) 
                {
                    for (int i_3 = 3; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) 4345808273577828178LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (3980810744852020217LL))))));
                            var_16 = ((/* implicit */short) (((((-(((/* implicit */int) (short)0)))) >> (((arr_0 [i_0 - 1]) - (1310954365426060294ULL))))) == ((+(((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_0 - 2] [i_0 + 2])))))))));
                            arr_11 [i_1] [i_1] [i_2] [i_3 - 2] [i_3] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (short)13197))) && (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))) | (4136663693U)))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_2] [i_3])) - (((/* implicit */int) (short)-13197)))))))));
                            arr_12 [i_1] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_2] [i_1 + 1])) && (((/* implicit */_Bool) (short)-13197)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)28195)), (arr_9 [i_1 - 1])))))))) > (((arr_0 [i_0]) % (((/* implicit */unsigned long long int) min((-1982692416), (((/* implicit */int) (unsigned char)13)))))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */_Bool) (+(11683530991721380331ULL)));
                var_18 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_5 [i_1] [i_1] [i_1 - 3])) | (((/* implicit */int) (unsigned char)232))))));
            }
        } 
    } 
    var_19 = ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-14150)) : (((/* implicit */int) var_7)))))) ? (min((var_12), (((/* implicit */unsigned int) var_7)))) : (((/* implicit */unsigned int) ((int) max((1936883591), (((/* implicit */int) (signed char)-72)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_4 = 3; i_4 < 15; i_4 += 2) /* same iter space */
    {
        arr_17 [i_4] = ((/* implicit */unsigned short) (((+(((/* implicit */int) var_1)))) % (((/* implicit */int) (unsigned char)218))));
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) -4345808273577828177LL))));
    }
    for (unsigned long long int i_5 = 3; i_5 < 15; i_5 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) arr_7 [(short)14]);
        /* LoopNest 2 */
        for (unsigned int i_6 = 3; i_6 < 15; i_6 += 1) 
        {
            for (long long int i_7 = 3; i_7 < 16; i_7 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_8 = 2; i_8 < 15; i_8 += 4) 
                    {
                        for (unsigned int i_9 = 1; i_9 < 14; i_9 += 1) 
                        {
                            {
                                var_22 = arr_3 [i_8] [i_8];
                                arr_34 [i_9] [i_6] [i_7] [i_8 + 1] [i_9] = ((/* implicit */_Bool) (-(1982692415)));
                            }
                        } 
                    } 
                    arr_35 [i_5 - 1] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_26 [i_7 - 3] [i_6 - 2] [i_5] [i_5 - 1])) ? (arr_26 [i_7 - 1] [i_6 - 2] [i_6 + 2] [i_5 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)13197))))) / (((((/* implicit */_Bool) 2600193394349094125ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)511))) : (arr_26 [i_7 + 1] [i_6 + 2] [i_6] [i_5 + 1])))));
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 2; i_10 < 16; i_10 += 3) 
                    {
                        for (short i_11 = 3; i_11 < 14; i_11 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((((/* implicit */_Bool) arr_19 [i_10 - 2] [i_5 + 1])) ? (arr_19 [i_10 - 1] [i_5 - 3]) : (arr_19 [i_10 - 1] [i_5 - 3]))) % (max((arr_19 [i_10 - 1] [i_5 + 1]), (arr_19 [i_10 - 2] [i_5 + 2]))))))));
                                arr_42 [i_10] [i_6 + 2] [i_7] [i_10] [i_10] [i_11] [i_10] = ((/* implicit */long long int) ((int) (-(((/* implicit */int) (_Bool)1)))));
                                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_13 [i_10] [i_11])) : (-1936883566)))) ? ((+(((/* implicit */int) arr_39 [(signed char)9] [i_6] [i_7] [(signed char)14] [i_11])))) : (((/* implicit */int) var_7))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopSeq 4 */
    for (unsigned short i_12 = 3; i_12 < 16; i_12 += 3) 
    {
        var_25 = ((/* implicit */unsigned int) (((+(((/* implicit */int) (unsigned short)0)))) << (((((((/* implicit */unsigned long long int) -1936883592)) % (14616874319358243238ULL))) - (3829869752414424762ULL)))));
        var_26 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_12 + 1]))) ? (((343917864) / (((/* implicit */int) (signed char)22)))) : ((-(((/* implicit */int) (short)-8446))))));
        /* LoopNest 2 */
        for (unsigned short i_13 = 3; i_13 < 15; i_13 += 2) 
        {
            for (long long int i_14 = 3; i_14 < 15; i_14 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_15 = 3; i_15 < 14; i_15 += 3) 
                    {
                        for (int i_16 = 3; i_16 < 16; i_16 += 2) 
                        {
                            {
                                var_27 = max((((/* implicit */unsigned long long int) arr_6 [i_12] [i_14] [i_14])), (((unsigned long long int) arr_52 [i_12] [i_12] [i_13 - 2] [i_12] [i_12])));
                                var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_26 [i_15] [i_15 + 2] [i_15] [i_15 - 2]) % (arr_26 [13ULL] [i_15 + 3] [i_15] [i_15])))) ? (0LL) : (((((/* implicit */long long int) ((var_12) - (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) / (max((var_6), (((/* implicit */long long int) (short)-30038)))))))))));
                                var_29 = ((/* implicit */short) 1133091770U);
                                arr_53 [i_16] [i_15] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 268435456)) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)251)) || (((/* implicit */_Bool) (signed char)80))))), ((short)-17839))))));
                            }
                        } 
                    } 
                    arr_54 [i_12] [i_13] [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 504638281320570979ULL)) ? (143994060761379029ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_13])))))) ? (((((/* implicit */int) var_1)) - (268435456))) : (((/* implicit */int) (unsigned short)2))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_12] [i_12] [i_13] [i_13]))) : (((max((((/* implicit */long long int) var_0)), (var_11))) - (((/* implicit */long long int) (+(-1936883566))))))));
                    arr_55 [(unsigned char)7] [i_13 - 2] [i_13 + 1] [i_12] = ((/* implicit */long long int) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (1936883566) : (((/* implicit */int) var_5)))) <= (((/* implicit */int) ((arr_48 [i_12] [i_13]) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-13)))))))))));
                    var_30 = (i_12 % 2 == zero) ? (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_10)) & (((/* implicit */int) arr_27 [i_14] [i_13] [i_12] [i_12])))) << (((arr_6 [i_12] [i_13] [i_12]) + (5637646073415814689LL)))))), ((-(143994060761379029ULL)))))) : (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_10)) & (((/* implicit */int) arr_27 [i_14] [i_13] [i_12] [i_12])))) << (((((arr_6 [i_12] [i_13] [i_12]) + (5637646073415814689LL))) - (5300178811252887765LL)))))), ((-(143994060761379029ULL))))));
                }
            } 
        } 
    }
    for (int i_17 = 1; i_17 < 7; i_17 += 4) 
    {
        var_31 = ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1982692437)) ? (((/* implicit */int) (short)4842)) : (((/* implicit */int) (short)20957))))), ((~(18302750012948172587ULL)))))));
        var_32 &= ((/* implicit */short) (+(((/* implicit */int) ((short) (unsigned char)241)))));
        var_33 = ((/* implicit */long long int) var_1);
    }
    for (unsigned int i_18 = 3; i_18 < 12; i_18 += 1) 
    {
        arr_60 [i_18] = ((/* implicit */long long int) ((((((/* implicit */int) var_5)) + (2147483647))) << (((((arr_30 [i_18 - 3] [i_18 + 1] [i_18] [i_18] [i_18] [i_18 - 3]) + (555366550))) - (20)))));
        /* LoopSeq 1 */
        for (unsigned char i_19 = 1; i_19 < 11; i_19 += 4) 
        {
            arr_64 [i_18] [i_19] [(short)7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (signed char)108)))) | (max((((/* implicit */long long int) arr_40 [15] [15] [i_18] [i_18 - 3] [i_18] [i_19] [10U])), (919453824652011351LL)))))) ? (((/* implicit */long long int) var_12)) : ((-(((((/* implicit */long long int) ((/* implicit */int) var_3))) - (5186213484048698464LL)))))));
            var_34 = ((/* implicit */unsigned long long int) var_6);
            var_35 *= ((/* implicit */signed char) 9ULL);
            var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1936883564)) && (((/* implicit */_Bool) 1599719769))));
        }
        var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_2)) : (7240114882563893504ULL))))) | (((((/* implicit */_Bool) arr_13 [0LL] [i_18 + 1])) ? (((/* implicit */int) (short)8446)) : (((/* implicit */int) (short)(-32767 - 1))))))))));
    }
    for (unsigned long long int i_20 = 1; i_20 < 10; i_20 += 3) 
    {
        arr_68 [i_20] = ((/* implicit */unsigned char) max((max((var_3), (((/* implicit */unsigned short) arr_39 [i_20 - 1] [i_20 - 1] [i_20] [i_20] [i_20])))), (arr_9 [i_20 - 1])));
        /* LoopNest 2 */
        for (unsigned long long int i_21 = 1; i_21 < 12; i_21 += 1) 
        {
            for (unsigned int i_22 = 2; i_22 < 10; i_22 += 2) 
            {
                {
                    var_38 ^= ((/* implicit */int) arr_10 [i_22] [i_22]);
                    arr_75 [i_20] [i_21 + 1] [i_20] = ((/* implicit */unsigned short) arr_58 [i_20]);
                }
            } 
        } 
        var_39 ^= ((/* implicit */unsigned long long int) (+((-(-3980810744852020217LL)))));
        arr_76 [i_20] |= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_3 [i_20 + 2] [i_20 - 1]), (3659141323890784705ULL)))) || (((/* implicit */_Bool) ((short) arr_58 [i_20 + 3])))));
    }
}
