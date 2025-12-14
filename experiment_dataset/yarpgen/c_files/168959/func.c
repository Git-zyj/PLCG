/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168959
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_8 [(signed char)6] [i_0] [(signed char)6] [i_1] = ((/* implicit */int) (signed char)-1);
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_4 [i_0] [(unsigned char)6] [8LL])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)32758)) : (((/* implicit */int) arr_11 [i_2])))) : (((/* implicit */int) min((var_5), (arr_1 [i_0] [i_1])))))), (((/* implicit */int) var_6)))))));
                                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)20)) ? (((((/* implicit */_Bool) 7541657435361285707ULL)) ? (((/* implicit */long long int) -1)) : (((((/* implicit */_Bool) (unsigned char)183)) ? (4388866960543481570LL) : (((/* implicit */long long int) 4293918720U)))))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((((((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_4])) == (((/* implicit */int) arr_14 [i_4 - 1] [i_0] [i_0] [(signed char)0])))) ? (876617104640877714ULL) : (arr_10 [i_1] [i_3 + 2] [i_2] [i_4 - 1]))) >= (((((/* implicit */_Bool) min((arr_5 [i_0] [i_0]), (arr_12 [i_2] [i_0] [i_0] [i_3 + 1] [(unsigned char)14])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_14 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) arr_2 [i_0])))))) : (((((/* implicit */_Bool) 10905086638348265908ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_1))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_5 = 4; i_5 < 20; i_5 += 4) 
    {
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_5 - 2])) ? (arr_9 [i_5 - 2]) : (arr_9 [i_5 - 2]))))));
        var_15 = ((/* implicit */signed char) arr_3 [i_5]);
    }
    for (unsigned long long int i_6 = 1; i_6 < 17; i_6 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 19; i_7 += 4) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 19; i_9 += 3) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_20 [i_6 + 1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32758)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)13))) : (var_1))))));
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)-14)))) ? (((((/* implicit */_Bool) 208904128)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) 6234807651605585718ULL)) ? (7541657435361285686ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22169))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 16001375134517275076ULL)))))))))));
                                arr_31 [i_6] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) 10905086638348265911ULL))) || (((/* implicit */_Bool) ((unsigned int) arr_23 [i_7] [i_8])))));
                            }
                        } 
                    } 
                    var_18 *= ((/* implicit */short) ((arr_0 [i_6]) * (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (arr_24 [i_8] [(short)12] [i_8] [i_8])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)37)) || (((/* implicit */_Bool) 10905086638348265907ULL))))) : (-212640832))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 19; i_11 += 4) 
        {
            for (short i_12 = 0; i_12 < 19; i_12 += 3) 
            {
                {
                    var_20 -= ((/* implicit */unsigned short) arr_19 [i_11]);
                    arr_36 [i_11] [i_11] &= ((/* implicit */short) arr_30 [i_6 - 1] [i_6 - 1]);
                    var_21 -= ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (-1394119375) : (-208904138))));
                }
            } 
        } 
        var_22 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_1)));
        /* LoopNest 3 */
        for (unsigned char i_13 = 2; i_13 < 18; i_13 += 1) 
        {
            for (long long int i_14 = 0; i_14 < 19; i_14 += 4) 
            {
                for (unsigned char i_15 = 0; i_15 < 19; i_15 += 3) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 208904135)) ? (((/* implicit */int) arr_28 [i_15] [i_15] [i_15] [i_15] [i_15] [i_6 - 1] [i_14])) : (((/* implicit */int) arr_28 [i_6] [i_15] [i_14] [i_15] [i_14] [i_6 + 1] [i_14])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [(signed char)6] [i_15] [i_15] [i_15] [i_15] [i_6 + 2] [i_15])))))));
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) max(((unsigned char)202), (arr_30 [i_6 - 1] [11LL]))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_16 = 1; i_16 < 9; i_16 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_17 = 0; i_17 < 11; i_17 += 3) 
        {
            for (int i_18 = 0; i_18 < 11; i_18 += 3) 
            {
                {
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)191)) ? (((/* implicit */int) arr_30 [i_16 + 1] [i_18])) : (((/* implicit */int) (unsigned char)54))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_16]))) : (2040499179673592869ULL)))) ? (((/* implicit */int) (unsigned char)229)) : (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_5 [i_17] [i_16])) : (((/* implicit */int) var_10)))))) : (((/* implicit */int) (unsigned short)35999))));
                    var_26 = ((/* implicit */long long int) ((int) max((5755838664917833681ULL), (((/* implicit */unsigned long long int) min((2147483647), (((/* implicit */int) (unsigned char)113))))))));
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29521)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)29538))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35997))) : (((arr_17 [i_16 - 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [(short)11] [i_16 - 1])))))))) && (((/* implicit */_Bool) arr_51 [8ULL] [8ULL])))))));
        arr_54 [(signed char)4] [(signed char)4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_32 [i_16 + 2] [i_16 + 2]))) ? (((/* implicit */int) arr_22 [i_16] [6LL] [i_16 + 1])) : (((((/* implicit */_Bool) (short)10409)) ? (((/* implicit */int) arr_22 [i_16 + 2] [i_16 + 1] [i_16 + 1])) : (((/* implicit */int) arr_32 [i_16 + 2] [i_16 + 2]))))));
    }
}
